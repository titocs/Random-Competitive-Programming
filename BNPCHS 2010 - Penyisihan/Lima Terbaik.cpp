#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, temp, arr[99999], result=0;
    cin >> n;
    for(int it=0; it<n; it++){
        cin >> x;
        for(int i=0; i<x; i++){
            cin >> arr[i];
        }
        sort(arr, arr + x, greater<int>());
        for(int i=0; i<5; i++){
            result = result + arr[i];
        }
        cout << result << endl;
        result=0;
    }
}
