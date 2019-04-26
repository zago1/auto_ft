#include <string>
#include "Cor.h"
#include "ItemVenda.h"

using namespace std;

Cor::Cor(string nome, bool metalica, double valor) : ItemVenda(valor)
   {
   this->nome = nome;
   this->metalica = metalica;
   };
   
string Cor::getDescricao()
   { 
   return ("Cor " + nome + " " + (metalica ? "metalica" : "perolizada")); 
   };
   
