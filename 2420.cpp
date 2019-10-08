#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int t1=0;
    int t2=0;
    int n;
    cin>>n; 
    int array[n];
    for(int i = 0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        t1+=array[i];
        //cout<<"t1 : "<<t1<<endl;
        t2 = 0;
        for(int j = i+1;j<n;j++){
            t2+=array[j];
        }
        //cout<<"t2 : "<<t2<<endl;
        if(t1==t2){
            cout<<i+1;
            i=n;
        }
    }
    return 0;
}
