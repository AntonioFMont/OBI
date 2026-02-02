#include <iostream>

using namespace std;

int main(){
    int p1, p2, c1, c2, result;
    cin >> p1 >> c1 >> p2 >> c2;

    if(p1 * c1 == p2 * c2){
        result = 0;
    } else if(p1 * c1 > p2 * c2){
        result = -1;
    } else{
        result = 1;
    }
    cout << result;
}