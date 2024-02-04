#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED
#include <iostream>
//#include "sports.h"
//#include "meals.h"
using namespace std;
class User {
	private:
		string ad;;
		string soyad;
		int ID;
		int yas;
		int kilo;
		int hafta;

	public:
	User(string name,string surname,int id,int age,int k,int w);
	User(User& other);
	User& operator = (User& other);
	User operator+(User&) ;;

    string get_ad();
    string get_soyad();	
    int get_ID();
	int get_yas();
	int get_kilo();
	int get_hafta();
    
    /*
    Breakfast b1;
    Lunch l1;
    Dinner d1;
    Basketball bs1;          Bu k�s�mda nesnelerini olu�turma �al��t�m ama s�rekli hata ald�m.
    Football f1;
    Tennis t1;
	Swimming s1;	
	*/
};

#endif
