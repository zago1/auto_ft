#ifndef ITEMVENDA_H

#define ITEMVENDA_H

#include <string>

using namespace std;

class ItemVenda
   {
   protected:
      double valor;
      
   public:
      string to_string(int numero);
      string to_string(float numero);
      string to_string(double numero);
      ItemVenda(double);
      virtual double getValor();

      virtual string getDescricao() = 0;

   };
   
#endif