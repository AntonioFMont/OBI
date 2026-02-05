#include <iostream>

using namespace std;

int main(){
    int n, n2; 
    bool l1, l2 = 0;
    cin >> n;
    if (n % 2 == 0){
        l1 = 0;            
    } else{
        l1 = 1;
    }
    for(int i = 0; i < n; i++){
        cin >> n2;
        if(n2 == 2){
            l2 = !l2;               // humildemente achei genial
        }
    }
    cout << l1 << endl << l2;
}