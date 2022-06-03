// Created by rajat joshi on 03-06-2022.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;cin>>n>>k;
    vector<int>h(n);
    for(int i=0;i<n;++i)
    {
        cin>>h[i];
    }
    vector<int>dp(n,INT_MAX);

    dp[0]=0;
    dp[1]=abs(h[1]-h[0]);
    for(int i=2;i<n;++i)
    {
        for(int j=i-1,jump=0;j>=0 and jump<k;j--,jump++) {
            dp[i] = min(dp[i], dp[j] + abs(h[j] - h[i]));
        }
    }
    cout<<dp[n-1];
    return 0;
}
