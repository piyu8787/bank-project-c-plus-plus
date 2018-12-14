#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
class A
{
	long int acc;
	char name[100],add[1000];
	float amount;
	public:
	void getdata()
	{
		cout<<"Account Information\n";

		cout<<"Enter your Name:";
		gets(name);
		cout<<"\nEnter Account Number:";
		cin>>acc;
		cout<<"\nEnter Your Address:";
		gets(add);
		cout<<"\nEnter your Amount:";
		cin>>amount;
	}
	void deposite()
	{
		float b;

		cout<<"Deposite the Amount\n";

		cout<<"Enter Amount:";
		cin>>b;

		amount=amount+b;
		cout<<"The amount"<<b<<"is deposite"<<endl;
		cout<<"Current Amount:"<<amount;
		cout<<"\nThank you";

	}
	void withdraw()
	{
		float a;

		cout<<"\nWithdraw Amount\n";

		cout<<"Enter Withdraw Amount:";
		cin>>a;

		amount=amount-a;
		cout<<"The amount"<<a<<"id withdraw"<<endl;
		cout<<"Current Amount:"<<amount;
		cout<<"\nThank you\n";

	}
	void display()
	{
		cout<<"\nAccount Detail\n";

		cout<<"Name:"<<name<<endl;

		cout<<"Account Number:"<<acc<<endl;

		cout<<"Address:"<<add<<endl;

		cout<<"Amount:"<<amount<<endl;
	}

};
void main()
{
	clrscr();
	A p;
	p.getdata();
	int q;
	do
	{
		cout<<"\n>>>Choose Your Option<<<" ;
		cout<<"\n1.Deposite";
		cout<<"\n2.withdraw";
		cout<<"\n3.To show your account detail";
		cout<<"\n4.Exit";
		cout<<"\nEnter Your option:";
		cin>>q;
		cout<<"\n";
		switch(q)
		{
			case 1:
				p.deposite();
				break;
			case 2:
				p.withdraw();
				break;
			case 3:
				p.display();
		}
	}
	while(q!=4);
	cout<<"Thank you for Banking";
	getch();
}
