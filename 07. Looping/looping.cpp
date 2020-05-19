// fmhrs.
// Materi 07. Looping.

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    // Looping :
    // 1. Looping for.
    // 2. Looping while.
    // 3. Looping do while

    int i;
    for (i = 0; i <= 10; i++)
    {
        cout << i << ". hello baby" << endl;
    }
    cout << i << ". karena i tidak <= 10 maka looping for berhenti" << endl;
    // i di set 0.
    // algoritma di dalam for akan berjalan selama i <= 10.
    // nilai variable i akan ditamabah 1 apabila algoritma dalam for telah selesai dijalankan.
    cout << "\nPress anything to continoue..." << endl;
    getch();

    while (i != 10)
    {
        system("cls");
        cout << "Masukan angka 10 untuk keluar dari while loop" << endl;
        cout << "Input number here : ";
        cin >> i;

        if (i == 10)
        {
            cout << "\nAngka yang anda masukan adalah adalah 10." << endl;
            cout << "Keluar dari while loop." << endl;
        }
        else
        {
            cout << "\nAngka yang anda masukan bukanlah angka 10." << endl;
            cout << "Kembali ke while loop." << endl;
        }
        cout << "\nPress anything to continoue..." << endl;
        getch();
    }
    // perbedaan antara while loop dengan for loop
    // for loop di gunakan apabila sudah di ketahui batas maksimal untuk melakukan perulangan.
    // while loop akan di gunakan apabila tidak diketahui batas maksimal untuk melakukan perulanang.

    do
    {
        system("cls");
        cout << "Number = " << i << endl;
        cout << "Masukan angka 10 untuk keluar dari while loop." << endl;
        cout << "Input number here : ";
        cin >> i;

        if (i == 10)
        {
            cout << "\nAngka yang anda masukan adalah adalah 10." << endl;
            cout << "Keluar dari do while loop." << endl;
        }
        else
        {
            cout << "\nAngka yang anda masukan bukanlah angka 10." << endl;
            cout << "Kembali ke do while loop." << endl;
        }
        cout << "\nPress anything to continoue..." << endl;
    } while (i != 10);

    cout << "\nProgram is destroyed" << endl;

    // perbedaan while loop dengan do while loop
    // while loop akan memeriksa kondisi apabila tidak sesuai dengan kondisi maka while loop tidak akan dieksekusi.
    // do while loop akan mengeksekusi code didalamnya setidaknya 1 kali proses eksekusi meskipun kondisi pada do while loop salah ataupun benar.

    return 0;
}