#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int x;
    cin>>x;
    if(x%2==0)
        x++;
    for(int i = 0;i<6;i++){
        cout<<x<<endl;;
        x+=2;
    }
    return 0;
}
