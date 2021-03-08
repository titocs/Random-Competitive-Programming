#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin >> x;
    int arr[x];
    for(int i=0; i<x; i++){
        cin >> arr[i];
    }
    sort(arr, arr+x);
    for(int i=0; i<x; i++)
        cout << arr[i] << endl;
    return 0;
}
