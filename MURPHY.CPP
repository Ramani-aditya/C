#include <iostream.h>
#include <conio.h>
#include <math.h>

void main()
{
    int n, original, remainder, digits = 0;
    int sum = 0;

    clrscr();

    cout << "Enter an integer: ";
    cin >> n;

    original = n;

    // Count the number of digits
    int temp = n;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    // Calculate sum of digits raised to 'digits'
    temp = n;
    while (temp != 0)
    {
        remainder = temp % 10;
        sum += (int)pow(remainder, digits);
        temp /= 10;
    }

    if (sum == original)
        cout << original << " is a Murphy number.";
    else
        cout << original << " is not a Murphy number.";

    getch();
}