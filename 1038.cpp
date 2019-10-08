#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int code=0,qtd=0;
    cin>>code>>qtd;
    
    float precos[] = {0.0,4.00,4.50,5.00,2.00,1.50};

    cout<<fixed;
    cout<<setprecision(2);
    
    cout<<"Total: R$ "<<precos[code]*qtd<<endl;
    return 0;
}
