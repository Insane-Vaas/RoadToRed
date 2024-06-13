#include<iostream>
#include <vector>
using namespace std;
#define ll long long


int main(){

    ll n = 0, k = 0;
    cin>>n>>k;
    ll res = 0;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=0;i<n;i++){
        if(v[k-1] <= v[i] && v[i] > 0)res++;
    }

    cout<<res<<endl;
    return 0;
}
