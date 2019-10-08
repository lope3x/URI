#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
	string nome;
	cin>>nome;
	double salario;
	cin>>salario;
	double vendas;
	cin>>vendas;
	double total = salario + vendas*0.15;
	cout<<fixed;
	cout<<setprecision(2);
	cout<<"TOTAL = R$ "<<total<<endl;

	return 0;
}