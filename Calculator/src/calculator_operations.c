
#include <calculator_operations.h>
#include <math.h>
int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

int power(int operand1, int operand2)
{
    if(0 == operand2)
        return 1;
    if(1 == operand2)
        return operand1;
    else
        return pow(operand1,operand2);
}

int root(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    if(1 == operand2)
        return operand1;
    else
        return pow(operand1,(1/operand2));
}
