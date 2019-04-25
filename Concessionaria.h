/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef CONCESSIONARIA_H

#define CONCESSIONARIA_H

#include <string>

using namespace std;

class Concessionaria
   {
   private:
      string nome;
      string endereco;
      string cidade;
      string estado;
      string fone;

   public:
      Concessionaria(string nome, string endereco, string cidade, string estado, string fone);
      const virtual string getNome();
      const virtual string getEndereco();
      const virtual string getCidade();
      const virtual string getEstado();
      const virtual string getFone();
   };
   
#endif
   
/* fim de arquivo */