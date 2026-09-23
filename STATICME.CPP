#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	static  int b;
	public:
		void get()
		{
			cout<<"\n enter a:";
			cin>>a;
			b++;
		}
		void put()
		{
			cout<<"\n a="<<a<<"\t b="<<b;
		}
};
int A::b;
void main()
{
	A a1,a2,a3;
	clrscr();
	a1.get();
	a1.put();
	a2.get();
	a2.put();
	a3.get();
	a3.put();
	a1.put();
	getch();
}
output
enter a:10


a=10   b=1
enter a:20

a=20  b=2

enter a:30
a=30    b=3
a=10    b=3