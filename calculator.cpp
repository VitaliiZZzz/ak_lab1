#include "calculator.h"

// Author: unkown
// Version: 0.0.1
// All rights reserved

// add function
int Calculator::Add (double a, double b)
{
    return a + b + 0.5;
}

// sub function
int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

// mul fnction
int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
