#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int numero;
	cin>>numero;
	int horas;
	cin>>horas;
	double salariohora;
	cin>>salariohora;
	
	double salario = horas*salariohora;
	cout<<fixed;
	cout<<setprecision(2);
	
	cout<<"NUMBER = "<<numero<<endl;
	cout<<"SALARY = U$ "<<salario<<endl;
	
	return 0;
}