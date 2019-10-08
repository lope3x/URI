#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[]){
    int n;
    while(cin>>n){
        int numero;
        char pe;
        int esquerda[61];
        int direita[61];
        int pares=0;
        memset(esquerda,0,61*sizeof(int));
        memset(direita,0,61*sizeof(int));
        for(int i=0;i<n;i++){
            cin>>numero>>pe;
            if(pe=='D'){
                direita[numero]++;
            }
            else {
                esquerda[numero]++;
            }
        }
        for(int i = 0;i<=60;i++){
            if(direita[i]!=0&&esquerda[i]!=0){
                if(direita[i]>0&&esquerda[i]>0){
                    if(direita[i]>esquerda[i]){
                        pares+=esquerda[i];
                    }
                    else{
                        pares+=direita[i];
                    }
                }
            }
        }
        cout<<pares<<endl;
    }
    return 0;
}
