
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

string ulang;
int usia, pendidikan, pekerjaan, pendapatan, anak;
double data_miskin, data_tidakmiskin, jumlah_data;
double a, b, usia_miskin, usia_tidakmiskin;
double c, d, pendidikan_miskin, pendidikan_tidakmiskin;
double e, f, pekerjaan_miskin, pekerjaan_tidakmiskin;
double g, h, pendapatan_miskin, pendapatan_tidakmiskin;
double i, j, anak_miskin, anak_tidakmiskin;
double prob_miskin, prob_tidakmiskin;
double hasil_miskin, hasil_tidakmiskin;

void usia1(int usia, int pendidikan, int pekerjaan, int pendapatan, int anak);
void pendidikan1(int pendidikan, int pekerjaan, int pendapatan, int anak);
void pendidikan2(int pendidikan, int pekerjaan, int pendapatan, int anak);
void pendidikan3(int pendidikan, int pekerjaan, int pendapatan, int anak);
void pendidikan4(int pendidikan, int pekerjaan, int pendapatan, int anak);
void pekerjaan1(int pekerjaan, int pendapatan, int anak);
void pekerjaan2(int pekerjaan, int pendapatan, int anak);
void pekerjaan3(int pekerjaan, int pendapatan, int anak);
void pekerjaan4(int pekerjaan, int pendapatan, int anak);
void pekerjaan5(int pekerjaan, int pendapatan, int anak);
void pekerjaan6(int pekerjaan, int pendapatan, int anak);
void pekerjaan7(int pekerjaan, int pendapatan, int anak);
void pendapatan1(int pendapatan, int anak);
void pendapatan2(int pendapatan, int anak);
void pendapatan3(int pendapatan, int anak);
void pendapatan4(int pendapatan, int anak);
void pendapatan5(int pendapatan, int anak);
void pendapatan6(int pendapatan, int anak);
void anak1(int anak);
void anak2(int anak);
void anak3(int anak);
void anak4(int anak);
void hasil();


int main()
{
	do
	{
		cout<<"----------------------------------------------------------"<<endl;
		cout<<"===================PROGRAM NAIVE BAIYES==================="<<endl;
		cout<<"=====KLASIFIKASI PENERIMA KARTU INDONESIA SEHAT (KIS)====="<<endl;
		cout<<"----------------------------------------------------------"<<endl;
	
		cout<<"Klasifikasi Kelas Usia \n1. <=20 tahun \n2. 21-40 tahun \n3. 41-60 tahun \n4. >60 tahun"<<endl;
		cout<<"Masukkan Usia : "; 
		cin>>usia;
		cout<<"\n\nKlasifikasi Kelas Pendidikan Terakhir \n1. Tidak Sekolah \n2. Tamat SD \n3. SLTP ";
		cout<<"\n4. SLTA \n5. Akademi/Diploma III \n6. Diploma IV/Strata I \n7. Strata II"<<endl;
		cout<<"Masukkan Pendidikan Terakhir : "; 
		cin>>pendidikan;
		cout<<"\n\nKlasifikasi Kelas Pekerjaan \n1. Tidak Bekerja/Ibu Rumah Tangga \n2. Buruh Harian Lepas ";
		cout<<"\n3. Karyawan Swasta \n4. Wiraswasta \n5. TNI/POLRI/PNS \n6. Pensiunan"<<endl;
		cout<<"Masukkan Pekerjaan : "; 
		cin>>pekerjaan;
		cout<<"\n\nKlasifikasi Kelas Pendapatan \n1. Rendah \n2. Cukup \n3. Tinggi \n4. Sangat Tinggi"<<endl;
		cout<<"Masukkan Pendapatan : "; 
		cin>>pendapatan;
		cout<<"\n\nKlasifikasi Kelas Tanggungan Anak \n1. Tidak Memiliki Anak \n2. 1 Anak ";
		cout<<"\n3. 2 Anak \n4. 3 Anak atau Lebih"<<endl;
		cout<<"Masukkan Tanggungan Anak : "; 
		cin>>anak;
		cout<<endl<<endl;
		
		jumlah_data = 30;
		data_miskin = 15;
		data_tidakmiskin = 15;
	
		usia1(usia, pendidikan, pekerjaan, pendapatan, anak); //masuk kedalam fungsi proses
  	
  		cout<<"Apakah Anda Ingin Memasukkan Data Lain (y/t)? "; //fungsi untuk mengulang kembali program 
    	cin>>ulang;
    	cout<<endl;
    	system("cls");
	}
	while (ulang != "t");

	return 0;
}

