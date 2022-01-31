#include <bits/stdc++.h>

using namespace std;

unordered_set<string> uset;
int minSubStr(string str,int i,vector<int>&dp){
    if(i==str.length())
    return 0;
    if(dp[i]!=-1) return dp[i];
    int mini=1e8;
    for(int len=1;len<=str.length()-i;len++){
        string s=str.substr(i,len);
        if(uset.find(s)!=uset.end()){
            int temp=1+minSubStr(str,i+len,dp);
            mini=min(mini,temp);
        }
    }
    
    return dp[i]=mini;
}
int main()
{
    string str;
    cin>>str;
    int n;
    cin>>n;
    string arr[n+1];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for (int i = 0; i < n; i++)
    uset.insert(arr[i]);
    vector<int>dp(str.length(),-1);
    int temp=minSubStr(str,0,dp);
    if(temp==1e8) cout<<-1;
    else cout<<temp;
    return 0;
}
