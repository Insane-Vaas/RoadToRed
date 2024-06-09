#include <bits/stdc++.h>
#include <climits>
#include <vector>
using namespace std;

int main(){

    int n = 0, k = 0;
    cin>>n>>k;
    vector<int> v(n,0);
    vector<int> dp(n,INT_MAX);

    for(int i=0;i<n;i++)cin>>v[i];

    dp[0] = 0;
    for(int i=0;i<n;i++){
            for(int j=i+1;j<=i+k;j++){
                if(j < n)dp[j] = min(dp[j],dp[i] + abs(v[i]-v[j]));
            }
    }

    cout<<dp[n-1]<<endl;
    return 0;

}
