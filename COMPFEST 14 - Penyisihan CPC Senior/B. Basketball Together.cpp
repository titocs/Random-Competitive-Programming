#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <complex.h>
#include <complex>
#include <deque>
#include <forward_list>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <sstream>
#include <string>
#include <tuple>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;
using LL = long long;

int main(){
    int n, d;
    cin >> n >> d;
    
    vector<int> p(n);
    for(int i=0; i<n; i++){
        cin >> p[i];
    }
    sort(p.begin(), p.end(), greater<int>());
    
    int ans = 0;
    int r = n;
    for(int i=0; i<r; i++){
        int t = d / p[i] + 1;
        if(r - i < t){
            break;
        }
        r -= t - 1;
        ans++;
    }
    cout << ans << "\n";
    return 0;
}
