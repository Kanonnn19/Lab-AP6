//NO4
#include <iostream>
#include <cstdlib>
using namespace std;
int main() 
{
    system("cls");
    int jumlahBaris;
    char karakter = 'A';
    cout << "Masukkan jumlah baris: ";
    cin >> jumlahBaris;
    for (int i = 1; i <= jumlahBaris; i++) {
        for (int j = 1; j <= i; j++) 
        {
            cout << karakter << " ";
        }
        cout << endl;
        karakter++;
        if (karakter > 'Z') 
        {
            karakter = 'A';
        }
    }
}