#include<iostream>
#include<string>
#include<fstream>

using namespace std;
class ilac;
class eczane {
	private:
	int ecz_id;
	string ecz_isim;
	string ecz_adres;
    public:
    	friend class ilac;
    void getData(void){
    	cout<<"Eczane Bilgilerini Giriniz\n";
    	cout<<"Eczane ID numarasini giriniz\t";
    	cin>>ecz_id;
        cout<<"Eczane ismini giriniz\t";
        cin>>ecz_isim;
	    cout<<"Eczane adresini giriniz\t";
        cin>>ecz_adres;
	    cin.ignore();
	}
	void showData(void){
		cout<<"Eczane id numarasi --> "<<ecz_id<<endl;
		cout<<"Eczanenin ismi  --> "<<ecz_isim<<endl;			
		cout<<"Eczanenin adresi --> "<<ecz_adres<<endl;
	}
	
	void EczaneOlustur(void){
		eczane ecz[4];
	char x;
	fstream	file("eczzz.dat",ios::out|ios::app);
	  if(!file.is_open()){
	    cout<<"Dosya acilamadi"<<endl;

	   }
	  else {
	  //	file.seekg(0);
           for(int i=0;i<4;i++){
		   
	  		ecz[i].getData();
	  		file.write(reinterpret_cast<char *>(&ecz[i].ecz_id),sizeof(ecz[i].ecz_id));
	  		file.write(ecz[i].ecz_isim.c_str(), ecz[i].ecz_isim.length() + 1);
		    file.write(ecz[i].ecz_adres.c_str(), ecz[i].ecz_adres.length() + 1);
	        }
		    
		  file.close();
	  } 
	}
	

	void retreiveData(void) {

	eczane ecz[4];

	fstream file("eczzz.dat",ios::in|ios::app);
	if(!file.is_open()){
	     cout<<"Dosya acilamadi"<<endl;
	}
	else {
	   int end = file.tellg();
		file.seekg(0);

        for(int i=0;i<4;i++){
		
        file.read((char *)&ecz[i].ecz_id,sizeof(ecz[i].ecz_id));	
		getline(file, ecz[i].ecz_isim, '\0');
		getline(file,ecz[i].ecz_adres,'\0');
		ecz[i].showData();
         }
		   file.close();
		}
	}
		void Eczaneekle(void){
	eczane eczek;
	char x;
	fstream	file("eczzz.dat",ios::out|ios::app);
	  if(!file.is_open()){
	    cout<<"Dosya acilamadi"<<endl;

	   }
	  else {
	  //	file.seekg(0);
          
		   
	  		eczek.getData();
	  		file.write(reinterpret_cast<char *>(&eczek.ecz_id),sizeof(eczek.ecz_id));
	  		file.write(eczek.ecz_isim.c_str(), eczek.ecz_isim.length() + 1);
		    file.write(eczek.ecz_adres.c_str(), eczek.ecz_adres.length() + 1);
	        
		    
		  file.close();
	  } 
	}
	void eczekoku(){
    eczane eczek;

	fstream file("eczzz.dat",ios::in|ios::app);
	if(!file.is_open()){
	     cout<<"Dosya acilamadi"<<endl;
	}
	else {
	   int end = file.tellg();
		file.seekg(0);

        
		
        file.read((char *)&eczek.ecz_id,sizeof(eczek.ecz_id));	
		getline(file, eczek.ecz_isim, '\0');
		getline(file,eczek.ecz_adres,'\0');
		eczek.showData();
         
		   file.close();
		}		
	}
	
