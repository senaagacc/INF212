#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "senaprojee.h"


void instructions( void )
{
	printf( "----MENU----\n1.Musteri Bilgisi\n2.Urun Bilgisi\n3.Musteri Analizleri\n4.Urun Analizleri\n5.Cikis\n------------");
	
}
void tumusteribilgileri(struct musterinode *a){
	int n=0;

		while (a != NULL) {
       	n++;
		printf("%d. Musteri ",n);
		printf("ID = %d\tIsim-Soyisim = %s\tTip = %d\tX koordinati = %1.f\tY koordinati =%1.f\n",a->ID,a->name,a->tip,a->x,a->y);
    a= a->sonraki;
	}
}
void tipmusteri(struct musterinode *b) {
	int n =0;
	int s;
	printf("Musteri tipleri\n 0=Bireysel\t1=Kurumsal\nMusteri tipi seciniz: ");
	scanf("%d",&s);
	
	while (b != NULL) {
		n++;
		
	if(s==0){
		if(b->tip==0){
		printf("ID = %d\tIsim-Soyisim = %s\tTip = %d\tX koordinati = %1.f\tY koordinati =%1.f\n",b->ID,b->name,b->tip,b->x,b->y);
		}
	   }
	else if(s==1){
		if(b->tip==1){
		printf("ID = %d\tIsim-Soyisim = %s\tTip = %d\tX koordinati = %1.f\tY koordinati =%1.f\n",b->ID,b->name,b->tip,b->x,b->y);	
		}
	}   
	else {
		printf("Yanlýþ seçim!");
	}
	   b= b->sonraki;
}
}
void birmusteri(struct musterinode *c) {
int s,n=0;
printf("Secmek istediginiz musterinin ID numarasini giriniz ");
scanf("%d",&s);
	while (c != NULL) {
       	n++;
    if(s == c->ID){
	printf("ID = %d\tIsim-Soyisim = %s\tTip = %d\tX koordinati = %1.f\tY koordinati =%1.f\n",c->ID,c->name,c->tip,c->x,c->y);
    }
        c= c->sonraki;
	}

}

void tumurunbilgileri(struct urunbilgisi *a){
struct urunbilgisi *temp;
temp=a;
while(temp->sonrakiurun != NULL) {
	printf("Urun adi = %s\n",temp->urunname);
	temp=temp->urunname;
}
	printf("Urun adi = %s",temp->urunname);
}

void tipurun(struct urunbilgisi *b) {
	int n =0;
	int s;
	printf("Urun tipleri\nEt urunleri =0\NSebze=1\nMeyve =2\nIcecek=3\nMusteri tipi seciniz: ");
	scanf("%d",&s);
	
	while (b != NULL) {
		n++;
		
	if(s==0){
		if(b->uruntip==0){
		printf("Urun ID = %d\tUrun ismi %s\tUrun tipi=%d\tUrun fiyati=%f\n",b->urunID,b->urunname,b->uruntip,b->urunucret);
		}
	   }
	else if(s==1){
		if(b->uruntip==1){
		printf("Urun ID = %d\tUrun ismi %s\tUrun tipi=%d\tUrun fiyati=%f\n",b->urunID,b->urunname,b->uruntip,b->urunucret);
		}	
	}   
	else if(s==2){
		if(b->uruntip==2){
		printf("Urun ID = %d\tUrun ismi %s\tUrun tipi=%d\tUrun fiyati=%f\n",b->urunID,b->urunname,b->uruntip,b->urunucret);
		}	
	}		
	else if(s==3){
	if(b->uruntip==3){
	printf("Urun ID = %d\tUrun ismi %s\tUrun tipi=%d\tUrun fiyati=%f\n",b->urunID,b->urunname,b->uruntip,b->urunucret);
		}	
	} 
	else {
		printf("Yanlýþ seçim!");
	}
	   b= b->sonrakiurun;
}
}

void birurun (struct urunbilgisi *c){
	int s,n=0;
printf("Secmek istediginiz urunun ID numarasini giriniz ");
scanf("%d",&s);
	while (c != NULL) {
       	n++;
    if(s == c->urunID) {
		printf("Urun ID = %d\tUrun ismi %s\tUrun tipi=%d\tUrun fiyati=%f\n",c->urunID,c->urunname,c->uruntip,c->urunucret);
    }
        c = c->sonrakiurun;
	}
}

