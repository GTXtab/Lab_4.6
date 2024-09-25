// Lab_04_6.cpp
// Малаховський Назар
// Лабораторна робота № 4.6
// Вкладені цикли
// Варіант 20

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P, S;
    int k, i;

    S = 0;
    i = 5;

    // 1. While вкладання
    while (i <= 25) {
        P = 1;
        k = 1;
        while (k <= i) {
            P *= k;
            k++;
        }
        S += sqrt(i * i + P) / i;
        i++;
    }
    cout << S << endl;

    // 2. Do-While вкладання
    i = 5;
    S = 0;

    do {
        P = 1;
        k = 1;

        do {
            P *= k;
            k++;
        } while (k <= i);
        S += sqrt(i * i + P) / i;
        i++;
    } while (i <= 25);
    cout << S << endl;

    // 3. For збільшення
    i = 5;
    S = 0;

    for (int i = 5; i <= 25; i++) {
        P = 1;
        for (int k = 1; k <= i; k++) {
            P *= k;
        }
        S += sqrt(i * i + P) / i;
    }
    cout << S << endl;

    // 4. For зменшення
    i = 5;
    S = 0;

    for (int i = 25; i >= 5; i--) {
        P = 1;
        for (int k = 1; k <= i; k++) {
            P *= k;
        }
        S += sqrt(i * i + P) / i;
    }
    cout << S << endl;

    return 0;
}
