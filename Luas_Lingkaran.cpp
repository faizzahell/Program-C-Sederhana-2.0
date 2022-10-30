#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// In use variable for program Luas lingkaran
    int pilihan;
    const float phi = 3.14;
    float hasil,bilangan;
    string operasi,rumus,tambahan;
    
    // main menu user interface program
    cout << "====================================================" << endl;
    cout << "---------------Menghitung Luas Lingkaran------------" << endl;
    cout << "====================================================" << endl << endl;
    cout << " 1. Menghitung luas lingkaran menggunakan Jari-jari" << endl;
    cout << " 2. Menghitung luas lingkaran menggunakan Diameter" << endl << endl;
    cout << "----------------------------------------------------" << endl;
    cout << " Masukkan pilihan operasi  :  "; cin >> pilihan;
    
    // function to declare pilihan and bilangan
    if (pilihan == 1){
        cout << " Masukkan Jari-jari (cm)   :  "; cin >> bilangan;
        hasil = phi * bilangan * bilangan;
        operasi ="jari-jari";
        rumus = "Lo = phi x r x r";
        tambahan = "";
    } else if (pilihan == 2){
        cout << " Masukkan Diameter (cm)   :  "; cin >> bilangan;
        hasil = phi * bilangan * bilangan / 4;
        operasi = "diameter";
        rumus = "Lo = 1/4 x phi x d x d";
        tambahan = "1/4 x ";
    } else {
    	cout << endl;
    	cout << "------------------!!! PERINGATAN !!!----------------" << endl << endl;
        cout << " Pilihan yang dimasukan salah." << endl << " Silahkan memasukan pilihan dengan benar!!!" << endl << endl;
        return main();
    }

    float jumlah = bilangan * bilangan;

    cout << "----------------------------------------------------" << endl;
    cout << endl;
    
    // program output from luas lingkaran
    cout << "====================================================" << endl;
    cout << " Hasil Luas lingkaran dari : " << operasi << " bernilai " << bilangan << " cm" << endl << endl;
    cout << " " << rumus << endl;
    cout << "    = " << tambahan << "3,14 x " << bilangan << " x " << bilangan << endl;
    cout << "    = " << tambahan << "3,14 x " << jumlah << endl;
    cout << "    = " << hasil << " cm2" << endl;
    cout << "====================================================" << endl;

    getch();
    return 0;
}
