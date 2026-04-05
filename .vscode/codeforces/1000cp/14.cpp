#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<long long >arr(n);
    unordered_map<long long ,long long>mp;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      mp[arr[i]]++;
    }
    if(n==1){
      cout<<-1;
      cout<<endl;
      continue;
    }
    bool help=false;
    for(auto &it:mp){
      if(it.second==1){
        help=true;
        break;
      }
    }
    if(help==true){
      cout<<-1;
      cout<<endl;
      continue;
    }
    if(mp.size()==1){
      cout<<n<<" ";
      for(int i=1;i<n;i++){
        cout<<i<<" ";
      }
      cout<<endl;
      continue;
    }
    int i=0,j=1;
    while(j<n){
      if(arr[j]!=arr[j-1]){
        arr[i]=j;
        i=j;
      }
      else arr[j]=j;
      j++;
    }
    arr[i]=j;
    for(int i:arr)cout<<i<<" ";
    cout<<endl;
}
}