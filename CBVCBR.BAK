#include<iostream.h>
#include<conio.h>
void swap(int,int);
void swap1(int*,int*);
void main()
{
	int a,b;
	clrscr();
	cout<<"enter two number:";
	cin>>a>>b;
	cout<<"\n before swap()a="<<a<<"\t b="<<b;
	swap(a,b);
	cout<<"\n alter swap()a="<<a<<"\t b="<<b;
	cout<<"\n before swap1()a="<<a<<"\t b="<<b;
	swap1(&a,&b);
	cout<<"\n alter swap1()a="<<a<<"\t b="<<b;
	getch();
}
void swap(int a,int b)
{
	int c=a;
	a=b;
	b=c;
	cout<<"\n inside swap()a="<<a<<"\t b="<<b;
}
void swap1(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
	cout<<"\n inside swap1()a="<<*a<<"\t b="<<*b;
}