#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[]){
    int n,r;
    while(cin>>n>>r){
        bool* arr = new bool[n+1];
        memset(arr,0,sizeof(bool)*(n+1));
        int num;
        for(int i=0;i<r;i++){
           cin>>num;
           arr[num]=true;
        }
        if(n==r){
            cout<<"*"<<endl;
        }
        else{
            for(int i=1;i<=n;i++){
                if(arr[i]==false){
                    cout<<i<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
