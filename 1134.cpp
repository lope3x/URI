#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int al=0,ga=0,di=0,entrada=0;
    cin>>entrada;
    while(entrada!=4){
        if(entrada==1){
            al++;
        }
        else if(entrada==2){
            ga++;
        }
        else if(entrada==3){
            di++;
        }
        cin>>entrada;
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<al<<endl;
    cout<<"Gasolina: "<<ga<<endl;
    cout<<"Diesel: "<<di<<endl;
    return 0;
}
