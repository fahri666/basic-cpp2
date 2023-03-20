#include <iostream>
using namespace std;
main(){
	cout<<"====================================="<<endl;
	cout<<"    Menghitung Biaya Rumah Sakit"<<endl;
	cout<<"====================================="<<endl;
	string namap, alamatp, jenisk,pelayanan,bonus;
	int lamai, hargai,uangk,uangp,total, pajakr,zakat,totalke;
	
	cout<<"Masukan Nama Pasien          :";cin>>namap;
	cout<<"Masukan Alamat Pasien        :";cin>>alamatp;
	cout<<"Masukan Jenis Kelamin        :";cin>>jenisk;
	cout<<"Masukkan Lama Inap           :";cin>>lamai;
	cout<<"Masukan Harga Inap /Malam    :";cin>>hargai;
	
	cout<<"====================================="<<endl;
	cout<<"===========SLIP PEMBAYARAN==========="<<endl;
	cout<<"====================================="<<endl;
	total = lamai*hargai;

	cout<<"Nama Pasien              :"<<namap<<endl;
	cout<<"Alamat Pasien            :"<<alamatp<<endl;
	cout<<"Jenis Kelamin            :"<<jenisk<<endl;
	cout<<"Masukkan Lama Inap       :"<<lamai<<endl;
	cout<<"Harga Inap /Malam        :Rp."<<hargai<<endl;
	
	if (total>=5000000 && total<=10000000){
		pajakr = total*0.4;
		zakat = total*0.15;
		pelayanan = "Eksekutif";
		bonus = "Wisata Yogya";
	}
	else if (total>=4000000 && total<=4999999){
		pajakr = total*0.35;
		zakat = total*0.125;
		pelayanan = "VVIP";
		bonus = "Wisata Semarang";
	}
	else if (total>=3000000 && total<=3999999){
		pajakr = total*0.3;
		zakat = total*0.12;
		pelayanan = "VIP";
		bonus = "Wisata Solo";
	}
	else if (total>=2000000 &&total <=2999999){
		pajakr = total*0.25;
		zakat = total*0.1;
		pelayanan = "Kelas 1";
		bonus = "Wisata Bandung";
	}
	else if (total>=1000000 &&total <=1999999){
		pajakr = total*0.2;
		zakat = total*0.075;
		pelayanan = "Kelas 2";
		bonus = "Wisata Jakarta";
	}
	else{
		pajakr = total*0.1;
		zakat = total*0.005;
		pelayanan = "Kelas 3";
		bonus = "Dirumah Aja";
	}
	cout<<"Pajak Rumah Sakit Adalah :Rp."<<pajakr<<endl;
	cout<<"Zakat Anda Adalah        :Rp."<<zakat<<endl;
	
	cout<<"--------------------------------------------------------------"<<endl;
	cout<<" |PELAYANAN                :"<<pelayanan<<endl;
	cout<<" |BONUS                    :"<<bonus<<endl;
	cout<<"--------------------------------------------------------------"<<endl;
	totalke = total + zakat + pajakr;


	cout<<"Total Pembayaran Rumah Sakit     :"<<totalke<<endl;
	cout<<"Masukan Uang Pembayaran          :Rp.";cin>>uangp;
		uangk = uangp - totalke;
	cout<<"Uang Kembalian                   :Rp."<<uangk;
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
