#include <stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
    int sub1, sub2, sub3;
    clrscr();


    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);

    if (sub1 >= 35 && sub2 >= 35 && sub3 >= 35)
    {
	printf("Result: Pass");
    }
    else if ((sub1 < 35 && sub2 >= 35 && sub3 >= 35) ||
	     (sub1 >= 35 && sub2 < 35 && sub3 >= 35) ||
	     (sub1 >= 35 && sub2 >= 35 && sub3 < 35))
    {
	printf("Result: ATKT");
    }
    else
    {
	printf("Result: Fail");
    }

    getch();
}