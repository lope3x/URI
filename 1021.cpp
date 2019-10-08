#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    long double valor;
    cin>>valor;
    int n100=0,n50=0,n20=0,n10=0,n5=0,n2=0;
    int m1=0,m05=0,m025=0,m010=0,m005=0,m001=0;
    int valor2 = int(valor*100);
    while(valor2>=10000){
        valor2 = valor2-10000;
        n100++;
    }
    while(valor2>=5000){
        valor2=valor2-5000;
        n50++;
    }
    while(valor2>=2000){
        valor2=valor2-2000;
        n20++;
    }
    while(valor2>=1000){
        valor2=valor2-1000;
        n10++;
    }
    while(valor2>=500){
        valor2=valor2-500;
        n5++;
    }
    while(valor2>=200){
        valor2 = valor2-200;
        n2++;
    }
    /*valor2= valor2 -n100*100-n50*50-n20*20-n10*10-n5*5-n2*2;
    cout<<"VALOR 2 "<<valor2<<endl<<endl<<endl;*/
   
    

    while(valor2>=100){
        valor2 = valor2-100;
        m1++;
    }
    while(valor2>=50){
        valor2 = valor2-50;
        m05++;
    }
    while(valor2>=25){
        valor2 = valor2-25;
        m025++;
    }
    while(valor2>=10){
        valor2 = valor2-10;
        m010++;
    }
    while(valor2>=5){
        valor2 = valor2-5;
        m005++;
    }
    while(valor2>=1){
        valor2 = valor2-1;
        m001++;
    }

    cout<<"NOTAS:"<<endl;
    cout<<n100<<" nota(s) de R$ 100.00"<<endl;
    cout<<n50<<" nota(s) de R$ 50.00"<<endl;
    cout<<n20<<" nota(s) de R$ 20.00"<<endl;
    cout<<n10<<" nota(s) de R$ 10.00"<<endl;
    cout<<n5<<" nota(s) de R$ 5.00"<<endl;
    cout<<n2<<" nota(s) de R$ 2.00"<<endl;
    cout<<"MOEDAS:"<<endl;
    cout<<m1<<" moeda(s) de R$ 1.00"<<endl;
    cout<<m05<<" moeda(s) de R$ 0.50"<<endl;
    cout<<m025<<" moeda(s) de R$ 0.25"<<endl;
    cout<<m010<<" moeda(s) de R$ 0.10"<<endl;
    cout<<m005<<" moeda(s) de R$ 0.05"<<endl;
    cout<<m001<<" moeda(s) de R$ 0.01"<<endl;
    return 0;
}
