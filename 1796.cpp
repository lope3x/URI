#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int nsatis = 0;
    int satis = 0;
    int n = 0;
    cin>>n;
    int x=0;
    for(int i = 0;i<n;i++){
        cin>>x;
        if(x==1)
            nsatis++;
        else
            satis++;
    }
    if(satis>nsatis)
        cout<<"Y"<<endl;
    else
        cout<<"N"<<endl;
    return 0;
}
