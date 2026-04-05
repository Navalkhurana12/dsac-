#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        vector<pair<int,int>> arr1;

        for(int i=0;i<n;i++){
            cin >> arr[i];
            arr1.push_back({arr[i], i});
        }

        sort(arr1.begin(), arr1.end());

        vector<long long> pre(n);
        pre[0] = arr1[0].first;
        for(int i=1;i<n;i++){
            pre[i] = pre[i-1] + arr1[i].first;
        }

        vector<int> ans(n);
        ans[n-1] = n-1;

        // 🔥 core greedy logic (NO binary search needed)
        for(int i=n-2;i>=0;i--){
            if(pre[i] >= arr1[i+1].first){
                ans[i] = ans[i+1];
            } else {
                ans[i] = i;
            }
        }

        // map back to original order
        vector<int> res(n);
        for(int i=0;i<n;i++){
            res[arr1[i].second] = ans[i];
        }

        for(int x : res) cout << x << " ";
        cout << endl;
    }
}