#include <iostream>

using namespace std;

int main(){
    int n,m,x,jogadores=0;
    bool resp;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        resp=true;
        for(int j=0;j<m;j++){
            cin>>x;
            if(x==0)
                resp=false;

        }
        if(resp)
            jogadores++;
    }
    cout<<jogadores<<endl;
}