void usia1(int usia, int pendidikan, int pekerjaan, int pendapatan, int anak)
{
	if (usia == 1)
	{
		a = 0; //a=miskin
		b = 1; //b=tidak miskin
		usia_miskin = a/data_miskin;  
		usia_tidakmiskin = b/data_tidakmiskin ; 
		pendidikan1(pendidikan, pekerjaan, pendapatan, anak);
	}
	else if(usia == 2)
	{
		a = 3;
		b = 6; 
		usia_miskin = a/data_miskin;  
		usia_tidakmiskin = b/data_tidakmiskin ; 
		pendidikan2(pendidikan, pekerjaan, pendapatan, anak);
	}
	else if(usia == 3)
	{
		a = 6;
		b = 7; 
		usia_miskin = a/data_miskin;  
		usia_tidakmiskin = b/data_tidakmiskin ; 
		pendidikan3(pendidikan, pekerjaan, pendapatan, anak);
	}
	else if(usia == 4)
	{
		a = 4;
		b = 3; 
		usia_miskin = a/data_miskin;  
		usia_tidakmiskin = b/data_tidakmiskin ; 
		pendidikan4(pendidikan, pekerjaan, pendapatan, anak);
	}
	else 
	{
	cout<<"Pilihan Tidak Tersedia!\n";	
	}
}

void pendidikan1(int pendidikan, int pekerjaan, int pendapatan, int anak)
{
	if (pendidikan == 1)
	{
		c = 2; //c=miskin
		d = 0; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan1(pekerjaan, pendapatan, anak);
	}
	else if(pendidikan == 2)
	{
		c = 3; //c=miskin
		d = 0; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan2(pekerjaan, pendapatan, anak);
	}
	else if(pendidikan == 3)
	{
		c = 3; //c=miskin
		d = 1; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan3(pekerjaan, pendapatan, anak);
	}
	else if(pendidikan == 4)
	{
		c = 5; //c=miskin
		d = 5; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan4(pekerjaan, pendapatan, anak);
	}
	else if(pendidikan == 5)
	{
		c = 0; //c=miskin
		d = 5; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan5(pekerjaan, pendapatan, anak);
	}
	else if(pendidikan == 6)
	{
		c = 0; //c=miskin
		d = 5; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan6(pekerjaan, pendapatan, anak);
	}
	else if(pendidikan == 7)
	{
		c = 0; //c=miskin
		d = 1; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan7(pekerjaan, pendapatan, anak);
	}
	else 
	{
	cout<<"Pilihan Tidak Tersedia!\n";	
	}
}

void pendidikan2(int pendidikan, int pekerjaan, int pendapatan, int anak)
{
	if (pendidikan == 1)
	{
		c = 2; //c=miskin
		d = 0; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan1(pekerjaan, pendapatan, anak);
	}
	else if(pendidikan == 2)
	{
		c = 3; //c=miskin
		d = 0; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan2(pekerjaan, pendapatan, anak);
	}
	else if(pendidikan == 3)
	{
		c = 3; //c=miskin
		d = 1; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan3(pekerjaan, pendapatan, anak);
	}
	else if(pendidikan == 4)
	{
		c = 5; //c=miskin
		d = 5; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan4(pekerjaan, pendapatan, anak);
	}
	else if(pendidikan == 5)
	{
		c = 0; //c=miskin
		d = 5; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan5(pekerjaan, pendapatan, anak);
	}
	else if(pendidikan == 6)
	{
		c = 0; //c=miskin
		d = 5; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan6(pekerjaan, pendapatan, anak);
	}
	else if(pendidikan == 7)
	{
		c = 0; //c=miskin
		d = 1; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan7(pekerjaan, pendapatan, anak);
	}
	else 
	{
	cout<<"Pilihan Tidak Tersedia!";	
	}
}

