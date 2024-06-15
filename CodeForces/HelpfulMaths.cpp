#include<bits/stdc++.h>
#include <vector>
using namespace std;
#define ll int


int main(){

    string str = "";
    cin>>str;

    vector<ll> v;

    for(ll i=0;i<str.length();i+=2){
        if(str[i] == '1')v.emplace_back(1);
        else if(str[i] == '2')v.emplace_back(2);
        else if(str[i] == '3') v.emplace_back(3);
    }

    sort(v.begin(),v.end());

    for(ll i=0;i<v.size();i++){

        if(i != v.size()-1){
            cout<<v[i]<<"+";
        }else{
            cout<<v[i];
        }

    }

    return 0;

}
