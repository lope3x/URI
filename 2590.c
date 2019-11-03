#include <stdio.h>

int main(int argc, char const *argv[]){
    int t;
    scanf("%d",&t);
    const int finais[] = {1,7,9,3};
    unsigned long long int n;
    for(int i = 0;i<t;i++){
        cin>>n;        
        n = n&3;
        cout<<finais[n]<<endl;

    }
    return 0;
}
