#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    
    int n=0,r=0,mary=0,john=0;
    cin>>n;
    while(n!=0){
        for(int i=0;i<n;i++){
            cin>>r;
            if(r==0){
                mary++;
            }
            else{
                john++;
            }
        }
        cout<<"Mary won "<<mary<<" times and John won "<<john<<" times"<<endl;
        mary=0;
        john=0;
        cin>>n;
    }
    return 0;
}
