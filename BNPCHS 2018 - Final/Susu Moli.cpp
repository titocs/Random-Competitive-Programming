#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, N, A, B, K;
    cin >> T;
    for(int i=1; i<=T; ++i){
        cin >> N >> A >> B >> K;
        for(int i=0; i<K; ++i){
            N -= A;
            N += B;
        }
        cout << "Kasus #" << i << ": " << N << endl;
    }
}
