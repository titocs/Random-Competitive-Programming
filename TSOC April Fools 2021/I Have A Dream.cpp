#include <bits/stdc++.h>
using namespace std;

int main(){
    int x; cin >> x;
    int cek = 0;
    string s;
    while(x--){
        cin >> s;
        int len = s.length();
        for(int i=0; i<len; ++i){
            if(s[i] == 'i' || s[i] == 'I')
                cek += 1;
            else
                continue;
        }
        if(cek >= 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        cek = 0;
    }
}
