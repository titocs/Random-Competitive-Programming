#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, n, arr[10009];
    cin >> T;
    for(int i=0; i<T; ++i){
        int res=0, count=0;
        cin >> n;
        for(int i=0; i<n; ++i){
            cin >> arr[i];
            count += arr[i];
        }
        for(int i=0; i<n; ++i)
            if(arr[i]*n < count)
                res++;
        cout << res << endl;
    }
}
