#include <iostream>
#include <string.h>
using namespace std;

#define max(a,b) (a)>(b)?(a):(b)
int ft[1000000];
void update(int k){
    while(k<1000000){
        ft[k]++;
        k+=(k&-k);
    }
}
int sum(int b){
    int soma = 0;
    while(b>0){
        soma+=ft[b];
        b-=(b&-b);
    }
    return soma;
}
int main(){
    int n;
    cin>>n;
    while(n!=0){
        memset(ft,0,sizeof ft);
        int inversions=0;
        int vet[n+1];
        int maior=0;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            vet[i] =x;
            maior=max(maior,x);
        }
        for(int i=1;i<=n;i++){
            update(vet[i]);
            inversions+=sum(maior) - sum(vet[i]);
        }
        if(inversions%2==1){
            cout<<"Marcelo"<<endl;
        }
        else{
            cout<<"Carlos"<<endl;
        }
        cin>>n;
    }
    return 0;
}