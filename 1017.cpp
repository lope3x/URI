#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]){
    int horas,velocidade;
    cin>>horas>>velocidade;

    double litros = (horas*velocidade)/12.0;
    cout<<fixed;
    cout<<setprecision(3);
    cout<<litros<<endl;
    return 0;
}