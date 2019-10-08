#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    double raio;
    cin>>raio;
    double volume = (4/3.0) *3.14159 * pow(raio,3);
    cout<<fixed;
    cout<<setprecision(3);

    cout<<"VOLUME = "<<volume<<endl;
    return 0;
}
