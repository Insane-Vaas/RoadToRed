#include<iostream>
#include <vector>
using namespace std;
#define ll long long


int main(){

    ll n = 0;
    cin>>n;
    ll curr = 0;
    ll res = 0;
    ll prv = 0;
    for(int i=0;i<n;i++){
        cin>>curr;
        if(i != 0 && prv > curr){
            res += prv - curr;
            curr = prv;

        }
        prv = curr;
    }

    cout<<res<<endl;

    return 0;
}
