#include<iostream>
using namespace std;
#define ll long long


int main(){

    ll n = 0;
    cin>>n;
    ll res = 0;
    while(n--){
        ll a = 0, b = 0, c = 0;
        cin>>a>>b>>c;

        if(a+b+c >= 2){
            res++;
        }
    }

    cout<<res<<endl;

    return 0;
}
