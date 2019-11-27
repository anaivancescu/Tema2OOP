#include "Nedeterminate.h"
ostream& operator<<(ostream& os, const Nedeterminate& dt) {
    os <<" nume" <<dt.nume<<"zilde_concediu"<<dt.zile_concediu<< endl;
	os << "vechime " << dt.vechime << ", salariu fix " << dt.salariufix;
    return os;
}
istream& operator>>(istream& os, Nedeterminate& dt) {
	os >> dt.nume >> dt.zile_concediu;
    os >> dt.vechime >> dt.salariufix;
    return os;
}
void Nedeterminate::operator = (const Nedeterminate& D) {
    vechime = D.vechime;
    salariufix = D.salariufix;
    Angajat::operator=(D);
}