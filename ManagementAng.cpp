#include "ManagementAng.h"

ManagementAng::ManagementAng() {
	nrAngajati = 0;
}
ManagementAng::ManagementAng( int _nrAngajati) {
	nrAngajati = _nrAngajati;
}
  ManagementAng::~ManagementAng() {
	for (auto& i : Vangajati) 
		delete i;
	
}

ostream& operator<<(ostream& os, const ManagementAng& dt) {
	
	for (auto i : dt.Vangajati) {
		if (typeid(*i) == typeid(Nedeterminate))
			os << *dynamic_cast<Nedeterminate*>(i);
		if (typeid(*i) == typeid(Determinate))
			os << *dynamic_cast<Determinate*>(i);
		if (typeid(*i) == typeid(Administrator))
			os << *dynamic_cast<Administrator*>(i);
	}
	return os;
}
istream& operator>>(istream& os, ManagementAng& dt) {
	int opt;
	os >> dt.nrAngajati;
	//dt.Vangajati.resize(dt.nrAngajati);
	for (int i = 0; i < dt.nrAngajati; i++)
		dt.Vangajati.push_back(new Angajat());
	for (auto i : dt.Vangajati) {
		cin >> opt;
		if (opt == 1) {
			i = new Nedeterminate();
		}
		else if (opt == 2) {
			i = new Determinate();
		}
		else if (opt == 3) {
			i = new Administrator();
		}

	}
	for (auto i : dt.Vangajati) {
		if (typeid(*i) ==typeid(Nedeterminate))
			os >> *dynamic_cast<Nedeterminate*>(i);
		if (typeid(*i) == typeid(Determinate))
			os >> *dynamic_cast<Determinate*>(i);
		if (typeid(*i) == typeid(Administrator))
			os >> *dynamic_cast<Administrator*>(i);
		}
	return os;
}