#ifndef HOTEL_H_
#define HOTEL_H_

#include <iostream>
#include <string.h>
#include <iomanip>
#include <ctime>
using namespace std;
class Musteri{
  	friend ostream& operator<<(ostream& os, const  Musteri& other);
	
	private:
		string isim;	   			 
	    string adres;			 
	    int *telefon_no;			
	    int gunler;	    			
	   	int rezervasyon_no;				
	    int oda;					
	    int durum;
	    float avans_odemesi;		
	    double fatura;
	    
		public:
	    	Musteri();
	    	Musteri(string i, string a,  int g,int rn);
	    	Musteri(const Musteri& other);
	        Musteri operator+(const Musteri& other);
	        Musteri operator-(const Musteri& other);
	        bool operator==(Musteri& other);
	        
	        
	        string getIsim();
	        string getAdres();
	        string getTelefon();
	        int getGunler();
	        int getRezerv();
	        int getOda();
	        int getDurum();
	        float getAvans();
	        double getFatura();
	        
			void kayit();			
	        void Yazdir();
	        void print();
	        
	        friend class Oda;
	        friend class Otel;   
	        
};

class Oda{
  	friend ostream& operator<<(ostream& os, const Oda& other);
	
	private:
		char ac;
		char oda_model;			
	    char oda_boyut;						
	    int oda_no;			
	    double kira;		
	    int durum=0;
	    
	    public:
	    	Oda();
	    	Oda( int on, double k);
	    	Oda(const Oda& other);
	        Oda& operator=(const Oda& other);
	        Oda operator+(const Oda& other);

	        
	        bool operator==(Oda& other);
	        
	       
	        char getac();
		    int getOdaNo();
	        char getoda_model();
	        char getoda_boyut(); 
	        int getDurum();
	        double getKira();
	        
			friend class Otel;
	        
	        void odaKaydi(int rno);	
	        void odaYazdir();
	        void print1();
	        
};

class Otel{
	private:
        Oda o[100];			
		Musteri m[100];		
	    int noda=0, nmust=0;
	    public:
	
	    
		
			void odaEkle();
		    void odaAra();
			void CheckIn();
			void musteriAra();
			void musait_mi();
			void kontrolEt();
			void ozet();
};
#endif
