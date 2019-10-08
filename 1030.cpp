#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Celula{
    public:
        int id;
        Celula * prox;
        Celula(int x){
            id = x;
            prox = NULL;
        }

};

class Circulo{
    public:
        Celula * primeiro;
        Celula * ultimo;
        int n;
        Circulo(){
            primeiro =NULL;
            ultimo = NULL;
            n = 0;
        }
        void inserir(int x){
            Celula *  tmp = new Celula(x);
            if(primeiro == NULL){
                primeiro = tmp;
                ultimo = primeiro;
            }
            else {
                ultimo->prox = tmp;
                ultimo = tmp;
            }
            tmp->prox = primeiro;
            n++;
            tmp = NULL;
        }
        void mostrar(){
            for(Celula* i = primeiro;i->prox!=primeiro;i = i->prox){
                cout<<i->id;
            }
        }
        Celula *  remover(Celula * i,Celula * ant){
            if(primeiro == i){
                primeiro = i->prox;
            }

            ant->prox = i->prox;

            i->prox = NULL;
            free(i);
            n--;
            return ant->prox;
            

        }
        bool only_um(){
            return primeiro == primeiro->prox;
        }
};


int main(int argc, char const *argv[])
{
    int repete=0;
    cin>>repete;
    for(int ree=0;ree<repete;ree++){
        int n = 0;
        int m = 0;
        cin>>n>>m;
        Circulo c;
        for(int i = 0;i<n;i++){
            c.inserir(i+1);
        }
        int pula = 0;
        Celula * i = c.primeiro;
        Celula * ant =NULL;
        while(!c.only_um()){
            pula++;
            if(pula==m){
                i = c.remover(i,ant);
                pula =0;
            }else{
                ant = i;
                i = i->prox;
            }
        }
        cout<<"Case "<<ree+1<<": "<<c.primeiro->id<<endl;
    }
    return 0;
}
