// fmhrs.
// Materi 05. Branching.

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");
    int data1, data2;

    cout << "-----Mencari Yang Lebih Besar-----" << endl;
    cout << "Angka pertama : ";
    cin >> data1;
    cout << "Angka kedua   : ";
    cin >> data2;

    cout << "\nHasil : ";
    if (data1 == data2)
    { // jika angka pertama lebih besar daripada angka kedua
        cout << data1 << " = " << data2 << ".\nMaka angka pertama sama dengan angka kedua." << endl;
    }
    else if (data1 > data2)
    { // jika angka pertama lebih besar daripada angka kedua
        cout << data1 << " > " << data2 << ".\nMaka angka pertama lebih besar dari angka kedua." << endl;
    }
    else
    { // selain dua kemungkinan diatas // kemungkinan terakhir hanyalah jika angka pertama lebih kecil daripada angka kedua
        cout << data1 << " < " << data2 << ".\nMaka angka pertama lebih kecil dari angka kedua." << endl;
    }

    cout << "\nPress anything to the next program." << endl;
    getch();

    system("cls"); // ==============================================================================================
    char operasi_matematika;

    cout << "--------------Calculator--------------" << endl;
    cout << "Angka pertama      : ";
    cin >> data1;
    cout << "Operasi Aritmatika [ + , - , * , / ]." << endl;
    cout << "Operasi Aritmatika : ";
    cin >> operasi_matematika;
    cout << "Angka kedua        : ";
    cin >> data2;

    cout << "\nHasil perhitungan." << endl;
    switch (operasi_matematika) // percabangan sesuai variable operasi_matematika
    {
    case '+': // Jika variable operasi_matematika adalah '+'.
        cout << data1 << " " << operasi_matematika << " " << data2 << " = " << data1 + data2 << endl;
        break;
    case '-': // Jika variable operasi_matematika adalah '-'.
        cout << data1 << " " << operasi_matematika << " " << data2 << " = " << data1 - data2 << endl;
        break;
    case '*': // Jika variable operasi_matematika adalah '*'.
        cout << data1 << " " << operasi_matematika << " " << data2 << " = " << data1 * data2 << endl;
        break;
    case '/': // Jika variable operasi_matematika adalah '/'.
        cout << data1 << " " << operasi_matematika << " " << data2 << " = " << data1 / data2 << endl;
        break;
    default: // Jika variable operasi_matematika tidak ditemukan pada setiap case diatas.
        cout << "Operasi aritmatika tidak ditemukan" << endl;
        break;
    }

    // NoteBook.
    // algoritma dalam case akan dijalankan apabila variable pada switch sesuai dengan case yang ditentukan.
    // algoritma dalam default akan dijalankan apabila variable pada switch tidak adayang cocok dengan seluruh case.
    // break berguna agar algoritma pada switch case tidak melompat ke switchkase berikutnya.

    return 0;
}