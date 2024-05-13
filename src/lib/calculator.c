#include "./../../include/calculator.h"

int addition(int a, int b) {
    return a + b;
}

int soustraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        return 0; // Gérer la division par zéro
    }
}

int carre(int a) {
    return a * a; // Implémentation de la fonction au carré
}
