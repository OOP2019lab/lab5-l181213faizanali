#include"q1_l181213.h"
using namespace std;
int main()
{
	bankaccount myaccount();
	bankaccount myaccount1("john deo",540092);
    myaccount1.print();

	 myaccount1.deposit(10000);
    myaccount1.wihtdrawl(5000);
   
	 myaccount1.print();
	system ("pause");
	return 0;
}