#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    string entrada;
    int par_dir;
    int par_esq;
    bool correct=true;
    while(cin>>entrada){
        par_dir=0;
        par_esq=0;
        for(int i=0;i<entrada.size();i++){
            if(entrada[i]=='('){
                correct = false;
                par_dir++;
            }
            if(!correct&&entrada[i]==')'){
                correct = true;
                par_esq++;
            }

        }
        if(correct&&par_esq==par_dir)
            cout<<"correct"<<endl;
        else{
            cout<<"incorrect"<<endl;
        }
        
    }
    return 0;
}
