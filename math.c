#include <stdio.h>
#include "math.h"

//Part of your documentation should be listing the valid inputs and outputs for the functions you create.
int math(int num1, int num2, char Operator);
{
switch(operator)
{
    case '*':
    return num1 * num2;

    case '/':
    return num1 / num2;

    case '%':
    return num1 % num2;

    case '<<':
    return num1 << num2;

    case '>>':
    return num1 >> num2;

    case '&':
    return num1 & num2;

    case '|':
    return num1 | num2;

    case '^':
    return num1 ^ num2;

    case '~':
    return ~num1;
}
}
