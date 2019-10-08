#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]){
    int valor;
    cin>>valor;
    cout<<valor<<endl;
    int n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
    while(valor>=100){
        valor=valor-100;
        n100++;
    }
    while(valor>=50){
        valor=valor-50;
        n50++;
    }
    while(valor>=20){
        valor=valor-20;
        n20++;
    }
    while(valor>=10){
        valor=valor-10;
        n10++;
    }
    while(valor>=5){
        valor=valor-5;
        n5++;
    }
    while(valor>=2){
        valor = valor-2;
        n2++;
    }
    while(valor>=1){
        valor = valor-1;
        n1++;
    }
    cout<<n100<<" nota(s) de R$ 100,00"<<endl;
    cout<<n50<<" nota(s) de R$ 50,00"<<endl;
    cout<<n20<<" nota(s) de R$ 20,00"<<endl;
    cout<<n10<<" nota(s) de R$ 10,00"<<endl;
    cout<<n5<<" nota(s) de R$ 5,00"<<endl;
    cout<<n2<<" nota(s) de R$ 2,00"<<endl;
    cout<<n1<<" nota(s) de R$ 1,00"<<endl;
    return 0;
}