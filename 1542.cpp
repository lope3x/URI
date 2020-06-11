#include <iostream>

using namespace std;

int main(){

    int q,d,p;
    cin>>q;
    if(q!=0)
    cin>>d>>p;
    while(q!=0){
        int resp = (q*d*p)/(p-q);
        if(resp!=1)
        cout<<resp<<" paginas"<<endl;
        else
        cout<<resp<<" pagina"<<endl;
        cin>>q;
        if(q!=0)
        cin>>d>>p;
    }
    return 0;
}