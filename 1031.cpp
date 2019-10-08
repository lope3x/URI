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
    int n = 0;
    cin>>n;
    while(n!=0){
        bool controle = true;
        int m = 1;
        while(controle){
            Circulo* c = new Circulo();
            for(int i = 0;i<n;i++){
                c->inserir(i+1);
            }
            int pula = 1;
            Celula * i = c->primeiro;
            Celula * ant =c->ultimo;
            i =c->remover(i,ant);
            while(!c->only_um()){
                if(pula==m){
                    i = c->remover(i,ant);
                    pula =1;
                }else{
                    ant = i;
                    i = i->prox;
                    pula++;
                }
            }
            if(c->primeiro->id==13){
                cout<<m<<endl;
                controle = false;
            }
            else{
            m++;
            free(c);
            }
        }
        cin>>n;
    }
    return 0;
}
