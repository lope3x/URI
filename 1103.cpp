#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int h1,m1,h2,m2;
    cin>>h1>>m1>>h2>>m2;
    while(h1!=0||m1!=0||h2!=0||m2!=0){
        int tempo_sono=0;
        int sub = h2-h1;
        if(sub<0){
            tempo_sono = 1440 +(sub*60);
            if(m2 - m1<0){
                tempo_sono = tempo_sono  +(m2-m1); 
            }
            else{
                tempo_sono = tempo_sono + (m2-m1);
            }
        }
        else if(sub==0&&m2-m1<0){
            tempo_sono = 1440 - m1 + m2;
        }
        else if(m2-m1<0){
            tempo_sono = sub*60;
            tempo_sono -= (m1-m2);

        }
        else{
            tempo_sono = sub*60;
            tempo_sono += m2-m1;
        }
        if(h1==h2&&m1==m2){
            tempo_sono = 1440;
        }
        cout<<tempo_sono<<endl;
        cin>>h1>>m1>>h2>>m2;
    }
    return 0;
}
