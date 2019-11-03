#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]){
    string nome;
    long double total=0;
    long long int dist=0;
    int cont=0;
    while(getline(cin,nome)){
        cin>>dist;
        cin.ignore();
        total+=dist;
        cont++;
    }
    cout<<fixed;
    cout<<setprecision(1);
    double resp = total/cont;
    cout<<resp<<endl;
    return 0;
}