void pendidikan3(int pendidikan, int pekerjaan, int pendapatan, int anak)
{
	if (pendidikan == 1)
	{
		c = 2; //c=miskin
		d = 0; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan1(pekerjaan, pendapatan, anak);
	}
	else if(pendidikan == 2)
	{
		c = 3; //c=miskin
		d = 0; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan2(pekerjaan, pendapatan, anak);
	}
	else if(pendidikan == 3)
	{
		c = 3; //c=miskin
		d = 1; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan3(pekerjaan, pendapatan, anak);
	}
	else if(pendidikan == 4)
	{
		c = 5; //c=miskin
		d = 5; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan4(pekerjaan, pendapatan, anak);
	}
	else if(pendidikan == 5)
	{
		c = 0; //c=miskin
		d = 5; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan5(pekerjaan, pendapatan, anak);
	}
	else if(pendidikan == 6)
	{
		c = 0; //c=miskin
		d = 5; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan6(pekerjaan, pendapatan, anak);
	}
	else if(pendidikan == 7)
	{
		c = 0; //c=miskin
		d = 1; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan7(pekerjaan, pendapatan, anak);
	}
	else 
	{
	cout<<"Pilihan Tidak Tersedia!";	
	}
}

void pendidikan4(int pendidikan, int pekerjaan, int pendapatan, int anak)
{
	if (pendidikan == 1)
	{
		c = 2; //c=miskin
		d = 0; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan1(pekerjaan, pendapatan, anak);
	}
	else if(pendidikan == 2)
	{
		c = 3; //c=miskin
		d = 0; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan2(pekerjaan, pendapatan, anak);
	}
	else if(pendidikan == 3)
	{
		c = 3; //c=miskin
		d = 1; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan3(pekerjaan, pendapatan, anak);
	}
	else if(pendidikan == 4)
	{
		c = 5; //c=miskin
		d = 5; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan4(pekerjaan, pendapatan, anak);
	}
	else if(pendidikan == 5)
	{
		c = 0; //c=miskin
		d = 5; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan5(pekerjaan, pendapatan, anak);
	}
	else if(pendidikan == 6)
	{
		c = 0; //c=miskin
		d = 5; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan6(pekerjaan, pendapatan, anak);
	}
	else if(pendidikan == 7)
	{
		c = 0; //c=miskin
		d = 1; //d=tidak miskin
		pendidikan_miskin = c/data_miskin;  
		pendidikan_tidakmiskin = d/data_tidakmiskin ; 
		pekerjaan7(pekerjaan, pendapatan, anak);
	}
	else 
	{
	cout<<"Pilihan Tidak Tersedia!";	
	}
}


void pekerjaan1(int pekerjaan, int pendapatan, int anak)
{
	if (pekerjaan == 1)
	{
		e = 1; //e=miskin
		f = 0; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan1(pendapatan, anak);
	}
	else if(pekerjaan == 2)
	{
		e = 6; //e=miskin
		f = 0; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ;  
		pendapatan2(pendapatan, anak);
	}
	else if(pekerjaan == 3)
	{
		e = 2; //e=miskin
		f = 6; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan3(pendapatan, anak);
	}
	else if(pekerjaan == 4)
	{
		e = 4; //e=miskin
		f = 4; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ;  
		pendapatan4(pendapatan, anak);
	}
	else if(pekerjaan == 5)
	{
		e = 0; //e=miskin
		f = 4; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan5(pendapatan, anak);
	}
	else if(pekerjaan == 6)
	{
		e = 0; //e=miskin
		f = 3; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan6(pendapatan, anak);
	}
	else 
	{
	cout<<"Pilihan Tidak Tersedia!";	
	}
}


