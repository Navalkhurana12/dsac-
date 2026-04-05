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
    sort(arr.rbegin(),arr.rend());
    deque<int>q;
    int k=1;
    bool flag=true;
    long long sum=2*arr[0]*k;
    q.push_front(0);
    q.push_back(k);
    for(int i=1;i<n;i++){
      if(flag==false){
        k++;
        q.push_back(k);
        sum+=2*arr[i]*k;
        flag=true;
      }
      else{
        q.push_front(-k);
        sum+=2*arr[i]*k;
        flag=false;
      }
    }
    cout<<sum<<endl;
    for(int i:q)cout<<i<<" ";
    cout<<endl;
  }
}