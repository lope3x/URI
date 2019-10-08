#include <iostream>

using namespace std;
bool huluculuyear(long long int year){
    return (year%15==0);
}

bool leapyear(long long int year){
    return (year%4==0&&year%100!=0||year%4==0&&year%400==0);
}
bool bulukulu(long long int year){
    return (leapyear(year)&&year%55==0);
}
int main(int argc, char const *argv[])
{
    long long int year;
    cin>>year;
    bool;
    if(leapyear(year)){
        cout<<"This is leap year."<<endl;
    }
    if(huluculuyear(year)){
        cout<<"This is huluculu festival year."<<endl;
    }
    if(bulukulu(year)){
        cout<<"This is bulukulu festival year."<<endl;
    }
    return 0;
}
