#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin >> tt;
    for(int i=1; i<=tt; ++i){
        int n, count = 0; cin >> n;
        vector<int> arr(n), temp;
        for(int i=0; i<n; ++i){
            cin >> arr[i];
            temp.push_back(arr[i]);
        }
        sort(temp.begin(), temp.end());
        for(int i=0; i<n; ++i){
            if(arr[i] != temp[i])
                count++;
        }
        cout << "Case #" << i << ": " << count << '\n';
    }
}
