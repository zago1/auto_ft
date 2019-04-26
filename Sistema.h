#ifndef SISTEMA_H

#define SISTEMA_H

#include <string>
#include <vector>

#include "ItemVenda.h"
#include "Concessionaria.h"
#include "ConcessionariaModerna.h"

using namespace std;

class Sistema
   {
   private:
      vector<ItemVenda *> carros;
      vector<ItemVenda *> motores;
      vector<ItemVenda *> cambios;
      vector<ItemVenda *> cores;
      vector<ItemVenda *> direcao;
      vector<ItemVenda *> rodas;
      vector<ItemVenda *> sonorizacao;

      vector<ItemVenda *> orcamento;

      ConcessionariaModerna* cliente;

      void boasVindas();
      void carregarEstoque();
      void iniciarVenda();
      void imprimirOrcto();
      void listarConfiguracao();

      ItemVenda * escolheAutomovel();
      ItemVenda * escolheMotor();
      ItemVenda * escolheCambio();
      ItemVenda * escolheCor();
      ItemVenda * escolherDirecao();
      ItemVenda * escolherRodas();
      ItemVenda * escolherSonorizacao();
   public:
      Sistema(ConcessionariaModerna*);
      ~Sistema();
      void processa();
      string to_string(double numero);
   };

#endif



