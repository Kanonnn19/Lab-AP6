//NO3
#include <iostream>
#include <cstdlib> 
using namespace std;

int main() {
    system("cls");
    int baris;
    cout << "masukkan jumlah baris: ";
    cin >> baris;
    cout << "output: " << endl;
    for (int i = 0; i < baris; i++) {
        int nilai = 1;
        for (int j = 0; j <= i; j++) {
            cout << nilai << " ";
            nilai = nilai * (i + 1) / (j + 1); 
        }
        cout << endl;
    }
}