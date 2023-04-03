#include<iostream>
#include<string>
using namespace std;

main ()
{
	cout<<"Gilang Adi S  / 41822010015"<<endl;
	cout<<"Farhan Faiz N / 41822010018"<<endl;
	cout<<"Fahri Rabani  / 41822010019"<<endl;
	int kendaraan, durasi, harga;
	
	cout<<"==========SISTEM PARKIRAN MERCUBUANA=========="<<endl;
	cout<<"KODE               TIPE KENDARAAN            HARGA PERJAM"<<endl;
	cout<<" 1                     MOTOR                 Rp. 2.000"<<endl;
	cout<<" 2                     MOBIL                 Rp. 3.000"<<endl;
	cout<<" 3                     PESAWAT               Rp. 10.000"<<endl;
	cout<<" 4                     KAPAL SELAM           Rp. 20.000"<<endl;
	cout<<" 5                     VARIO                 Rp. 500"<<endl;
		cout<<"Masukkan Kode Kendaraan     = ";
			cin>>kendaraan;
	if (kendaraan == 1) {
		cout<<"Kendaraan                   = Motor" << endl;
		cout<<"Masukkan Durasi Parkir /Jam = ";
		cin>>durasi;
		if (durasi >= 1 && durasi <= 24){
			harga = durasi * 2000;
			cout<<"====================Tiket====================="<< endl <<endl;
			cout<<"Tipe Kendaraan          = Motor " << endl;
			cout<<"lama parkir             = " << durasi << "jam" << endl;
			cout<<"Harga parkir            = "<< harga;
		} else {
			cout<<"anda parkir lebih dari 24jam. Silahkan Lapor ke Petugas";
		}
	}
	else if (kendaraan == 2) {
		cout<<"Kendaraan = Mobil" << endl;
		cout<<"Masukkan Durasi Parkir /Jam = ";
		cin>>durasi;
		if (durasi >= 1 && durasi <= 24){
			harga = durasi * 3000;
			cout<<"====================Tiket====================="<< endl <<endl;
			cout<<"Tipe Kendaraan = Mobil" << endl;
			cout<<"lama parkir : " << durasi << "jam" << endl;
			cout<<"Harga Parkir : "<< harga;
		} else {
			cout<<"anda parkir lebih dari 24jam. lapor ke tukang parkir";
		}
	} 
	else if (kendaraan == 3) {
		cout<<"Kendaraan = Pesawat" << endl;
		cout<<"Masukkan Durasi Parkir /Jam = ";
		cin>>durasi;
		if (durasi >= 1 && durasi <= 24){
			harga = durasi * 10000;
			cout<<"====================Tiket====================="<< endl <<endl;
			cout<<"Tipe Kendaraan = Pesawat" << endl;
			cout<<"lama parkir : " << durasi << "jam" << endl;
			cout<<"Harga Parkir : "<< harga;
		} else {
			cout<<"anda parkir lebih dari 24jam. lapor ke tukang parkir";
		}
	} 
		else if (kendaraan == 4) {
		cout<<"Kendaraan = Kapal Selam" << endl;
		cout<<"Masukkan Durasi Parkir /Jam = ";
		cin>>durasi;
		if (durasi >= 1 && durasi <= 24){
			harga = durasi * 20000;
			cout<<"====================Tiket====================="<< endl <<endl;
			cout<<"Tipe Kendaraan = Kapal Selam" << endl;
			cout<<"lama parkir : " << durasi << "jam" << endl;
			cout<<"Harga Parkir : "<< harga;
		} else {
			cout<<"anda parkir lebih dari 24jam. lapor ke tukang parkir";
		}
	} 
	else if (kendaraan == 5) {
		cout<<"Kendaraan = Vario" << endl;
		cout<<"Masukkan Durasi Parkir /Jam = ";
		cin>>durasi;
		if (durasi >= 1 && durasi <= 24){
			harga = durasi * 500;
			cout<<"====================Tiket====================="<< endl <<endl;
			cout<<"Tipe Kendaraan = Vario " << endl;
			cout<<"lama parkir : " << durasi << "jam" << endl;
			cout<<"Harga Parkir : "<< harga;
		} else {
			cout<<"anda parkir lebih dari 24jam. lapor ke tukang parkir";
		}
	}
}

