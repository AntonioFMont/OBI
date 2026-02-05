#include <iostream>

using namespace std;

int main(){
    int B, L, C, quebrados = 0;
    cin >> B;

    for(int i = 0; i < B; i++){
        cin >> L >> C;
        if(L > C){
            quebrados += C;
        }
    }
    cout << quebrados;
}