/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef MOTOR_H

#define MOTOR_H

#include <string>
#include "ItemVenda.h"

using namespace std;

class Motor : public ItemVenda
   {
   private:
      float volume;
      int valvulas;
      string combustivel;
      
   public:
      Motor(float, int, string, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */