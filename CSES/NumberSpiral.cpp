#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
    
   int t = 0;
   cin>>t;

   while(t--){

    ll x,y;
    cin>>x>>y;
    ll r = 0;


    if(x<y){
        if(y%2 == 0)r = (y-1)*(y-1) +x;
        else r = y*y - x + 1;
    }else{
        if(x%2==0) r = x*x - y + 1;
        else r = (x-1)*(x-1) + y;
    }

    cout<<r<<endl;

   }
}
