#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    ll n, sum=0;
    cin >> n;
    ll a, b;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        sum+=n*a + n*b;
    }
    cout << sum;
}
