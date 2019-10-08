#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    double a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<fixed;
    cout<<setprecision(3);
    cout<<"TRIANGULO: "<<(a*c)/2<<endl;
    cout<<"CIRCULO: "<<3.14159*c*c<<endl;
    cout<<"TRAPEZIO: "<<((a+b)*c)/2<<endl;
    cout<<"QUADRADO: "<<b*b<<endl;
    cout<<"RETANGULO: "<<a*b<<endl;
    return 0;
}
