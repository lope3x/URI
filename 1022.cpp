#include <iostream>
#include <stdlib.h>


using namespace std;

int mdc(int a,int b){
    int resto;

    do {
        resto = a % b;

        a = b;
        b = resto;

    } while (resto != 0);

    return a;

}
int main(int argc, char const *argv[]){
    int n=0;
    cin>>n;
    for(int i = 0;i<n;i++){
        int n1=0,n2=0,d1=0,d2=0;
        char lixo;
        char op;
        cin>>n1>>lixo>>d1>>op>>n2>>lixo>>d2;
        int numerador;
        int denominador;
        int mdC;
        mdc(2,8);
        if(op=='+'){
            numerador = (n1*d2) + (n2*d1);
            denominador = (d1*d2);
            int mdC = mdc(abs(denominador),abs(numerador));
            cout<<numerador<<lixo<<denominador<<" = "<<numerador/mdC<<lixo<<denominador/mdC<<endl;

        }
        else if(op=='-'){
            numerador = (n1*d2) - (n2*d1);
            denominador = (d1*d2);
            int mdC =mdc(abs(denominador),abs(numerador));
            cout<<numerador<<lixo<<denominador<<" = "<<numerador/mdC<<lixo<<denominador/mdC<<endl;
        }
        else if(op=='*'){
            numerador = (n1*n2);
            denominador = (d1*d2);
            int mdC = mdc(denominador,numerador);
            cout<<numerador<<lixo<<denominador<<" = "<<numerador/mdC<<lixo<<denominador/mdC<<endl;
        }
        else if(op=='/'){
            numerador = (n1*d2);
            denominador = (n2*d1);
            int mdC = mdc(denominador,numerador);
            cout<<numerador<<lixo<<denominador<<" = "<<numerador/mdC<<lixo<<denominador/mdC<<endl;
        }
    }
    return 0;
}
