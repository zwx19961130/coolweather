#include <list>
#include <iostream>
#include <string>

using namespace std;



class Term {

public:
	Term(int coef, int exp) : coef(coef), exp(exp) {

	}

	int getExp() {
		return this->exp;
	}

	int getCoef() {
		return this->coef;
	}

	bool operator < (Term& t) {
		return exp < t.getExp();
	}

private:
	int coef;
	int exp;
};


ostream& operator << (ostream& os, Term& t) {
	os << t.getCoef() << " x^" << t.getExp();
	return os;
}

class Polynomial {
public:
	
	bool addTerm(const Term& t) {
		this->m_l.push_back(t);
		return true;
	}

	Polynomial addPolynomial(Polynomial& obj) {
		Polynomial result;

		this->m_l.sort();
		obj.m_l.sort();

		auto src = this->m_l.begin();
		auto des = obj.m_l.begin();

		int coef = 0;
		int exp = 0;

		while ((src != this->m_l.end()) && (des != obj.m_l.end())) {
			int nCurExp1 = (*src).getExp();
			int nCurExp2 = (*des).getExp();

			if (nCurExp1 == nCurExp2) {
				coef = (*src).getCoef() + (*des).getCoef();
				exp = (*src).getExp();
				src++;
				des++;
			}

			if (nCurExp1 < nCurExp2) {
				coef = (*src).getCoef();
				exp = (*src).getExp();

				src++;
			}

			if (nCurExp1 > nCurExp2) {
				coef = (*des).getCoef();
				exp = (*des).getExp();

				des++;
			}

			if (coef != 0) {
				Term t(coef, exp);
				result.addTerm(t);
			}
		} 


		if (src != this->m_l.end()) {
			list<Term> temp(src, this->m_l.end());
			result.m_l.splice(result.m_l.end(), temp);
		}

		if (des != obj.m_l.end()) {
			list<Term> temp(des, obj.m_l.end());

			result.m_l.splice(result.m_l.end(), temp);
		}

		return result;
	}

	void Show() {
		auto iter = this->m_l.begin();

		while (iter != this->m_l.end()) {
			cout << *iter << " +";
			iter++;
		}
		cout << endl;
	}

private:
	list<Term> m_l;
};

int main() {
	Polynomial p1;
	Polynomial p2;

	Term t1(2, 6);
	Term t2(3, 4);
	Term t3(5, 2);
	Term t4(6, 0);

	p1.addTerm(t1);
	p1.addTerm(t2);
	p1.addTerm(t3);
	p1.addTerm(t4);

	Term t5(2, 5);
	Term t6(-3, 4);
	Term t7(5, 2);
	Term t8(8, 0);

	p2.addTerm(t5);
	p2.addTerm(t6);
	p2.addTerm(t7);
	p2.addTerm(t8);

	Polynomial p3 = p1.addPolynomial(p2);
	p3.Show();
	

	return 0;
}
