#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int buscaSequencial(vector<int> v,int x){
    int resp=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            resp=i;
            resp++;
            i=v.size();
        }
    }
    return resp;
}
int main(int argc, char const *argv[]){
    int n,q;
    vector<int> v;
    cin>>n>>q;
    int x;
    int resp;
    int caso=1;
    while(n!=0&&q!=0){
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        cout<<"CASE# "<<caso<<":"<<endl;
        for(int i=0;i<q;i++){
            cin>>x;
            resp=buscaSequencial(v,x);
            if(resp!=-1)
                cout<<x<<" found at "<<resp<<endl;
            else
                cout<<x<<" not found"<<endl;
        }
        caso++;
        v.clear();
        cin>>n>>q;
    }
    return 0;
}
