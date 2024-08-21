#include <iostream>
using namespace std;
class Pryamo{
private:
	int x;
	bool Tf;
	int y;
	void Proverka() {
		if (x > 0 && y > 0) {
			Tf = false;
		}
		else {
			Tf = true;
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
		if (Tf == false) {
			int summa;
			summa = x + y + x + y;
			return summa;
		}
		else {
		
		}
	}
	int Plochad() {
		Proverka();
		if (Tf == false) {
			int summa;
			summa = x * y;
			return summa;
		}
		
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
	Pryamo kvad1;
	kvad1.SetY(2);
	kvad1.SetX(-2);
	kvad1.Perimetr();
	kvad1.Plochad();
	kvad1.PlochadVivod();
	kvad1.PerimetrVivod();
}
