#include <iostream>
#include <cmath>

using namespace std;

unsigned long long int fatorial(int n){
    unsigned long long int resp;
    if(n==0||n==1){
        resp = 1;
    }
    else{
        resp = n *fatorial(n-1);
    }
    return resp;
}

unsigned long long int anagramas(unsigned int n,unsigned int i,unsigned int j){
    unsigned int maior = i;
    unsigned int menor = j;
    if(j>maior){
        maior = j;
        menor = i;
    }
    unsigned long long int fatn = 1;
    for(unsigned long long int x = n;x>maior;x--){
        fatn *=x;
    }

    return fatn/fatorial(menor);
}

int main(int argc, char const *argv[])
{
    unsigned int n=0;
    cin>>n;
    int repete = ceil((n+1)/2.0);
    int count=0;
    int resp;
    bool meioimpar=false;
    for(unsigned int i=0,j=n;i<n+1;i++,j--){
        unsigned long long int res=anagramas(n,j,i);
        if(res%2==1){
            count++;
            if(i==j){
                meioimpar=true;
            }
        }
    }
    resp = count*2;
    if(meioimpar)
        resp--;
    cout<<count<<endl;
    return 0;
}

