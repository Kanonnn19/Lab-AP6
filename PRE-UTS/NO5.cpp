//NO5
#include <iostream>
#include <cstdlib>
using namespace std;
int main() 
{
    system("cls");
    int angka[2];
    cout << "Masukkan dua angka: ";
    cin >> angka[0] >> angka[1];
    int a = angka[0];
    int b = angka[1];
    while (b != 0) 
    {
        int sisaBagi = a % b; 
        a = b;                
        b = sisaBagi;        
    }
    cout << "output : " << a << endl;
}