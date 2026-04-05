#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,q;
    cin>>n>>q;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    vector<int>p(n+1);
    int sum=0;
    for(int i=0;i<n;i++){
      p[i]=sum;
      sum+=arr[i];
    }
    p[n]=sum;
    while(q--){
      int l,r,k;
      cin>>l>>r>>k;
      int s=sum;
      s=s-p[r]+p[l-1];
      s=s+(k*(r-l+1));
      if(s%2!=0)cout<<"YES";
      else cout<<"NO";
      cout<<endl;
    }
  }
}