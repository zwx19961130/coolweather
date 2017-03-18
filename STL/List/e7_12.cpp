#include <iostream>
#include <string>
#include <list>
using namespace std;



int main() {
    list<int> test;
    for (int i = 0; i < 5; i++) {
        test.push_back(i + 1);
    }
    list<int>::iterator iter = test.begin();

    for (; iter != test.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    list<int>::reverse_iterator r_iter = test.rbegin();
    for (; r_iter != test.rend(); r_iter++) {
        cout << *r_iter << " ";
    }
    cout << endl;
    return 0;
}
