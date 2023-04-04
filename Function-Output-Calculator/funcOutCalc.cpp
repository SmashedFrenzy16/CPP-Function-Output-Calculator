#include <iostream>

using namespace std;

void f(double x)
{

    double result;

    result = (2 * x) + 1;

    cout << "Function output: " << result << endl;
}

int main()
{

    double number;
    string repeat;

    do
    {

        cout << "Welcome to this function output calculator by @SmashedFrenzy16!" << endl;

        cout << "Enter in a number for the input: ";

        cin >> number;

        f(number);

        cout << "Do you want to calculate another output (y/n)?";

        cin >> repeat;

    } while (repeat == "Y" || repeat == "y");

    return 0;
}