/*
 * File:   ConcessionariaModerna.h
 * Author: kelwin
 *
 * Created on 29 de Abril de 2017, 23:02
 */

#ifndef CONCESSIONARIA_MODERNA_H

#define CONCESSIONARIA_MODERNA_H

#include <string>
#include "Concessionaria.h"

using namespace std;

class ConcessionariaModerna : public Concessionaria
{
protected:
    string site;
    string facebook;
    string whatsapp;
    string twitter;

public:
    ConcessionariaModerna(string, string, string, string, string, string , string, string, string);
    const virtual string getsite();
    const virtual string getfacebook();
    const virtual string getwhatsapp();
    const virtual string gettwitter();
};
#endif
