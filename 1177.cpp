#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int t;
    cin>>t;
    int n[1000];
    for(int i=0;i<1000;i++){
        n[i] = i%t;
        cout<<"N["<<i<<"] = "<<n[i]<<endl;
    }
    return 0;
}
