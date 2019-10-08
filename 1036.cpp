#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]){
    double a,b,c;
    cin>>a>>b>>c;
    double delta = pow(b,2) -(4*a*c);
    cout<<fixed;
    cout<<setprecision(5);
    if(delta>0&&a!=0){
        double raizdelta = sqrt(delta);
        double r1 = (-b +raizdelta)/(2*a);
        double r2 = (-b -raizdelta)/(2*a);
        cout<<"R1 = "<<r1<<endl;
        cout<<"R2 = "<<r2<<endl;
    }
    else{
        cout<<"Impossivel calcular"<<endl;
    }
    return 0;
}