	void tumeczanebul(){
       eczane ecz[4];

	fstream file("eczzz.dat",ios::in|ios::app);
	if(!file.is_open()){
	     cout<<"Dosya acilamadi"<<endl;
	}
	else {
	   int end = file.tellg();
		file.seekg(0);

        for(int i=0;i<4;i++){
		
        file.read((char *)&ecz[i].ecz_id,sizeof(ecz[i].ecz_id));	
		getline(file, ecz[i].ecz_isim, '\0');
		getline(file,ecz[i].ecz_adres,'\0');
		ecz[i].showData();
         }
		   file.close();
		}	
	}
	void eczbul(){
		string a;
		cout<<"Bulmak istediginiz eczanenin ismini giriniz ";
		cin>>a;
	    eczane ecz[4];

	fstream file("eczzz.dat",ios::in|ios::app);
	if(!file.is_open()){
	     cout<<"Dosya acilamadi"<<endl;
	}
	else {
	   int end = file.tellg();
	   
		file.seekg(0);

        for(int i=0;i<4;i++){
	    if(a == ecz[i].ecz_isim){
		
        file.read((char *)&ecz[i].ecz_id,sizeof(ecz[i].ecz_id));	
		getline(file, ecz[i].ecz_isim, '\0');
		getline(file,ecz[i].ecz_adres,'\0');
		ecz[i].showData();
		
           }
        
		 }
		   file.close();
		}	
	    
	}
	
};

class ilac{
 private:	
 int ilac_id;
 int ilac_sayisi;
 double ilac_fiyati;
 string ilac_isim;
 public:
 	void getilacData(void){
    cout<<"Ilac Bilgilerini Giriniz\n";
    cout<<"Ilacin ID numarasini giriniz\t";
    cin>>ilac_id;
    cout<<"Ilacin sayisini giriniz\t";
    cin>>ilac_sayisi;
    cout<<"Ilacin fiyatini giriniz\t";
    cin>>ilac_fiyati;
    cout<<"Ilacin ismini giriniz\t";
    cin>>ilac_isim;
    cin.ignore();
	}
	void showilacData(void){
	cout<<"Ilacin id numarasi --> "<<ilac_id<<endl;
	cout<<"Ilacin sayisi --> "<<ilac_sayisi<<endl;
	cout<<"Ilacin fiyati --> "<<ilac_fiyati<<endl;
	cout<<"Ilacin ismi  --> "<<ilac_isim<<endl;		
	}
	

