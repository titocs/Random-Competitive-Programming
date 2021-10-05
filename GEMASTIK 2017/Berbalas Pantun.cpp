#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, sum=0;
    cin >> n;
    long long a, b;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        sum + =n*a + n*b;
    }
    cout << sum;
}
