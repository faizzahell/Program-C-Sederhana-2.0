#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	// variable biodata
	char nama [50];
	char tempat [100];
	char tanggal_lahir [100];
	char alamat [100];
	char telepon [20];
	char agama [10];
	char kelamin [10];
	
	// function input gets user biodata
	cout << "=====================================================" << endl;
	cout << "------------SILAHKAN MEMASUKAN BIODATA ANDA----------" << endl;
	cout << "=====================================================" << endl << endl;
	cout << " Masukkan Nama           :  "; gets(nama);
	cout << " Masukkan Agama          :  "; gets(agama);
	cout << " Masukkan Alamat         :  "; gets(alamat);
	cout << " Masukkan Tempat lahir   :  "; gets(tempat);
	cout << " Masukkan Tanggal Lahir  :  "; gets(tanggal_lahir);
	cout << " Masukkan Nomor Telepon  :  "; gets(telepon);
	cout << " Masukkan Jenis Kelamin  :  "; gets(kelamin);
	cout << "-----------------------------------------------------" << endl;
	
	// output who inputed from function gets user biodata 
	cout << endl;
	cout << "=====================================================" << endl;
	cout << "-------------------BIODATA MAHASISWA-----------------" << endl;
	cout << "=====================================================" << endl << endl;
	cout << " Nama             :  " << nama << endl;
	cout << " Agama            :  " << agama<< endl;
	cout << " Alamat           :  " << alamat<< endl;
	cout << " Tempat Lahir     :  " << tempat<< endl;
	cout << " Tanggal Lahir    :  " << tanggal_lahir<< endl;
	cout << " Nomor Telepon    :  " << telepon<< endl;
	cout << " Jenis Kelamin    :  " << kelamin<< endl;
	cout << "-----------------------------------------------------" << endl;

	getch();
	return 0;
	
}

