//goto
#include <iostream>
using namespace std;
int main() {
    //Laboratoium Ilkom
    // goto a;

    // b:
    // cout<<" Ilmu ";
    // goto c;

    // a:
    // cout<<"Laboratorium ";
    // goto b;

    // c:
    // cout<<" Komputer";

    int a=1;

    x:
    cout<<a<<" ";
    a++; //1 increment (+1) = 2

    if (a<=10){
        goto x;
    }
    
}