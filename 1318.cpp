#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[]){
    int n,m;
    cin>>n>>m;
    while(n!=0&&m!=0){
        int bilhetes[n+1];
        int clone=0;
        memset(bilhetes,0,sizeof(bilhetes[0])*(n+1));
        int num;
        for(int i=0;i<m;i++){
            cin>>num;
            bilhetes[num]++;
        }
        for(int i=0;i<n+1;i++){
            if(bilhetes[i]>1){
                clone++;
            }
        }
        cout<<clone<<endl;
        cin>>n>>m;
    }
    return 0;
}
