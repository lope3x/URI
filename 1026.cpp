#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]){
    long long int x,y;
    while(cin>>x>>y){
        long long int res = x^y;
        cout <<res<<endl;
    }
}