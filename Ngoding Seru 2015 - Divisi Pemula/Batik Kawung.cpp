#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j, m;
    char o[1];
    //masukkan angka, karakter, angka lagi
    scanf("%d %s %d", &n, &o, &m);
    int Array[n][n];
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(i==j){
                printf("%d", m);
                continue;
            }
            if((i+j)==(n+1)) {
                printf("%d", m);
                continue;
            }
            printf("%s", o);
        }
        printf("\n");
    }
    return 0;
}
