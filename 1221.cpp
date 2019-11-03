#include <iostream>
#include <cmath>

using namespace std;
bool isPrime(int n){
    if(n==2)
        return true;
    if(n%2 ==0)
        return false;
    for(int i=3;i<=(int)sqrt(n);i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(int argc, char const *argv[]){
    int n;
    cin>>n;
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        if(isPrime(num))
            cout<<"Prime"<<endl;
        else
            cout<<"Not Prime"<<endl;
    }
    return 0;
}
