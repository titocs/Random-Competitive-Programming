#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin >> s){
        int count = 0;
        string temp = s;
        sort(temp.begin(), temp.end());
        for(int i=0; i<s.length(); ++i){
            if(s[i] != temp[i]){
                for(int j=0; j<s.length(); ++j){
                    if(s[j] == temp[i]){
                        swap(s[i], s[j]);
                        count++;
                        break;
                    }
                }
            }
        }
        cout << count << endl;
    }
}
