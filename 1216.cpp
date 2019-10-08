#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]){
    string nome;
    int total=0;
    float dist;
    int cont;
    while(getline(cin,nome)){
        scanf("%d",&dist);
        total+=dist;
        cont++; 
        printf("%d",dist);
    }
    cout<<fixed;
    cout<<setprecision(1);
    float resp = dist/cont; 
    cout<<resp<<endl;
    return 0;
}
