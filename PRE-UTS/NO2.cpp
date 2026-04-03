//NO2
#include <iostream>
#include <cstdlib>
using namespace std;
int main() 
{
    system("cls"); 
    int angka;
    cout << "masukkan angka: ";
    cin >> angka;
    int kuadrat = angka * angka;
    int jumlahdigit = 0;
    int temp = kuadrat;

    while (temp > 0) {
        jumlahdigit += temp % 10;
        temp /= 10;
    }
    cout << "output: ";
    if (jumlahdigit == angka) {
        cout << "angka neon" << endl;
    } else {
        cout << "bukan angka neon" << endl;
    }
}