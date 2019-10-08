#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]){
    int in,horas=0,minutos=0,segundos=0;
    cin>>in;
    while(in>=3600){
        in = in-3600;
        horas++;
    }
    while(in>=60){
        in = in-60;
        minutos++;
    }
    while(in>=1){
        in = in-1;
        segundos++;
    }
    cout<<horas<<":"<<minutos<<":"<<segundos<<endl;
}