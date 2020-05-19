// fmhrs.
// Materi 06. Bitwise Operator.

#include <iostream>
using namespace std;

int main()
{
    // atau '||'
    // dan '&&'

    // and ===============================================

    int sepuluh = 10;
    int seratus = 100;
    if (sepuluh == 10 && seratus == 100)
    { // true && true
        cout << "true && true \t: tampil di if" << endl;
    }
    else
    {
        cout << "true && true \t: false" << endl;
    }

    if (sepuluh == 10 && seratus == 200)
    { // true && false
        cout << "true && false \t: true" << endl;
    }
    else
    {
        cout << "true && false \t: false" << endl;
    }

    if (sepuluh == 100 && seratus == 100)
    { // false && true
        cout << "false && true \t: true" << endl;
    }
    else
    {
        cout << "false && true \t: false" << endl;
    }

    if (sepuluh == 100 && seratus == 10)
    { // false && false
        cout << "false && false \t: true" << endl;
    }
    else
    {
        cout << "false && false \t: false" << endl;
    }

    cout << endl; // or ================================================

    if (sepuluh == 10 || seratus == 100)
    { // true || true
        cout << "true || true \t: true" << endl;
    }
    else
    {
        cout << "true || true \t: false" << endl;
    }

    if (sepuluh == 10 || seratus == 200)
    { // true || false
        cout << "true || false \t: true" << endl;
    }
    else
    {
        cout << "true || false \t: false" << endl;
    }

    if (sepuluh == 100 || seratus == 100)
    { // false || true
        cout << "false || true \t: true" << endl;
    }
    else
    {
        cout << "false || true \t: false" << endl;
    }

    if (sepuluh == 100 || seratus == 10)
    { // false || false
        cout << "false || false \t: true" << endl;
    }
    else
    {
        cout << "false || false \t: false" << endl;
    }
    return 0;
}