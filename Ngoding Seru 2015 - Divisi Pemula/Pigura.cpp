#include <iostream>
using namespace std;

int main(){
    int ukuran, sel;
    string karakter;
    cin >> ukuran >> karakter >> sel;
    if(ukuran%2 == 0){
        for(int i=0; i<ukuran; ++i){
            for(int j=0; j<ukuran; ++j){
                if(i == 0 || i == ukuran - 1)
                    cout << sel;
                else if(i >=1 && j == 0)
                    cout << sel;
                else if( i >= 1 && j < ukuran - 1)
                    cout << karakter;
                else
                    cout << sel;
            }
            cout << "\n";
        }
    }
    else{
        for(int i=0; i<ukuran; ++i){
            for(int j=0; j<ukuran; ++j){
                if(i == (ukuran - 1)/2 && j == (ukuran - 1)/2)
                    cout << "*";
                else if(i == 0 || i == ukuran - 1)
                    cout << sel;
                else if(i >=1 && j == 0)
                    cout << sel;
                else if( i >= 1 && j < ukuran - 1)
                    cout << karakter;
                else
                    cout << sel;
            }
            cout << "\n";
        }
    }   
}
