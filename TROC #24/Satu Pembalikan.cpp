#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans = 0; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    for(int i=0; i<n; ++i){
        int temp; cin >> temp;
        if(arr[i] == temp)
            ans++;
    }
    cout << ans;
}
