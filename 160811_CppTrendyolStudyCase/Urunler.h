#include <iostream>
#include<string>
#include <time.h>
using namespace std;
// asagidaki vectorleri urun yaratirken rastgele özellik belirlemek için kullandým.
string colors[7] = { "sari", "kirmizi", "yesil", "mavi", "turuncu", "beyaz", "siyah" };//7 tane
string collars[5] = { "duz yaka", "yuvarlak yaka", "dugmeli yaka", "seritli yaka", "igneli yaka" };//5 tane
string fabrics[3] = {"yun","pamuk","saten"};//3 tane

class Urunler
{
	public:
		string productName;
		int id;
		string color;
		string fabricType;
		string collarType;
		int size;
		double price;

	
		static Urunler *createUrun(int);
		virtual void features() = 0;
};

class YarimKolTsrt : public Urunler
{       
	public:
		YarimKolTsrt(){

			productName = "Yarim Kol Tisort";
			id = 1; // bu id yi arttýrýlabilir de yapardk aslinde ama ben class ýd sini spesifik olarak belirttim.
			color = colors[rand() % 7];
			fabricType = fabrics[rand() % 3];
			collarType = collars[rand() % 5];
			size = rand() % 20 + 28;// bedenler hakkýnda fikrim yok.. minumum 28 maksimum 48 aldým
			price = rand() % 78 + 22;//min22 max 100;
			
		}
		void features()
		{
			cout << "productName:" << productName <<
				"\nid:" << id <<
				"\ncolor:" << color <<
				"\nfabricType:" << fabricType <<
				"\ncollarType:" << collarType <<
				"\nsize:" << size <<
				"\nprice:" << price <<
				"\n----------------------------------------"<< endl;
		}
};
class KolsuzTsrt : public Urunler
{
public:
	KolsuzTsrt(){

		productName = "Kolsuz Tisort";
		id = 2; // bu id yi arttýrýlabilir de yapardk aslinde ama ben class ýd sini spesifik olarak belirttim.
		color = colors[rand() % 7];
		fabricType = fabrics[rand() % 3];
		collarType = collars[rand() % 5];
		size = rand() % 20 + 28;// bedenler hakkýnda fikrim yok.. minumum 28 maksimum 48 aldým
		price = rand() % 78 + 22;//min22 max 100;
	}
	void features()
	{
		cout << "productName:" << productName <<
			"\nid:" << id <<
			"\ncolor:" << color <<
			"\nfabricType:" << fabricType <<
			"\ncollarType:" << collarType <<
			"\nsize:" << size <<
			"\nprice:" << price <<
			"\n----------------------------------------" << endl;
	}
};
class KumasPntln : public Urunler
{
public:
	KumasPntln(){
	
		productName = "Kumas Pantolon";
		id = 3; // bu id yi arttýrýlabilir de yapardk aslinde ama ben class ýd sini spesifik olarak belirttim.
		color = colors[rand() % 7];
		fabricType = fabrics[rand() % 3];
		collarType = "----";
		size = rand() % 20 + 28;// bedenler hakkýnda fikrim yok.. minumum 28 maksimum 48 aldým
		price = rand() % 78 + 60;//min22 max 100;
	}
	void features()
	{
		cout << "productName:" << productName <<
			"\nid:" << id <<
			"\ncolor:" << color <<
			"\nfabricType:" << fabricType <<
			"\ncollarType:" << collarType <<
			"\nsize:" << size <<
			"\nprice:" << price <<
			"\n----------------------------------------" << endl;
	}
};
class KotPntln : public Urunler
{
public:
	KotPntln(){	
		productName = "Kot Pantolon";
		id = 4; // bu id yi arttýrýlabilir de yapardk aslinde ama ben class ýd sini spesifik olarak belirttim.
		color = colors[rand() % 7];
		fabricType = fabrics[rand() % 3];
		collarType = "----";
		size = rand() % 20 + 28;// bedenler hakkýnda fikrim yok.. minumum 28 maksimum 48 aldým
		price = rand() % 78 + 60;//min22 max 100;
	}
	void features()
	{
		cout << "productName:" << productName <<
			"\nid:" << id <<
			"\ncolor:" << color <<
			"\nfabricType:" << fabricType <<
			"\ncollarType:" << collarType <<
			"\nsize:" << size <<
			"\nprice:" << price <<
			"\n----------------------------------------" << endl;
	}
};
class Saat : public Urunler
{
public:
	Saat(){
	
		productName = "Saat";
		id = 5; // bu id yi arttýrýlabilir de yapardk aslinde ama ben class ýd sini spesifik olarak belirttim.
		color = colors[rand() % 7];
		fabricType = "----";;
		collarType = "----";;
		size = 0;// bedenler hakkýnda fikrim yok.. minumum 28 maksimum 48 aldým
		price = rand() % 78 + 22;//min22 max 100;
	}
	void features()
	{
		cout << "productName:" << productName <<
			"\nid:" << id <<
			"\ncolor:" << color <<
			"\nfabricType:" << fabricType <<
			"\ncollarType:" << collarType <<
			"\nsize:" << size <<
			"\nprice:" << price <<
			"\n----------------------------------------" << endl;
	}
};
Urunler *Urunler::createUrun(int catCode)//factory pattern icin
{
	if (catCode == 1)
		return new YarimKolTsrt;
	else if (catCode == 2)
		return new KolsuzTsrt;
	else if (catCode == 3)
		return new KumasPntln;
	else if (catCode == 4)
		return new KotPntln;
	else if (catCode == 5)
		return new Saat;
	
}