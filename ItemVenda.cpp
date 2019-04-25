/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "ItemVenda.h"

using namespace std;

ItemVenda::ItemVenda(double valor)
   {
   this->valor = valor;
   };
   
double ItemVenda::getValor()
   { 
   return (valor); 
   };
   
/* fim de arquivo */