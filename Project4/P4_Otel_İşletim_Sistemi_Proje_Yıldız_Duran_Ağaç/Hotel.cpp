#include<iostream>
#include<string.h>
#include <iomanip>
#include <ctime>
#include "Hotel.h"

using namespace std;

Musteri::Musteri()
{
	string isim="NULL";	   			 
	string adres= "NULL";						
	int gunler= 0;	    					
	int rezervasyon_no= 0;				

}

Musteri::Musteri(string i, string a,  int g, int rn)
{
	isim= i;	   			 
	adres= a;						
	gunler= g;	    									
	rezervasyon_no= rn;				
}

void Musteri::print()
{
cout<<"Musteri ismi-->"<<isim<<"\n"<<"Musteri adresi-->"<<adres<<"\n"<<"Musterinin kalacagi gun sayisi-->"<<gunler<<endl;
cout<<"Musterinin rezervasyon numarasi-->"<<rezervasyon_no<<endl;;
}

Musteri::Musteri(const Musteri& other)
{
	 isim= other.isim;	   			 
	 adres= other.adres;			
	 telefon_no= other.telefon_no;			
	 gunler= other.gunler;	    			
	 avans_odemesi= other.avans_odemesi;		
	 fatura= other.fatura;				
	 rezervasyon_no= other.rezervasyon_no;				
	 oda= other.oda;					
	 durum= other.durum;
}
string Musteri::getIsim(){ return isim; }
string Musteri::getAdres(){ return adres; }
int Musteri::getGunler(){ return gunler; }
float Musteri::getAvans(){ return avans_odemesi; }
double Musteri::getFatura(){ return fatura; }
int Musteri::getRezerv(){ return rezervasyon_no; }
int Musteri::getOda(){ return oda; }
int Musteri::getDurum(){ return durum; }

Musteri Musteri::operator+(const Musteri& other){
	Musteri temp;
	temp.isim= isim+ other.isim;
	temp.adres= adres+ other.adres;
	temp.gunler= gunler+ other.gunler;
	temp.rezervasyon_no= rezervasyon_no+ other.rezervasyon_no;
	
	return temp;
}

Musteri Musteri::operator-(const Musteri& other){
	Musteri temp;
	temp.gunler= gunler- other.gunler;
	temp.rezervasyon_no= rezervasyon_no- other.rezervasyon_no;
	return temp;
}

bool Musteri::operator== ( Musteri& other) {
	return (isim == other.isim && adres == other.adres  && gunler == other.gunler &&  rezervasyon_no == other.rezervasyon_no );
}



ostream& operator<< (ostream& os, const Musteri& other) {
	os << "Isim= " << other.isim
	<< "\nAdres= " << other.adres
	<< "\nTelefon Numarasi= " << other.telefon_no
	<< "\nGun= " << other.gunler
	<< "\nAvans Odemesi= " << other.avans_odemesi
	<< "\nFatura= " << other.fatura
	<< "\nRezervasyon Numarasi= " << other.rezervasyon_no
	<< "\nOda= " << other.oda
	<< "\nMusaitlik durumu= " << other.durum;
	
	return os;
}

void Musteri::kayit()		
{
	cout<<"\nMusteri ismini giriniz-->";
	getline(cin, isim);
	getline(cin, isim);
	cout<<"Musteri adresini giriniz-->";
	getline(cin,adres);
	flag:
	cout<<"Musterinin telefon numarasi-->";
	 telefon_no = new int[10];
	 cin>>*telefon_no;
}
//

void Musteri::Yazdir()		
{
	cout<<rezervasyon_no<<"\t\t";
	cout<<"| "<<left<<setfill(' ')<<setw(30)<<isim;
	cout<<"| "<<*telefon_no<<"\t\t\t";
	cout<<"| "<<left<<setfill(' ')<<setw(30)<<adres;
	cout<<"| "<<oda<<"\t\t\t";
	try{
	if(durum==1){
	cout<<"|\t\t-\t\t|"<<endl;
	}
	else{
	throw (durum);
	}
   }
   catch(int s){
   	cout<<"KONTROL EDILDI!";
   }
}
Oda::Oda()
{
	oda_no = 0;
	kira = 0.0;
	//durum = 0;
}
//--------------------------------------------------------------------------------------------------------
void Oda::print1()
{
	cout<<"Oda numaraniz-->"<<oda_no<<endl;
	cout<<"Kira tutariniz-->"<<kira<<endl;
}

