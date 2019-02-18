#include<iostream>
#include<string>
using namespace std;
class bankaccount
{
string name;
int id;
float balance;
float bal_limit;
float *transaction;
int nooftrans;
int tlimit;
void translimitincrement();
public:
	bankaccount();
	bankaccount(string n,int i_d);
	void print();
	void myaccount();
	void wihtdrawl(int amnt);
	void deposit(int amount);
	~bankaccount();
};