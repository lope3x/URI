#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

long long int calls;

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
        calls+=2;
    }
    return resp;
}
int main(int argc, char const *argv[]){
    int n;
    int x;
    cin>>n;
    calls=0;
    while(n!=0){
        cin>>x;
        cout<<"fib("<<x<<")"<<" = "<<calls<<" calls = "<<fibbo(x)<<endl;
        n--;
        calls=0;
    }
}