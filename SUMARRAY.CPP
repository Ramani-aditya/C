#include <iostream.h>
#include <conio.h>
void main()
{
int a[5], i, sum = 0;
clrscr();
cout << "Enter 5 elements:\n";
for(i = 0; i < 5; i++)
cin >> a[i];
for(i = 0; i < 5; i++)
sum = sum + a[i];
cout << "Sum = " << sum;
getch();
}