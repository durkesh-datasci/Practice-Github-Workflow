#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ts;
    cin>>ts;
    while(ts--){
        int n;
        cin>>n;
        vector<int> arr(n);
        int sum=0;
        for(int i=0;i<n;i++){
        	cin>>arr[i];
        	sum=max(sum,arr[i]);
        }
        cout<<(sum*n)<<"\n";
    }
    return 0;
}