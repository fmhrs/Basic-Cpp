// fmhrs.
// Materi 08. Function.

#include <iostream>
using namespace std;

void jumlah(int angka1, int angka2 = 1)
{ // angka 2 = 1 maksudnya adalah apabila angka2 tidak diisi maka nilai dari angka 2 adalah 1.
    cout << "Hasil dari " << angka1 << " + " << angka2 << " = " << angka1 + angka2 << endl;
}

void jumlah(int angka1, int angka2, int angka3)
{ // fungsi bernama sama hanya dapat di tulis ulang apabila parameter yang memiliki fungsi sama tidak memiliki tipe data parameter yang sama pula
    cout << "Hasil dari " << angka1 << " + " << angka2 << " + " << angka3 << " = " << angka1 + angka2 + angka3 << endl;
}

int main()
{
    jumlah(1);
    jumlah(1, 1);
    jumlah(10, 100);
    jumlah(10, 100, 1000);
    return 0;
}