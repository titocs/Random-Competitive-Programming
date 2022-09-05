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
    LL n;
    cin >> n; // 3
    if(n == 1){
        cout << 3 << endl;
        return 0;
    }
    n += 2;
    if(n % 3 == 0) cout << n / 3 * 4 << endl;
    else if(n % 3 == 1) cout << n / 3 * 4 + 1 << endl;
    else cout << n / 3 * 4 + 3 << endl;
}
