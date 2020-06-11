#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int primos = 0;
    long long int primo = 2;
    while(primos!=3501){
        bool eh=true;
        for(int i = 2;i<primo;i++){
            if(primo%i==0){
                eh=false;
                i=primo;
            }
        }
        if(eh){
            cout<<primo<<",";
            primos++;
        }
        primo++;
    }
    return 0;
}
