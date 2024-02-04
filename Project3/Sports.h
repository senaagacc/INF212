#ifndef SPORTS_H_INCLUDED
#define SPORTS_H_INCLUDED
using namespace std;
#include<iostream>
#include<string.h>
class Basketball {
	private:
	int dakika;
	int bs;
	public:
	Basketball(int d);
	Basketball(Basketball& other);
	Basketball& operator = (Basketball& other);
	Basketball operator+(const Basketball&) const;

	friend ostream& operator<<(ostream& out, const Basketball& other);
    
    int getb_harcanan();
    int getb_sayac();
    int getb_dakika();		
    friend class User;
};

class Football {
	private:
	int dakika;
	int fs;
	public:
	Football(int d);
	Football(Football& other);
	Football& operator = (Football& other);
	Football operator+(const Football&) const;

	friend ostream& operator<<(ostream& out, const Football& other);
   
    int getf_harcanan();
    int getf_dakika();
	int getf_sayac();	
	friend class User;			
};

class Tennis {
	private:
	int dakika;
	int ts;
	public:
	Tennis(int d);
	Tennis(Tennis& other);
	Tennis& operator = (Tennis& other);
	Tennis operator+(const Tennis&) const;

	friend ostream& operator<<(ostream& out, const Tennis& other);

    int gett_harcanan();
    int gett_dakika();
	int gett_sayac();	
	friend class User;		
};

class Swimming {
	private:
	int dakika;
	int ss;
	public:
	Swimming(int d);
	Swimming(Swimming& other);
	Swimming& operator = (Swimming& other);
	friend ostream& operator<<(ostream& out, const Swimming& other);

    int gets_harcanan();
    int gets_dakika();
	int gets_sayac();	
	friend class User;		
};

#endif
