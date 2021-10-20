#include <iostream>
using namespace std;

int main(){
    int max = 0, min = 1000000, hasil, x, y;
    cin >> x >> y;
    int arr[x];
    for(int i=0; i<x; i++){
        cin >> arr[i];
        if(arr[i] > max)
            max = arr[i];
    }
    for(int i=0; i<x; i++){
        if(arr[i] < min && max + arr[i] >= y)
            min = arr[i];
    }
    hasil = max + min;
    cout << hasil << endl;
    return 0;
}
