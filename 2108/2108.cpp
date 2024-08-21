#include <iostream>
using namespace std;
class Pryamo{
private:
	int x;
	int y;
	void Proverka() {
		bool Tf;
		if (x > 0 && y > 0) {
			bool Tf = false;
		}
		else {
			bool Tf = true;
		}
	}
public:
	int GetX() {
		return x;
	}
	int GetY() {
		return y;
	}
	void SetY(int valueY) {
		y = valueY;
	}
	void SetX(int valueX) {
		x = valueX;
	}
	int Perimetr() {
		Proverka();
		int summa;
		summa = x + y + x + y;
		return summa;
	}
	int Plochad() {
		Proverka();
		int summa;
		summa = x * y;
		return summa;
	}
	void PlochadVivod() {
		cout << "Plochad: " << Plochad();
	}
	void PerimetrVivod() {
		cout << "Perimetr: " << Perimetr();
	}
};
int main()
{
   
}
