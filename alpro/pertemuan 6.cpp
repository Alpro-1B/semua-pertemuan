#include <iostream>
using namespace std;

int main(){

    int totalArr;
    int nilai[totalArr];
    char input;
    //deklarasi variable
    cout << "Masukkan nilai =";
    cin >> totalArr;
    for (int i = 0; i < totalArr; i++){ //menentukan nilai array akan dibawa kemana
        cout << "masukkan nilai ke-" << i+1 << "= ";
        cin >> nilai[i] ;
    }


    cout << "Nilai tertinggi: ";
    for (int j = 0; j < totalArr; j++){ //j lebih kecil dari nilai totalArr
        if (j+1 == totalArr){ //jika nilai j bertambah satu maka keluar lah output nilai j
            cout << nilai[j];
        } else if (nilai[j] > nilai[j+1]) { //jikaa nilai j lebih besar dari nilai j + i maka keluar nilai yang lebih bessar
                nilai[j+1] = nilai[j];
                nilai[j] = nilai[j+1];

        }
    }

    cout << " Apakah Anda ingin mengulangi program? (Y/N)"; // pengulangan jika user memasukkan huruf
    cin >> input;
    if (input == 'Y' || input == 'y'){
        goto awal;
    }

    return 0;

awal: 
    cout << "Mulai ulang program" << endl;
}
