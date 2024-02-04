#ifndef MEALS_H_INCLUDED
#define MEALS_H_INCLUDED

#include<iostream>
#include<string.h>
using namespace std;
class Breakfast{
	private:
	string b_tip;
	int b_cal;
	int b_sayac;
	int b_toplam;
	public:
	Breakfast(string t);	
	Breakfast(Breakfast& x);
	Breakfast& operator=(Breakfast& B);
    int getb_toplam();
    int getb_sayac();
    void print();
    Breakfast& operator+ (Breakfast& x);
    friend ostream& operator<<(ostream& out, const Breakfast& other);
    friend class User;	
};
class Lunch{
	private:
	string l_tip;
	int l_cal;
	int l_sayac;
	int l_toplam;
	public:
	Lunch(string t);	
	Lunch(Lunch& x);
	Lunch& operator=(Lunch& x);
    int getl_toplam();
    int getl_sayac();
    void print();
//	Breakfast operator+ (const Breakfast&);
    friend ostream& operator<<(ostream& out, const Lunch& other);
    friend class User;	
};
class Dinner{
	private:
	string d_tip;
	int d_cal;
	int d_sayac;
	int d_toplam;
	public:
	Dinner(string t);	
	Dinner(Dinner& x);
	Dinner& operator=(Dinner& x);
    int getd_toplam();
    int getd_sayac();
    void print();
//	Breakfast operator+ (const Breakfast&);
    friend ostream& operator<<(ostream& out, const Dinner& other);
	friend class User;	    
};
#endif
