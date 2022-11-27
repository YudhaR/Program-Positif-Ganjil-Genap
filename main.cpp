#include <iostream>

/*
    Program positif ganjil genap
    Ket : Program Menentukan bilangan positif ganjil atau genap
    By  : Yudha Rizqia Grafer
    Tgl : 14 oktober 2022

*/

using namespace std;

int main()
{
    //Kamus
    int x;

    //Algoritma
    cout << "Masukkan Bilangan : ";
    cin >> x;
    if ( x > 0 ) {
         if ( x % 2 == 0 ){
             cout << "Bialangan Positif Genap" << endl;
         }
         else
        {
            cout << "Bialngan Positif Ganjil" << endl;
        }
    }
    else
    {
        cout << "Bukan Bilangan Positif" << endl;
    }
    cout << "Finish" << endl;
    return 0;
}
