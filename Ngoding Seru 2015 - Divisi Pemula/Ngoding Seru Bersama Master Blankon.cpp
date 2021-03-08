#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    char s;	
    int pertama, kedua, ketiga;
    scanf("%d %d %d %c", &a, &b, &c, &s);
    if( s=='0'){
        if(a>b){
            if(b>c)
				pertama=a;kedua=b;ketiga=c;
            else{
                if(a>c)
                    pertama=a;kedua=c;ketiga=b; 
                else
                    pertama=c;kedua=a;ketiga=b;
            }
        }
    else{
        if(b>c){
            if(a>c)
                pertama=b;kedua=a;ketiga=c;
            else
                pertama=b;kedua=c;ketiga=a;
		}
        else{
            if(c>a){
                if(a>b)
                    pertama=c;kedua=a;ketiga=b;
                else
                    pertama=c;kedua=b;ketiga=a;
            }
		}
	}
}

if(s=='1'){
    if(a<b && a<c){
        if(b<c){
            pertama=a;
            kedua=b;
            ketiga=c;
        }
        else{
            pertama=a;
            kedua=c;
            ketiga=b;
        }
    }
    else if (b<a && b<c){
        if(a<c){
            pertama=b;
            kedua=a;
            ketiga=c;
        }
        else{
            pertama=b;
            kedua=c;
            ketiga=a;
        }
    }
	else{
        if(b<a){
            pertama=c;
            kedua=b;
            ketiga=a;
        }
        else
            pertama=c;
            kedua=a;
            ketiga=b;
    }	
}
    printf("%d %d %d", pertama, kedua, ketiga);
    return 0;
}