void pekerjaan2(int pekerjaan, int pendapatan, int anak)
{
	if (pekerjaan == 1)
	{
		e = 1; //e=miskin
		f = 0; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan1(pendapatan, anak);
	}
	else if(pekerjaan == 2)
	{
		e = 6; //e=miskin
		f = 0; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ;  
		pendapatan2(pendapatan, anak);
	}
	else if(pekerjaan == 3)
	{
		e = 2; //e=miskin
		f = 6; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan3(pendapatan, anak);
	}
	else if(pekerjaan == 4)
	{
		e = 4; //e=miskin
		f = 4; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ;  
		pendapatan4(pendapatan, anak);
	}
	else if(pekerjaan == 5)
	{
		e = 0; //e=miskin
		f = 4; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan5(pendapatan, anak);
	}
	else if(pekerjaan == 6)
	{
		e = 0; //e=miskin
		f = 3; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan6(pendapatan, anak);
	}
	else 
	{
	cout<<"Pilihan Tidak Tersedia!";	
	}
}

void pekerjaan3(int pekerjaan, int pendapatan, int anak)
{
	if (pekerjaan == 1)
	{
		e = 1; //e=miskin
		f = 0; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan1(pendapatan, anak);
	}
	else if(pekerjaan == 2)
	{
		e = 6; //e=miskin
		f = 0; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ;  
		pendapatan2(pendapatan, anak);
	}
	else if(pekerjaan == 3)
	{
		e = 2; //e=miskin
		f = 6; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan3(pendapatan, anak);
	}
	else if(pekerjaan == 4)
	{
		e = 4; //e=miskin
		f = 4; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ;  
		pendapatan4(pendapatan, anak);
	}
	else if(pekerjaan == 5)
	{
		e = 0; //e=miskin
		f = 4; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan5(pendapatan, anak);
	}
	else if(pekerjaan == 6)
	{
		e = 0; //e=miskin
		f = 3; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan6(pendapatan, anak);
	}
	else 
	{
	cout<<"Pilihan Tidak Tersedia!";	
	}
}

void pekerjaan4(int pekerjaan, int pendapatan, int anak)
{
	if (pekerjaan == 1)
	{
		e = 1; //e=miskin
		f = 0; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan1(pendapatan, anak);
	}
	else if(pekerjaan == 2)
	{
		e = 6; //e=miskin
		f = 0; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ;  
		pendapatan2(pendapatan, anak);
	}
	else if(pekerjaan == 3)
	{
		e = 2; //e=miskin
		f = 6; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan3(pendapatan, anak);
	}
	else if(pekerjaan == 4)
	{
		e = 4; //e=miskin
		f = 4; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ;  
		pendapatan4(pendapatan, anak);
	}
	else if(pekerjaan == 5)
	{
		e = 0; //e=miskin
		f = 4; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan5(pendapatan, anak);
	}
	else if(pekerjaan == 6)
	{
		e = 0; //e=miskin
		f = 3; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan6(pendapatan, anak);
	}
	else 
	{
	cout<<"Pilihan Tidak Tersedia!";	
	}
}

void pekerjaan5(int pekerjaan, int pendapatan, int anak)
{
	if (pekerjaan == 1)
	{
		e = 1; //e=miskin
		f = 0; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan1(pendapatan, anak);
	}
	else if(pekerjaan == 2)
	{
		e = 6; //e=miskin
		f = 0; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ;  
		pendapatan2(pendapatan, anak);
	}
	else if(pekerjaan == 3)
	{
		e = 2; //e=miskin
		f = 6; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan3(pendapatan, anak);
	}
	else if(pekerjaan == 4)
	{
		e = 4; //e=miskin
		f = 4; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ;  
		pendapatan4(pendapatan, anak);
	}
	else if(pekerjaan == 5)
	{
		e = 0; //e=miskin
		f = 4; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan5(pendapatan, anak);
	}
	else if(pekerjaan == 6)
	{
		e = 0; //e=miskin
		f = 3; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan6(pendapatan, anak);
	}
	else 
	{
	cout<<"Pilihan Tidak Tersedia!";	
	}
}

void pekerjaan6(int pekerjaan, int pendapatan, int anak)
{
	if (pekerjaan == 1)
	{
		e = 1; //e=miskin
		f = 0; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan1(pendapatan, anak);
	}
	else if(pekerjaan == 2)
	{
		e = 6; //e=miskin
		f = 0; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ;  
		pendapatan2(pendapatan, anak);
	}
	else if(pekerjaan == 3)
	{
		e = 2; //e=miskin
		f = 6; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan3(pendapatan, anak);
	}
	else if(pekerjaan == 4)
	{
		e = 4; //e=miskin
		f = 4; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ;  
		pendapatan4(pendapatan, anak);
	}
	else if(pekerjaan == 5)
	{
		e = 0; //e=miskin
		f = 4; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan5(pendapatan, anak);
	}
	else if(pekerjaan == 6)
	{
		e = 0; //e=miskin
		f = 3; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan6(pendapatan, anak);
	}
	else 
	{
	cout<<"Pilihan Tidak Tersedia!";	
	}
}

