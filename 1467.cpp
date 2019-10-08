#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int a,b,c;
    while(cin>>a>>b>>c){
        if(a==b&&b==c){
            cout<<"*"<<endl;
        }
        else if(a!=b&&a!=c&&b==c){
            cout<<"A"<<endl;
        }
        else if(b!=a&&b!=c&&a==c){
            cout<<"B"<<endl;
        }
        else if(c!=a&&c!=b&&a==b){
            cout<<"C"<<endl;
        }
    }
    return 0;
}
