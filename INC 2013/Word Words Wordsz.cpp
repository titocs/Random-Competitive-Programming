#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, Case, A = 0, B = 0, C = 0;
    string s;
    cin >> n;
    for(int i=1; i<=n; ++i){
        cin >> Case;
        while(Case--){
            cin >> s;
            if(s.length() == 4)
                A++;
            else if(s.length() == 5)
                B++;
            else if(s.length() == 6)
                C++;
        }
        cout << "Case #" << i << ": " << A << " " << B << " " << C << endl;
        A = 0; B = 0; C =0;
    }
}
