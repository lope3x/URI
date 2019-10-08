#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]){
   int idade,anos,mes,dias;
   cin>>idade;
   anos = idade/365;
   int aux = idade%365;
   mes = aux/30;
   dias = aux%30;
   cout<<anos<<" ano(s)"<<endl;
   cout<<mes<<" mes(es)"<<endl;
   cout<<dias<<" dia(s)"<<endl;

}