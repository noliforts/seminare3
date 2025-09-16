#include "fraction.h"
#include <iostream>

// Функция сложения дробей
Fraction add(Fraction a, Fraction b) {
    Fraction result;
    result.num = a.num * b.den + b.num * a.den;
    result.den = a.den * b.den;
    simplify(result);
    return result;
}

// Функция умножения дробей
Fraction multiply(Fraction a, Fraction b) {
    Fraction result;
    result.num = a.num * b.num;
    result.den = a.den * b.den;
    simplify(result);
    return result;
}

// Функция упрощения дроби
void simplify(Fraction &f) {
    int gcd = 1;
    int smaller = (f.num < f.den) ? f.num : f.den;
    
    for (int i = 2; i <= smaller; i++) {
        if (f.num % i == 0 && f.den % i == 0) {
            gcd = i;
        }
    }
    
    f.num /= gcd;
    f.den /= gcd;
}