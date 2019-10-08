#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int n=0;
    cin>>n;
    for(int repete = 0;repete<n;repete++){
        float notas[7];
        float menor=0.0;
        float maior=0.0;
        float soma=0.0;
        string nome;
        float gd=0.0;
        cin>>nome;
        cin>>gd;
        cout << fixed;
        cout <<setprecision(2);
        cin>>notas[0];
        maior = menor = notas[0];
        for(int i = 1;i<7;i++){
            cin>>notas[i];
            if(notas[i]>maior)
                maior = notas[i];
            else if(notas[i]<menor){
                menor = notas[i];
            }
        }
        for(int i = 0;i<7;i++){
            if(notas[i]!=maior&&notas[i]!=menor){
                soma+=notas[i];
            }
        }
        cout<<nome<<" "<<soma*gd<<endl;
    }
    return 0;
}
