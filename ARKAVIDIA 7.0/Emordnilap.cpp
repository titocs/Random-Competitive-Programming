#pragma GCC optimize ("03")
#pragma GCC target ("sse4")

#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/rope>

using namespace std;
using namespace __gnu_pbds;
using namespace __gnu_cxx;

typedef long long int ll;
typedef long double ld;

#define pb push_back
#define mp make_pair
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound

const int dy[]={0, -1, 0, 1};
const int dx[]={-1, 0, 1, 0};
const int MOD = 1000000007;
const ll INF = 1e18;
const ld PI = 3.14159265358979;
const int MX = 200005;

int main(){
    string s;
    bool flag = false;
    getline(cin, s);
    int x = s.length();
    for(int i=0; i<x; i++){
        if(s[i]>=65 && s[i]<=90){
            s[i] = s[i]+32;
        }	
    }
    reverse(s.begin(), s.end());
    for(int i=0; i<x; i++){
        if((s[i]>=48 && s[i]<=57)|| (s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122))
            continue;
        else{
            flag = true;
            break;
        }			
    }
    if(!flag)
        cout << s;
    else
        cout << "Emor tidak beruntung :(";
}
