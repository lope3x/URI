#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]){
    int r,l;
    cin>>r>>l;
    double raio3 = pow(r,3);
    double raiopi = raio3*3.1415;
    double volume = (raiopi*4)/3;
    int qtd = l/volume;
    cout<<qtd<<endl;
    return 0;
}