    void ilacolustur(void){
    	
  

 	ilac ilac[5];
 
	fstream file1("sena_ilac.dat",ios::out|ios::app);
	  if(!file1.is_open()){
	    cout<<"Dosya acilamadi"<<endl; 
		  }
     else {  cout<<"Sena eczanesi ilac listesi acildi ilac bilgilerini giriniz";
	   for(int i=0;i<5;i++){
	  //	file.seekg(0);
           
	  		ilac[i].getilacData();
	  		file1.write(reinterpret_cast<char *>(&ilac[i].ilac_id),sizeof(ilac[i].ilac_id));
	  		file1.write(reinterpret_cast<char *>(&ilac[i].ilac_sayisi),sizeof(ilac[i].ilac_sayisi));
	  		file1.write(reinterpret_cast<char *>(&ilac[i].ilac_fiyati),sizeof(ilac[i].ilac_fiyati));
	  		file1.write(ilac[i].ilac_isim.c_str(), ilac[i].ilac_isim.length() + 1);

		
	      }    
		  file1.close();
        }
        
    fstream file2("kartal_ilac.dat",ios::out|ios::app);
	  if(!file2.is_open()){
	    cout<<"Dosya acilamadi"<<endl; 
		  }
     else {  cout<<"Kartal eczanesi ilac listesi acildi ilac bilgilerini giriniz";
	   for(int i=0;i<5;i++){
	  //	file.seekg(0);
           
	  		ilac[i].getilacData();
	  		file2.write(reinterpret_cast<char *>(&ilac[i].ilac_id),sizeof(ilac[i].ilac_id));
	  		file2.write(reinterpret_cast<char *>(&ilac[i].ilac_sayisi),sizeof(ilac[i].ilac_sayisi));
	  		file2.write(reinterpret_cast<char *>(&ilac[i].ilac_fiyati),sizeof(ilac[i].ilac_fiyati));
	  		file2.write(ilac[i].ilac_isim.c_str(), ilac[i].ilac_isim.length() + 1);

		
	      }    
		  file2.close();
        }    
    fstream file3("cicek_ilac.dat",ios::out|ios::app);
	  if(!file3.is_open()){
	    cout<<"Dosya acilamadi"<<endl; 
		  }
     else {  cout<<"Cicek eczanesi ilac listesi acildi ilac bilgilerini giriniz";
	   for(int i=0;i<5;i++){
	  //	file.seekg(0);
           
	  		ilac[i].getilacData();
	  		file3.write(reinterpret_cast<char *>(&ilac[i].ilac_id),sizeof(ilac[i].ilac_id));
	  		file3.write(reinterpret_cast<char *>(&ilac[i].ilac_sayisi),sizeof(ilac[i].ilac_sayisi));
	  		file3.write(reinterpret_cast<char *>(&ilac[i].ilac_fiyati),sizeof(ilac[i].ilac_fiyati));
	  		file3.write(ilac[i].ilac_isim.c_str(), ilac[i].ilac_isim.length() + 1);

		
	      }    
		  file3.close();
        }    
     fstream file4("yildiz_ilac.dat",ios::out|ios::app);
	  if(!file4.is_open()){
	    cout<<"Dosya acilamadi"<<endl; 
		  }
     else {  cout<<"Yildiz eczanesi ilac listesi acildi ilac bilgilerini giriniz";
	   for(int i=0;i<5;i++){
	  //	file.seekg(0);
           
	  		ilac[i].getilacData();
	  		file4.write(reinterpret_cast<char *>(&ilac[i].ilac_id),sizeof(ilac[i].ilac_id));
	  		file4.write(reinterpret_cast<char *>(&ilac[i].ilac_sayisi),sizeof(ilac[i].ilac_sayisi));
	  		file4.write(reinterpret_cast<char *>(&ilac[i].ilac_fiyati),sizeof(ilac[i].ilac_fiyati));
	  		file4.write(ilac[i].ilac_isim.c_str(), ilac[i].ilac_isim.length() + 1);

		
	      }    
		  file4.close();
        }       
 }
 void ilacek(){
 		ilac ilac[5];
 fstream file5("ek_ilac.dat",ios::out|ios::app);
	  if(!file5.is_open()){
	    cout<<"Dosya acilamadi"<<endl; 
		  }
     else {  cout<<"EK eczanesi ilac listesi acildi ilac bilgilerini giriniz";
	   for(int i=0;i<5;i++){
	  //	file.seekg(0);
           
	  		ilac[i].getilacData();
	  		file5.write(reinterpret_cast<char *>(&ilac[i].ilac_id),sizeof(ilac[i].ilac_id));
	  		file5.write(reinterpret_cast<char *>(&ilac[i].ilac_sayisi),sizeof(ilac[i].ilac_sayisi));
	  		file5.write(reinterpret_cast<char *>(&ilac[i].ilac_fiyati),sizeof(ilac[i].ilac_fiyati));
	  		file5.write(ilac[i].ilac_isim.c_str(), ilac[i].ilac_isim.length() + 1);

		
	      }    
		  file5.close();
        }	
 	
 }
 void ilacekoku(){
 	ilac ilac[5];
int i;
	
	fstream file5("ek_ilac.dat",ios::in|ios::app);
	if(!file5.is_open()){
	     cout<<"Dosya acilamadi"<<endl;
	} 	
    else {
	   int end = file5.tellg();
		file5.seekg(0);

        for(i=0;i<5;i++){
		
        file5.read((char *)&ilac[i].ilac_id,sizeof(ilac[i].ilac_id));	
        file5.read((char *)&ilac[i].ilac_sayisi,sizeof(ilac[i].ilac_sayisi));
        file5.read((char *)&ilac[i].ilac_fiyati,sizeof(ilac[i].ilac_fiyati));
		getline(file5,ilac[i].ilac_isim, '\0');
		ilac[i].showilacData();
				
     }
       file5.close();
     }
 }
 void ilacoku(){
 	ilac ilac[5];
int i;
	
	fstream file1("sena_ilac.dat",ios::in|ios::app);
	if(!file1.is_open()){
	     cout<<"Dosya acilamadi"<<endl;
	} 	
    else {
	   int end = file1.tellg();
		file1.seekg(0);

        for(i=0;i<5;i++){
		
        file1.read((char *)&ilac[i].ilac_id,sizeof(ilac[i].ilac_id));	
        file1.read((char *)&ilac[i].ilac_sayisi,sizeof(ilac[i].ilac_sayisi));
        file1.read((char *)&ilac[i].ilac_fiyati,sizeof(ilac[i].ilac_fiyati));
		getline(file1,ilac[i].ilac_isim, '\0');
		ilac[i].showilacData();
				
     }
       file1.close();
     }

	fstream file2("kartal_ilac.dat",ios::in|ios::app);
	if(!file2.is_open()){
	     cout<<"Dosya acilamadi"<<endl;
	} 	
    else {
	   int end = file2.tellg();
		file2.seekg(0);

        for(i=0;i<5;i++){
		
        file2.read((char *)&ilac[i].ilac_id,sizeof(ilac[i].ilac_id));	
        file2.read((char *)&ilac[i].ilac_sayisi,sizeof(ilac[i].ilac_sayisi));
        file2.read((char *)&ilac[i].ilac_fiyati,sizeof(ilac[i].ilac_fiyati));
		getline(file2,ilac[i].ilac_isim, '\0');
		ilac[i].showilacData();
				
     }
       file2.close();
     } 

	fstream file3("cicek_ilac.dat",ios::in|ios::app);
	if(!file3.is_open()){
	     cout<<"Dosya acilamadi"<<endl;
	} 	
    else {
	   int end = file3.tellg();
		file3.seekg(0);

        for(i=0;i<5;i++){
		
        file3.read((char *)&ilac[i].ilac_id,sizeof(ilac[i].ilac_id));	
        file3.read((char *)&ilac[i].ilac_sayisi,sizeof(ilac[i].ilac_sayisi));
        file3.read((char *)&ilac[i].ilac_fiyati,sizeof(ilac[i].ilac_fiyati));
		getline(file3,ilac[i].ilac_isim, '\0');
		ilac[i].showilacData();
				
     }
       file3.close();
     }	
	fstream file4("yildiz_ilac.dat",ios::in|ios::app);
	if(!file4.is_open()){
	     cout<<"Dosya acilamadi"<<endl;
	} 	
    else {
	   int end = file4.tellg();
		file4.seekg(0);

        for(i=0;i<5;i++){
		
        file4.read((char *)&ilac[i].ilac_id,sizeof(ilac[i].ilac_id));	
        file4.read((char *)&ilac[i].ilac_sayisi,sizeof(ilac[i].ilac_sayisi));
        file4.read((char *)&ilac[i].ilac_fiyati,sizeof(ilac[i].ilac_fiyati));
		getline(file4,ilac[i].ilac_isim, '\0');
		ilac[i].showilacData();
				
     }
       file4.close();
     }	      
     
}
};

	int main () {
		int a,b,c;
	int sifre=2002;
	cout<<"----SISTEME HOSGELDINIZ----"<<endl;
	cout<<"Eczane girisi =1\nMusteri Girisi=2\nSize uygun secenegi seciniz\t";
	cin>>a;
	if(a==1) {
		cout<<"ECZANE GIRISI"<<endl;
		cout<<"Lutfen sifrenizi giriniz\t";
		cin>>b;
		if (b==sifre){
			cout<<"Sisteme basariyla giris yapildi\n";
			cout<<"1-Eczane-Ilac listesi olustur\n2-Eczane ekle\n3-Ilac ekle\n";
			cin>>c;
            if(c==1){
			
			eczane ecz;
            ecz.EczaneOlustur();
            ecz.retreiveData();
            ilac ilacc;
            ilacc.ilacolustur();
            ilacc.ilacoku();
	       }
	       else if(c==2){
	       	eczane ecz;
	       	ecz.Eczaneekle();
	       	ecz.eczekoku();
		   }
		   else{
		   	ilac ilacc;
		   	ilacc.ilacek();
		   	ilacc.ilacekoku();
		   }
		}
		else {
			cout<<"Yanlis sifre girdiniz";
		}
    }
	else if (a==2){
	
	   cout<<"MUSTERI GIRISI"<<endl;	
	    eczane ecz;
	   ecz.tumeczanebul();
	   ecz.eczbul();
    }
		return 0; }

