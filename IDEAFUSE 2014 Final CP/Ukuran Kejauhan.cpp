#include <bits/stdc++.h>
using namespace std;

int main(){
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i=0; i<n; i++){
        cin >> arr[i];
        long hasil=sqrt(arr[i]);
        cout << hasil << "^" << "2" << " = "<< hasil*hasil << "\n";
    }
}
