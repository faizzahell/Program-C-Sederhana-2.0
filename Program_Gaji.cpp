#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    // Variable input karyawan
    char nama [50];
    int jam_lembur;
    const int gaji_pokok = 2500000;
    const int upah_lembur = 25000;
    const int pajak = 0.1;
    int total_gaji_lembur,gaji_kotor,gaji_bersih;

    // program interface input data
    cout << "==============================================================" << endl;
    cout << "--------------------PROGRAM GAJI KARYAWAN---------------------" << endl;
    cout << "==============================================================" << endl << endl;
    cout << " Nama Karyawan     : "; gets(nama);
    cout << " Jumlah Jam Lembur : "; cin >> jam_lembur;
    cout << endl;

     // function gaji karyawan
    total_gaji_lembur = jam_lembur * upah_lembur;
    gaji_kotor = gaji_pokok + total_gaji_lembur;
    gaji_bersih = gaji_kotor * (0.9);

    // program output gaji karyawan
    cout << "=============================================================" << endl;
    cout << "------------------------GAJI KARYAWAN------------------------" << endl;
    cout << "=============================================================" << endl << endl;
    cout << " Gaji Pokok  :  Rp " << gaji_pokok << ",00" << endl;
    cout << " Upah Lembur :  Rp " << upah_lembur << ",00" << endl;
    cout << " Pajak       :  10 %" << endl << endl;
    cout << "-------------------------------------------------------------" << endl << endl;
    cout << " Nama Karyawan     :  " << nama << endl;
    cout << " Jam lembur        :  " << jam_lembur << " jam" << endl;
    cout << " Gaji lembur       :  Rp " << total_gaji_lembur << ",00" << endl;
    cout << " Gaji Kotor        :  Rp " << gaji_kotor << ",00" << endl;
    cout << " Total gaji Bersih :  Rp " << gaji_bersih << ",00" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "--------------Gunakan gaji sebaik mungkin yaa:)--------------" << endl;
    cout << "-------------------------------------------------------------" << endl;

    getch();
    return 0;

}
