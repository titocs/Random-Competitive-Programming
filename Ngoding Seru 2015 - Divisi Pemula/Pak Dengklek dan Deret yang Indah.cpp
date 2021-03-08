#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, i, n, y;
    cin >> x >> n >> y;
    for(i=0; i<n; i++){
        if(x == y){
            for(i=x; i<=n; i++){
                cout << i << endl;
            }
        }
        else if( y<x ){
            for(i=1; i<=n; i++){
                cout << x << endl;
                x = x+y;
            }
        }
    }
    return 0;
}