void pekerjaan7(int pekerjaan, int pendapatan, int anak)
{
	if (pekerjaan == 1)
	{
		e = 1; //e=miskin
		f = 0; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan1(pendapatan, anak);
	}
	else if(pekerjaan == 2)
	{
		e = 6; //e=miskin
		f = 0; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ;  
		pendapatan2(pendapatan, anak);
	}
	else if(pekerjaan == 3)
	{
		e = 2; //e=miskin
		f = 6; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan3(pendapatan, anak);
	}
	else if(pekerjaan == 4)
	{
		e = 4; //e=miskin
		f = 4; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ;  
		pendapatan4(pendapatan, anak);
	}
	else if(pekerjaan == 5)
	{
		e = 0; //e=miskin
		f = 4; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan5(pendapatan, anak);
	}
	else if(pekerjaan == 6)
	{
		e = 0; //e=miskin
		f = 3; //f=tidak miskin
		pekerjaan_miskin = e/data_miskin;  
		pekerjaan_tidakmiskin = f/data_tidakmiskin ; 
		pendapatan6(pendapatan, anak);
	}
	else 
	{
	cout<<"Pilihan Tidak Tersedia!";	
	}
}

void pendapatan1(int pendapatan, int anak)
{
	if (pendapatan == 1)
	{
		g = 9; //g=miskin
		h = 0; //h=tidak miskin
		pendapatan_miskin = g/data_miskin;  
		pendapatan_tidakmiskin = h/data_tidakmiskin ; 
		anak1(anak);
	}
	else if(pendapatan == 2)
	{
		g = 4; //g=miskin
		h = 5; //h=tidak miskin
		pendapatan_miskin = g/data_miskin;  
		pendapatan_tidakmiskin = h/data_tidakmiskin ; 
		anak2(anak);
	}
	else if(pendapatan == 3)
	{
		g = 0; //g=miskin
		h = 8; //h=tidak miskin
		pendapatan_miskin = g/data_miskin;  
		pendapatan_tidakmiskin = h/data_tidakmiskin ; 
		anak3(anak);
	}
	else if(pendapatan == 4)
	{
		g = 0; //g=miskin
		h = 4; //h=tidak miskin
		pendapatan_miskin = g/data_miskin;  
		pendapatan_tidakmiskin = h/data_tidakmiskin ; 
		anak4(anak);
	}
	else 
	{
	cout<<"Pilihan Tidak Tersedia!";	
	}
}

void pendapatan2(int pendapatan, int anak)
{
	if (pendapatan == 1)
	{
		g = 9; //g=miskin
		h = 0; //h=tidak miskin
		pendapatan_miskin = g/data_miskin;  
		pendapatan_tidakmiskin = h/data_tidakmiskin ; 
		anak1(anak);
	}
	else if(pendapatan == 2)
	{
		g = 4; //g=miskin
		h = 5; //h=tidak miskin
		pendapatan_miskin = g/data_miskin;  
		pendapatan_tidakmiskin = h/data_tidakmiskin ; 
		anak2(anak);
	}
	else if(pendapatan == 3)
	{
		g = 0; //g=miskin
		h = 8; //h=tidak miskin
		pendapatan_miskin = g/data_miskin;  
		pendapatan_tidakmiskin = h/data_tidakmiskin ; 
		anak3(anak);
	}
	else if(pendapatan == 4)
	{
		g = 0; //g=miskin
		h = 4; //h=tidak miskin
		pendapatan_miskin = g/data_miskin;  
		pendapatan_tidakmiskin = h/data_tidakmiskin ; 
		anak4(anak);
	}
	else 
	{
	cout<<"Pilihan Tidak Tersedia!";	
	}
}

