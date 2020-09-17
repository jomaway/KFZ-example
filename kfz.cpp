#include "kfz.h"




std::ostream& operator<< (std::ostream& os, KFZ& kfz)
{
    os << "Hersteller: " << kfz.hersteller << std::endl;
    os << "Erstzulassung: " << kfz.erstzulassung << std::endl;
    os << "Hauptzulassung: " << kfz.tuev << std::endl;
    return os;
}

KFZ& KFZ::operator+= (int zeit)
{
    this->tuev.setJahr(this->tuev.getJahr() + zeit);
    return *this;
}

bool KFZ::isTuevOk(Datum& dt)
{
    if(compareDatum(this->tuev,dt) >= 0)
    {
        return true;
    }else {
        return false;
    }
}

std::ostream& operator<< (std::ostream& os, PKW& pkw){
    os << (KFZ&) pkw;
    os << "Sitze: " << pkw.sitze;
    return os;
}

void sortByTuev(PKW p[], int len)
{
    PKW tmp;

    for(int i=0; i< len; ++i){
        for(int j=0; j< len-i-1;++j){
            if(compareDatum(p[j].getTuev(),p[j+1].getTuev()) == 1) {
                tmp = p[j];
                p[j] = p[j+1];
                p[j+1] = tmp;
            }
        }
    }
}

