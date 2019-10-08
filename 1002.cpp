#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
	std::cout << std::setprecision(4);

	double raio;
	cin>>raio;
	double raio2 = raio*raio;
	double n = 3.14159;
	double area = raio2 * n;
	
     cout << fixed;
	 cout << setprecision(4);
	cout << "A="<<area<<endl;
    return 0;
}