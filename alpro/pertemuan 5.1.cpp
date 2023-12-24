#include <iostream>

using namespace std;

void bilanganGanjil();
void faktorGanjil();
void bilanganGenap();
void faktorGenap();
void bilanganPrima();
void faktorPrima();

//deklarasi variabel
int batas;
int jumlahGanjil = 0;
int jumlahGenap = 0;
int jumlahPrima = 0;

int main()
{
    cout<<"SELAMAT DATANG DI PROGRAM MENAMPILKAN BILANGAN GANJIL,GENAP,PRIMA"<<endl;
    cout<<"                     BESERTA FAKTORNYA"<<endl;


    //masukkan angka untuk batas bilangan yang ingin dilihat bilangan ganjil,genap,prima serta faktornya
    cout<<"\nMasukkan batas bilangan : ";
    cin>>batas;

    //tampilan bilangan ganjil
    cout<<"\n1. Bilangan Ganjil\n";

    //memanggil fungsi bilangan ganjil
    bilanganGanjil();

    //menampilkan jumlah bilangan ganjil
    cout<<"\nJumlah bilangan ganjil dari angka 1 sampai " << batas << " adalah : " <<jumlahGanjil;

    //memanggil fungsi faktor bilangan ganjil
    faktorGanjil();

    cout<<endl<<endl;

    //tampilan bilangan genap
    cout<<"2. Bilangan Genap\n";

    //memanggil fungsi bilangan genap
    bilanganGenap();

    //menampilkan jumlah bilangan genap
    cout<<"\nJumlah bilangan genap dari angka 1 sampai " << batas << " adalah : " <<jumlahGenap;

    //memanggil fungsi faktor bilangan genap
    faktorGenap();

    cout<<endl<<endl;

    //tampilan bilangan genap
    cout<<"3. Bilangan Prima\n";

    //memanggil fungsi bilangan prima
    bilanganPrima();

    //menampilkan jumlah bilangan prima
    cout<<"\nJumlah bilangan prima dari angka 1 sampai " << batas << " adalah : " << jumlahPrima;

    //memanggil faktor bilangan prima
    faktorPrima();

    cout<<"\n\nSELAMAT BILANGAN GANJIL,GENAP,PRIMA,BESERTA FAKTORNYA TELAH DITENTUKAN"<<endl<<endl;

    return 0;
}

void bilanganGanjil(){
    //perulangan dari bilangan 1 hingga batas bilangan,hanya angka ganjil
    for (int a = 1; a <= batas; a++){
        if (a == 1){
            //menampilkan bilangan ganjil
            cout<<"\nBilangan ganjil dari angka 1 sampai " << batas << " adalah : ";
        }
        if (a % 2 != 0){
            cout<<a<<" ";//menampilkan hasil bilangan ganjil
            jumlahGanjil+=a;//memasukkan bilangan ganjil yang telah ditemukan untuk ditampilkan dan mencari faktornya
        }
      }
    }

void faktorGanjil(){

    //menampilkan faktor bilangan ganjil
    cout<<"\nFaktor dari jumlah bilangan ganjil adalah : ";

    //perulangan bilangan ganjil untuk mencari faktornya
    for (int b = 1; b <= jumlahGanjil; b++){
         if (jumlahGanjil % b == 0){
            cout << b << " ";//menampilkan faktor bilangan
         }
       }
    }

void bilanganGenap(){
    //perulangan dari bilangan 1 hingga batas bilangan,hanya angka genap
    for (int c = 1; c <= batas; c++){
        if (c == 1){
            //menampilkan bilangan genap
            cout<<"\nBilangan genap dari angka 1 sampai " << batas << " adalah : ";
        }
        if (c % 2 == 0){
            cout << c << " ";//menampilkan hasil bilangan genap
            jumlahGenap+=c;//memasukkan bilangan genap yang telah ditemukan untuk ditampilkan dan mencari faktornya
        }
      }
    }

void faktorGenap(){

     //menampilkan faktor bilangan genap
    cout<<"\nFaktor dari jumlah bilangan genap adalah : ";

    //perulangan bilangan genap untuk mencari faktornya
    for (int d = 1; d <= jumlahGenap; d++){
         if (jumlahGenap % d == 0){
            cout << d << " ";//menampilkan faktor bilangan
         }
       }
     }

void bilanganPrima(){
    //perulangan dari bilangan 1 hingga batas bilangan,hanya angka prima
    for (int e = 1; e <= batas; e++){
            if (e == 1){
                // memnampilkan bilangan prima
                cout<<"\nBilangan prima dari angka 1 sampai " << batas << " adalah : ";
            }
            //perulangan inner dari angka 2 (karna 1 adalah faktor dari semua bilangan) hingga angka yang diinput user,angka yang di ulang akan menjadi faktor
            for (int l = 2; l <= batas; l++){
                // jika faktor suatu angka bukan dirinya sendiri,maka dilewat
                 if (e % l == 0 && e != l){
                     break;
                //jika faktor suatu angka bernilai lebih dari 1 dan faktornya dirinya sendiri,maka tampilkan
                 } else if (e > 1 && e % l == 0 && e == l){
                    cout<< e << " ";//menampilkan bilangan prima
                    jumlahPrima+=e;//memasukkan bilangan ganjil yang telah ditemukan untuk ditampilkan dan mencari faktornya
          }
        }
      }
    }

void faktorPrima(){

    //menampilkan faktor bilangan genap
    cout<<"\nFaktor dari jumlah bilangan prima adalah : ";

   //perulangan bilangan genap untuk mencari faktornya
    for (int f = 1; f <= jumlahPrima; f++){
         if (jumlahPrima % f == 0){
             cout << f << " ";//hasil faktor bilangan prima
         }
       }
    }
