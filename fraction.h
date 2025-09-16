// Объявления функций
/**

 * @brief Складывает две дроби

 * @param a Первая дробь для сложения

 * @param b Вторая дробь для сложения

 * @return Новая дробь, являющаяся результатом сложения

 */
struct Fraction {
    int num; // числитель
    int den; // знаменатель
};
#ifndef FRACTION_H
#define FRACTION_H




Fraction add(Fraction a, Fraction b);
Fraction multiply(Fraction a, Fraction b);
void simplify(Fraction &f);

#endif