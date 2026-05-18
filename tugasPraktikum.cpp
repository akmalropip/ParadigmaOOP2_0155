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

// Membuat Rekening Syariah
class RekeningSyariah : public RekeningBank
{
public:
    RekeningSyariah(string nama, double s)
        : RekeningBank(nama, s) {}

    void potongAdmin()
    {
        cout << "Rekening Syariah bebas biaya admin." << endl;
    }
};

// Membuat Rekening Konvensional
class RekeningKonvensional : public RekeningBank
{
public:
    RekeningKonvensional(string nama, double s)
        : RekeningBank(nama, s) {}

    void potongAdmin()
    {
        saldo -= 15000;
        cout << "Biaya admin Rp 15.000 dipotong." << endl;
    }
};

// Membuat Rekening Premium
class RekeningPremium : public RekeningBank
{
public:
    RekeningPremium(string nama, double s)
        : RekeningBank(nama, s) {}

    void potongAdmin()
    {
        if (saldo > 10000000)
        {
            cout << "Saldo di atas Rp 10.000.000, bebas biaya admin." << endl;
        }
        else
        {
            saldo -= 50000;
            cout << "Biaya admin Rp 50.000 dipotong." << endl;
        }
    }
};
