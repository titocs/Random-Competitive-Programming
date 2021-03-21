#include <stdio.h>
#include <string.h>

int main(){
    int sum=0, i;
    char dunia1[] = {'h', 'a', 'l', 'o', ' ', 'd', 'u', 'n', 'i', 'a'};
    char dunia2[] = {'H', 'A', 'L', 'O', ' ', 'D', 'U', 'N', 'I', 'A'};
    char string[12];
    gets(string);
    char world[] = "halo dunia";
    int len = strlen(world);
    for(i=0; i<len; i++){
        if(string[i] == dunia1[i] || string[i] == dunia2[i] ){
            sum = sum+1;
        }
    }
    printf("%d", sum);
    return 0;
}
