#include <iostream>

using namespace std;

void tampilkanPiramida(int tinggi);

int main()
{
    cout<<"SELAMAT DATANG DI PROGRAM PIRAMIDA BINTANG"<<endl<<endl;

    //deklarasi variabel
    int piramida;

    //meminta user memasukkan angka untuk membuat piramida bintang
    cout<<"Masukkan Angka untuk membuat tinggi Piramida Bintang : ";
    cin>>piramida;

    //menampilkan piramida
    cout<<"\nTinggi Piramida Bintang Yang Anda Masukkan Adalah " << piramida << " Dan Akan Membentuk Piramida Seperti Ini "<<endl<<endl;

    //memanggil fungsi parameter untuk menampilkan piramida bintang
    tampilkanPiramida(piramida);

    cout<<"\nSELAMAT PIRAMIDA BINTANG TELAH DIBUAT"<<endl;

    return 0;
}
    //fungsi menampilkan piramida
    void tampilkanPiramida(int tinggi){
     //perulangan luar untuk membuat tinggi segitiga
    for(int j=1; j<=tinggi;  j++) {
        //perulangan dalam mendorong bintang ke kanan
        for(int k=1; k<=tinggi-j; k++){
                cout<<" ";
        }
        // loop untuk menampilkan bentuk segitiga
        for(int l=1; l<=j; l++) {
            cout<<" *";//menampilkan karakter bintangnya
        }
            //untuk menampilkan agar piramida vertikal
            cout<<endl;
    }
}
