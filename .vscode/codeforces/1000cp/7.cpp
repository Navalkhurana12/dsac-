#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    vector<long long >a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<long long>b(n);
    for(int i=0;i<n;i++)cin>>b[i];
    vector<int>acons(n,1);
    int cnt=1;
    for(int i=n-2;i>=0;i--){
      if(a[i]==a[i+1])cnt++;
      else cnt=1;
      acons[i]=cnt;
    }
    vector<int>p(n,1);
    cnt=1;
    for(int i=1;i<n;i++){
      if(a[i]==a[i-1])cnt++;
      else cnt=1;
      p[i]=cnt;
    }
    cnt=1;
    vector<int>pb(n,1);
    for(int i=1;i<n;i++){
      if(b[i]==b[i-1])cnt++;
      else cnt=1;
      pb[i]=cnt;
    }
    vector<int>bcons(n,1);
    cnt=1;
    for(int i=n-2;i>=0;i--){
      if(b[i]==b[i+1])cnt++;
      else cnt=1;
      bcons[i]=cnt;
    }
    int maxx=1;
    for(int i=0;i<n-1;i++){
      maxx=max(maxx,acons[i]);
      maxx=max(maxx,bcons[i]);
      if(a[i]==b[i])maxx=max(maxx,acons[i]+bcons[i]);
      if(a[i]==b[i+1])maxx=max(maxx,(acons[i]+bcons[i+1]));
      if(b[i]==a[i+1])maxx=max(maxx,(acons[i+1]+bcons[i]));
    }
    if(a[n-1]==b[n-1])maxx=max(maxx,acons[n-1]+bcons[n-1]);
    maxx=max(maxx,acons[n-1]);
    maxx=max(maxx,bcons[n-1]);
    for(int i=n-1;i>0;i--){
      maxx=max(maxx,p[i]);
      maxx=max(maxx,pb[i]);
      if(a[i]==b[i])maxx=max(maxx,p[i]+pb[i]);
      if(a[i]==b[i-1])maxx=max(maxx,(p[i]+pb[i-1]));
      if(b[i]==a[i-1])maxx=max(maxx,(pb[i]+p[i-1]));
    }
    if(a[0]==b[0])maxx=max(maxx,(p[0]+pb[0]));
    maxx=max(maxx,p[0]);
    maxx=max(maxx,pb[0]);
    cout<<maxx<<endl;
  }
}