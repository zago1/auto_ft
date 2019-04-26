

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
   
