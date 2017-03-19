#include <stdio.h>

class Stack {
    int top;

public:
    int a[1000];
    Stack() {
        top = -1;
    };
    bool Push(int x);
    int Pop();
    bool isEmpty();
};

bool Stack::Push(int x) {
    if (top >= 1000) {
        printf("Stack Overflow!\n");
        return false;
    } else {
        a[++top] = x;
        return true;
    }
}

int Stack::Pop() {
    if (this->top < 0) {
        printf("Stack Underflow!\n");
        return 0;
    } else {
        int x = a[top--];
        return x;
    }
}

bool Stack::isEmpty() {
    return this->top < 0;
}


// Driver Program
int main() {

    Stack s;
    s.Push(10);
    s.Push(20);
    s.Push(30);

    printf("%d\n", s.Pop());

    return 0;
}
