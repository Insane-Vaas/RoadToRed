#include<iostream>
using namespace std;
#define ll long long


int main(){

    ll n = 0;
    cin>>n;
    ll res = 0;
    while(n--){
        string str = "";
        cin>>str;

        if(str == "++X" || str == "X++")res++;
        else res--;
    }

    cout<<res<<endl;

    return 0;
}
