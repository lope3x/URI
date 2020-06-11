#include <iostream>
#include <queue>

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
        void bfs(){
            queue <node*> q;
            node *  atual = root;
            if(atual->esq != NULL)
                q.push(atual->esq);
            if(atual->dir != NULL)
                q.push(atual->dir);
            cout<<atual->element;
            while (!q.empty()){
                atual = q.front();
                q.pop();
                if(atual->esq != NULL)
                    q.push(atual->esq);
                if(atual->dir != NULL)
                    q.push(atual->dir);
                cout<<" "<<atual->element;
                
            }
        }
};



int main(){
    int c,n,aux;
    cin>>c;
    tree ts[c];
    for(int cases = 0;cases <c;cases++){
        cin>>n;
        for(int i = 0;i<n; i++){
            cin>>aux;
            ts[cases].insert(aux);
        }
        cout<<"Case "<<cases+1<<":"<<endl;
        ts[cases].bfs();
        cout<<endl<<endl;
    }
    return 0;
}