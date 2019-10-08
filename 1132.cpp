#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x=0,y=0;
    cin>>x>>y;
    int soma=0;
    if(x>y){
        int aux = x;
        x = y;
        y = aux;
    }
    for(int i = x;i<=y;i++){
        if(i%13!=0){
            soma+=i;
        }
    }
    cout<<soma<<endl;
    return 0;
}
