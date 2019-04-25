/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef AUTOMOVEL_H

#define AUTOMOVEL_H

#include <string>
#include "ItemVenda.h"

using namespace std;

class Automovel : public ItemVenda
   {
   private:
      string marca;
      string modelo;
      int    ano;
      
   public:
      Automovel(string, string, int, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */