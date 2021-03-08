#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string goku;
    int arr[n];
	
    for(int i=0; i<n; i++)
        cin >> arr[i];
    for(int i=0; i<n; i++){
        goku = "k";
    for(int k=0; k<arr[i]; k++)
        goku = goku + "a";
        goku = goku + "m";
    for(int k=0; k<arr[i]; k++)
        goku = goku + "e";
        goku = goku + "h";
    for(int k=0; k<arr[i]; k++)
        goku = goku + "a";
        goku = goku + "m";
    for(int k=0; k<arr[i]; k++)
        goku = goku + "e";
        goku = goku + "h";
    for(int k=0; k<arr[i]; k++)
        goku = goku + "a";
        cout << goku << "\n";	
    }
}
