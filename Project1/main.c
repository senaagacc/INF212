#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "senaprojee.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {
printf("SISTEME HOSGELDINIZ\n");

struct musterinode *birinci=(struct musterinode *)malloc(sizeof(struct musterinode)); 
struct musterinode *ikinci=(struct musterinode *)malloc(sizeof(struct musterinode)); 
struct musterinode *ucuncu=(struct musterinode *)malloc(sizeof(struct musterinode)); 
struct musterinode *dorduncu=(struct musterinode *)malloc(sizeof(struct musterinode)); 
struct musterinode *besinci=(struct musterinode *)malloc(sizeof(struct musterinode)); 
	birinci->ID = 1;
	strcpy (birinci->name,"Senanur Agac");
	birinci->tip=1;
	birinci->x=3.0;
	birinci->y=4.0;
	birinci->sonraki= ikinci;
	
	ikinci->ID =2;
	strcpy(ikinci->name,"Ervanur Cetinkol");
	ikinci->tip=0;
	ikinci->x=7.0;
	ikinci->y=24.0;
	ikinci->sonraki = ucuncu;
	
	ucuncu->ID=3;
	strcpy(ucuncu->name,"Omer Asaf Sunger");
	ucuncu->tip=0;
	ucuncu->x=6.0;
	ucuncu->y=8.0;
    ucuncu->sonraki= dorduncu;
	
	dorduncu->ID=4;
	strcpy(dorduncu->name,"Beyza Cil");
	dorduncu->tip=1;
	dorduncu->x=12.0;
	dorduncu->y=16.0;
    dorduncu->sonraki = besinci;
    
 	besinci->ID=5;
	strcpy(besinci->name,"Kubra Yildiz");
	besinci->tip=1;
	besinci->x=9.0;
	besinci->y=12.0;
    besinci->sonraki = NULL;   

struct urunbilgisi *birinciurun=(struct urunbilgisi *)malloc(sizeof(struct urunbilgisi *));
struct urunbilgisi *ikinciurun=(struct urunbilgisi *)malloc(sizeof(struct urunbilgisi *));
struct urunbilgisi *ucuncuurun=(struct urunbilgisi *)malloc(sizeof(struct urunbilgisi *)); 
struct urunbilgisi *dorduncuurun=(struct urunbilgisi *)malloc(sizeof(struct urunbilgisi *));
struct urunbilgisi *besinciurun=(struct urunbilgisi *)malloc(sizeof(struct urunbilgisi *));
struct urunbilgisi *altinciurun=(struct urunbilgisi *)malloc(sizeof(struct urunbilgisi *));
struct urunbilgisi *yedinciurun=(struct urunbilgisi *)malloc(sizeof(struct urunbilgisi *));
/*
id numaralarý=
et ürünleri =0  sebze=1  meyve =3 içecek=4
   
 */  birinciurun->urunID=1 ;
     strcpy(birinciurun->urunname,"Balik");
     birinciurun->uruntip=0;
     birinciurun->urunucret=3.0;
     birinciurun->sonrakiurun=ikinciurun;

     ikinciurun->urunID=2;
     strcpy(ikinciurun->urunname,"Domates");
     ikinciurun->uruntip=1;
     ikinciurun->urunucret=2.5;
     ikinciurun->sonrakiurun=ucuncuurun;
     
     ucuncuurun->urunID=3;
     strcpy(ucuncuurun->urunname,"Cilek");
     ucuncuurun->uruntip=2;
     ucuncuurun->urunucret=5.0;
     ucuncuurun->sonrakiurun=dorduncuurun;

     dorduncuurun->urunID=4;
     strcpy(dorduncuurun->urunname,"Ayran");
     dorduncuurun->uruntip=3;
     dorduncuurun->urunucret=3.0;
     dorduncuurun->sonrakiurun=besinciurun;     

     besinciurun->urunID=5;
     strcpy(besinciurun->urunname,"Tavuk");
     besinciurun->uruntip=0;
     besinciurun->urunucret=25.0;
     besinciurun->sonrakiurun=altinciurun;          
 
     altinciurun->urunID=6;
     strcpy(altinciurun->urunname,"Patlican");
     altinciurun->uruntip=1;
     altinciurun->urunucret=8.0;
     altinciurun->sonrakiurun=yedinciurun;
	 
	 yedinciurun->urunID=7;
     strcpy(yedinciurun->urunname,"Soda");
     yedinciurun->uruntip=3;
     yedinciurun->urunucret=2.0;
     yedinciurun->sonrakiurun=NULL;
	         
