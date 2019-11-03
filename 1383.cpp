#include <iostream>

using namespace std;
bool verifica3x3(int mat[][9],int iL,int fL,int iC,int fC){
    int produtorio =1;
    int somatorio = 0;
    for(int i=iL;i<=fL;i++){
        for(int j =iC;j<=fC;j++){
            produtorio*=mat[i][j];
            somatorio+=mat[i][j];
        }
    }
    if(produtorio!=362880)
        return false;
    if(somatorio!=45)
        return false;
    return true;
}
bool verificacolunas(int mat[][9]){
    int produtorio = 1;
    int somatorio = 0;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            produtorio*=mat[j][i];
            somatorio+=mat[j][i];
        }
        if(produtorio!=362880)
            return false;
        if(somatorio!=45)
            return false;
        produtorio=1;
        somatorio=0;
    }
    return true;
}
bool verificalinhas(int mat[][9]){
    int produtorio = 1;
    int somatorio = 0;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            produtorio*=mat[i][j];
            somatorio+=mat[i][j];
        }
        if(produtorio!=362880)
            return false;
        if(somatorio!=45)
            return false;
        produtorio=1;
        somatorio=0;
    }
    return true;
}

int main(int argc, char const *argv[]){
    int n;
    cin>>n;
    for(int k = 0;k<n;k++){
        int mat[9][9];
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                int x;
                cin>>x;
                mat[i][j] = x;
            }
        }
        if(verificalinhas(mat)&&verificacolunas(mat)&&verifica3x3(mat,0,2,0,2)&&verifica3x3(mat,0,2,3,5)&&verifica3x3(mat,0,2,6,8)
        &&verifica3x3(mat,3,5,0,2)&&verifica3x3(mat,3,5,3,5)&&verifica3x3(mat,3,5,6,8)&&verifica3x3(mat,6,8,0,2)&&verifica3x3(mat,6,8,3,5)
        &&verifica3x3(mat,6,8,6,8)){
            cout<<"Instancia "<<k+1<<endl;
            cout<<"SIM"<<endl<<endl;
        }
        else{
            cout<<"Instancia "<<k+1<<endl;
            cout<<"NAO"<<endl<<endl;
        }
    }
    return 0;
}
