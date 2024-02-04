#include <iostream>
#include "Sports.h"
using namespace std;
Basketball::Basketball(int d){
	dakika = d;
	bs=bs+1;
}
Basketball::Basketball(Basketball &other){
	dakika = other.dakika;
	bs = other.bs;
}
Basketball& Basketball::operator=(Basketball& other){
	dakika = other.dakika;
	bs = other.bs;
	return *this;
}

int Basketball::getb_dakika(){
	return dakika;
}
int Basketball::getb_sayac(){
	return bs;
}
int Basketball::getb_harcanan(){

	return dakika*6;

}
ostream & operator<<(ostream& out, const Basketball& other){
	out <<"Bir gun icinde basketbol oynadigi dakika : "<<other.dakika;
	return out;
}



Football::Football(int d){
	dakika = d;
	fs=fs+1;
}
Football::Football(Football &other){
	dakika = other.dakika;
	fs = other.fs;
}
Football& Football::operator=(Football& other){
	dakika = other.dakika;
	fs = other.fs;
	return *this;
}
int Football::getf_dakika(){
	return dakika;
}
int Football::getf_sayac(){
	return fs;
}
ostream & operator<<(ostream& out, const Football& other){
	out <<"Bir gun icinde Futbol oynadigi dakika : "<<other.dakika;
	return out;
}
int Football::getf_harcanan(){

	return dakika*5;
}


Tennis::Tennis(int d){
	dakika = d;
	ts=ts+1;
}
Tennis::Tennis(Tennis &other){
	dakika = other.dakika;
	ts = other.ts;
}
Tennis& Tennis::operator=(Tennis& other){
	dakika = other.dakika;
	ts = other.ts;
	return *this;
}
int Tennis::gett_dakika(){
	return dakika;
}
int Tennis::gett_sayac(){
	return ts;
}
int Tennis::gett_harcanan(){

	return dakika*5;
}
ostream & operator<<(ostream& out, const Tennis& other){
	out <<"Bir gun icinde Tenis oynadigi dakika : "<<other.dakika;
	return out;
}

Swimming::Swimming(int d){
	dakika = d;
	ss=ss+1;
}
Swimming::Swimming(Swimming &other){
	dakika = other.dakika;
	ss = other.ss;
}
Swimming& Swimming::operator=(Swimming& other){
	dakika = other.dakika;
	ss = other.ss;
	return *this;
}
int Swimming::gets_dakika(){
	return dakika;
}
int Swimming::gets_sayac(){
	return ss;
}
int Swimming::gets_harcanan(){
	return dakika*7;
}
ostream & operator<<(ostream& out, const Swimming& other){
	out <<"Bir gun icinde Yuzme oynadigi dakika : "<<other.dakika;
	return out;
}
