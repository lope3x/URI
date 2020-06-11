#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int n;
    cin>>n;
    while(n!=0){
        int vet [n];
        int posmaior;
        for(int i=0;i<n;i++){
            cin>>vet[i];
        }
        posmaior =0;
        for(int i=0;i<n;i++){
            if(vet[i]>vet[posmaior]){
                posmaior = i;
            }
        }
        vet[posmaior]=0;
        for(int i=0;i<n;i++){
            if(vet[i]>vet[posmaior]){
                posmaior = i;
            }
        }
        cout<<posmaior+1<<endl;
        cin>>n;
    }
    return 0;
}
