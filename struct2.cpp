#include <iostream>
using namespace std;

struct alamtDetail
{
    string desa;
    string kota;
};

struct mahasiswa
{
    string nama;
    string alamat;
    int umur;
};

int  main()
{
    // dekalarasi variabel struct
    mahasiswa mhs;
    // mengisi data
    cout << "Isikan data nama : ";
    cin >> mhs.nama;
    cout << "Isikan data alamat : ";
    cin >> mhs.alamat;
    cout << "Isikan data usia : ";
    cin >> mhs.umur;

    cout << "Data Mahasiswa" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat : " << mhs.alamat << endl;
    cout << "Usia : " << mhs.umur << endl;
}
