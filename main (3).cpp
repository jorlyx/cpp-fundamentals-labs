#include <iostream>
using namespace std;

void byValue(int x);
void byReference(int &x);
void byPointer(int *x);

int main() {
    int a = 10, b = 10, c = 10;

    cout << "INitial values: " << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    byValue(a);
    byReference(b);
    byPointer(&c);

    cout << "After function calls" << endl;
    cout << "a (by value) = ;" << a << endl;
    cout << "b (by reference) = " << b << endl;
    cout << "c (by pointer) = ; " << c << endl;

    return 0;
}
void byValue(int x) {
    x += 5;
    cout << "Inside byValue, x = " << x << endl;
}
void byReference(int &x) {
    x += 5;
    cout << "Inside byReference, x = " << x << endl;
}
void byPointer(int *x) {
    *x += 5;
    cout << "Inside byPointer, *x = " << *x << endl;
}