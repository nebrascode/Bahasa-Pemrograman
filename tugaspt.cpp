#include <iostream>
using namespace std;

int main () {
    string Namalengkap, Alamat;
    int harga=500000, jumlahtiket,totalpembayaran;

    cout<<"PEMBAYARAN TIKET KONSER"<<endl;
    cout<<"Harga Tiket rp500.000/item" <<endl;
    cout<<"Data Pembeli" <<endl;
    cout<<"Nama Lengkap : " ;
    getline (cin,Namalengkap);
    cout<<"Alamat Pengiriman: ";
    getline (cin, Alamat);
    cout<<"Jumlah Tiket : ";
    cin>>jumlahtiket;

    totalpembayaran=jumlahtiket*harga;
    cout<<"Total pembayaran : " <<totalpembayaran;
}