Oda::Oda( int on, double k)
{
	cout<<"Normal constructor cagrildi"<<endl;
	oda_no = on;
	kira = k;
	
}
//--------------------------------------------------------------------------------------------------------
Oda::Oda(const Oda& other)
{
	cout<<"Copy constructor cagrildi"<<endl;
	oda_no = other.oda_no;
	kira = other.kira;
	
}
//--------------------------------------------------------------------------------------------------------
Oda& Oda::operator=(const Oda& other)
{
	
	oda_no = other.oda_no;
	kira = other.kira;
	
	return *this;
}
bool Oda::operator== ( Oda& other) {
	return (oda_no == other.oda_no && kira == other.kira);
}
//--------------------------------------------------------------------------------------------------------
char Oda::getac()
{
	return ac;
}
//--------------------------------------------------------------------------------------------------------
char Oda::getoda_model()
{
	return oda_model;
}
//--------------------------------------------------------------------------------------------------------
char Oda::getoda_boyut()
{
	return oda_boyut;
}
//--------------------------------------------------------------------------------------------------------
int Oda::getOdaNo()
{
	return oda_no;
}
//--------------------------------------------------------------------------------------------------------
double Oda::getKira()
{
	return kira;
}
//--------------------------------------------------------------------------------------------------------
int Oda::getDurum()
{
	return durum;
}
//--------------------------------------------------------------------------------------------------------
ostream& operator<<(ostream& os, const Oda& other)
{
	os<<"Oda numaraniz nedir-->"<<other.oda_no<<endl;
	os<<"Odanizin ucreti nedir-->"<<other.kira<<endl;
	os<<"Odanin rezerve edilip edilmeme durumu nedir-->"<<other.durum<<endl;
	return os;
}
//--------------------------------------------------------------------------------------------------------
Oda Oda::operator+(const Oda& other)
{
	cout<<"+ operator cagrildi..."<<endl;
	Oda temp;
	temp.oda_no = oda_no + other.oda_no;
	temp.kira = kira + other.kira;
	
	return temp;
}
void Oda::odaKaydi(int rno)		
{
	oda_no=rno;	
	cout<<"Odada klima olsun(A)/olmasin(N)?-->";
	cin>>ac;
	while(ac!='A'&& ac!='N')
	{
		cout<<"Odanizda klima olsun(A)/olmasin(N)--> ";
		cin>>ac;
	}
	cout<<"Oda Suit(S) mi Normal(N) mi olsun?--> ";
	cin>>oda_model;
	while(oda_model!='S' && oda_model!='N')
	{
		cout<<"Odanizi Suit(S) mi Normal(N) mi secmek istersiniz?-->";
		cin>>oda_model;
	}
	cout<<"Oda boyutunu giriniz (Buyuk(B)-Kucuk(K))--> ";
	cin>>oda_boyut;
	while(oda_boyut!='B'&& oda_boyut!='K')
	{
		cout<<"Odanizin boyutunu ne olsun? (Buyuk(B)-Kucuk(K))--> ";
		cin>>oda_boyut;
	}
	cout<<"Odanin kirasini giriniz--> ";
	cin>>kira;
	while(kira<0 || kira>20000)
	{
		cout<<"Lutfen gecerli bir kira bedeli giriniz";
		cin>>kira;
	}
	durum=0;	
	cout<<"\nODA BASARI ILE EKLENDI!"<<endl;
}
void Oda::odaYazdir()
{
	cout<<"| "<<oda_no<<".\t\t|\t"<<ac<<"\t\t|\t"<<oda_model<<"\t\t|\t"<<oda_boyut<<"\t\t|\t"<<kira<<"\t\t|\t";
	try{
		if(durum==0){
			cout<<"MUSAIT\t|";
		}
		else{
			throw(durum);
		}
	}
	catch(int s){
		cout<<"Rezerve.\t\t|";
	}
}