struct parcabilgisi *p1=(struct parcabilgisi *)malloc(sizeof(struct parcabilgisi *));
struct parcabilgisi *p2=(struct parcabilgisi *)malloc(sizeof(struct parcabilgisi *));     
struct parcabilgisi *p3=(struct parcabilgisi *)malloc(sizeof(struct parcabilgisi *));
struct parcabilgisi *p4=(struct parcabilgisi *)malloc(sizeof(struct parcabilgisi *));
struct parcabilgisi *p5=(struct parcabilgisi *)malloc(sizeof(struct parcabilgisi *));


p1->ID=1;
p1->invoice_ID=1;
p1->customer_ID=2;
p1->product_ID=3;
p1->cost=25.0;
p1->nextPurchasedPtr=p2;

p2->ID=2;
p2->invoice_ID=1;
p2->customer_ID=3;
p2->product_ID=5;
p2->cost=150.0;
p2->nextPurchasedPtr=p3;

p3->ID=3;
p3->invoice_ID=2;
p3->customer_ID=4;
p3->product_ID=7;
p3->cost=18;
p3->nextPurchasedPtr=p4;

p4->ID=4;
p4->invoice_ID=3;
p4->customer_ID=1;
p4->product_ID=4;
p4->cost=24;
p4->nextPurchasedPtr=p5;

p5->ID=5;
p5->invoice_ID=5;
p5->customer_ID=5;;
p5->product_ID=6;
p5->cost=48;
p5->nextPurchasedPtr = NULL;

int choice;
instructions();
printf("\nYukarida verilen tabloya gore yapmak istediginiz islemi seciniz : ");
scanf( "%d", &choice );
	int a,b,t,f;

	switch (choice){
	    case 1:
	    printf("--Musteri Bilgileri--\n");
	    printf("1-Tum musteriler\n2-Musteri tipine gore \n3-Bir musteri\nIslem seciniz--> ");
	    scanf("%d",&a);
		if(a==1){
		tumusteribilgileri(birinci);
		}
		else if(a==2){
		tipmusteri(birinci);
		}
	    else if(a==3){
	    birmusteri(birinci);	
		}
		else {
			printf("Yanlis secim!");
		}
	    break;
	    case 2:	 
		printf("--Urun Bilgileri--\n");
	    printf("1-Tum urunler\n2-Urun tipine gore\n3-Bir urun\nIslem seciniz-->");
	    scanf("%d",&b);
        if(b==1){
        tumurunbilgileri(birinciurun);
	    }
	    else if(b==2){
	    tipurun(birinciurun);	
		}

	    else if(b==3){
	    birurun(birinciurun);
		}
		else {
			printf("Yanlis secim!");
		}
				break;
				
		case 3:
		printf("-- Müþteri Analizleri--\n");
		printf("Musteri Analizleri\n1-Bir musterinin satin aldigi urunler\n2-Bir musterinin satin aldigi toplam tutar\n3.Tum musterinin satin aldigi urunlerin toplam tutari\n4-Musterilerin kargo ucreti");
      printf("\nIslem seciniz -->");
      scanf("%d",&t);
      if(t==1){
      	birmusteriurun(p1);
	  }
	  else if(t==2) {
	    birmusteritutar(p1);
	  }
	  else if(t==3){
	  	tummusteritutar(p1);
	  }
	  else if(t==4){
	  	kargoucreti(birinci);
	  }	
	  else {
	  	printf("Yanlis secim!!");
	  }
	  break;
	  case 4:
	  	printf("--Urun Analizleri--\n");
	  	printf("1-Bir urunun toplam satis tutari\n2-Bir urun tipinin toplam satis tutari\n3-Tum urunlerin toplam satis tutari\n");
	  	scanf("%d",&f);
	  	if (f==1){
	  		urunsatis(p1);
		  }
		 else if(f==2){
		 	tipsatis(birinciurun,p1);
		 } 
		 else if(f==3){
		 	tumsatis(p1);
		 }
		 break;
		 case 5:
		 printf("Sistemden Cikabilirsiniz");
		 break;
		 
	  } 
 
	

	return 0;
}
