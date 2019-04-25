/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

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
   
/* fim de arquivo */