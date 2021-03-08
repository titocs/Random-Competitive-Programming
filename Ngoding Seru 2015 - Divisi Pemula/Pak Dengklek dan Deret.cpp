#include <stdio.h>
int main(){
    int i, j, x;
    scanf("%d", &x);
    for(i=1; i<=x; i++){
        printf("%d", i);
        for(j=0; j<1; j++){
            if(i==x){
                break;
            }
            cout << "+";
        }
    }
    return 0;
}
