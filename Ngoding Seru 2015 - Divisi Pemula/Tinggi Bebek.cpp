#include <iostream>
using namespace std;

int maks(int a, int b, int c){ 
    if( a>b && a>c )
        return a;
    else if ( b>a && b>c )
        return b;
    else if ( c>a && c>b )
        return c;
}

int mins(int a, int b, int c){
    if(a<b && a<c)
        return a;
    else if( b<a && b<c)
        return b;
    else if( c<a && c<b )
        return c;
}

int tengah(int i, int j, int k, int l, int m){
    if( k<i && k>j ){
         return k;
    }
    else if( l<i && l>j){
        return l;
    }
    else if( m<i && m>j ){
        return m;
    }
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int max = maks(a, b, c);
    int min = mins(a, b ,c);
    int mid = tengah(max, min, a, b, c);
    cout << min << "\n" << max << "\n" << mid;
    return 0;
}
