// fmhrs.
// Materi 01. print.

#include <iostream> // mengunakan beberapa fungsi input output yang tersediaa pada library "iostream" seperti cout
using namespace std;

int main()
{
    cout << "Hello My Master :D" << endl;
    // cout : memperlihatkan apapun yang ada diantara '<<' dan '"'.
    // endl : untuk memberikan spasi 1 line pada program.

    cout << "Hello "; // <- tanpa menggunakan endl kata kata "My Another Master" akan di taruh di sebelah akata hello.
    cout << "My Another Master :D" << endl;

    cout << "\nname \t: Developer" << endl;
    cout << "npm \t: 1234567890" << endl;
    // \n : memberikan spasi 1 line seperti endl.
    // \t : memberikan spasi 1 tab pada program.

    printf("trimakasih telah mencoba program saya :D ");
    // printf singkatan dari print format, ini akan berguna saat anda telah mempelajari data type / tipe data.

    // garis miring dua adalah comment, program tidak akan mengeksekusi kata-kata apapun seletah garis miring 2.
    // garis miring 2 juga biasa disebut dengan single comment karena hanya 1 baris setelah // nya lah yang tidak di eksekusi.
    // berbeda dengan singgle comment, Multiple comment tidak akan mengeksekusi apapun yang ada di antara /* an */ tak akan di eksekusi oleh program.

    return 0; // mengakhiri program.
}