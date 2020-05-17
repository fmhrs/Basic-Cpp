// fmhrs.
// Materi 04. Aritmathic.

#include <iostream>
using namespace std;

int main()
{

    int sepuluh = 10;
    int empat = 4;

    cout << "Variable empat    : " << empat << endl;
    cout << "Variable sepuluh  : " << sepuluh << endl;

    cout << "\n10 ditambah 4     : " << sepuluh + empat << endl;
    cout << "10 dikurang 4     : " << sepuluh - empat << endl;
    cout << "10 dikali 4       : " << float(sepuluh) / empat << endl; // untuk menampilkan koma setidak nya salah satu harus berupa float.
    cout << "10 dibagi 4       : " << sepuluh * empat << endl;
    cout << "10 sisah dibagi 4 : " << sepuluh % empat << endl; // % dibaca "modulo / modulus" adalah sisah dari pembagian.

    cout << "\n10 dikurangi 1    : " << sepuluh-- << endl; // sepuluh-- sama dengan sepuluh = sepuluh - 1
    cout << "4  datambah 1     : " << empat++ << endl;     // empat++ sama dengan empat = empat + 1

    cout << "\nVariable empat    : " << empat << endl; // karena sudah diberi -- maka nilai dari variable empat berkurang 1
    cout << "Variable sepuluh  : " << sepuluh << endl; // karena sudah diberi ++ maka nilai dari variable sepuluh bertambah 1

    return 0;
}