#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, result;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        result=ceil(sqrt(2*x));
        cout << result << endl;
    }
}
