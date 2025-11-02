#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

// Базовий клас
class Figura {
protected:
    double x, y; // координати вершини
public:
    Figura(double x1 = 0, double y1 = 0) {
        x = x1;
        y = y1;
    }

    virtual void ShowInfo() {
        cout << "Фігура з координатами вершини (" << x << ", " << y << ")" << endl;
    }
};

// Похідний клас: Прямокутник
class Pryamokutnyk : public Figura {
protected:
    double a, b; // сторони
public:
    Pryamokutnyk(double x1, double y1, double a1, double b1)
        : Figura(x1, y1), a(a1), b(b1) {
    }

    void ShowInfo() override {
        cout << "Прямокутник з вершини (" << x << ", " << y << "), сторони: " << a << " і " << b << endl;
        cout << "Площа = " << a * b << endl;
    }
};

// Похідний клас: Коло
class Kolo : public Figura {
protected:
    double r; // радіус
public:
    Kolo(double x1, double y1, double r1) : Figura(x1, y1), r(r1) {}

    void ShowInfo() override {
        cout << "Коло з центром (" << x << ", " << y << "), радіус = " << r << endl;
        cout << "Площа = " << 3.14159 * r * r << endl;
    }
};

// Похідний клас: Прямокутний трикутник
class PryamTrikutnyk : public Figura {
protected:
    double a, b; // катети
public:
    PryamTrikutnyk(double x1, double y1, double a1, double b1)
        : Figura(x1, y1), a(a1), b(b1) {
    }

    void ShowInfo() override {
        cout << "Прямокутний трикутник з вершини (" << x << ", " << y << "), катети: " << a << " і " << b << endl;
        cout << "Площа = " << (a * b) / 2 << endl;
    }
};

// --- Головна функція ---
int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    cout << "=== Демонстрація успадкування класів ===\n" << endl;

    Pryamokutnyk pr(0, 0, 5, 3);
    Kolo k(2, 2, 4);
    PryamTrikutnyk t(1, 1, 3, 4);

    pr.ShowInfo();
    cout << endl;

    k.ShowInfo();
    cout << endl;

    t.ShowInfo();

    return 0;
}