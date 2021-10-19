#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    for(int i=1; i<=n; ++i){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    if(n>=3) swap(v[1], v[n-1]);
    for(int a: v){
        cout << a << ' ';
    }
}
