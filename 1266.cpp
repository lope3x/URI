#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    while(true){
        int n;
        bool achou = false;
        int pos=0;
        cin>>n;
        if(n==0)
            break;
        int * arr = new int[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];
            if(!achou&&arr[i]==1){
                pos = i;
                achou=true;
            }
        }
        int resp=0;
        int cont=0;
        while(cont<n){
            if(pos==n)
                pos=0;
            if(pos==n-1){
                if(arr[pos]==0&&arr[0]==0){
                    arr[0]=1;
                    pos++;
                    resp++;
                }
            }  
            else if(arr[pos]==0&&arr[pos+1]==0){
                arr[pos+1]=1;
                pos++;
                resp++;
            }
            pos++;
            cont++;
        }
        cout<<resp<<endl;
    }
    return 0;
}
