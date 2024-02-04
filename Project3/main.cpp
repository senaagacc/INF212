#include <iostream>
#include "Meals.h"
#include "Sports.h"
#include "User.h"
using namespace std;

int main () {
int mode;


cout<<"Kullanicinin Bilgileri"<<endl;
User k1("Senanur","Agac",18,19,62,16);
cout<<"\nKahvalti = 1 \t Ogle Yemegi = 2 \t Aksam Yemegi = 3 \t Cikis = 4 ";
cout<<"\nOgun seciniz(HAFTALIK DEGERLER SORULMAKTADIR)"<<endl;
int k;
string size;
int ks=0,os=0,as=0,ka=0,ta=0,aa=0;
while(k!=4){
	cout<<"\nOgun seciniz veya sistemden cikiniz(HAFTALIK DEGERLER SORULMAKTADIR)"<<endl;
cin>>k;
if (k==1){
	cout<<"Kahvalti ogununuzun boyunutunu giriniz (small,medium,large)"<<endl;
	cin>>size;
	Breakfast k1(size);
	cout<<"Aldiginiz kalori miktari: "<<k1.getb_toplam()<<endl;
	ta = ta+ k1.getb_toplam();
	ks=ks+1;
}
else if (k==2){
	cout<<"Ogle yemegi ogununuzun boyunutunu giriniz (small,medium,large)"<<endl;
	cin>>size;
	Lunch l1(size);
	cout<<"Aldiginiz kalori miktari: "<<l1.getl_toplam()<<endl;
	ta = ta+ l1.getl_toplam();
	os=os+1;
}	
else if (k==3){
	cout<<"Aksam yemegi ogununuzun boyunutunu giriniz (small,medium,large)"<<endl;
	cin>>size;
	Dinner d1(size);
	cout<<"Aldiginiz kalori miktari: "<<d1.getd_toplam()<<endl;
	ta = ta+ d1.getd_toplam();
	as = as+1;
}

}
cout<<"Haftalýk toplam alinan kalori:  "<<ta<<endl;
cout<<ks<<" kez kahvalti ogunu yemistir\n"<<os<<" kez ogle yemegi ogunu yemistir\n"<<as<<" kez aksam yemegi ogunu yemistir\n"<<endl;
	

cout<<"\nBasketbol=1 \t Futbol=2 \t Tenis=3 \t Yuzme=4 \t Cikis=5  ";
int a,b;
int th=0;
int bs=0,fs=0,ts=0,ss=0;
while(a!=5){
cout<<"\nYaptiginiz sporu giriniz veya sistemden cikiniz(HAFTALIK DEGERLER SORULMAKTADIR)"<<endl;
cin>>a;
if (a==1){
	cout<<"Kac dakika yaptiginizi girin"<<endl;
	cin>>b;
	Basketball b1(b);
	cout<<"Harcadiginiz kalori miktari: "<<b1.getb_harcanan()<<endl;
	th = th+ b1.getb_harcanan();
	bs=bs+1;
}
else if(a==2){
	cout<<"Kac dakika yaptiginizi girin"<<endl;
	cin>>b;
	Football f1(b);
cout<<"Harcadiginiz kalori miktari: "<<f1.getf_harcanan()<<endl;
	th = th+ f1.getf_harcanan();
	fs=fs+1;
}
else if(a==3){
	cout<<"Kac dakika yaptiginizi girin"<<endl;
	cin>>b;
	Tennis t1(b);
cout<<"Harcadiginiz kalori miktari: "<<t1.gett_harcanan()<<endl;
	th = th+ t1.gett_harcanan();
	ts=ts+1;
}
else if(a==4){
	cout<<"Kac dakika yaptiginizi girin"<<endl;
	cin>>b;
	Swimming s1(b);
    cout<<"Harcadiginiz kalori miktari: "<<s1.gets_harcanan()<<endl;
	th = th+ s1.gets_harcanan();
	ss=ss+1;
}


	
}
cout<<"Haftalýk toplam harcanan kalori:  "<<th<<endl;
cout<<bs<<" kez basketbol oynamistir\n"<<fs<<" kez futbol oynamistir\n"<<ts<<" kez tenis oynamistir\n"<<ss<<" kez yuzmustur"<<endl;

int net = ta-th;

cout<<"Kullanicinin haftalik alinan kalori - harcanan kalori farký: "<<net<<endl;



return 0;
}
