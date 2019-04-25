/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef COR_H

#define COR_H

#include <string>
#include "ItemVenda.h"

using namespace std;

class Cor : public ItemVenda
   {
   private:
      string nome;
      bool metalica;
      
   public:
      Cor(string, bool, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */