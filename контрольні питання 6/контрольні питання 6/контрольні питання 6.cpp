#include <iostream>
#include <windows.h>
using namespace std;

// Базовий клас
class Base {
public:
    Base() {
        cout << "Викликано конструктор Base (Базовий клас)" << endl;
    }

    ~Base() {
        cout << "Викликано деструктор Base (Базовий клас)" << endl;
    }
};

// Похідний клас
class Derived : public Base {
public:
    Derived() {
        cout << "Викликано конструктор Derived (Похідний клас)" << endl;
    }

    ~Derived() {
        cout << "Викликано деструктор Derived (Похідний клас)" << endl;
    }
};

int main() {
    // 🔧 Установка української мови в консолі
    SetConsoleOutputCP(65001); // UTF-8
    SetConsoleCP(65001);

    cout << "Створення об’єкта Derived..." << endl;
    Derived obj;
    cout << "Завершення програми..." << endl;

    return 0;
}