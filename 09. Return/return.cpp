// fmhrs.
// Materi 09. Return.

#include <iostream>
using namespace std;

string fullName(string first_name, string last_name)
{
    string full_name = first_name + " " + last_name;
    return full_name;
}

int kuadrat(int angka)
{
    return angka * angka;
}

int main()
{
    cout << "Nilai dari 10 kuadrat adalah : " << kuadrat(10) << endl;
    int kuadrat_12 = kuadrat(12);
    cout << "Nilai dari 12 kuadrat adalah :" << kuadrat_12 << endl;

    string first_name;
    string last_name;
    cout << "\n====================================" << endl;
    cout << "first name : ";
    cin >> first_name;
    cout << "last name : ";
    cin >> last_name;
    cout << "\nYour full name is : " << fullName(first_name, last_name) << endl;

    return 0;
}