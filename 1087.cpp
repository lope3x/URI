#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]){
    float x1,y1,x2,y2;
    
    do{
        cin>>x1;
        cin>>y1;
        cin>>x2;
        cin>>y2;
        if(x1!=0&&y1!=0&&x2!=0&&y2!=0){
            if(x1==x2&&y1==y2){
                cout<<0<<endl;
            }
            else if(x1==x2||y1==y2){
                cout<<1<<endl;
            }
            else if(abs(x2-x1)==abs(y2-y1)){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
    }while(x1!=0&&y1!=0&&x2!=0&&y2!=0);
}