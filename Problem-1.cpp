#include <iostream>
using namespace std;

class Calculator
{
public:
    double add(double a, double b)
    {
        return a + b;
    }

    double subtract(double a, double b)
    {
        return a - b;
    }

    double multiply(double a, double b)
    {
        return a * b;
    }

    bool divide(double a, double b, double &result)
    {
        if (b == 0)
        {
            cout << "Error: Division by zero!" << endl;
            return false;
        }
        result = a / b;
        return true;
    }
};

int main()
{
    Calculator calculator;
    double num1, num2, result;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    bool success = true;

    switch (op)
    {
    case '+':
        result = calculator.add(num1, num2);
        break;
    case '-':
        result = calculator.subtract(num1, num2);
        break;
    case '*':
        result = calculator.multiply(num1, num2);
        break;
    case '/':
        success = calculator.divide(num1, num2, result);
        break;
    default:
        cout << "Invalid operator!" << endl;
        return 1;
    }
    if (success)
    {
        cout << "Result: " << result << endl;
    }

    return 0;
}
