#include <iostream>
using namespace std;

class takim  {
	public:
	string isim;
	int kurulusYili;
	void yazdir() {
		cout << "Takim sinifi" << endl;
	}

};

class futbolcu: public takim
{
	private :
	string isim = "Bir isim belirtilmedi.";
	public:
	int dogumYili;
	float maas;

public:
	string getIsim() {
		return isim;
	}
	string setIsim(string isim) {
		this->isim = isim;
		return isim;
	}
};




int main() {
	futbolcu f1;
	takim* f1takim;
	f1takim = &f1;
	f1takim->isim = "Fenerbahce";
	f1.setIsim("Alex");
	f1.dogumYili = 1996;
	f1.maas = 154587;
	cout << f1.getIsim()<< " " <<f1.dogumYili << " " << f1.maas << endl;

	f1takim->yazdir();


	return 0;
}