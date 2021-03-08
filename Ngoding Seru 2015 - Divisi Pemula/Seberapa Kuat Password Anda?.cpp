#include <bits/stdc++.h>
using namespace std;

int main(){
    string p;
    cin >> p;
    int besar=0, kecil=0, angka=0, karakter=0;
    for(int i=0; i<p.length(); i++){
        if(p[i]>=65 && p[i]<=90)
            besar= besar + 1;
        else if(p[i]>=97 && p[i]<=122)
            kecil= kecil + 1;
        else if(p[i]>=48 && p[i]<=57)
            angka= angka + 1;
        else if(p[i]==33 || p[i]==63 || p[i]==95)
            karakter= karakter + 1;
    }
    if(p.length()>=8 && besar>0 && kecil>0 && angka>0 && karakter>0)
        cout << "Kuat" << "\n";
    else if(besar + kecil >= 12)
        cout << "AgakKuat" << "\n";
    else
        cout << "Lemah";
    return 0;
}
