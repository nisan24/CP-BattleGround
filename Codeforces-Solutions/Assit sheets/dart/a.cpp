#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << fixed << setprecision(3) << "Summation of " << num1 << " and " << num2 << " = " << num1 + num2 << endl;

    cout << fixed << setprecision(0) << "Multiplication of " << num1 << " and " << num2 << " = " << num1 * num2 << endl;
    cout << fixed << setprecision(0) << "Division of " << num1 << " and " << num2 << " = " << fixed << setprecision(1) << num1 / num2 << endl;

    return 0;
}