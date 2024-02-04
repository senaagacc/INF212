#include<iostream>
#include<string.h>
#include "Meals.h"

using namespace std;
Breakfast::Breakfast(string t){
	if(t=="small"){
		b_cal=200;
		b_sayac=b_sayac+1;
		b_toplam=200;
	}
	else if(t=="medium"){
		b_cal=400;
		b_sayac=b_sayac+1;
		b_toplam=400;
	}
	else if(t=="large"){
		b_cal=400;
		b_sayac=b_sayac+1;
		b_toplam=400;
	}
	else{
		cout<<"Gecersiz deger girdiniz"<<endl;
	}	
	
}

Breakfast::Breakfast(Breakfast& x){
	b_cal=x.b_cal;
	b_sayac=x.b_sayac;
	b_toplam=x.b_toplam;
	b_tip=x.b_tip;
}
Breakfast& Breakfast::operator=(Breakfast& x){
	b_cal=x.b_cal;
	b_sayac=x.b_sayac;
	b_toplam=x.b_toplam;
	b_tip=x.b_tip;
	return *this;	
	
}
/*Breakfast& Breakfast::operator+(Breakfast& x){
	Breakfast toplamcpx;
	toplamcpx.b_toplam = b_toplam + x.b_toplam;
	cout<<"Toplam: "<<toplamcpx.b_toplam<<endl;
}*/
int Breakfast::getb_toplam(){
	return b_toplam;
}
int Breakfast::getb_sayac(){
	return b_sayac;
}
void Breakfast::print(){
	cout<<"Kahvaltidan alinan kalori: "<<b_cal<<endl;
	cout<<"Kac kere kahvalti yapildi: "<<b_sayac<<endl;
}

ostream & operator<<(ostream& out, const Breakfast& other){
	out << "Kahvaltidan Alinan Kalori: "<<other.b_cal;
	return out;
}


Lunch::Lunch(string t){
	if(t=="small"){
		l_cal = 200;
		l_sayac = l_sayac+1;
		l_toplam = 200;
	}
	else if(t=="medium"){
		l_cal = 400;
		l_sayac = l_sayac+1;
		l_toplam = 400;
	}
	else if(t=="large"){
		l_cal = 400;
		l_sayac = l_sayac+1;
		l_toplam = 400;
	}
	else{
		cout<<"Gecersiz deger girdiniz"<<endl;
	}	
	
}

Lunch::Lunch(Lunch& x){
	l_cal=x.l_cal;
	l_sayac=x.l_sayac;
	l_toplam=x.l_toplam;
	l_tip=x.l_tip;
}
Lunch& Lunch::operator=(Lunch& x){
	l_cal=x.l_cal;
	l_sayac=x.l_sayac;
	l_toplam=x.l_toplam;
	l_tip=x.l_tip;
	return *this;	
	
}
int Lunch::getl_toplam(){
	return l_toplam;
}
int Lunch::getl_sayac(){
	return l_sayac;
}
void Lunch::print(){
	cout<<"Kahvaltidan alinan kalori: "<<l_cal<<endl;
	cout<<"Kac kere kahvalti yapildi: "<<l_sayac<<endl;
}
/*Breakfast Breakfast::operator+ (const Breakfast& B){
	Breakfast kahvalti;
	kahvalti.b_toplam = b_toplam + B.b_toplam;
	return kahvalti;
}*/
ostream & operator<<(ostream& out, const Lunch& other){
	out << "Kahvaltidan Alinan Kalori: "<<other.l_cal;
	return out;
}


Dinner::Dinner(string t){
	if(t=="small"){
		d_cal = 200;
		d_sayac = d_sayac+1;
		d_toplam = 200;
	}
	else if(t=="medium"){
		d_cal = 400;
		d_sayac = d_sayac+1;
		d_toplam = 400;
	}
	else if(t=="large"){
		d_cal = 400;
		d_sayac = d_sayac+1;
		d_toplam = 400;
	}
	else{
		cout<<"Gecersiz deger girdiniz"<<endl;
	}	
	
}

Dinner::Dinner(Dinner& x){
	d_cal=x.d_cal;
	d_sayac=x.d_sayac;
	d_toplam=x.d_toplam;
	d_tip=x.d_tip;
}
Dinner& Dinner::operator=(Dinner& x){
	d_cal=x.d_cal;
	d_sayac=x.d_sayac;
	d_toplam=x.d_toplam;
	d_tip=x.d_tip;
	return *this;	
	
}
int Dinner::getd_toplam(){
	return d_toplam;
}
int Dinner::getd_sayac(){
	return d_sayac;
}
void Dinner::print(){
	cout<<"Kahvaltidan alinan kalori: "<<d_cal<<endl;
	cout<<"Kac kere kahvalti yapildi: "<<d_sayac<<endl;
}

ostream & operator<<(ostream& out, const Dinner& other){
	out << "Kahvaltidan Alinan Kalori: "<<other.d_cal;
	return out;
}