void pendapatan3(int pendapatan, int anak)
{
	if (pendapatan == 1)
	{
		g = 9; //g=miskin
		h = 0; //h=tidak miskin
		pendapatan_miskin = g/data_miskin;  
		pendapatan_tidakmiskin = h/data_tidakmiskin ; 
		anak1(anak);
	}
	else if(pendapatan == 2)
	{
		g = 4; //g=miskin
		h = 5; //h=tidak miskin
		pendapatan_miskin = g/data_miskin;  
		pendapatan_tidakmiskin = h/data_tidakmiskin ; 
		anak2(anak);
	}
	else if(pendapatan == 3)
	{
		g = 0; //g=miskin
		h = 8; //h=tidak miskin
		pendapatan_miskin = g/data_miskin;  
		pendapatan_tidakmiskin = h/data_tidakmiskin ; 
		anak3(anak);
	}
	else if(pendapatan == 4)
	{
		g = 0; //g=miskin
		h = 4; //h=tidak miskin
		pendapatan_miskin = g/data_miskin;  
		pendapatan_tidakmiskin = h/data_tidakmiskin ; 
		anak4(anak);
	}
	else 
	{
	cout<<"Pilihan Tidak Tersedia!";	
	}
}

void pendapatan4(int pendapatan, int anak)
{
	if (pendapatan == 1)
	{
		g = 9; //g=miskin
		h = 0; //h=tidak miskin
		pendapatan_miskin = g/data_miskin;  
		pendapatan_tidakmiskin = h/data_tidakmiskin ; 
		anak1(anak);
	}
	else if(pendapatan == 2)
	{
		g = 4; //g=miskin
		h = 5; //h=tidak miskin
		pendapatan_miskin = g/data_miskin;  
		pendapatan_tidakmiskin = h/data_tidakmiskin ; 
		anak2(anak);
	}
	else if(pendapatan == 3)
	{
		g = 0; //g=miskin
		h = 8; //h=tidak miskin
		pendapatan_miskin = g/data_miskin;  
		pendapatan_tidakmiskin = h/data_tidakmiskin ; 
		anak3(anak);
	}
	else if(pendapatan == 4)
	{
		g = 0; //g=miskin
		h = 4; //h=tidak miskin
		pendapatan_miskin = g/data_miskin;  
		pendapatan_tidakmiskin = h/data_tidakmiskin ; 
		anak4(anak);
	}
	else 
	{
	cout<<"Pilihan Tidak Tersedia!";	
	}
}

void pendapatan5(int pendapatan, int anak)
{
	if (pendapatan == 1)
	{
		g = 9; //g=miskin
		h = 0; //h=tidak miskin
		pendapatan_miskin = g/data_miskin;  
		pendapatan_tidakmiskin = h/data_tidakmiskin ; 
		anak1(anak);
	}
	else if(pendapatan == 2)
	{
		g = 4; //g=miskin
		h = 5; //h=tidak miskin
		pendapatan_miskin = g/data_miskin;  
		pendapatan_tidakmiskin = h/data_tidakmiskin ; 
		anak2(anak);
	}
	else if(pendapatan == 3)
	{
		g = 0; //g=miskin
		h = 8; //h=tidak miskin
		pendapatan_miskin = g/data_miskin;  
		pendapatan_tidakmiskin = h/data_tidakmiskin ; 
		anak3(anak);
	}
	else if(pendapatan == 4)
	{
		g = 0; //g=miskin
		h = 4; //h=tidak miskin
		pendapatan_miskin = g/data_miskin;  
		pendapatan_tidakmiskin = h/data_tidakmiskin ; 
		anak4(anak);
	}
	else 
	{
	cout<<"Pilihan Tidak Tersedia!";	
	}
}

