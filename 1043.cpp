#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

bool isTriangle(float a,float b,float c){
    return abs(b-c)<a&&a<b+c&&abs(a-c)<b&&b<a+c&&abs(a-b)<c&&c<a+b;
}

int main(int argc, char const *argv[])
{
    float a,b,c;
    cin>>a>>b>>c;
    bool flag= isTriangle(a,b,c);
    cout<<fixed;
    cout<<setprecision(1);
    if(flag){
        cout<<"Perimetro = "<<a+b+c<<endl;
    }
    else{
         cout<<"Area = "<<((a+b)/2)*c<<endl;
    }
    return 0;
}
