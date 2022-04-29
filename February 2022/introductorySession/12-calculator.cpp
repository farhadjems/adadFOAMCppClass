#include "12-calculator.h"

double addition(double a, double b)
{
    return (a+b);
}

double subtraction(double a, double b)
{
    return (a-b);
}

double multiplication(double a, double b)
{
    return (a*b);
}

double division(double a, double b)
{
    double c = 0;
    (b != 0) ?  c = a/b : c = 0;
    return c;
}