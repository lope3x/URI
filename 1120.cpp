#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <sstream>


using namespace std;


int main(int argc, char const *argv[]){
    string n;
    string resp = "";
    char d;
    cin>>d;
    cin>>n;
    int entrou = 0;
    while(d!='0'&&n!="0"){
        for(int i=0;i<n.length();i++){
            if(n[i]!=d){
                resp+=n[i];
                entrou = 1;
            }
        }
        std::string::size_type sz;
        istringstream iss (resp);
        long long int x;
        iss>>x;
        if(iss.fail()){
            x=0;
        }
        cout<<x<<endl;
        cin>>d;
        cin>>n;
        resp ="";
    }
    return 0;
}