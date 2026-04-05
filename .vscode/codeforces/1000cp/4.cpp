#include<bits/stdc++.h>
using namespace std;
static bool cmp(const vector<int>&a,const vector<int>&b){
 if(a[1]!=b[1])return a[1]<b[1];
 else return a[0]>b[0];
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<vector<int>>arr(n);
    int f=0,s=0;
    long long sum=0;
    for(int i=0;i<n;i++){
      int m;
      cin>>m;
      vector<int>arr1(m);
      for(int i=0;i<m;i++)cin>>arr1[i];
      sort(arr1.begin(),arr1.end());
      arr[i]=arr1;
    }
    sort(arr.begin(),arr.end(),cmp);
    int minn=arr[0][0];
    for(int i=1;i<n;i++){
      minn= min (minn,arr[i][0]);
      sum+=arr[i][1];
    }
    sum+=minn;
    cout<<sum<<endl;
  }
}