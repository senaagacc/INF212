#include<iostream>
#include "User.h"
//#include "sports.h"
//#include "meals.h"
using namespace std;
User::User(string name,string surname,int id,int age,int k,int w){
ad= name;
soyad = surname;
ID=id;
yas= age;
kilo=k;
hafta=w;

cout<<"ADI: "<<name<<"//SOYADI: "<<surname<<"//ID NUMARASI: "<<id<<"//YASI: "<<age<<"//KILOSU: "<<k<<"//HAFTA BILGISI: "<<w<<endl;
}
User::User(User &other){
ad= other.ad;
soyad = other.soyad;
ID=other.ID;
yas= other.yas;
kilo=other.kilo;
hafta=other.hafta;

}
User& User::operator=(User& other){
ad= other.ad;
soyad = other.soyad;
ID=other.ID;
yas= other.yas;
kilo=other.kilo;
hafta=other.hafta;

	return *this;
}
string User::get_ad(){
	return ad;
}
string User::get_soyad(){
	return soyad;
}
int User::get_ID(){
	return ID;
}
int User::get_yas(){
	return yas;
}
int User::get_kilo(){
	return kilo;
}
int User::get_hafta(){
	return hafta;
}


//ostream & operator<<(ostream& out, const User& other){

//}



