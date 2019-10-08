#include <iostream>

using namespace std;
#define max 100000

int main(int argc, char const *argv[]){
    int t;
    cin>>t;
    for(int x =0;x<t;x++){
        int n;
        int m;
        cin>>n>>m;
        int v[n];
        int c[m+1];
        for(int i = 0;i<m+1;i++){
            c[i] = 1000000000;
        }
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        c[0]=0;
        for (int j=0; j<n; j++){
                for (int i=0; i<=m; i++){
                    if (v[j] <= i){
                        if ( (c[i-v[j]] + 1) < c[i]){
                            c[i] = c[i-v[j]]+1;
                    }
                }
            }
        }
        cout<<c[m]<<endl;
    }
    return 0;
}
