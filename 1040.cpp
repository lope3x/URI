#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]){
    double n1=0.0,n2=0.0,n3=0.0,n4=0.0;
    cin>>n1>>n2>>n3>>n4;
    double a = (n1*2)+(n2*3)+(n3*4)+(n4*1);
    double media = a/10.0;
    cout<<fixed;
    cout<<setprecision(1);
    cout<<"Media: "<<media<<endl;
    if(media>=7.0){
        cout<<"Aluno aprovado."<<endl;
    }
    if(media<5.0){
        cout<<"Aluno reprovado."<<endl;
    }
    if(media>=5.0&&media<=6.9){
        cout<<"Aluno em exame."<<endl;
        double exame;
        cin>>exame;
        cout<<"Nota do exame: "<<exame<<endl;
        media = (exame+media)/2;
        if(media>=5.0){
            cout<<"Aluno aprovado."<<endl;
        }
        else{
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<"Media final: "<<media<<endl;

    }
    return 0;
}
