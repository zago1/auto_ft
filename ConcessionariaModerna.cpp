/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "ConcessionariaModerna.h"

using namespace std;

ConcessionariaModerna::ConcessionariaModerna(
    string nome,
    string endereco,
    string cidade,
    string estado,
    string fone,
    string facebook,
    string twitter,
    string whatsapp) : Concessionaria(nome, endereco, cidade, estado, fone)
{
    this->facebook = facebook;
    this->twitter = twitter;
    this->whatsapp = whatsapp;
};

const string ConcessionariaModerna::getFacebook() { return (facebook); };
const string ConcessionariaModerna::getTwitter() { return (twitter); };
const string ConcessionariaModerna::getWhatsapp() { return (whatsapp); };
