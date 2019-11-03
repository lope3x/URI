#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int contaEspacos(string s){
    int resp=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            resp++;
        }
    }
    return resp;
}

int main(){
    int n;
    double soma=0;
    int kg;
    double kgtotal=0;
    double x=0;
    string nome;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        cin>>x;
        soma+=x;
        cin.ignore();
        getline(cin, nome);
        kg = contaEspacos(nome);
        kgtotal+=kg+1;
        cout<<"day "<<i+1<<": "<<kg+1<<" kg"<<endl;
    }
    cout<<fixed<<setprecision(2);
    cout<<kgtotal/n<<" kg by day"<<endl;
    cout<<"R$ "<<soma/n<<" by day"<<endl;
    return 0;
}