#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    unsigned long long int fibbo[61];
    int x=1;
    while(x<=60){
        unsigned long long int i = 0;
        unsigned long long int j = 1;
        for (unsigned long long int k = 1; k < x; k++){	
            unsigned long long int t;
            t = i + j;
            i = j;
            j = t;
        }
        fibbo[x]=j;
        x++;
    }
    int t;
    cin>>t;
    int fib;
    fibbo[0]=0;
    for(int i = 0;i<t;i++){
        cin>>fib;
        cout<<"Fib("<<fib<<") = "<<fibbo[fib]<<endl;
    }
    return 0;
}
