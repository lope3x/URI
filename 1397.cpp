#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int n,a,b,conta=0,contb=0;
    cin>>n;
    while(n!=0){
        for(int i=0;i<n;i++){
            cin>>a>>b;
            if(a>b){
                conta++;
            }
            else if(a<b){
                contb++;
            }
        }
        cout<<conta<<" "<<contb<<endl;
        cin>>n;
        conta=0;
        contb=0;
    }
    return 0;
}

