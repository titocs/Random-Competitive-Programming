#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int count = 1, temp = 1;
    for(int i=1; i<s.length(); ++i){
        if(s[i] != s[i-1]){
            count++;
        }
        else{
            temp = max(temp, count);
            count = 1;
        }
    }
    cout << max(temp,count);
}
