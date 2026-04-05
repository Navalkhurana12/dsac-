#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<vector<long long>>arr(n,vector<long long>(2));
    for(long long i=0;i<n;i++){
      cin>>arr[i][0];
      cin>>arr[i][1];
    }

    if(a-1<k&&b-1<k){
      cout<<0<<endl;
      continue;
    }
    if(k==0){
      cout<<(abs(arr[a-1][0]-arr[b-1][0])+abs(arr[a-1][1]-arr[b-1][1]))<<endl;
      continue;
    }
    long long mina=LLONG_MAX,minb=LLONG_MAX;
    for(int i=0;i<k;i++){
      mina=min(mina,(abs(arr[i][0]-arr[a-1][0]))+(abs(arr[i][1]-arr[a-1][1])));
      minb=min(minb,(abs(arr[i][0]-arr[b-1][0]))+(abs(arr[i][1]-arr[b-1][1])));
    }
    long long res=mina+minb;
     res=min(res,(abs(arr[a-1][0]-arr[b-1][0])+abs(arr[a-1][1]-arr[b-1][1])));
    cout<<res<<endl;
    }
}