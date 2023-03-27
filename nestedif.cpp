#include <iostream>
#include <string>
using namespace std;

main (){
	string nama;
	int jurusan;
	double tugas, uts, absen, uas, total;
	
	cout<<"Masukan Kode Program Studi :";
	cin>>jurusan;
	
	if (jurusan == 41){
		cout<<"Program Studi SI"<<endl;
		cin.ignore();
		cout<<"Masukan Nama Mahasiswa :";
		getline(cin, nama);
		cout<<"Masukan Nilai Absen    :";
		cin>>absen;
		cout<<"Masukan Nilai Tugas    :";
		cin>>tugas;
		cout<<"Masukan Nilai UTS      :";
		cin>>uts;
		cout<<"Masukan Nilai UAS      :";
		cin>>uas;
		
		total = (0.1 * absen)+(0.2 * tugas)+(0.3 * uts)+(0.4 * uas);
		cout<<"Nilai Total Adalah     :"<<total<<endl;
		
			if(total >=80 && total <=100){
				cout<<"Grade Anda Adalah A"<<endl;
			}
			else if(total >=70 && total <=79){
				cout<<"Grade Anda Adalah B"<<endl;
			}
			else if(total >=60 && total <=69){
				cout<<"Grade Anda Adalah C"<<endl;
			}
			else if(total >=50 && total <=59){
				cout<<"Grade Anda Adalah D"<<endl;
			}
			else if(total >=40 && total <=49){
				cout<<"Grade Anda Adalah E"<<endl;
			}
			else {
				cout<<"Grade Anda Adalah F"<<endl;
			}
			
	}
	else if (jurusan == 51){
		cout<<"Program Studi TI"<<endl;
		cin.ignore();
		cout<<"Masukan Nama Mahasiswa :";
		getline(cin, nama);
		cout<<"Masukan Nilai Absen    :";
		cin>>absen;
		cout<<"Masukan Nilai Tugas    :";
		cin>>tugas;
		cout<<"Masukan Nilai UTS      :";
		cin>>uts;
		cout<<"Masukan Nilai UAS      :";
		cin>>uas;
		
		total = (0.1 * absen)+(0.2 * tugas)+(0.3 * uts)+(0.4 * uas);
		cout<<"Nilai Total Adalah     :"<<total<<endl;
		
			if(total >=80 && total <=100){
				cout<<"Grade Anda Adalah A"<<endl;
			}
			else if(total >=70 && total <=79){
				cout<<"Grade Anda Adalah B"<<endl;
			}
			else if(total >=60 && total <=69){
				cout<<"Grade Anda Adalah C"<<endl;
			}
			else if(total >=50 && total <=59){
				cout<<"Grade Anda Adalah D"<<endl;
			}
			else if(total >=40 && total <=49){
				cout<<"Grade Anda Adalah E"<<endl;
			}
			else {
				cout<<"Grade Anda Adalah F"<<endl;
			}
	
	
	
}
	
}
