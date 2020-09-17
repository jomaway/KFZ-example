#include "datum.h"

Datum::Datum(int tag, int monat, int jahr) :
    tag(tag), monat(monat), jahr(jahr)
{

}

//getter , setter
int Datum::getTag() {
    return this->tag;
}
int Datum::getMonat()  {
    return this->monat;
}
int Datum::getJahr() {
    return this->jahr;
}
void Datum::setTag(int tag){
    this->tag = tag;
}
void Datum::setMonat(int monat){
    this->monat = monat;
}
void Datum::setJahr(int jahr){
    this->jahr = jahr;
}

std::ostream& operator<< (std::ostream& os, Datum& dt)
{
    os << dt.tag << "." << dt.monat << "." << dt.jahr;
    return os;
}

int compareDatum(Datum& d1, Datum& d2){
    int z1 = d1.jahr * 365 + d1.monat * 31 + d1.tag;
    int z2 = d2.jahr * 365 + d2.monat * 31 + d2.tag;

    if (z1 < z2){
        return -1;
    } else if ( z1 == z2) {
        return 0;
    } else if ( z1 > z2) {
        return 1;
    }
}
