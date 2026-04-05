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
    int c1=0,e1=-1,c2=0,e2=-1;
    bool ans=false;
    for(int i=0;i<n;i++){
      if(e1==-1||arr[i]==e1){
        e1=arr[i];
        c1++;
      }
      else if(e2==-1||arr[i]==e2){
        e2=arr[i];
        c2++;
      }
      else {
        cout<<"No";
        ans=true;
        break;
      }
    }
    if(c1==0||c2==0 ){
      cout<<"YES";
      ans=true;
    }
    else if(ans==false){
      if(n%2==0 &&c1==c2){
        cout<<"YES";
      }
      else{
        if(c1==c2+1||c2==c1+1){
          cout<<"YES";
        }
        else{
          cout<<"NO";
        }
      }
    }
    cout<<endl;
  }
}