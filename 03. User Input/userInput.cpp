// fmhrs.
// Materi 03. User Input.

#include <iostream> // cin >>, cout <<.
#include <string>   // getline(cin, string).
#include <sstream>  // stringstream(string)>>int.
#include <conio.h>  // getch().

using namespace std;

int main()
{
    // Deklarasi.
    string nama;
    string tempat_tinggal;
    string tanggal_lahir;
    short usia;

    cout << "----------Formulir Pendaftaran----------" << endl;
    cout << "Nama \t: "; // tidak diberikan endl agar user bisa memasukkan di sebelah kanan "Nama anda : "
    getline(cin, nama);  // getline digunalakn ketita ingin mengambil sebuah kalimat / megandung spasi.

    cout << "Usia \t: ";
    cin >> usia; // standar input user.

    cout << "Tempat tinggal \t: ";
    cin.ignore(100, '\n');        // untuk menghilangkan 1 spasi enter pada inputan sebelumnya
    getline(cin, tempat_tinggal); // simpel nya agar getline tempat_tinggal dapat di gunakan.

    cout << "Tanggal lahir \t: ";
    getline(cin, tanggal_lahir);

    system("cls"); // untuk membersihkan layar pada windows, apabila di mac atau linux dapat mengganti "cls" deang "clear".
    cout << "----------Formulir Pendaftaran----------" << endl;
    cout << "Nama               : " << nama << endl;
    cout << "Usia               : " << usia << endl;
    cout << "Tempat tinggal     : " << tempat_tinggal << endl;
    cout << "Tanggal lahir      : " << tanggal_lahir << endl;
    cout << "\nPress anything to continoue." << endl;
    getch(); // Salah satu fungsi pada library conio.h yang di include setelah iostream // untuk memberhentikan layar sampai keyboard ditekan.

    string mystr;
    int gaji;

    system("cls");
    cout << "---------Hitung Kenaikan Gaji------------" << endl;
    cout << "Gaji : ";
    getline(cin, mystr);
    stringstream(mystr) >> gaji; // mengubah angka terdepan string ke int
    cout << "\n---------Hitung Kenaikan Gaji------------" << endl;
    cout << "Gaji yang anda peroleh bulan depan : " << gaji + (gaji * 0.3) << endl;
    return 0;
}