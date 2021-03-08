#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, j, x, mat[100];
    cin >> x;
    for(i=0; i<x; i++){
        cin >> mat[i];
    }
    for(i=x-1; i>=0; i--){
        cout << mat[i];
        for(j=0; j<1; j++){
            if(i==0){
                break;
            }
            cout << ",";
        }
    }
    return 0;
}