void pendapatan6(int pendapatan, int anak)
{
	if (pendapatan == 1)
	{
		g = 9; //g=miskin
		h = 0; //h=tidak miskin
		pendapatan_miskin = g/data_miskin;  
		pendapatan_tidakmiskin = h/data_tidakmiskin ; 
		anak1(anak);
	}
	else if(pendapatan == 2)
	{
		g = 4; //g=miskin
		h = 5; //h=tidak miskin
		pendapatan_miskin = g/data_miskin;  
		pendapatan_tidakmiskin = h/data_tidakmiskin ; 
		anak2(anak);
	}
	else if(pendapatan == 3)
	{
		g = 0; //g=miskin
		h = 8; //h=tidak miskin
		pendapatan_miskin = g/data_miskin;  
		pendapatan_tidakmiskin = h/data_tidakmiskin ; 
		anak3(anak);
	}
	else if(pendapatan == 4)
	{
		g = 0; //g=miskin
		h = 4; //h=tidak miskin
		pendapatan_miskin = g/data_miskin;  
		pendapatan_tidakmiskin = h/data_tidakmiskin ; 
		anak4(anak);
	}
	else 
	{
	cout<<"Pilihan Tidak Tersedia!";	
	}
}

void anak1(int anak)
{
	if (anak == 1)
	{
		i = 1; //i=miskin
		j = 4; //j=tidak miskin
		anak_miskin = i/data_miskin;  
		anak_tidakmiskin = j/data_tidakmiskin ; 
		hasil();
	}
	else if(anak == 2)
	{
		i = 4; //i=miskin
		j = 4; //j=tidak miskin
		anak_miskin = j/data_miskin;  
		anak_tidakmiskin = j/data_tidakmiskin ; 
		hasil();
	}
	else if(anak == 3)
	{
		i = 5; //i=miskin
		j = 6; //j=tidak miskin
		anak_miskin = i/data_miskin;  
		anak_tidakmiskin = j/data_tidakmiskin ; 
		hasil();
	}
		else if(anak == 4)
	{
		i = 3; //i=miskin
		j = 3; //j=tidak miskin
		anak_miskin = i/data_miskin;  
		anak_tidakmiskin = j/data_tidakmiskin ; 
		hasil();
	}
	else 
	{
	cout<<"Pilihan Tidak Tersedia!";	
	}
}

void anak2(int anak)
{
	if (anak == 1)
	{
		i = 1; //i=miskin
		j = 4; //j=tidak miskin
		anak_miskin = i/data_miskin;  
		anak_tidakmiskin = j/data_tidakmiskin ; 
		hasil();
	}
	else if(anak == 2)
	{
		i = 4; //i=miskin
		j = 4; //j=tidak miskin
		anak_miskin = i/data_miskin;  
		anak_tidakmiskin = j/data_tidakmiskin ; 
		hasil();
	}
	else if(anak == 3)
	{
		i = 5; //i=miskin
		j = 6; //j=tidak miskin
		anak_miskin = i/data_miskin;  
		anak_tidakmiskin = j/data_tidakmiskin ; 
		hasil();
	}
		else if(anak == 4)
	{
		i = 3; //i=miskin
		j = 3; //j=tidak miskin
		anak_miskin = i/data_miskin;  
		anak_tidakmiskin = j/data_tidakmiskin ; 
		hasil();
	}
	else 
	{
	cout<<"Pilihan Tidak Tersedia!";	
	}
}

void anak3(int anak)
{
	if (anak == 1)
	{
		i = 1; //i=miskin
		j = 4; //j=tidak miskin
		anak_miskin = i/data_miskin;  
		anak_tidakmiskin = j/data_tidakmiskin ; 
		hasil();
	}
	else if(anak == 2)
	{
		i = 4; //i=miskin
		j = 4; //j=tidak miskin
		anak_miskin = i/data_miskin;  
		anak_tidakmiskin = j/data_tidakmiskin ; 
		hasil();
	}
	else if(anak == 3)
	{
		i = 5; //i=miskin
		j = 6; //j=tidak miskin
		anak_miskin = i/data_miskin;  
		anak_tidakmiskin = j/data_tidakmiskin ; 
		hasil();
	}
		else if(anak == 4)
	{
		i = 3; //i=miskin
		j = 3; //j=tidak miskin
		anak_miskin = i/data_miskin;  
		anak_tidakmiskin = j/data_tidakmiskin ; 
		hasil();
	}
	else 
	{
	cout<<"Pilihan Tidak Tersedia!";	
	}
}

