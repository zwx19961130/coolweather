#include <iostream>
#include <deque>
#include <list>
#include <vector>
#include <queue>
#include <string>

using namespace std;

template<class T, class Container>
void PrintQueue(queue<T, Container> obj) {
	while (!obj.empty()) {
		cout << obj.front() << '\t';
		obj.pop();
	}
}

int main() {
	string str = "a";
	queue<string, deque<string>> t;

	for (int i = 0; i < 4; i++) {
		t.push(str);
		str += "a";
	}
	PrintQueue(t);
	cout << endl;

	queue<float, deque<float>> u;
	for (float i = 1.0f; i < 4.0f; i++) {
		u.push(i + 1.0f);
	}
	PrintQueue(u);
	cout << endl;
	return 0;
}
