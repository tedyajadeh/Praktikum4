#include <iostream>
using namespace std;
int main ()
{
    cout<< "                    Tedyajadeh                       "<< endl;
    cout<< "Tugas Praktikum4"<< "Program Menghitung Total Belanja"<< endl;
    cout<< "====================================================="<< endl;
    int jumlah_beli=0,total_beli=0,x,y,a;
    long int
    harga=0,harga_barang=0,total=0,bayar=0,diskon;
    cout<< "Masukkan Jumlah Barang (N) : "; cin>>y;
    x=1;

    while(x<=y)
    {
        cout<< "Barang Ke-"; cin>>a;
        cout<< "Masukkan Banyaknya Barang: "; cin>>jumlah_beli;
        cout<< "Masukkan Harga Barang:Rp"; cin>>harga;
        harga_barang = harga*jumlah_beli;
        total=total + harga_barang;
        total_beli += jumlah_beli;
        x++;
    }
    if(total>=1000000)
    {

        diskon=total*10/100;
    }
    else if (total>5000000&&total<1000000)
    {

        diskon=total*5/100;
    }else{
    diskon=0;
    }
    cout<< "====================================================" <<endl;
    bayar=total-diskon;
    cout<< "Total Barang Yang Di beli: "<<total_beli<<endl;
    cout<< "Total Semua Pembelian :Rp"<<total<<endl;
    cout<< "Mendapatkan Diskon sebesar :Rp"<<diskon<<endl;
    cout<< "Total Yang Harus Di bayar =Rp"<<bayar<<endl;
}
