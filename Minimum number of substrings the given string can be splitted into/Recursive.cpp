#include <bits/stdc++.h>

using namespace std;

unordered_set<string> uset;
int minSubStr(string str,int i){
    if(i==str.length())
    return 0;
    int mini=1e8;
    for(int len=1;len<=str.length()-i;len++){
        string s=str.substr(i,len);
        if(uset.find(s)!=uset.end()){
            int temp=1+minSubStr(str,i+len);
            mini=min(mini,temp);
        }
    }
    
    return mini;
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
    int temp=minSubStr(str,0);
    if(temp==1e8) cout<<-1;
    else cout<<temp;
    return 0;
}
