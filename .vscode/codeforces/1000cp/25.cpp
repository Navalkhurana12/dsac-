#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<long long >arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    unordered_set<long long>st;
    bool ans=true;
    for(int i=0;i<n;i++){
      if(st.count(arr[i])){
        ans=false;
        break;
      }
   st.insert(arr[i]);
      
    }
    if(ans==false)cout<<"YES";
    else cout<<"NO";
    cout<<endl;
  }
}