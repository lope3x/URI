#include <iostream>

using namespace std;

int fibbo(int n){
    int resp;
    if(n==0){
        resp=0;
    }
    else if(n==1){
        resp=1;
    }
    else {
        resp = fibbo(n-1)+fibbo(n-2);
    }
    return resp;
}

int main(int argc, char const *argv[]){
    int n;
    cin>>n;
    int x = 1;
    cout<<0;
    while(x<n){
        cout<<" ";
        int i = 0;
        int j = 1;
        for (int k = 1; k < x; k++){	
            int t;
            t = i + j;
            i = j;
            j = t;
        }
        cout<<j;
        x++;
    }
    cout<<endl;
    return 0;
}
