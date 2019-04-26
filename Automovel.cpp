#include <string>
#include "Automovel.h"
#include "ItemVenda.h"

using namespace std;

Automovel::Automovel(string marca, string modelo, int ano, double valor) : ItemVenda(valor)
   {
   this->marca = marca;
   this->modelo = modelo;
   this->ano = ano;
   };
   
string Automovel::getDescricao()
   { 
   return (marca + " " + modelo + " " + to_string(ano)); 
   };
   
