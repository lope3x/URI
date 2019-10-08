#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    double y;
    cin>>x;
    cin>>y;
    cout<<fixed;
    cout<<setprecision(3);
    cout<<x/y<<" km/l"<<endl;
    return 0;
}
