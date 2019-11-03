#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[]){
    int cartasAlice[100000];
    int cartasBeatriz[100000];
    
    memset(cartasAlice,0,sizeof(cartasAlice[0])*100000);
    memset(cartasBeatriz,0,sizeof(cartasBeatriz[0])*100000);
    int qtdAlice;
    int qtdBeatriz;
    int qtdTradeA = 0;
    int qtdTradeB = 0;
    cin>> qtdAlice;
    cin>> qtdBeatriz;
    int carta=0;
    for(int i=0;i<qtdAlice;i++){
        cin>>carta;
        cartasAlice[carta]++;
    }
    for(int i=0;i<qtdBeatriz;i++){
        cin>>carta;
        cartasBeatriz[carta]++;
    }
    for(int i=0;i<100000;i++){
        if(cartasAlice[i]>1){
            qtdTradeA++;
        }
        if(cartasBeatriz[i]>1){
            qtdTradeB++;
        }
    }
    cout<<min(qtdTradeA,qtdTradeB)<<endl;
    return 0;
}
