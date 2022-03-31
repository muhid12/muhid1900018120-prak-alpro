#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int jum_beli, ongkir, bayar,diskon,jumlah[50], harga[50], sub_tot[50];
	string nama_barang[50];
	float tot,jarak;
	
	cout<<"DAFTAR MENU :    KODE MENU     "<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"1. Ayam Geprek    (APREK)    : Rp.21.000"<<endl;
	cout<<"2. Ayam Goreng    (AG)       : Rp.17.000"<<endl;
	cout<<"3. Udang Goreng   (UG)       : Rp.19.000"<<endl;
	cout<<"4. Cumi Goreng    (CG)       : Rp.20.000"<<endl;
	cout<<"5. Ayam Bakar     (AB)       : Rp.25.000"<<endl;
	cout<<endl;
	cout<<"Masukan Jumlah Beli : ";
	cin>>jum_beli; 
	
	for (int i=0; i<jum_beli;i++){
		cout<<endl;
		cout<<"Masukan Barang Ke-"<<i+1<<endl;
		cout<<endl;
		
		cout<<"Nama Barang : ";
		cin>>nama_barang[i]; 
		
		cout<<"Jumlah      : ";
		cin>>jumlah[i];
		
		cout<<"Harga       : ";
		cin>>harga[i]; 
		
		cout<<"Jarak	    : ";
		cin>>jarak;
		
		sub_tot[i]=jumlah[i]*harga[i]+ongkir; 
		tot+=sub_tot[i]; 
	}
	
	cout<<endl;
	cout<<"STRUK BELANJA"<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"No   Barang    Jumlah     Harga     Sub Total		jarak"<<endl;
	for (int i=0;i<jum_beli;i++){
		cout<<i+1<<setw(8)<<nama_barang[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<sub_tot[i]<<setw(12)<<jarak<<endl; 
	}
	cout<<"---------------------------------------------------------"<<endl;

	if(tot>=25000){
		diskon=ongkir-3000;
	}	else if(tot>=50000){
		diskon=ongkir-5000;
		tot=tot*15/100;
	}	else(tot>150000);{
		diskon=ongkir-8000;
		tot=tot*35/100;
	}
	

	if (jarak>=3000){
		ongkir=15000+tot;
		}else if(jarak>3000){
		ongkir=25000+tot;
		}

	cout<<"Jumlah Bayar : Rp."<<tot<<endl;
	cout<<"Dikon        : Rp."<<diskon<<endl;
	cout<<"Total Bayar  : Rp."<<tot-diskon<<endl;
	cout<<"Bayar        : Rp.";
	cin>>bayar; 
	cout<<"Kembali      : Rp."<<(bayar+ongkir-(tot-diskon))<<endl; 
}
