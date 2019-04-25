/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Concessionaria.h"

using namespace std;

Concessionaria::Concessionaria(string nome, string endereco, string cidade, string estado, string fone)
   {
   this->nome = nome;
   this->endereco = endereco;
   this->cidade = cidade;
   this->estado = estado;
   this->fone = fone;
   };
   
const string Concessionaria::getNome()     { return (nome); };
const string Concessionaria::getEndereco() { return (endereco); };
const string Concessionaria::getCidade()   { return (cidade); };
const string Concessionaria::getEstado()   { return (estado); };
const string Concessionaria::getFone()     { return (fone); };
  
   
