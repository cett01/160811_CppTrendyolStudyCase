/* Ekrem Cihad Çetin
 * Trendyol Study Case
   Visual Studio 2013 ortamýnda derlenmiþ ve hazýrlanmýþtýr.
    Tek header dosyasýyla yapmayý uygun gordum.
	factory method ve object oriented kullanýmý bir arada bulunmaktadýr.
	derlenme sýkýntýsý veya baska bir sorunda gerekli acýklamalarý yapabilirim.
 */

#include "Urunler.h"
#include <vector>

using namespace std;

	int main(){
		srand(time_t(NULL));
		vector<Urunler*> products;
		int CatCode;
		int counter = 0;// aranan productslarin sayacini tutuyorum
		while (true)
		{
			cout << "Yarim Kollu Tisort (1)\n"<<
					"Kolsuz tisort(2)\n"<<
					"Kumas Pantolon(3)\n"<<
				    "Kot Pantolon(4)\n"<<
				    "Saat(5)\n" <<
					"bakilan tum urunler icin(0) : ";// basit bir menu
			cin >> CatCode;// kullanicidan alinan deger
			if (CatCode == 0)
				break;
			cout << "\t|  |\n" <<
					"\t|  |\n" <<
				   "\t|  |\n";
			if (CatCode<6 && CatCode>-1){// gerekli elemanlar saglaniyorsa
				products.push_back(Urunler::createUrun(CatCode));// vectorume olusturulan urunu ekliyorum.
				products[counter]->features();// ozelliklerini ekrana basiyorum
				counter++;

			}
			else
				cout << "Belirtilen degerleri giriniz!!\n";// hata mesajý. exception ile de yapabilirdim ama basitligini bozmak istemedim.
			system("pause");
			system("cls");
		}
		for (int i = 0; i < products.size(); i++){
			products[i]->features();//secilen tum urunlerin ozellikleri icin..
			cout << "\n----------------------------------------\n";
		}

		for (int i = 0; i < products.size(); i++)
			delete products[i];// aldigim alanlari temizliyorum.
		system("pause");
		return 0;
	}