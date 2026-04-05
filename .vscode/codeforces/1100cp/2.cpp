#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n;
    cin>>k;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    long long sum=0;
    int i=0;
    int maxx=0;
    long long ans=0;
    while(i<n&&i<k){
      sum+=a[i];
      maxx=max(maxx,b[i]);
      if(ans<(sum+(maxx*(k-i-1))))ans=sum+(maxx*(k-i-1));
      i++;
    }
    cout<<ans<<endl;
  }
}