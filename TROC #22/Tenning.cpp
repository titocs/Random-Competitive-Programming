#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int flag = s.find('0');
    cout << (flag < 0 ? "NO" : "YES");
}
