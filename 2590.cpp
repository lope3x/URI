#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int t;
    cin>>t;
    const int finais[] = {1,7,9,3};
    short n;
    for(int i = 0;i<t;i++){
        cin>>n;        
        n = n&3;
        cout<<finais[n]<<endl;

    }
    return 0;
}
