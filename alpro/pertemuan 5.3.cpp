#include <iostream>

using namespace std;

void Fibonacci(int y);

int main()
{
    cout<<"SELAMAT DATANG DI PROGRAM DERET FIBONACCI"<<endl<<endl;

    //deklarasi variabel
    int y;

    //meminta user memasukkan angka untuk deret fibonacci yang diinginkan
    cout<<"Masukkan Angka Yang Di Inginkan Untuk Deret Fibonacci : ";
    cin>>y;

    // menampilkan output deret fibonacci
    cout<<"\nBerikut Adalah " << y << " Deret Fibonacci Yang Anda Inginkan : ";

    //memanggil fungsi parameter untuk memunculkan deret fibonacci
    Fibonacci(y);

    cout<<"\n\nSELAMAT DERET FIBONACCI TELAH DITEMUKAN"<<endl;

    return 0;
}
    //fungsi menampilkan deret fibonacci
    void Fibonacci(int n){
        int a=0;//deklarasi variabel dan inisialisasi
        int b=1;//deklarasi variabel dan inisialisasi

    //looping untuk membuat deret fibonacci
    for (int m = 0; m < n; m++) {
        cout << a << " ";//menampilkan angka

        int c=a + b;//dijumlah untuk menghitung angka selanjutnya deret fibonacci
            a=b;//menggeser angka sebelumnya menjadi angka saat ini
            b=c;//menggeser angka saat ini menjadi angka selanjutnya
    }
}
