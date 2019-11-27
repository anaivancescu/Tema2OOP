#include "Determinate.h"

ostream& operator<<(ostream& os, const Determinate& dt) {
    os << "ore pe zi:"  <<dt.orePeZi<< ", pret pe ora" << dt.pretPeOra << endl;
    return os;
}
istream& operator>>(istream& os, Determinate& dt) {
    os >> dt.orePeZi >> dt.pretPeOra;
    return os;
}
void Determinate::operator = (const Determinate& D) {
    orePeZi = D.orePeZi;
    pretPeOra = D.pretPeOra;
}