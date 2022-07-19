#include <iostream>

using namespace std;

int Power(int base, int exponent);

int main()
{
    //  Ask the user for a number
    cout << "Number you want to get the cube of: ";

    //  Get the number
    int number;
    cin >> number;

    //  Return the number cubed
    cout << "Your cubed value is : " << Power(number, 3) << endl;
}

int Power(int base, int exponent)
{
    if (exponent <= 0) {
        return 1;
    }

    return base * Power(base, exponent - 1);
}