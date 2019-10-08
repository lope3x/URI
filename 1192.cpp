#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
        string entrada;
        int a,b;
        char letra;
        int n;
        cin>>n;
    for(int i = 0;i<n;i++){
        cin>>entrada;
        a = entrada.at(0)-48;
        b = entrada.at(2)-48;
        letra = entrada.at(1);
        if(a!=b){
            if(isupper(letra)){
                cout<<b-a<<endl;
            }
            else{
                cout<<a+b<<endl;
            }
        }
        else{
            cout<<a*b<<endl;
        }
    }
    return 0;
}
