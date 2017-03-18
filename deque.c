#include <iostream>
#include <deque>
using namespace std;

template <class T>
class MyQue {
    deque<T> d;
public:
    void Push(const T& t) {
        d.push_back(t);
    }

    void Pop() {
        d.pop_front();
    }
    int Size() {
        return d.size();
    }

    bool Empty() {
        return d.empty();
    }

    T& front() {
        return* d.begin();
    }

    T& back() {
        return* (--d.end());
    }

    void display() {
        for (int i = 0; i < d.size(); i++) {
            cout << d[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MyQue<int> myqueue;
    for (int i = 1; i <= 5; i++) {
        myqueue.Push(i);
    }
    myqueue.display();
    myqueue.Pop();
    myqueue.display();
    myqueue.Push(6);
    myqueue.display();
    cout << myqueue.front() << endl;
    cout << myqueue.back() << endl;
    cout << myqueue.Size() << endl;
    cout << myqueue.Empty() << endl;
    cout << endl;

    deque<int> d{100, 2, 5, 3};
    cout << endl << endl << d.front() << endl;
    cout << *d.begin();
    return 0;
}
