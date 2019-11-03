#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

bool iguais(vector<int> v1,vector<int>v2){
    if(v1.size()!=v2.size())
        return false;
    for(int i=0;i<v1.size();i++){
        if(v1[i]!=v2[i])
            return false;
    }
    return true;
}
bool buscaSequencial(vector<int> v,int x){
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            return true;
            i=v.size();
        }
    }
    return false;
}
vector<int> inserePilha(vector<int> stack,vector<int> saida,int li){
    for(int i =1;i<=li-1;i++){
        if(!buscaSequencial(saida,i)){
            stack.push_back(i);
        }
    }
    return stack;
}
vector<int> deleteElemento(vector<int> v,int x){
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            v[i]=0;
        }
    }
    return v;
}
int main(){
    vector<int> stack;
    vector<int> saida;
    vector<int> esperado;
    int li;
    int n;
    cin>>n;
    while(n!=0){
        for(int i=1;i<=n;i++){
            cin>>li;
            if(li==0){
                cout<<endl;
                break;
            }
            esperado.push_back(li);
            if(li==i){
                saida.push_back(li);
                stack = deleteElemento(stack,li);
            }
            else if(li<i){
                while(stack.back()==0){
                    stack.pop_back();
                }
                saida.push_back(stack.back());
                stack.pop_back();
            }
            else{
                stack = inserePilha(stack,saida,li);
                saida.push_back(li);
            }

        }
        /*cout<<"VETOR SAIDA"<<endl;
        for(int i=0;i<saida.size();i++){
            cout<<saida[i]<<" ";
        }
        cout<<endl;
        cout<<"VETOR ESPERADO"<<endl;
        for(int i=0;i<esperado.size();i++){
            cout<<esperado[i]<<" ";
        }
        cout<<endl;*/
        if(li!=0){
            if(iguais(saida,esperado))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        stack.clear();
        saida.clear();
        esperado.clear();
        cin>>n;
    }
    return 0;
}
