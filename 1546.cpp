#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    string nomes[] = {"na","Rolien","Naej","Elehcim","Odranoel"};
    int n = 0;
    int num;
    cin>>n;
    for(int i=0;i<n;i++){
        int k=0;
        cin>>k;
        for(int j=0;j<k;j++){
            cin>>num;
            cout<<nomes[num]<<endl; 
        }
    }
    return 0;
}