void birmusteriurun(struct parcabilgisi *urun){
	int n=0;
	int q;
printf("Secmek istediginiz musterinin ID numarasini giriniz ");
scanf("%d",&q);	
while(urun !=NULL){
	n++;
	if(q== urun->customer_ID){
		printf("Musterinin satin aldigi urunun id numarasi : %d",urun->product_ID);
	}
urun = urun->nextPurchasedPtr;
  }
}

void birmusteritutar(struct parcabilgisi *tutar){
	int n=0,p;
printf("Secmek istediginiz musterinin ID numarasini giriniz ");
scanf("%d",&p);	
	while(tutar !=NULL){
	n++;
	if(p== tutar->customer_ID){
		printf("Musterinin satin aldigi urununlerin tutari : %f",tutar->cost);
	}
tutar = tutar->nextPurchasedPtr;
  }
}
void tummusteritutar(struct parcabilgisi *toptutar){
	double a=0;
	int n=0;
		while(toptutar !=NULL){
	    n++;
 printf("ID numarasi %d olan musterinin tutari = %f\n",toptutar->customer_ID,toptutar->cost);
 a= toptutar->cost + a;
toptutar = toptutar->nextPurchasedPtr;
  }
    printf("Toplam tutar = %f",a);
 

}
void kargoucreti(struct musterinode *kargo){
	int n=0;
	double z=0,l=0,p=0;
	printf("1 km basina yol ucreti 5 tldir!!\n");
	while(kargo != NULL){
    n++;
    z=(kargo->x*kargo->x)+(kargo->y*kargo->y);
    l=sqrt(z);
    p= 5*l;
    printf("ID numarasi %d olan musterinin kargo ucreti = %f\n",kargo->ID,p);
    kargo=kargo->sonraki;
	}                    	

}
void urunsatis(struct parcabilgisi *urunsatis){
	int n=0;
	while(urunsatis != NULL){
		n++;
		printf("Id numarasi %d olan urunun satis tutari = %f\n",urunsatis->product_ID,urunsatis->cost);
		urunsatis=urunsatis->nextPurchasedPtr;
	}
}
void tipsatis(struct urunbilgisi *tipsatis,struct parcabilgisi *tut){
	int n=0;
	int s;
	printf("Urun tipleri\nEt urunleri =0\nSebze=1\nMeyve =2\nIcecek=3\nMusteri tipi seciniz: ");
	scanf("%d",&s);
	while (tipsatis != NULL) {
		n++;
		
	if(s==0){
		if(tipsatis->uruntip==0){
		printf("Urun ID = %d\tUrun fiyati=%f\n",tut->cost);
		}
	   }
	else if(s==1){
		if(tipsatis->uruntip==1){
		printf("Urun ID = %d\tUrun fiyati=%f\n",tut->cost);
		}	
	}   
	else if(s==2){
		if(tipsatis->uruntip==2){
		printf("Urun ID = %d\tUrun fiyati=%f\n",tut->cost);
		}	
	}		
	else if(s==3){
	if(tipsatis->uruntip==3){
	printf("Urun ID = %d\tUrun fiyati=%f\n",tut->cost);
		}	
	} 
	else {
		printf("Yanlýþ seçim!");
	}
	tipsatis= tipsatis->sonrakiurun;
    tut=tut->nextPurchasedPtr;
}
}
void tumsatis (struct parcabilgisi *tum){
	int n=0;
	double a=0;
	while(tum !=NULL){
	printf("ID numarasi %d olan urunun tutari = %f\n",tum->product_ID,tum->cost);
 a= tum->cost + a;
tum = tum->nextPurchasedPtr;
	}
	printf("Urunleri toplam tutari = %f",a);
}


/*void ekle (char isim[50],int ID,double x,double y,int tip ) {
	struct musterinode *ucuncu=(struct musterinode *)malloc(sizeof(struct musterinode)); 

	if(basla==NULL) {
		basla=ucuncu;
	 }
	
	else {
		temp=basla;
		while (temp->sonraki!=NULL){
			temp=temp->sonraki;
			
		}
	
		temp->sonraki=ucuncu;
    
	}

	
}
void yazdir() { 
int n =0;
struct musterinode *a = basla;
	while(a != 3){
	
	++n;
	printf("%d. dugum =\n ",n);
	printf("ID numarasi = %d",a->ID);
    }
}
*/ 

