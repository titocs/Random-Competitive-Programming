#include <iostream>
using namespace std;

int main(){
    int K, N;
    cin >> K >> N;
    cout << "Think of a number, any number" << "\n";
    cout << "Multiply it by " << K <<"\n";
    cout << "Add " << K*N << " to your number" << "\n";
    cout << "Now, divide your total by " << K << "\n";
    cout << "Finally, subtract the result from the first number you pick" << "\n";
    cout << "BRAVO!!!" << "\n";
    cout << "Your answer is "<< N << "\n";
}