void anak4(int anak)
{
	if (anak == 1)
	{
		i = 1; //i=miskin
		j = 4; //j=tidak miskin
		anak_miskin = i/data_miskin;  
		anak_tidakmiskin = j/data_tidakmiskin ; 
		hasil();
	}
	else if(anak == 2)
	{
		i = 4; //i=miskin
		j = 4; //j=tidak miskin
		anak_miskin = i/data_miskin;  
		anak_tidakmiskin = j/data_tidakmiskin ; 
		hasil();
	}
	else if(anak == 2)
	{
		i = 5; //i=miskin
		j = 6; //j=tidak miskin
		anak_miskin = i/data_miskin;  
		anak_tidakmiskin = j/data_tidakmiskin ; 
		hasil();
	}
		else if(anak == 2)
	{
		i = 3; //i=miskin
		j = 3; //j=tidak miskin
		anak_miskin = i/data_miskin;  
		anak_tidakmiskin = j/data_tidakmiskin ; 
		hasil();
	}
	else 
	{
	cout<<"Pilihan Tidak Tersedia!";	
	}
}

void hasil()
{
	prob_miskin = data_miskin/jumlah_data;
	prob_tidakmiskin = data_tidakmiskin/jumlah_data;
	
	hasil_miskin = prob_miskin * usia_miskin * pendidikan_miskin * pekerjaan_miskin * pendapatan_miskin * anak_miskin ; 
	hasil_tidakmiskin = prob_tidakmiskin * usia_tidakmiskin * pendidikan_tidakmiskin * pekerjaan_tidakmiskin * pendapatan_tidakmiskin * anak_tidakmiskin ;
	
	if (hasil_miskin == 0) //fungsi laplacian correction 
	{
		usia_miskin = (a+1)/(data_miskin+15);
		pendidikan_miskin = (c+1)/(data_miskin+15);
		pekerjaan_miskin = (e+1)/(data_miskin+15);
		pendapatan_miskin = (g+1)/(data_miskin+15);
		anak_miskin = (i+1)/(data_miskin+15);
		
		hasil_miskin = prob_miskin * usia_miskin * pendidikan_miskin * pekerjaan_miskin * pendapatan_miskin * anak_miskin ; 
		cout<<fixed;
		cout<<"Nilai Probabilitas Miskin = "<<setprecision(10)<<hasil_miskin<<endl;	//menampilkan probabilis
	}
	
	else {
		cout<<fixed;
		cout<<"Nilai Probabilitas Miskin = "<<setprecision(10)<<hasil_miskin<<endl;
	}
	
	if (hasil_tidakmiskin == 0)
	{
		usia_tidakmiskin = (b+1)/(data_tidakmiskin+15);
		pendidikan_tidakmiskin = (d+1)/(data_tidakmiskin+15);
		pekerjaan_tidakmiskin = (f+1)/(data_tidakmiskin+15);
		pendapatan_tidakmiskin = (h+1)/(data_tidakmiskin+15);
		anak_tidakmiskin = (j+1)/(data_tidakmiskin+15);
		
		hasil_tidakmiskin = prob_tidakmiskin * usia_tidakmiskin * pendidikan_tidakmiskin * pekerjaan_tidakmiskin * pendapatan_tidakmiskin * anak_tidakmiskin ;
		cout<<fixed;
		cout<<"Nilai Probabilitas Tidak Miskin =  "<<setprecision(10)<<hasil_tidakmiskin<<endl;	
	}
	else {
		cout<<fixed;
		cout<<"Nilai Probabilitas Tidak Miskin =  "<<setprecision(10)<<hasil_tidakmiskin<<endl;		
	}
	
	
		if (hasil_miskin > hasil_tidakmiskin){ //fungsi perbandingan untuk mengklasifikasi apakah hasil di probabilitas tersebut lebih besar
		cout<<endl<<endl<<"Hasil Perhitungan Menggunakan Naive Bayes Warga Tersebut LAYAK Mendapatkan KIS  "<<endl<<endl<<endl; 
	}
	else {
		cout<<endl<<endl<<"Hasil Perhitungan Menggunakan Naive Bayes Warga Tersebut TIDAK LAYAK Mendapatkan KIS"<<endl<<endl<<endl;
	}
}


