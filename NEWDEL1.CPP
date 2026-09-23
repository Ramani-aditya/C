#include<iostream.h>
#include<conio.h>
void main()
{
	float *p,sum=0,*q;
	int n,i;
	clrscr();
	cout<<"enter n:";
	cin>>n;
	p=new float[n];
	q=p;
	for(i=0;i<n;i++)
	{
		cout<<"enter value-"<<i+1<<":";
		cin>>p[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<endl<<*p;
		sum += *p;
		p++;
	}
	cout<<"\n sum="<<sum;
	delete[]p;
	getch();

}