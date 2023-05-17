#include<conio.h>
#include<stdio.h>
//#include<iomanip>
#include<iostream>
#include<string>
using namespace std;
main()
{
	int i, j=1, x=1;
   struct
    {
    	char nama[40];
		 	string grade;
      float nilai1, nilai2, nilai3, nilai4, hasil;
		} mhs[35];


for(i=0; i<2; i++)
{

	 cout<<"		                             	Rekap Nilai Mahasiswa"<<endl;
   cout<<" "<<endl;
   cout<<"Data Mahasiswa Ke - "<<j++<<endl;
   cout<<" "<<endl;
   cout<<"Masukan Nama 	      = "; gets(mhs[i].nama);
   cout<<"Masukan Nilai Absensi = "; cin>>mhs[i].nilai1;
   cout<<"Masukan Nilai Tugas   = "; cin>>mhs[i].nilai2;
   cout<<"Masukan Nilai UTS     = "; cin>>mhs[i].nilai3;
   cout<<"Masukan Nilai UAS     = "; cin>>mhs[i].nilai4;
   cin.ignore();
  	 mhs[i].hasil = (mhs[i].nilai1 * 0.10)+ (mhs[i].nilai2 * 0.20 ) + (mhs[i].nilai3 * 0.30) + (mhs[i].nilai4 * 0.40);

   	if(mhs[i].hasil >=80 && mhs[i].hasil <=100){
			mhs[i].grade = " A";
			}
			else if(mhs[i].hasil >=70 && mhs[i].hasil <=79){
			mhs[i].grade = 	" B";;
			}
			else if(mhs[i].hasil >=60 && mhs[i].hasil <=69){
			mhs[i].grade = 	" C";
			}
			else if(mhs[i].hasil >=50 && mhs[i].hasil <=59){
			mhs[i].grade = 	 " D";
			}
			else if(mhs[i].hasil >=40 && mhs[i].hasil <=49){
			mhs[i].grade =  " E";
			}
			else {
			mhs[i].grade = " F";
			}
}

   cout<<endl;
    cout<<"---------------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<" No | Nama Mahasiswa\t\t | Nilai Absen | Nilai Tugas |  Nilai UTS  |  Nilai UAS  | Nilai Akhir | Grade Nilai " << endl;
  	cout<<"---------------------------------------------------------------------------------------------------------------------"<<endl;


   for(i=0; i<2; i++)
{
   cout<<"  ";
   cout<<  x++;
   cout<<" | ";
   cout<<mhs[i].nama;
   cout<<"         |       "; cout<<mhs[i].nilai1;
   cout<<"     |     "; cout<<mhs[i].nilai2;
   cout<<"     |     "; cout<<mhs[i].nilai3;
   cout<<"     |     "; cout<<mhs[i].nilai4;
   cout<<"     |     "; cout<<mhs[i].hasil;
   cout<<"     |     "; cout<<mhs[i].grade<<endl;

   cout<<"---------------------------------------------------------------------------------------------------------------------"<<endl;
}
   cout<<endl;
   cout<<endl;
   cout<<endl;
   cout<<"====================================================================================================================="<<endl;
   cout<<"Nama Pembuat 	        : Sulis Sandiwarno "<<endl ;
   cout<<"Tahun Pembuatan 	: 2007 "<<endl ;
   cout<<"Program Studi     	: Sistem Informasi "<<endl ;
   cout<<endl;
}


