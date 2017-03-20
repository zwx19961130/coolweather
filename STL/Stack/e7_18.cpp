#include <iostream>
#include <stack>

using namespace std;

template<class T, class Container=deque<T>>

class mystack : public stack<T, Container> {

public:

	mystack(int MaxSize) {
		this->m_MaxSize = MaxSize;
	}

	void Push(const T& t) {
		if (stack<T, Container>::size() < this->m_MaxSize) {
			cout << stack<T, Container>::size();
			
			stack<T, Container>::push(t);
			cout << "OK!\n";
			cout << stack<T, Container>::size() << endl;
		}
		else {
			cout << "Stack Overflow!\n";
		}
	}


private:

	int m_MaxSize;
};


int main() {

	mystack<int, deque<int>> obj(2);
	obj.Push(1);
	obj.Push(2);
	obj.Push(3);
	return 0;
}
