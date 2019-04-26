#include <string>

#include "Concessionaria.h"
#include "ConcessionariaModerna.h"

using namespace std;

ConcessionariaModerna::ConcessionariaModerna(
    string site,
    string facebook,
    string twitter,
    string whatsapp,
    string nome,
    string endereco,
    string cidade,
    string estado,
    string fone) : Concessionaria(nome,
    endereco,
    cidade,
    estado,
    fone)
{
   this->site=site;
   this->facebook=facebook;
   this->whatsapp=whatsapp;
   this->twitter=twitter;
}

const string ConcessionariaModerna::getsite()     { return (site); };
const string ConcessionariaModerna::getfacebook() { return (facebook); };
const string ConcessionariaModerna::getwhatsapp()   { return (whatsapp); };
const string ConcessionariaModerna::gettwitter()   { return (twitter); };

