#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    double x1,x2,y1,y2;
    
    cin>>x1;
    cin>>y1;

    cin>>x2;
    cin>>y2;

    double q1 = pow(x2-x1,2);
    double q2 = pow(y2-y1,2);

    double dist = sqrt(q1+q2);
    cout<<fixed;
    cout<<setprecision(4);

    cout<<dist<<endl;
    return 0;
}
