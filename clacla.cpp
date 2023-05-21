#include <iostream>
#include <conio.h>
#include <string>
#include <stdio.h>

using namespace std;
int main()
{
    int i, j=1, x=1, jb, totalsd, tb, diskon, bayar, kembali;
    struct{
        string nama ;
        int harga, banyak, no,total, ttotal;
    }bakmi[30];

	   cout<<"-------------------------------------"<<endl;
       cout<<"   SISTEM INFORMASI BAKMI JAWA  "<<endl;
       cout<<"-------------------------------------"<<endl;
       cout<<"No    Menu            Harga      "<<endl;
       cout<<" 1    Mie Goreng      Rp.10.000,00"<<endl;
       cout<<" 2    Kwe tiaw        Rp.12.000,00"<<endl;
       cout<<" 3    Capcay Goreng   Rp.15.000,00"<<endl;
       cout<<" 4    Nasi Rica Rica  Rp.20.000,00"<<endl;
       cout<<"------------------------------------"<<endl;

for (i=0;i<2;i++){

	cout<<"Pilih No Menu  = ";cin>>bakmi[i].no;
	cout<<"Banyak Pesanan = ";cin>>bakmi[i].banyak;


  if (bakmi[i].no == 1){

		bakmi[i].harga=10000;
		bakmi[i].nama="Mie goreng";
	}
	else if (bakmi[i].no == 2){
		bakmi[i].harga=12000;
		bakmi[i].nama="Kwetiaw";
	}
	else if (bakmi[i].no == 3){
		bakmi[i].harga=15000;
		bakmi[i].nama="Capcay goreng";
	}
	else if (bakmi[i].no == 4){
		bakmi[i].harga=20000;
		bakmi[i].nama="Nasi Rica-rica";
	}

}
  cout << "-----------------------------------------------------------------------" << endl;
    cout << " No | Nama Menu\t\t | Harga  | Pesanan |  Total  |" << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    
for (i=0;i<2;i++){
	 cout << "  ";
	 	bakmi[i].total = bakmi[i].harga*bakmi[i].banyak;
//	 	bakmi[i].ttotal = bakmi[i].total + bakmi[i].total;
        cout <<j++;
        cout << "   |   ";
        cout << bakmi[i].nama;
        cout << "   |   ";
        cout << bakmi[i].harga;
        cout << "   |   ";
        cout << bakmi[i].banyak;
        cout <<"    |   "<<bakmi[i].total<<endl;
}
// cout << "-----------------------------------------------------------------------" << endl;
//    cout << "| Total  |" <<bakmi[i].ttotal<<endl;
//    cout << "-----------------------------------------------------------------------" << endl;

}
