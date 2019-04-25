/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef CAMBIO_H

#define CAMBIO_H

#include <string>
#include "ItemVenda.h"

using namespace std;

class Cambio : public ItemVenda
   {
   private:
      string tipo;
      int marchas;
      
   public:
      Cambio(string, int, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */