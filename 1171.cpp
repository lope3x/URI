#include <iostream>
#include <string.h>

using namespace std;



int main(int argc, char const *argv[]){
    int arr[2001];
    int n;
    cin>>n;
    int valores[n];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;i++){
        cin>>valores[i];
    }
    for(int i=0;i<n;i++){
        arr[valores[i]]++;
    }
    for(int i=0;i<=2000;i++){
        if(arr[i]!=0){
            cout<<i<<" aparece "<<arr[i]<<" vez(es)"<<endl;
        }
    }
    return 0;
}
