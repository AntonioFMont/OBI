#include <iostream>

using namespace std;

int main(){
    int irmaoMeio, irmaoNovo, irmaoVelho;

    cin >> irmaoNovo >> irmaoMeio;

    irmaoVelho = irmaoMeio + (irmaoMeio - irmaoNovo);

    cout << irmaoVelho;

}