#include <iostream>
#include <stack>
#include <deque>
#include <list>
#include <vector>
#include <string>

using namespace std;

void PrintStack(stack<int, vector<int>> obj) {
	while (!obj.empty()) {
		cout << obj.top() << '\t';
		obj.pop();
	}
}

void PrintStack(stack<string, list<string>> obj) {
	while (!obj.empty()) {
		cout << obj.top() << '\t';
		obj.pop();
	}

}

template<class T, class Container>
void PrintStack(stack<T, Container> obj) {
	while (!obj.empty()) {
		cout << obj.top() << '\t';
		obj.pop();
	}
}


int main() {
	stack<int, vector<int>> s;
	for (int i = 0; i < 4; i++) {
		s.push(i);
	}
	PrintStack(s);
	cout << endl;

	string str = "a";
	stack<string, list<string>> t;
	for (int i = 0; i < 4; i++) {
		t.push(str);
		str += "a";
	}
	PrintStack(t);
	cout << endl;


	stack<float, deque<float>> u;
	for (int i = 0; i < 4; i++) {
		u.push(i + 1);
	}
	PrintStack(u);

	return 0;
}
