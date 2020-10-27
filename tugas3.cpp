#include<iostream>
#include<iomanip>

using namespace std;
main(){
    int i[10] = {1,2,3,4,5,6,7,8,9,10};
    int j[10] = {1,2,3,4,5,6,7,8,9,10};

    cout<<"0";
    for ( int x = 1; x < 11; x++)
    {
        cout<<"   "<<x;
    }
    endl(cout);
    for (int a = 0; a < 10; a++)
    {
        cout<<i[a];
        for (int b = 0; b < 10; b++)
        {
            cout<<setw(4)<<i[a]*j[b];
        }
        endl(cout);
        
    }
    
    
}