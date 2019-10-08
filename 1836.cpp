#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]){
    int t;
    cin>>t;
    string nome;
    int level;
    float bs;
    float iv;
    float ev;
    float hp;
    float s;
    for(int i=0;i<t;i++){
        cin>>nome>>level;
        cout<<"Caso #"<<i+1<<": "<<nome<<" nivel "<<level<<endl;
        for(int j=0;j<4;j++){
            cin>>bs>>iv>>ev;
            hp = (((iv+bs+((sqrt(ev))/8)+50)*level)/50.0)+10;
            s = (((iv+bs+((sqrt(ev))/8))*level)/50.0)+5;
            if(j==0){
                cout<<"HP: "<<(int)hp<<endl;
            }
            else if(j==1){
                cout<<"AT: "<<(int)s<<endl;
            }
            else if(j==2){
                cout<<"DF: "<<(int)s<<endl;
            }   
            else if(j==3){
                cout<<"SP: "<<(int)s<<endl;
            }
        }
    }
    return 0;
}
