#include <bits/stdc++.h>
using namespace std;

int main(){
    int count = 0;
    int x[10009], y[10009];
    for(int i=0; i<3; ++i)
        cin >> x[i] >> y[i];

    if( (x[1] == x[2] && x[0] == x[2] && x[0] == x[1]) ||
        (y[0] == y[1] && y[0] == y[2] && y[2] == y[1]) ||
        (x[2]*y[0] == y[2]*x[0] && y[1]*x[0] == x[1]*y[0] && y[0]*x[2] == y[2]*x[0]) )
        cout << "-1";
    else if(x[0] == x[2] || x[0] == x[1] || x[1] == x[2])
        cout << "1";
    else
        cout << "0";
    return 0;
}
