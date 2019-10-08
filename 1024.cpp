#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[]){
    string entrada;
    int n;
    string num;
    getline(cin,num);
    char aux;
    istringstream iss (num);
    iss>>n;

    
    //while(n!=0){
        getline(cin,entrada);
        for(int i=0;i<entrada.length();i++){
            if(entrada[i]>='a'&&entrada[i]<='z'||entrada[i]>='A'&&entrada[i]<='Z'){
                entrada[i]+=3;
            }
        }
        /*for(int i=0,j=entrada.length()-1;i!=j;i++,j--){
            aux= entrada[i];
            entrada[i]=entrada[j];
            entrada[j]=aux;
        }*/
        for(int i=0;i<entrada.length();i++){

        }
        n--;
        cout<<entrada<<endl;
    //}
    return 0;
}