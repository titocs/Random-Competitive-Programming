#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0; cin >> n;
    string s;
    // bool cek[26] = {
    //     "a", "b", "c", "d", "e", "f", "g", "h", "i",
    //     "j", "k", "l", "m", "n", "o", "p", "q", "r",
    //     "s", "t", "u", "v", "w", "x", "y", "z"
    // };
    for(int i=0; i<n; ++i){
        cin >> s;
        sort(s.begin(), s.end());
        int len = s.length();
        for(int j=0; j<len; ++j){
            if(s[j] != s[j+1])
                count++;
        }
        cout << count << endl;
        count = 0;
    }
}
