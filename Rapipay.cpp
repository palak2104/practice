#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s,n,m;
    cin>>s>>n>>m;
    vector<int>arr;
    for(int i=0;i<s;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<vector<int>>fres;
    for(int i=0;i<s;i+=n){
        vector<int>res;
        for(int j=i;j<n+i;j++){
        res.push_back(arr[j]);    
        }
        sort(res.begin(),res.end());
        fres.push_back(res);
    }
    vector<int>temp;
    sort(fres.begin(),fres.end());
    for(auto it:fres){
        for(auto i:it){
            temp.push_back(i);
        }
    }
    cout<<temp[m-1];
    return 0;
}
