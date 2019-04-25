/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef CONCESSIONARIAMODERNA_H

#define CONCESSIONARIAMODERNA_H

#include <string>

#include "Concessionaria.h"

using namespace std;

class ConcessionariaModerna : public Concessionaria
{
private:
    string facebook;
    string twitter;
    string whatsapp;

public:
    ConcessionariaModerna(string nome, string endereco, string cidade, string estado, string fone, string facebook, string twitter, string whatsapp);
    const virtual string getFacebook();
    const virtual string getTwitter();
    const virtual string getWhatsapp();
};

#endif

/* fim de arquivo */