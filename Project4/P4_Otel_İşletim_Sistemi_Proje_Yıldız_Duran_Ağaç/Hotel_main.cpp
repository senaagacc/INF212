#include<iostream>
#include<string.h>
#include <iomanip>
#include <ctime>
#include<stdlib.h>
#include "Hotel.h"
using namespace std;
int main()
{
	int tercih,deneme,g,rn;
	string i,a;
	int on;
	double k;
	cout<<"Lutfen secim yapiniz\n1.Gelistirici\n2.Kullanici\nTercih--->";
	cin>>tercih;
	
	if(tercih==1)
	{
		cout<<"\nFonksiyonlari deneyeceksiniz...\n"<<endl;
		cout<<"Hangi classta deneme yapmak istersiniz? "<<endl;
		cout<<"1.MUSTERI CLASS\n2.ODA CLASS\nSayi giriniz--->\n";
		cin>>deneme;
		
		if(deneme==1)
		{
			cout<<"                              MUSTERI CLASS TEST                    \n ";
			Musteri m;
			m.print();
			cout<<"\nMusteri ismini giriniz-->";
			cin>>i;
			cout<<"Musteri adresini giriniz-->";
			cin>>a;
			cout<<"Musterinin kalacagi gun sayisini giriniz-->";
			cin>>g;
			cout<<"Musterinin rezervasyon numarasini giriniz-->";
			cin>>rn;
			cout<<endl;
			Musteri c(i,a,g,rn);
			c.print();
			cout<<endl;
			m=c;
			
			m.print();
			m.getIsim();
			m.getAdres();
			m.getGunler();
			m.getRezerv();
			cout<<endl;
			Musteri k;
			k=c+m;
			k.print();
			cout<<endl;
			Musteri h;
			h=c-m;
			h.print();
			cout<<endl;
			cout<<"ostream kullanimi-->"<<endl;
			cout<<m;
			cout<<endl;
			cout<<"\nBool operator denemesi: ";
			Musteri b1("Ahmet","Bursa",3,2);
			Musteri b2("Mehmet","Bursa",4,2);
			cout<<"\n1.musteri:\n";
			b1.print();
	        cout<<"2.musteri:\n";
			b2.print();
			if( b1 == b2 ){
				cout<<"Musteri bilgileri birbirine esittir\n";
			}
			else{
				cout<<"Musteri bilgileri birbirine esit degildir\n";
			}
			Musteri l;
			l.kayit();
			cout<<endl;
			l.Yazdir();
			cout<<endl;
		}
		
		if(deneme==2)
		{
			cout<<"                              ODA CLASS TEST                    \n ";
			Oda o;
			o.print1();
			cout<<"Oda numaraniz nedir?-->";
			cin>>on;
			cout<<"Kira bedelini giriniz-->";
			cin>>k;
			cout<<endl;
			Oda d(on,k);
			d.print1();
			cout<<endl;
			o=d;
			
			d.print1();
			d.getac();
			d.getoda_boyut();
			d.getoda_model();
			d.getKira();
			d.getOdaNo();
			cout<<endl;
			Oda a;
			a=o+d;
			a.print1();
			cout<<endl;
			cout<<endl;
			cout<<"ostream kullanimi-->"<<endl;
			cout<<a;
			cout<<endl;
			Oda n;
			n.odaYazdir();
			cout<<endl;
			cout<<"\nBool operator denemesi: ";
			Oda o1(4,200);
			Oda o2(4,200);
			cout<<"\n1.oda:\n";
			o1.print1();
	        cout<<"2.oda:\n";
			o2.print1();
			if( o1 == o2 ){
				cout<<"Oda bilgileri birbirine esittir\n";
			}
			else{
				cout<<"Oda bilgileri birbirine esit degildir\n";
			}
			
		}
	}
	
	if(tercih==2){
	Otel A;		
	char otel;
	cout<<endl<<"=============================================OTELIMIZE HOSGELDINIZ========================================";
	do
	{		
		
		cout<<endl<<"\t\t\t\t\t"
				"MENU:\n\t\t\t\t\t"
				"1.YONETICI OLARAK GIRIS VE VERITABANI EKLEME\n\t\t\t\t\t"
				"2.MUSTERI OLARAK GIRIS\n\t\t\t\t\t"
				"3.CIKIS\n\t\t\t\t\t"
				"SECIMINIZI GIRINIZ:";
		cin>>otel;
		switch(otel)
		{
		case '1':
			cout<<"OTELDEKI ODALARIN VERITABANINI GIRINIZ-->"<<endl;
			A.odaEkle();
			cout<<"VERITABANI GUNCELLENDI--ANA MENUYE DONUS-->\n"<<endl;
			break;
		case '2':
			char otel1;
			do
			{
				
				
			//	cout<<"       ~~~~~~~~~~~~~~~~~TEKRAR OTELIMIZE HOSGELDINIZ~~~~~~~~~~~~"<<endl;
				cout<<"\n\t\t\t\t\t"
						"MENU:\n\t\t\t\t\t"
						"1.ODALARIN MUSAITLIGINI KONTROL EDIN\n\t\t\t\t\t"
						"2.ODA ARA\n\t\t\t\t\t"
						"3.CHECK IN YAP\n\t\t\t\t\t"
						"4.MUSTERI ARA\n\t\t\t\t\t"
						"5.MISAFIR LISTESI\n\t\t\t\t\t"
						"6.KONTROL ET.\n\t\t\t\t\t"
						"7.ANA MENUYE DON.\n\t\t\t\t\t"
						"SECIMIZI GIRINIZ:";
				cin>>otel1;
				switch(otel1)
				{
				case '1':
					A.musait_mi();
					break;
				case '2':
					A.odaAra();
					break;
				case '3':
					A.CheckIn();
					break;
				case '4':
					A.musteriAra();
					break;
				case '5':
					A.ozet();
					break;
				case '6':
					A.kontrolEt();
					break;
				case '7':
					break;
				default:
					cout<<"GECERSIZ SECIM"<<endl;
					break;
				}
			}while(otel1!='7');
			break;
		case '3':
			cout<<"TESEKKURKLER";
			exit(0);
		default:
			cout<<"GECERSIZ SECIM"<<endl;
			break;
		}
	}while(otel!='3');
}
	return 0;
}
