#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main() {
    bitset<5> s1;
    cout << s1.to_string() << endl;
    cout << s1.size() << '\t' << s1.count() << endl;
    cout << endl;
    s1.set(2, true);
    cout << s1.to_string() << endl;

    cout << endl;

    s1[3] = 1;
    cout << s1.to_string() << endl;
    s1[0] = 1;
    cout << s1.to_string() << endl;
    cout << endl;

    s1.set();
    cout << s1.to_string() << endl;

    cout << endl << endl;

    bitset<16> s2(65535);
    cout << s2.to_string() << endl;

    cout << endl << endl;
    bitset<5> s3(string("1111101"), 2, 5);
    cout << s3.to_string() << endl;
    return 0;
}
