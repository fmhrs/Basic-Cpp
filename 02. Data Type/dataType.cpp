// fmhrs.
// Materi 02. Data Type

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{

    // data type.
    // integer (int)    : angka.
    // float   (float)  : bilangan desimal.
    // char    (char)   : huruf / dapat 1 buah angka.
    // string  (string) : kumpulan huruf.

    char karakter;
    karakter = 'a';
    // char         : tipe data.
    // karakter     : variable.
    // variable     : wadah untuk menyimpan data yang sesuai dengan tipe data nya.
    // mengisi variable karakter dengan nilai 'a' di dalam nya.

    int angka = 160;
    float desimal = 0.5;
    string kalimat = "50 buku andi";
    // pengisian variable bisa setelah variable di deklarasikan terlebih dahulu seperti variable karakter
    // atau bisa juga langsung di isikan data saat pendeklarasian variable seperti variable angka, deismal, dan kalimat diatas

    cout << "char    : " << karakter << endl;
    cout << "angka   : " + to_string(angka) << endl;
    cout << "desimal : " << desimal << endl;
    cout << "kalimat : " + kalimat << endl;
    // menampilkan nilai variabel dengan menggunakan cout.
    // untuk menampilkan selain string harus menggunakan << tidak bisa menggunakan +.
    // namun untuk variable integer dapat menggunakan + dengan cara menambahkan library #include<string>
    // lalu menuliskan to_string(nama_variable).

    printf("\nchar\t: %c", karakter);
    printf("\nangka\t: %d", angka);
    printf("\ndesimal\t: %f", desimal);
    printf("\nkalimat\t: %s", kalimat.c_str());
    // %c untuk char.
    // %d untuk integer.
    // %f untuk float.
    // %s untuk string dengan syarat menambahkan .c_str() setelah nama_variable.

    return 0;
}