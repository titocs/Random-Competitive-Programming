#include <stdio.h>

int main(){
    int N, x=0;
    scanf("%d", &N);
    while(N){
        N = N/5;
        x = x + N;
    }
    printf("%d", x);
    return 0;
}
