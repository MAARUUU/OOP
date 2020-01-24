#ifndef CALCULATOR_H
#define CALCULATOR_H

#define M_PI 3.14159265358979323846264338327950288

#include <math.h>

// Класс Калькулятор

class calculator
{
    double value;

public:

    enum ERRORS {
     div_Zero,Wrong_data
    };

    calculator();
    calculator(double value1);
    void set_value(double value1); // задать значение
    double get_value() const; // получить значение
    void operator +=(double value1); // +
    void operator -=(double value1); // -
    void operator *=(double value1); // *
    void operator /=(double value1); // /
    double expr_value(); // exp
    double sqrt_value(); // sqrt
    double ln_value(); // ln
    double sin_value(); // sin
    double cos_value(); // cos
    double tg_value(); // tg
    double pow_value(double power); // возведение в степень
    double sqr_value(); // возведение в квадрат
};

#endif // CALCULATOR_H
