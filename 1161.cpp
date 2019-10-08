#include <iostream>

using namespace std;


long long int fatorial(int n){
    long long int resp;
    if(n==0||n==1){
        resp = 1;
    }
    else{
        resp = n*fatorial(n-1);
    }
    return resp;
}
int main(int argc, char const *argv[]){
    int x,y;
    while(cin>>x>>y){
        long long int soma = fatorial(x)+fatorial(y);
        cout<<soma<<endl;
    }
    return 0;
}
