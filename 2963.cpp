#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{   
    int n = 0;
    int carlos =0;
    cin>>n;
    cin>>carlos;
    int valor;
    bool a=true;
    for(int i = 1;i<n;i++){
        cin>>valor;
        if(carlos<valor){
            i = n;
            cout<<'N'<<endl;
            a=false;
        }
    }
    if(a){
        cout<<'S'<<endl;
    }
    return 0;
}
