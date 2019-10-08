#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
	double a;
	double b;
	double c;
	cin>>a;
	cin>>b;
	cin>>c;
	double media = (a*2+b*3+c*5)/10;
	cout<<fixed;
	cout<<setprecision(1);
	cout<<"MEDIA = "<<media<<endl;
	return 0;
}