#include <iostream>

using namespace std;

int main(){
    bool A, B, C;
    cin >> A >> B >> C;

    if(A && !B && !C || !A && B && C){
        cout << "A";
    } else if(!A && B && !C || A && !B && C){
        cout << "B";
    } else if(!A && !B && C || A && B && !C){
        cout << "C";
    } else{
        cout << "*";
    }

}



/*
        Outra forma de fazer
int main() {
    bool A, B, C;
    cin >> A >> B >> C;

    if (A != B && A != C && B == C) {
        cout << "A";
    }
    else if (B != A && B != C && A == C) {
        cout << "B";
    }
    else if (C != A && C != B && A == B) {
        cout << "C";
    }
    else {
        cout << "*";
    }

    return 0;
}


*/