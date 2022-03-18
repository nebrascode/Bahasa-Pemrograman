#include <iostream>
using namespace std; 

int main () {

    string Namalengkap, Alamat; 
    int harga=500000, jumlahtiket, totalpembayaran;
	
    cout<<"PEMBAYARAN PEMBELIAN TIKET KONSER" <<endl;
    cout<<"Harga Tiket = 500.000/item "<<endl;
    cout<<"DATA PEMBELI : " <<endl;
    cout<<"Nama Lengkap : ";
    getline (cin, Namalengkap);
    cout<<"Alamat Pengiriman : ";
    getline (cin, Alamat);
    cout<<"jumlah Tiket : ";
    cin>>jumlahtiket;

   totalpembayaran=jumlahtiket*harga;
    cout<<"Total Pembayaran : " <<totalpembayaran;
   	
}
