#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int a, b, c, d, n;
    cin >> n;
    while(n--){
        cin >> a >> b >> c >> d;
        cout << (c - a) + (d - b) << endl;
    }
}
