#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int sum=0;
    for(int i=0;i<n;i++)sum+=arr[i];
    if(sum%2==0)cout<<"YES";
    else cout<<"NO";
    cout<<endl;
  }
}