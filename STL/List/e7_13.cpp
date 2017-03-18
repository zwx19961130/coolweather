#include <iostream>
#include <string>
#include <list>
using namespace std;



int main() {
    list<int> t1;
    t1.push_back(1);
    t1.push_back(5);
    t1.push_back(3);
    t1.push_back(10);

    list<int> t2;
    t2.push_back(2);
    t2.push_back(8);
    t2.push_back(6);
    t2.push_back(9);

    t1.sort();
    t2.sort();

    // t1.splice(t1.begin(), t2);
    t1.merge(t2);

    for (list<int>::iterator iter = t1.begin(); iter != t1.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    cout << t1.size() << '\t' << t2.size();
    return 0;
}

