#include<iostream>
#include <vector>
using namespace std;
#define ll long long


int main(){

    ll res = 0;
    ll idx = 0;
    for(ll i=0;i<5;i++){
        for(ll j=0;j<5;j++){
            ll d = 0;
            cin>>d;
            if(d == 1){
                res = abs(2-i) + abs(2-j);
            }
        }
    }
    cout<<res<<endl;

    return 0;

}
