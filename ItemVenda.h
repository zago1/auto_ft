/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef ITEMVENDA_H

#define ITEMVENDA_H

#include <string>

using namespace std;

class ItemVenda
   {
   protected:
      double valor;
      
   public:
      ItemVenda(double);
      virtual double getValor();

      virtual string getDescricao() = 0;
   };
   
#endif
   
/* fim de arquivo */