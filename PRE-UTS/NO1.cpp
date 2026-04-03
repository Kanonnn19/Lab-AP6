//NO1
#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
    system("cls");
    int angka[5];

    cout << "masukkan 5 angka: ";
    for (int i = 0; i <= 4; i++) 
    {
        cin >> angka[i];
    }
    cout << "output: ";
    for (int i = 4; i >= 0; i--) 
    {
        cout << angka[i] << " ";
    }
}