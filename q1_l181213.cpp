#include"q1_l181213.h"
using namespace std;
bankaccount::bankaccount()//intilizng the values
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
bankaccount::bankaccount(string n,int i_d)//intilizng variable and assigning the name and id 
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
void bankaccount::print()//print the whole program
{
	if(name=="")
	{
		cout<<"name is not present"<<endl;
	}
	else
		cout<<"Name:"<<name<<endl;
	if(id==0)
	{
	cout<<"id is not present &enter your id again "<<endl;
	}
	else
		cout<<"id:"<<id<<endl;
cout<<"your balance is:"<<balance<<endl;
cout<<"no of transaction:"<<nooftrans<<endl;
for(int i=0;i<nooftrans;i++)
{
cout<<transaction[i]<<endl;
}
}
void bankaccount::wihtdrawl(int amnt)//decrement the amount you want from current balace
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
void bankaccount::translimitincrement()//increase in the momery of array
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
void bankaccount::deposit(int amount)//increment the amount you want from current balace
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
bankaccount::~bankaccount()//delete the array
{
	delete [] transaction;
	transaction=nullptr;
}



