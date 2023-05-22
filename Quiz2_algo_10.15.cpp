#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

//
//Nama : Fahri rabani
//		 Farhan Faiz Nugroho
//		 Gilang Adi Saputra


main(){
	
	int i ,j=1, x=1;
	
	struct {
		int  tempat, jb,jharga,  pajakp, pajakt,totalp,bayar,kembalian;
		float harga, pajak;
		string tiket, tipe, jk, bonus, nama, alm;
		
	}kebab[30];
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<"   	       Sistem Informasi Pemesanan Bus  "<<endl;
	cout<<"-------------------------------------------------------------"<<endl;

	for(i=0; i<2; i++){
		top:
		cout<<endl;
		cout<<"Inputan Ke -"<<x++<<endl;
		cout<<"Silahkan Pilih Tiket   = ";cin>>kebab[i].tiket;
		cout<<"---------------------------------------------"<<endl;
if(kebab[i].tiket == "SE"||kebab[i].tiket == "se"){
			kebab[i].tipe="Super Eksekutif";
			kebab[i].harga= 350000;
			kebab[i].pajak= 0.025;
			
		cout<<"Kelas Bus Yang di Pilih = "<<kebab[i].tipe<<endl;
		cout<<"Dengan harga            = "<<kebab[i].harga<<endl;
		cout<<"---------------------------------------------"<<endl;
		cin.ignore();
		cout<<"Masukkan Nama penumpang        = ";getline(cin,kebab[i].nama);
		cout<<"Masukkan alamat Penumpang      = ";getline(cin,kebab[i].alm);
		skere:
		cout<<"Masukkan jenis Kelamin (P/L)   =  ";cin>>kebab[i].jk;
		cin.ignore();
	if(kebab[i].jk == "p" ||kebab[i].jk == "P" ){
		cout<<"---------------------------------------------"<<endl;
			cout<<"duduk di bangku antara no 1-6"<<endl;
			atas:
			cout<<"Silahkan pilih tempat duduk   = ";cin>>kebab[i].tempat;
				if (kebab[i].tempat >=1 && kebab[i].tempat <=6){
				}
				else {
					cout<<"Maaf anda salah pilih kursi"<<endl;
					goto atas;
				}
				}
	else if (kebab[i].jk == "L" ||kebab[i].jk == "l"){
						cout<<"---------------------------------------------"<<endl;
						cout<<"Duduk di bangku antara no 8-22"<<endl;
						laki:
						cout<<"Silahkan pilih tempat duduk   = ";cin>>kebab[i].tempat;
	if (kebab[i].tempat >=8 && kebab[i].tempat <=22){
					}
	else {
					cout<<"Maaf anda salah pilih kursi"<<endl;
					goto laki;
				}
				}

	else {
			cout<<"Maaf Anda Salah input Kelamin"<<endl;
			goto skere;
		}

		cout<<"Masukkan Jumlah Beli          = ";cin>>kebab[i].jb;
		kebab[i].jharga = kebab[i].harga * kebab[i].jb;
		cout<<"Jumlah yang harus di bayar    = "<<kebab[i].jharga<<endl;
    cout<<"---------------------------------------------"<<endl;

        kebab[i].pajakp= kebab[i].pajak * kebab[i].harga;
        kebab[i].pajakt = kebab[i].pajakp * kebab[i].jb;
        kebab[i].totalp = kebab[i].pajakt + kebab[i].jharga;

		cout<<"Pajak Pembayaran anda adalah "<<kebab[i].pajakt<<endl;
		cout<<"total pembayaran anda adalah "<<kebab[i].totalp<<endl;
		cout<<"masukkan jumlah bayar anda     = ";cin>>kebab[i].bayar;
		kebab[i].kembalian = kebab[i].bayar - kebab[i].totalp;
		cout<<"Uang kembalian anda            = "<<kebab[i].kembalian<<endl;


		cout<<" "<<kebab[i].bonus<<endl;

			 	if (kebab[i].jharga >= 5250000 && kebab[i].jharga <= 7000000){
     				kebab[i].bonus = "Liburan Ke Bali";}
        else if (kebab[i].jharga >= 4550000 && kebab[i].jharga <= 4900000){
            kebab[i].bonus = "Liburan Ke Surabaya";}
        else if (kebab[i].jharga >= 3850000 && kebab[i].jharga <= 4200000){
            kebab[i].bonus = "Liburan Ke Yogyakarta";}
        else if (kebab[i].jharga >= 3150000 && kebab[i].jharga <= 3500000){
            kebab[i].bonus = "Liburan Ke Bandung";}
        else if (kebab[i].jharga >= 2100000 && kebab[i].jharga <= 2800000){
            kebab[i].bonus  = "Liburan Ke Jakarta";}
        else {
        		 kebab[i].bonus  = "tidak mendapatkan bonus";
							}
	}
		else if(kebab[i].tiket == "EP"||kebab[i].tiket == "ep"){
			kebab[i].tipe="Eksekutif Plus";
			kebab[i].harga= 325000;
			kebab[i].pajak= 0.02;
				cout<<"Kelas Bus Yang di Pilih = "<<kebab[i].tipe<<endl;
		cout<<"Dengan harga            = "<<kebab[i].harga<<endl;
		cout<<"---------------------------------------------"<<endl;
 		cin.ignore();
		cout<<"Masukkan Nama penumpang        = ";getline(cin,kebab[i].nama);
		cout<<"Masukkan alamat Penumpang      = ";getline(cin,kebab[i].alm);
		skeree:
		cout<<"Masukkan jenis Kelamin (P/L)   =  ";cin>>kebab[i].jk;
		cin.ignore();
	if(kebab[i].jk == "p" ||kebab[i].jk == "P" ){
		cout<<"---------------------------------------------"<<endl;
			cout<<"duduk di bangku antara no 1-6"<<endl;
			atass:
			cout<<"Silahkan pilih tempat duduk   = ";cin>>kebab[i].tempat;
				if (kebab[i].tempat >=1 && kebab[i].tempat <=6){
				}
				else {
					cout<<"Maaf anda salah pilih kursi"<<endl;
					goto atass;
				}
				}
	else if (kebab[i].jk == "L" ||kebab[i].jk == "l"){
						cout<<"---------------------------------------------"<<endl;
						cout<<"Duduk di bangku antara no 8-22"<<endl;
						lakii:
						cout<<"Silahkan pilih tempat duduk   = ";cin>>kebab[i].tempat;
	if (kebab[i].tempat >=8 && kebab[i].tempat <=22){
					}
	else {
					cout<<"Maaf anda salah pilih kursi"<<endl;
					goto laki;
				}
				}

	else {
			cout<<"Maaf Anda Salah input Kelamin"<<endl;
			goto skeree;
		}

		cout<<"Masukkan Jumlah Beli          = ";cin>>kebab[i].jb;
		kebab[i].jharga = kebab[i].harga * kebab[i].jb;
		cout<<"Jumlah yang harus di bayar    = "<<kebab[i].jharga<<endl;
    cout<<"---------------------------------------------"<<endl;

        kebab[i].pajakp= kebab[i].pajak * kebab[i].harga;
        kebab[i].pajakt = kebab[i].pajakp * kebab[i].jb;
        kebab[i].totalp = kebab[i].pajakt + kebab[i].jharga;

		cout<<"Pajak Pembayaran anda adalah "<<kebab[i].pajakt<<endl;
		cout<<"total pembayaran anda adalah "<<kebab[i].totalp<<endl;
		cout<<"masukkan jumlah bayar anda     = ";cin>>kebab[i].bayar;
		kebab[i].kembalian = kebab[i].bayar - kebab[i].totalp;
		cout<<"Uang kembalian anda            = "<<kebab[i].kembalian<<endl;

				if (kebab[i].jharga >= 5000000 && kebab[i].jharga <= 6500000){
     				kebab[i].bonus = "Liburan Ke Bali";}
        else if (kebab[i].jharga >= 4500000 && kebab[i].jharga <= 4900000){
            kebab[i].bonus = "Liburan Ke Surabaya";}
        else if (kebab[i].jharga >= 3800000 && kebab[i].jharga <= 4200000){
            kebab[i].bonus = "Liburan Ke Yogyakarta";}
        else if (kebab[i].jharga >= 3000000 && kebab[i].jharga <= 3500000){
            kebab[i].bonus = "Liburan Ke Bandung";}
        else if (kebab[i].jharga >= 2100000 && kebab[i].jharga <= 2800000){
            kebab[i].bonus  = "Liburan Ke Jakarta";}
        else {
        		 kebab[i].bonus  = "tidak mendapatkan bonus";
							}
		}
		else if(kebab[i].tiket == "EK"||kebab[i].tiket == "ek"){
			kebab[i].tipe="Eksekutif";
			kebab[i].harga= 300000;
			kebab[i].pajak= 0.015;
				cout<<"Kelas Bus Yang di Pilih = "<<kebab[i].tipe<<endl;
		cout<<"Dengan harga            = "<<kebab[i].harga<<endl;
		cout<<"---------------------------------------------"<<endl;
	cin.ignore();
		cout<<"Masukkan Nama penumpang        = ";getline(cin,kebab[i].nama);
		cout<<"Masukkan alamat Penumpang      = ";getline(cin,kebab[i].alm);
		skereee:
		cout<<"Masukkan jenis Kelamin (P/L)   =  ";cin>>kebab[i].jk;
		cin.ignore();
	if(kebab[i].jk == "p" ||kebab[i].jk == "P" ){
		cout<<"---------------------------------------------"<<endl;
			cout<<"duduk di bangku antara no 1-6"<<endl;
			atasss:
			cout<<"Silahkan pilih tempat duduk   = ";cin>>kebab[i].tempat;
				if (kebab[i].tempat >=1 && kebab[i].tempat <=6){
				}
				else {
					cout<<"Maaf anda salah pilih kursi"<<endl;
					goto atas;
				}
				}
	else if (kebab[i].jk == "L" ||kebab[i].jk == "l"){
						cout<<"---------------------------------------------"<<endl;
						cout<<"Duduk di bangku antara no 8-22"<<endl;
						lakiii:
						cout<<"Silahkan pilih tempat duduk   = ";cin>>kebab[i].tempat;
	if (kebab[i].tempat >=8 && kebab[i].tempat <=22){
					}
	else {
					cout<<"Maaf anda salah pilih kursi"<<endl;
					goto laki;
				}
				}

	else {
			cout<<"Maaf Anda Salah input Kelamin"<<endl;
			goto skere;
		}

		cout<<"Masukkan Jumlah Beli          = ";cin>>kebab[i].jb;
		kebab[i].jharga = kebab[i].harga * kebab[i].jb;
		cout<<"Jumlah yang harus di bayar    = "<<kebab[i].jharga<<endl;
    cout<<"---------------------------------------------"<<endl;

        kebab[i].pajakp= kebab[i].pajak * kebab[i].harga;
        kebab[i].pajakt = kebab[i].pajakp * kebab[i].jb;
        kebab[i].totalp = kebab[i].pajakt + kebab[i].jharga;

		cout<<"Pajak Pembayaran anda adalah "<<kebab[i].pajakt<<endl;
		cout<<"total pembayaran anda adalah "<<kebab[i].totalp<<endl;
		cout<<"masukkan jumlah bayar anda     = ";cin>>kebab[i].bayar;
		kebab[i].kembalian = kebab[i].bayar - kebab[i].totalp;
		cout<<"Uang kembalian anda            = "<<kebab[i].kembalian<<endl;

				if (kebab[i].jharga >= 4500000 && kebab[i].jharga <= 6000000){
     				kebab[i].bonus = "Liburan Ke Bali";}
        else if (kebab[i].jharga >= 4000000 && kebab[i].jharga <= 4300000){
            kebab[i].bonus = "Liburan Ke Surabaya";}
        else if (kebab[i].jharga >= 3800000 && kebab[i].jharga <= 3900000){
            kebab[i].bonus = "Liburan Ke Yogyakarta";}
        else if (kebab[i].jharga >= 3500000 && kebab[i].jharga <= 3700000){
            kebab[i].bonus = "Liburan Ke Bandung";}
        else if (kebab[i].jharga >= 3000000 && kebab[i].jharga <= 3300000){
            kebab[i].bonus  = "Liburan Ke Jakarta";}
        else {
        		 kebab[i].bonus  = "tidak mendapatkan bonus";
							}
		}
		else {
	 	system("CLS");
			goto top;
		}

		

	}
	
	cout<<"--------------------------------------------------------------------------------------------------------------" << endl;
    cout << " No | Nama         |     Alamat    |Jenis kelamin|   Jenis BUS   |   No Bangku   |     Total     |    Bonus " << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
 i = 0;
	
	for(i=0; i<2;i++){
		cout<<" ";
		cout<<j++;
		cout<<" |    "<<kebab[i].nama;
		cout<<"   |    "<<kebab[i].alm;
		cout<<"   |      "<<kebab[i].jk;
		cout<<"     | "<<kebab[i].tipe;
		cout<<" |    "<<kebab[i].tempat;
		cout<<"   |    "<<kebab[i].totalp;
		cout<<"   |"<<kebab[i].bonus<<endl;
		
		
		
		
		
		
		
		
		
	}	

return 0;
}