void Otel::odaEkle()
{
	int rno;
	cout<<"Oteldeki oda sayisini giriniz-->";
	cin>>noda;		
	while(noda<=0)
	{
		cout<<"GECERSÝZ SAYI GIRDINIZ.LUTFEN GECERLI ODA SAYISI GIRINIZ.";
		cin>>noda;
	}
	for(int i=0;i<noda;i++)
	{
		cout<<"ODA "<<(i+1)<<endl;
		flag:
		cout<<endl<<"Oda numarasi giriniz---> ";
		cin>>rno;
		if(rno<=0)	
		{
			cout<<endl<<"BU ODA NUMARASI GECERSIZ! LUTFEN ODA NUMARASINI TEKRAR GIRINIZ : ";
			goto flag;
		}
		for(int i=0; i<noda;i++)	
		{
			if(o[i].oda_no==rno)
			{
				cout<<"GECERSIZ. Repetitive room numbers."<<endl;
				goto flag;
			}
		}
		o[i].odaKaydi(rno);		
	}
}
void Otel::musait_mi()		
{
	if(noda==0)
	{
		cout<<"Lutfen oda ekleyiniz-->"<<endl;
		return;
	}
	cout<<"Tum musait odalarin listesi:"<<endl;
	cout<<"| Oda Numarasi.\t|\tKlimali\tKlimasiz|\tOda modeli\t\t|\tOda boyutu\t\t|\tKira\t\t|\tMusaitlik durumu  \t|"<<endl;
	for(int i=0;i<noda;i++)
	{
		o[i].odaYazdir();	
	}
}
void Otel::odaAra()	
{
	if(noda==0)
	{
		cout<<"Lutfen oda ekleyiniz."<<endl;
		return;
	}
	int flag=0;
	char ac1, oda_model1, oda_boyut1;
	cout<<"Klimali mi klimasiz mi istersiniz? (A/N): "<<endl;
	cin>>ac1;
	cout<<"Suit mi Normal mi oda istersiniz? (S/N)"<<endl;
	cin>>oda_model1;
	cout<<"Odanizin boyutunu Buyuk mu kucuk mu istersiniz? (B/S)"<<endl;
	cin>>oda_boyut1;
	for(int i=0;i<noda;i++)
	{
		if(o[i].ac==ac1 && o[i].oda_model==oda_model1 && o[i].oda_boyut==oda_boyut1)		
		{
			flag=1;
			cout<<"Oda bulundu!"<<endl;
			o[i].odaYazdir();
		}
	}
	if(flag==0)
	{
		cout<<"Boyle bir oda yok."<<endl;
	}
}
void Otel::CheckIn()	
{
	if(noda==0)
	{
		cout<<"Lutfen oda ekleyiniz."<<endl;
		return;
	}
	int i, rno;
	if(nmust<=noda){	
		m[nmust].rezervasyon_no=nmust+1;	
		flag:
		int flag1=0;
		cout<<"Oda numarasi giriniz=";		
		cin>>rno;
		for(i=0;i<noda; i++){
			if(rno==o[i].oda_no)
			{
				flag1=1;
				break;
			}
		}
		if(flag1==0){
			cout<<"GECERSIZ ODA NUMARASI. LUTFEN TEKRAR GIRINIZ.\n";
			goto flag;
		}
		if(o[i].durum==0)		
		{
			char ch2;
			cout<<"Oda musait."<<endl;
			o[i].odaYazdir();
			cout<<"Devam etmek ister misiniz? Tuslayin(Y/y)-->";	
			cin>>ch2;
			if(ch2=='Y'||ch2=='y')
			{
				m[nmust].kayit();		
				cout<<"Lutfen otelimizde kalacaginiz gun sayisini giriniz--> ";
				cin>>m[nmust].gunler;
				m[nmust].fatura = m[nmust].gunler*o[i].kira;		
				cout<<"Yaklasik olarak toplam faturaniz-->"<<(m[nmust].fatura)<<endl<<"Minimum avans odemeniz-->"<<m[nmust].fatura/4<<"\nOdeyeceginiz tutar nedir?-->";
				cin>>m[nmust].avans_odemesi;
				while(m[nmust].avans_odemesi<m[nmust].fatura/4||m[nmust].avans_odemesi>m[nmust].fatura)
				{
					cout<<"Lutfen gecerli tutari giriniz.";
					cin>>m[nmust].avans_odemesi;
				}
				cout<<"TESEKKURLER.REZERVASYON ONAYLANDI!"<<endl;		
				cout<<"--------------------------------------------------------------"<<endl;		
				cout<<"Rezervasyon id: "<<m[nmust].rezervasyon_no<<"\nIsim: "<<m[nmust].isim<<"\nOda Numarasi: "<<rno<<"\nTarih: ";
				
			
				o[i].durum=1;		
				m[nmust].oda=rno;		
				m[nmust].durum=1;
				nmust++;
			}
			else		
			{
				goto flag;
			}
		}
		else		
		{
			cout<<"Oda rezerve edilimis. Lutfen baska oda seciniz."<<endl;
		}
	}
	else		
	{
		cout<<"UZGUNUZ! OTELIMIZDE BOS YER BULUNMAMAKTADI!"<<endl;
	}
}
void Otel::musteriAra()
{
	int id, flag=0;
	cout<<"Aradiginiz musterinin rezervasyon numarasini giriniz-->";
	cin>>id;
	for(int i=0;i<=nmust;i++)		
	{
		if(m[i].rezervasyon_no==id)
		{
			cout<<"\t\t\t Isim-->"<<setw(30);
			cout<<"\t\t\t Telefon Numarasi-->"<<setw(30);
			cout<<"\t\t\t Adres-->"<<setw(30);
			cout<<"\t\t\tOda Numarasi--> "<<setw(30)<<endl;
			m[i].Yazdir();
			flag=1;
		}
	}
	if(flag==0)		
	{
		cout<<"MUSTERI BULUNAMADI!"<<endl;
	}
}
void Otel::kontrolEt()		
{
	int rno, i, j;
	cout<<"Oda numarasini giriniz-->";
	cin>>rno;
	for(j=0;j<noda; j++){
		if(rno==o[j].oda_no)
		{
			break;
		}
	}
	if(o[j].durum==0)		
	{
		cout<<"GECERSIZ!"<<endl;
	}
	for(i=0;i<nmust;i++)	
	{
		if(m[i].oda==rno)
		{
			cout<<"KONTROL EDILIYOR..."<<endl;
			m[i].Yazdir();		
			cout<<"Toplam faturaniz--> "<<m[i].fatura<<endl;
			cout<<"Avans odemeniz--> "<<m[i].avans_odemesi;
			cout<<endl<<"Avans odemenizden sonra kalan odemeniz--> "<<m[i].fatura-m[i].avans_odemesi;		
			cout<<endl<<"TESEKKURLER! OTELIMIZE TEKRAR BEKLERIZ..."<<endl;
			o[j].durum=0;	
			m[i].durum=0;	
			break;
		}
	}
}
void Otel::ozet()		
{
	if(noda==0)
	{
		cout<<"HENUZ MUSTERI YOK."<<endl;
		return;
	}
	cout<<"KONUK LISTESI :"<<endl;
	cout<<"ID.\t\t";
	cout<<"|	ISIM	\t\t";
	cout<<"|	TELEFON NUMARASI	\t\t";
	cout<<"|	ADRES	\t\t";
	cout<<"|	ODA NO	: \t";
	cout<<"|	DURUM	\t\t|"<<endl;
	for(int i=0;i<nmust;i++)
	{
		m[i].Yazdir();
	}
}
