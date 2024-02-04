#ifndef senaprojee
#define senaprojee

struct musterinode{
	int ID;
	char name[50];
	int tip ;
	double x;
	double y;
	struct musteri *sonraki;
};

struct urunbilgisi{
	int urunID;
	char urunname[50];
	int uruntip;
	double urunucret;
	struct urun *sonrakiurun;
};

struct parcabilgisi{
int ID;
int invoice_ID;
int customer_ID;
int product_ID;
double cost;
struct Purchased *nextPurchasedPtr; 
};
	
void instructions( void );
void tumusteribilgileri(struct musterinode *a);
void tipmusteri(struct musterinode *b);
void birmusteri(struct musterinode *c);
void tumurunbilgileri(struct urunbilgisi *a);
void tipurun(struct urunbilgisi *b);
void birurun(struct urunbilgisi *c);
void birmusteriurun(struct parcabilgisi *urun);
void birmusteritutar(struct parcabilgisi *tutar);
void tummusteritutar(struct parcabilgisi *toptutar);
void kargoucreti(struct musterinode *kargo);
void urunsatis(struct parcabilgisi *urunsatis);
void tipsatis(struct urunbilgisi *tipsatis,struct parcabilgisi *tut);
void tumsatis (struct parcabilgisi *tum);
#endif
