#include "calculator.h"

calculator::calculator()
{
    value = 0;
}

calculator::calculator(double value1) {
    value = value1;
}

void calculator::set_value(double value1) {
    value = value1;
}

double calculator::get_value() const {
    return value;
}

void calculator::operator +=(double value1) {
    set_value(value + value1);
}

void calculator::operator -=(double value1) {
    set_value(value - value1);
}

void calculator::operator *=(double value1) {
    set_value(value * value1);
}

void calculator::operator /=(double value1) {
    if (value1 == 0.0) throw div_Zero;
    set_value(value / value1);
}

double calculator::expr_value() {
    return exp(value);
}

double calculator::sqrt_value() {
    if (value < 0) throw Wrong_data;
    return sqrt(value);
}

double calculator::ln_value() {
    if (value <= 0) throw Wrong_data;
    return log(value);
}

double calculator::sin_value() {
    return sin(value * M_PI/180);
}

double calculator::cos_value() {
    value = value * M_PI/180;
    return cos(value);
}

double calculator::tg_value() {
    return tan(value * M_PI/180);
}

double calculator::pow_value(double power) {
    return pow(value, power);
}

double calculator::sqr_value() {
    return value *= value;
}
