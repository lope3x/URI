#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,qt,s;
    cin>>n;
    for(int j = 0;j<n;j++){
        cin>>qt>>s;
        int menor = 101;
        int x;
        bool acertou = false;
        int resp = 0;
        for(int i=1;i<=qt;i++){
            cin>>x;
            if(!acertou&&x==s){
                acertou =true;
                resp = i;
            }
            else if(!acertou&&abs((double)(x-s))<menor){
                menor = abs((double)(x-s));
                resp = i;
            }            
        }
        if(acertou)
            cout<<resp<<endl;
        else
            cout<<resp<<endl;
    }
    return 0;
}