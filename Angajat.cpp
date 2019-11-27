#include "Angajat.h"
Angajat::Angajat() {
	zile_concediu = 0;
	nume = " ";
}
Angajat::Angajat(string _nume, int _zile_concediu)
{
    nume = _nume;
    zile_concediu = _zile_concediu;

}
Angajat::Angajat(const Angajat& r) {
    Angajat::operator=(r);
}
string Angajat::getNume() {
    return nume;
}
void Angajat::setNume(string s) {
    nume = s;
}
void Angajat::operator = (const Angajat& D) {
    nume = D.nume;
    zile_concediu = D.zile_concediu;
}