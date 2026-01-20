#include <iostream>
using namespace std;

#define MAX 5
int stack[MAX];
int top = -1;

void push(int x) {
    if(top == MAX - 1) {
        cout << "Stack Overflow\n";
        return;
    }
    stack[++top] = x;
    cout << x << " pushed into stack\n";
}

void pop() {
    if(top == -1) {
        cout << "Stack Underflow\n";
        return;
    }
    cout << stack[top--] << " popped from stack\n";
}

int main() {
    push(10);
    push(20);
    push(30);

    pop();
    pop();

    return 0;
}
