#include <iostream>
using namespace std;

int main(){
    int x, detik, menit, jam;
    cin >> x;
    jam = x/(60*60);
    x = x-((60*60)*jam);
    menit = x/60;
    x = x-(60*menit);
  
    cout << jam << "\n" << menit << "\n" << x << endl;
    return 0;
}
