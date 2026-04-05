#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      long long  n;
      cin>>n;
      vector<long long>arr(n);
      for(int i=0;i<n;i++)cin>>arr[i];
      vector<long long >pre(n);
      pre[0]=arr[0];
      for(int i=1;i<n;i++){
        pre[i]=arr[i]+pre[i-1];
      }
      if(n==1){
        cout<<0<<endl;
        continue;
      }
      long long result=0;
      for(long long j=1;j<=n;j++){
        if(n%j!=0)continue;
        long long p=-1;
        long long i=j-1;
        long long maxx=LLONG_MIN;
        long long minn=LLONG_MAX;
        while(i<n){
         long long k=pre[i];
         if(p!=-1)k=k-pre[p];
         maxx=max(maxx,k);
         minn=min(minn,k);
         p=i;
         i=i+j;
        }
        result=max(result,abs(maxx-minn));
      }
      cout<<result<<endl;
    }
}