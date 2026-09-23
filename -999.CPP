#include <iostream.h>
#include <conio.h>

void main()
{
    int n, min, max;

    clrscr();

    cout << "Enter a number: ";
    cin >> n;

    // First number becomes minimum and maximum
    min = max = n;

    while (n != -999)
    {
        if (n < min)
            min = n;

        if (n > max)
            max = n;

        cout << "Enter a number: ";
        cin >> n;
    }

    cout << "\nMinimum number = " << min;
    cout << "\nMaximum number = " << max;

    getch();
}