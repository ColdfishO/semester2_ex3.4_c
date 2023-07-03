#ifndef KLASA_H
#define KLASA_H
class Tzespol {
private:
	double Re, Im;
public:
	Tzespol() {
		Re = 0;
		Im = 0;
	}
	Tzespol(double Re, double Im) {
		this->Re = Re;
		this->Im = Im;
	}
	void wyœwietl();
	Tzespol operator+=(Tzespol z);
	Tzespol operator-=(Tzespol z);
	Tzespol operator*=(Tzespol z);
	Tzespol operator/=(Tzespol z);
	bool operator==(Tzespol z);
	bool operator!=(Tzespol z);
};
#endif

