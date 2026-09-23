#include<iostream.h>
#include<conio.h>
class A
{
	public:
		void show()
		{
			cout<<"class A";
		}
};
class B:public A
{
};
void main()
{

	clrscr();
	B obj;
	obj.show();
	getch();
}