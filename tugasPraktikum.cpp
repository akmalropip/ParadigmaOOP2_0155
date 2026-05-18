#include <iostream>
#include <string>
using namespace std;

// Membuat Abstract Base Class
class RekeningBank
{
protected:
    string namaNasabah;
    double saldo;

public:
    RekeningBank(string nama, double s)
    {
        namaNasabah = nama;
        saldo = s;
    }

    virtual void potongAdmin() = 0;

    void tampilkanSaldo()
    {
        cout << "Nama Nasabah : " << namaNasabah << endl;
        cout << "Saldo Akhir  : Rp " << saldo << endl;
    }

    virtual ~RekeningBank() {}
};
