#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int a,b;
    cin>>a>>b;
    int aux;
    if(a%b==0||b%a==0)
        cout<<"Sao Multiplos"<<endl;
    else
    {
        cout<<"Nao sao Multiplos"<<endl;
    }
    
    return 0;
}
