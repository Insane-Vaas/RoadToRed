#include <bits/stdc++.h>
using namespace std;

int main(){

    int n = 0;
    cin>>n;
    vector<int> v(n,0);

    for(int i=0;i<n;i++)cin>>v[i];

    vector<int> dp(n,INT_MAX);
    dp[0] = 0;

    for(int i=1;i<n;i++){
        if(i >= 2){
            dp[i] = min(abs(v[i] - v[i-1]) + dp[i-1], abs(v[i] - v[i-2]) + dp[i-2]);
        }
        else{
            dp[1] = abs(v[i] - v[i-1]);
        }
    }

    cout<<dp[n-1]<<endl;

    return 0;

}
