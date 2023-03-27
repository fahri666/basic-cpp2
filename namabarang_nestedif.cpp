#include <iostream>
#include <string>
using namespace std;

main()
{
	int jumlah,stok,sisa,harga,pajak,total,pembayaran,kembalian;
	string namab;
	cout<<"-----------------------------TOKO GIL ANG------------------------"<<endl;
	cout<<"-------------------------------SERBAGUNA-------------------------"<<endl;
	cout<<"Masukan Kode Barang      = ";
	cin>>namab;
	
	if (namab == "C" || namab == "c"){
		cout<<"Nama Barang CIKI"<<endl;
		cin.ignore();
		cout<<"Stok Barang              = ";
		cin>>stok;
		cout<<"Jumlah Beli              = ";
		cin>>jumlah;
		sisa= stok - jumlah;
		cout<<"Sisa Barang              = "	<<sisa<<endl;
		cout<<"Harga Satuan             = ";
		cin>>harga;
		cout<<"Jumlah Pembayaran        = ";
		cin>>pembayaran;
	
		pajak = harga *jumlah * 0.1;
		total = harga * jumlah;
		kembalian = pembayaran - total;
		
		
		cout<<"Pajak 10&                = "<< pajak<<endl;
		cout<<"Total Belanja            = " <<total<<endl;
		cout<<"Uang Kembali             = "<<kembalian<<endl;
	
				if (total >=200000 && total<= 300000){
					cout<<"Mendapatkan Baju";
				}
				else if (total >=100000 && total <=199000){
					cout<<"Mendapatkan Payung";
				}
				else if (total >=90000 && total <= 99999){
					cout<<"Mendapatkan Piring";
				}
				else if (total >=80000&& total <= 89999){
					cout<<"Mendapat gelas";
				}
				else if (total >= 50000&& total <=79999){
					cout<<"Mendapatkan Sabun";
				}
				else if (total >= 20000 && total <=49999){
					cout<<"Mendapatkan Sikat Gigi";
				}
				else{
					cout<<"Tidak mendapat apa";
				}
				}
	
	else if (namab == "A" && namab == "a"){
		cout<<"Nama Barang AIR"<<endl;
		cin.ignore();
		cout<<"Stok Barang              = ";
		cin>>stok;
		cout<<"Jumlah Beli              = ";
		cin>>jumlah;
		sisa= stok - jumlah;
		cout<<"Sisa Barang              = "	<<sisa<<endl;
		cout<<"Harga Satuan             = ";
		cin>>harga;
		cout<<"Jumlah Pembayaran        = ";
		cin>>pembayaran;
	
		pajak = harga *jumlah * 0.1;
		total = harga * jumlah;
		kembalian = pembayaran - total;
		
		
		cout<<"Pajak 10&                = "<< pajak<<endl;
		cout<<"Total Belanja            = " <<total<<endl;
		cout<<"Uang Kembali             = "<<kembalian<<endl;
		
				if (total >=200000 && total<= 300000){
					cout<<"Mendapatkan Baju";
				}
				else if (total >=100000 && total <=199000){
					cout<<"Mendapatkan Payung";
				}
				else if (total >=90000 && total <= 99999){
					cout<<"Mendapatkan Piring";
				}
				else if (total >=80000&& total <= 89999){
					cout<<"Mendapat gelas";
				}
				else if (total >= 50000&& total <=79999){
					cout<<"Mendapatkan Sabun";
				}
				else if (total >= 20000 && total <=49999){
					cout<<"Mendapatkan Sikat Gigi";
				}
				else{
					cout<<"Tidak mendapat apa";
				}
				}
	
	
	else if (namab == "S" && namab == "s"){
		cout<<"Nama Barang SUSU"<<endl;
		cin.ignore();
		cout<<"Stok Barang              = ";
		cin>>stok;
		cout<<"Jumlah Beli              = ";
		cin>>jumlah;
		sisa= stok - jumlah;
		cout<<"Sisa Barang              = "	<<sisa<<endl;
		cout<<"Harga Satuan             = ";
		cin>>harga;
		cout<<"Jumlah Pembayaran        = ";
		cin>>pembayaran;
	
		pajak = harga *jumlah * 0.1;
		total = harga * jumlah;
		kembalian = pembayaran - total;
		
		
		cout<<"Pajak 10&                = "<< pajak<<endl;
		cout<<"Total Belanja            = " <<total<<endl;
		cout<<"Uang Kembali             = "<<kembalian<<endl;
		
				if (total >=200000 && total<= 300000){
					cout<<"Mendapatkan Baju";
				}
				else if (total >=100000 && total <=199000){
					cout<<"Mendapatkan Payung";
				}
				else if (total >=90000 && total <= 99999){
					cout<<"Mendapatkan Piring";
				}
				else if (total >=80000&& total <= 89999){
					cout<<"Mendapat gelas";
				}
				else if (total >= 50000&& total <=79999){
					cout<<"Mendapatkan Sabun";
				}
				else if (total >= 20000 && total <=49999){
					cout<<"Mendapatkan Sikat Gigi";
				}
				else{
					cout<<"Tidak mendapat apa";
				}
				}
	else if (namab == "CA" && namab == "ca"){
		cout<<"Nama Barang CHAPO"<<endl;
		cin.ignore();
		cout<<"Stok Barang              = ";
		cin>>stok;
		cout<<"Jumlah Beli              = ";
		cin>>jumlah;
		sisa= stok - jumlah;
		cout<<"Sisa Barang              = "	<<sisa<<endl;
		cout<<"Harga Satuan             = ";
		cin>>harga;
		cout<<"Jumlah Pembayaran        = ";
		cin>>pembayaran;
	
		pajak = harga *jumlah * 0.1;
		total = harga * jumlah;
		kembalian = pembayaran - total;
		
		
		cout<<"Pajak 10&                = "<< pajak<<endl;
		cout<<"Total Belanja            = " <<total<<endl;
		cout<<"Uang Kembali             = "<<kembalian<<endl;
		
				if (total >=200000 && total<= 300000){
					cout<<"Mendapatkan Baju";
				}
				else if (total >=100000 && total <=199000){
					cout<<"Mendapatkan Payung";
				}
				else if (total >=90000 && total <= 99999){
					cout<<"Mendapatkan Piring";
				}
				else if (total >=80000&& total <= 89999){
					cout<<"Mendapat gelas";
				}
				else if (total >= 50000&& total <=79999){
					cout<<"Mendapatkan Sabun";
				}
				else if (total >= 20000 && total <=49999){
					cout<<"Mendapatkan Sikat Gigi";
				}
				else{
					cout<<"Tidak mendapat apa";
				}
				}
	
}
