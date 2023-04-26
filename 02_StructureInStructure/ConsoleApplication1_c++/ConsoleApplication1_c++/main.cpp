#include <iostream>
using namespace std;


struct Category {
	string name;
	int numOfProductCT;
};

struct department {
	string name;
	bool available;
	int numOfProduct;
	Category categoryProperties;
};

void reduceStock(department* depart,int numOfProductsSold ) {
	depart->categoryProperties.numOfProductCT -= numOfProductsSold;
	depart->numOfProduct -= numOfProductsSold;
}

int main()
{
	department d1 = { "Cosmetics",1,200,{"Foundation",14}};
	department d2 = { "Drinks",1,425,{"Alcoholic drink",255}};

	department d3;
	d3.name = "Greengrocer";
	d3.available = 1;
	d3.numOfProduct = 53;
	d3.categoryProperties = { "Vegetable" , 24};

	//cout << d1.name << " " << d1.available << " " <<d1.numOfProduct << " " << d1.categoryProperties.name << " " << d1.categoryProperties.numOfProductCT << endl;
	cout << d2.name << " " << d2.available << " " << d2.numOfProduct << " " << d2.categoryProperties.name << " " << d2.categoryProperties.numOfProductCT << endl;
	//cout << d3.name << " " << d3.available << " " << d3.numOfProduct << " " << d3.categoryProperties.name << " " << d3.categoryProperties.numOfProductCT << endl;

	reduceStock(&d2, 30);
	cout << d2.name << " " << d2.available << " " << d2.numOfProduct << " " << d2.categoryProperties.name << " " << d2.categoryProperties.numOfProductCT << endl;

	return 0;
}