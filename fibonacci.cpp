#include<bits/stdc++.h>
using namespace std;

int fibo(int i, int n, vector<int> &dp){
    if(i<2)     return 1;
    if(dp[i]!=-1)   return dp[i];
    dp[i]=fibo(i-1,n,dp)+fibo(i-2,n,dp);
    return dp[i];
}

int main(){
    int n=5;
    vector<int> dp(n+1,-1);
    cout<<fibo(n,n,dp)<<endl;//recusion and memoisation

    //another approach is to create a table(tabulation)
    int temp1=1, temp2=1, ans=1;
    for(int i=2; i<=5; i++){
        temp2=temp1;
        temp1=ans;
        ans=temp1+temp2;
    }
    cout<<ans<<endl;
return 0;
}