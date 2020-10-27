#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

main(){
    int a = 3, b = 4, c, n, i, un=0;
    cout << "Masukkan banyak nya suku ke n  : ";
    cin >> n;
    cout << "Deret ke-"<< n << " : ";
    cout <<a<<" ";
    un = un +a;
    for (i = 0; i < n-1; i++)
    {
        c = a + b;
        a = c;
        cout << c << " ";
        un = un + c;
    }

    cout << "\nJumlah nya adalah : ";
    cout << un;
    
}