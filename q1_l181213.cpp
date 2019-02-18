#include"q1_l181213.h"
using namespace std;
bankaccount::bankaccount()
{
	string name=" ";
	id=0;
tlimit=10;
nooftrans=0;
 balance=0;
 bal_limit=200000 ;
transaction=nullptr;
transaction=new float[tlimit];
}
bankaccount::bankaccount(string n,int i_d)
{
name=n;
if(i_d>0)
{
	id=i_d;
}
else
	id=0;
tlimit=10;
nooftrans=0;
balance=0;
bal_limit=200000 ;
transaction=nullptr;
transaction=new float[tlimit];
}
void bankaccount::print()
{
	if(name=="")
	{
		cout<<"name is not present";
	}
	else
		cout<<"Name:"<<name;
	if(id==0)
	{
	cout<<"id is not present &enter your id again ";
	}
	else
		cout<<"id:"<<id;
cout<<"your balance is:"<<balance;
cout<<"no of transaction:"<<nooftrans;
for(int i=0;i<nooftrans;i++)
{
cout<<transaction[i];
}
}
void bankaccount::wihtdrawl(int amnt)
{
if (amnt>bal_limit)
{
cout<<"Transaction Unsuccessful: Insufficient balance";
}
else
	balance  =balance-amnt;
if(nooftrans<tlimit)
{
transaction[nooftrans]=-amnt;
nooftrans++;
}
else
	translimitincrement();
}
void bankaccount::translimitincrement()
{

float*temp=nullptr;
for(int i=0;i<tlimit;i++)
{
	temp[i]=transaction[i];
}
temp=new float[tlimit];
delete [] transaction;
tlimit=tlimit*2;
transaction=new float[tlimit];
for(int i=0;i<tlimit;i++)
{
transaction[i]=temp[i];
}

}
void bankaccount::deposit(int amount)
{
	if(amount+balance>=bal_limit)
	{
		cout<<"your balance is exceeded";
	}
	else
	{
		balance=balance+amount;
	}
		if(nooftrans<tlimit)
{
transaction[nooftrans]=amount;
nooftrans++;
}
else
	translimitincrement();
	}
bankaccount::~bankaccount()
{
	delete [] transaction;
	transaction=nullptr;
}



