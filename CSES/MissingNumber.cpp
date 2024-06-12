#include<iostream>
#include <vector>
using namespace std;
#define ll long long


int main(){

    ll n = 0;
    cin>>n;

    vector<int> v(n);
    ll sum = ((n+1)*n)/2;
    for(int i=0;i<n-1;i++){
        cin>>v[i];
        sum -= v[i];
    }

    cout<<sum<<endl;
    return 0;
}
