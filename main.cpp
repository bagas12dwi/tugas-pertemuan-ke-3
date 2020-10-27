#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

main(){
    int a = 0, b, c, jumlah = 0, i, n = 6, j, x ;
    cout << "-------------------------------------------\n";
    cout << "-----PROGRAM Menghitung 6 Suku Pertama-----\n";
    cout << "-------------------------------------------\n";
    cout <<"\n";
    cout << "Masukkan bilangan awal : ";
    cin >> a;
    j=a;
    for (i = 1; i <=6; i++)
    {
        cout<<a<<"^3 ";
        a++;
    }
    cout<<"\n";

    for (i = 1; i <=6; i++)
    {
        
        cout<<j*j*j<<" ";
        jumlah = jumlah + (j*j*j);
        j++;
    }

    cout << "\nJumlah 6 suku pertama : "<<jumlah;
    cout << "\n";
    
    
    
}