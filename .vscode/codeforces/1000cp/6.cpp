#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    long long k;
    cin>>k;
    long long q;
    cin>>q;
    vector<long long>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int cnt=0;
    int op=0;
    for(int i=0;i<n;i++){
      if(arr[i]<=q)cnt++;
      else cnt=0;
      if(cnt>=k)op+=(cnt-k+1);
    }
    cout<<op<<endl;
  }
}