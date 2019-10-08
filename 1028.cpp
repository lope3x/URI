#include <iostream>

using namespace std;
int mdc(int a,int b){
    int x = a/b;
    int r = a%b;
    if(b%r == 0){
        return r;
    }
    else{
        return mdc(b,r);
    }

}
int main(int argc, char const *argv[])
{
    int f1,f2;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>f1>>f2;
        if(f1>f2){
            int aux = f2;
            f2 = f1;
            f1 = aux;
        }
        cout<<mdc(f1,f2)<<endl;
    }
    return 0;
}
