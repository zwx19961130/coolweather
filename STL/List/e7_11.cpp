#include <iostream>
#include <string>
#include <list>
using namespace std;



int main() {
    list<string> test;
    test.push_back("back");
    test.push_back("middle");
    test.push_back("front");

    cout << test.front() << endl;
    cout << *test.begin() << endl;

    cout << test.back() << endl;
    cout << *test.rbegin() << endl;

    test.pop_front();
    test.pop_back();

    cout << test.front();
    return 0;
}
