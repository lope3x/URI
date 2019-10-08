#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <cmath>

using namespace std;

class node{
    public:
        node * esq;
        node * dir;
        int element;
        node(int x){
            esq = NULL;
            dir = NULL;
            element = x;
        }
};
class tree{
    public:
        node * root;
        tree(){
            root =NULL;
        }
        node * insert(int x,node* i){
            if(i==NULL){
                i = new node(x);
            }
            else if(x< i->element){
                i->esq = insert(x,i->esq);
            }
            else if(x>i->element){
                i->dir = insert(x,i->dir);
            }
            return i;
        }
        void insert(int x){
            root = insert(x,root);
        }
        void showPre(node*i){
            if(i!=NULL){
                cout<<" "<<i->element;
                showPre(i->esq);
                showPre(i->dir); 
            }
        }
        void showPre(){
            showPre(root);            
        }
        void showIn(node*i){
            if(i!=NULL){
                showIn(i->esq);
                cout<<" "<<i->element;
                showIn(i->dir); 
            }
        }
        void showIn(){
            showIn(root);            
        }
        void showPos(node*i){
            if(i!=NULL){
                showPos(i->esq);
                showPos(i->dir); 
                cout<<" "<<i->element;
            }
        }
        void showPos(){
            showPos(root);            
        }
};
int main(int argc, char const *argv[])
{
    int c;
    cin>>c;
    int caso = 0;
    int n=0;
    tree ts[c];
    int x;
    while(c!=0){
        cin>>n;
        while(n!=0){
            cin>>x;
            ts[caso].insert(x);
            n--;
        }
        caso++;
        cout<<"Case "<<caso<<":"<<endl;
        cout<<"Pre.:";
        ts[caso-1].showPre();
        cout<<endl;
        cout<<"In..:";
        ts[caso-1].showIn();
        cout<<endl;
        cout<<"Post:";
        ts[caso-1].showPos();
        cout<<endl;
        cout<<endl;
        c--;
    }
    return 0;
}