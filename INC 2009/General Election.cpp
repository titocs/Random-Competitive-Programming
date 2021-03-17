#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, N, M, count = 0;
    cin >> T;
    for(int i=0; i<T; ++i){
        cin >> N >> M;
        vector<int> v;
        int arr[N+100][M+100];
        for(int j=0; j<M; ++j){
            for(int k=0; k<N; ++k){
                cin >> arr[j][k];
            }
        }
        for(int j=0; j<N; ++j){
            for(int k=0; k<M; ++k){
                count += arr[k][j];
            }
            v.push_back(count);
            count = 0;
        }
        int maks = std::max_element(v.begin(), v.end()) - v.begin();
        cout << maks + 1 << endl;
        v.clear();
    }
}
