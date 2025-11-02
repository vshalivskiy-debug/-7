#include <iostream>
#include <windows.h>
using namespace std;

// Перший базовий клас
class A {
public:
    void showA() {
        cout << "Це клас A" << endl;
    }
};

// Другий базовий клас
class B {
public:
    void showB() {
        cout << "Це клас B" << endl;
    }
};

// Похідний клас, який успадковує від A і B
class C : public A, public B {
public:
    void showC() {
        cout << "Це клас C (успадковує від A і B)" << endl;
    }
};

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    C obj;
    obj.showA(); // метод із класу A
    obj.showB(); // метод із класу B
    obj.showC(); // власний метод класу C

    return 0;
}