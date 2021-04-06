#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        string s; cin >> s;
        int len = s.length();
        for(int i=0; i<len; ++i){
            if(i % 2 == 0){
                s[i] = s[i] - 32;
            }
        }
        cout << s << endl;
    }
}
