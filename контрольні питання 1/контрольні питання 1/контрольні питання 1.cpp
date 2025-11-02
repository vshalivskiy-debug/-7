#include <iostream>
#include <windows.h>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Тварина їсть" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Собака гавкає" << endl;
    }
};

int main() {
    SetConsoleOutputCP(65001); // Включаємо українське кодування

    Dog dog;
    dog.eat();
    dog.bark();

    system("pause");
    return 0;
}