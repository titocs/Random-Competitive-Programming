#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, N; cin >> T;
    while(T--){
        cin >> N;
        int maxx, minn, count_max = 0, count_min = 0;
        for(int i=0; i<N; ++i){
            int a, b, c;
            cin >> a >> b >> c;
            minn = min(a, min(b, c));
            maxx = max(a, max(b, c));

            count_min += minn;
            count_max += maxx;
        }
        cout << count_min << " " << count_max << endl;
        count_min = 0; count_max = 0;
    }
}
