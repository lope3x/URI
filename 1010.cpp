#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int codepeca1;
    int codepeca2;
    int qtdpeca1;
    int qtdpeca2;
    double valorpeca1;
    double valorpeca2;

    cin>>codepeca1;
    cin>>qtdpeca1;
    cin>>valorpeca1;
    cin>>codepeca2;
    cin>>qtdpeca2;
    cin>>valorpeca2;

    cout<<fixed;
    cout<<setprecision(2);

    double total = qtdpeca1*valorpeca1 + qtdpeca2*valorpeca2;

    cout<<"VALOR A PAGAR: R$ "<<total<<endl;
    
    return 0;
}