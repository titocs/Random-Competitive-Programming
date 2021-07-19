#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
    vector<int> arr;
    cin >> t;
    for(int i=1; i<=t; ++i){
        cin >> n;
        for(int j=0; j<n; ++j){
            int masukan; cin >> masukan;
            arr.push_back(masukan);
        }
        cout << "Case #" << i << ": " << min(arr[0], arr[n-1]) << endl;
        arr.clear();
    }
}
