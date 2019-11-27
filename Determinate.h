#pragma once
#include "Utils.h"
#include "Angajat.h"
class Determinate : public Angajat {

	int orePeZi = 0, pretPeOra = 0;

public:
	Determinate() {};
	Determinate(int _orePeZi, int _pretPeOra) {
		orePeZi = _orePeZi;
		pretPeOra = _pretPeOra;
	};
	int pSalariu() {
		return 30 * orePeZi * pretPeOra;
	}
	friend ostream& operator << (ostream& os, const Determinate& dt);
	friend istream& operator >> (istream& os, Determinate& dt);
	void operator = (const Determinate& D);
	~Determinate() {};

};