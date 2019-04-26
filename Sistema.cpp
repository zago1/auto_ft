/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <stdlib.h>

#include "ConcessionariaModerna.h"
#include "Sonorizacao.h"
#include "Rodas.h"
#include "Direcao.h"
#include "Sistema.h"
#include "Concessionaria.h"
#include "ItemVenda.h"
#include "Automovel.h"
#include "Motor.h"
#include "Cambio.h"
#include "Cor.h"
#include "Menu.h"

using namespace std;

string Sistema::to_string(double numero){
	ostringstream buffer;
	buffer << numero;
	return buffer.str();
}

Sistema::Sistema(ConcessionariaModerna * cliente){
   this->cliente = cliente;
   boasVindas();
   carregarEstoque();
   orcamento.clear();
};

Sistema::~Sistema(){
   vector<ItemVenda *>::iterator varre;

   orcamento.clear(); // nao usar delete nos itens, pois sao so copias!!!

   varre = carros.begin();
   while(varre != carros.end()){
      delete(*varre++);
   };
   carros.clear();

   varre = motores.begin();
   while(varre != motores.end()){
      delete(*varre++);
   };
   motores.clear();

   varre = cambios.begin();
   while(varre != cambios.end()){
      delete(*varre++);
   };
   cambios.clear();

   varre = cores.begin();
   while(varre != cores.end()){
      delete(*varre++);
   };
   cores.clear();
//____________________________________novo__________________________________
   varre = direcao.begin();
   while(varre != direcao.end()){
      delete(*varre++);
   };
   direcao.clear();

   varre = rodas.begin();
   while(varre != rodas.end()){
      delete(*varre++);
   };
   rodas.clear();

   varre = sonorizacao.begin();
   while(varre != sonorizacao.end()){
      delete(*varre++);
   };
   sonorizacao.clear();

};

void Sistema::boasVindas(){
   cout << endl << endl;
   cout << "******************************" << endl;
   cout << cliente->getNome() << endl;
   cout << cliente->getEndereco() << endl;
   cout << cliente->getCidade() << "/" << cliente->getEstado() << endl;
   cout << cliente->getFone() << endl;
   cout<< "Site :"<<cliente->getsite()<<endl;
   cout<<"Facebook: " <<cliente->getfacebook()<<"/ Twitter: "<<cliente->gettwitter()<<endl;
   cout<<"Whatsapp:"<< cliente->getwhatsapp()<<endl;

   cout << "******************************" << endl << endl;
};

void Sistema::carregarEstoque(){
   carros.clear();
   carros.insert(carros.end(), new Automovel("GM", "Cruze Sedan",  2015, 107000.00));
   carros.insert(carros.end(), new Automovel("GM", "Cruze Hatch",  2015,  75000.00));
   carros.insert(carros.end(), new Automovel("GM", "Prisma Sedan", 2015,  65000.00));
   carros.insert(carros.end(), new Automovel("GM", "Onix Hatch",   2015,  40000.00));
   carros.insert(carros.end(), new Automovel("GM", "Celta Hatch",  2015,  30000.00));

   motores.clear();
   motores.insert(motores.end(), new Motor(1.8, 16, "gasolina", 3300.00));
   motores.insert(motores.end(), new Motor(1.8, 16, "flex", 3500.00));
   motores.insert(motores.end(), new Motor(1.8,  8, "flex", 3000.00));
   motores.insert(motores.end(), new Motor(1.6, 16, "flex", 2800.00));
   motores.insert(motores.end(), new Motor(1.6,  8, "flex", 2300.00));
   motores.insert(motores.end(), new Motor(1.4, 16, "flex", 2600.00));
   motores.insert(motores.end(), new Motor(1.4,  8, "flex", 2000.00));
   motores.insert(motores.end(), new Motor(1.0, 16, "flex", 2400.00));
   motores.insert(motores.end(), new Motor(1.0,  8, "flex", 0.00));

   cambios.clear();
   cambios.insert(cambios.end(), new Cambio("Automatico", 7, 7500.0));
   cambios.insert(cambios.end(), new Cambio("Automatico", 6, 4500.0));
   cambios.insert(cambios.end(), new Cambio("Automatico", 5, 4000.0));
   cambios.insert(cambios.end(), new Cambio("Manual", 6, 2500.0));
   cambios.insert(cambios.end(), new Cambio("Manual", 5, 0.0));


   cores.clear();
   cores.insert(cores.end(), new Cor("Branco", false, 0.0));
   cores.insert(cores.end(), new Cor("Vermelho", false, 200.0));
   cores.insert(cores.end(), new Cor("Preto", false, 200.0));
   cores.insert(cores.end(), new Cor("Azul", false, 100.0));
   cores.insert(cores.end(), new Cor("Prata", true, 350.0));
   cores.insert(cores.end(), new Cor("Cinza", true, 250.0));
   cores.insert(cores.end(), new Cor("Vermelho", true, 450.0));
   cores.insert(cores.end(), new Cor("Azul", true, 250.0));

//Novo_____________________________________________________________________
   direcao.clear();
   direcao.insert(direcao.end(), new Direcao("Hidraulica","Toyota",200));
   direcao.insert(direcao.end(), new Direcao("Hidraulica","Honda",400));
   direcao.insert(direcao.end(), new Direcao("Eletrica","Toyota",500));
   direcao.insert(direcao.end(), new Direcao("Eletrica","Hyundai",300));
   direcao.insert(direcao.end(), new Direcao("Mecanica","Volkswagen",20));

   rodas.insert(rodas.end(),new Rodas(15,"Cromado",400));
   rodas.insert(rodas.end(),new Rodas(16,"Scorro",700));
   rodas.insert(rodas.end(),new Rodas(17,"Esportivo",200));
   rodas.insert(rodas.end(),new Rodas(18,"Muscle",900));

   sonorizacao.insert(sonorizacao.end(),new Sonorizacao(300,"Donner Sp400 ",900));
   sonorizacao.insert(sonorizacao.end(),new Sonorizacao(360,"Slim Corzus 200 ",700));
   sonorizacao.insert(sonorizacao.end(),new Sonorizacao(700,"JBL ",1500));
   sonorizacao.insert(sonorizacao.end(),new Sonorizacao(650,"Frahm Ar Slim-1000 ",900));

};

void Sistema::processa(){
   vector<string> opcoes({ "Sair do Sistema", "Iniciar Venda", "Imprimir Orcamento" });
   Menu menu("Menu Principal", opcoes);
   int escolha = -1;

   while(escolha){
      escolha = menu.getEscolha();

      switch(escolha){
         case 1: { iniciarVenda();  }; break;
         case 2: { imprimirOrcto(); }; break;
      };
   };
};

void Sistema::iniciarVenda(){
   orcamento.clear();
   cout << "------------------------------\nNOVA VENDA\n------------------------------\n";

   orcamento.insert(orcamento.end(), escolheAutomovel());
   listarConfiguracao();
   orcamento.insert(orcamento.end(), escolheMotor());
   listarConfiguracao();
   orcamento.insert(orcamento.end(), escolheCambio());
   listarConfiguracao();
   orcamento.insert(orcamento.end(), escolheCor());
   listarConfiguracao();
   orcamento.insert(orcamento.end(), escolherDirecao());
  listarConfiguracao();
  orcamento.insert(orcamento.end(),escolherRodas());
  listarConfiguracao();
  orcamento.insert(orcamento.end(),escolherSonorizacao());
   listarConfiguracao();

   cout << "------------------------------\nCONFIGURACAO COMPLETADA\n------------------------------\n";
};

void Sistema::listarConfiguracao(){
   cout << "------------------------------\nConfiguracao escolhida:\n------------------------------\n";

   vector<ItemVenda *>::iterator varre = orcamento.begin();

   while(varre != orcamento.end()){
      cout << "  @ " << (*varre)->getDescricao() << "\n\tR$ " << (*varre)->getValor() << endl;
      varre++;
   };
};

ItemVenda * Sistema::escolheAutomovel(){
   vector<string> opcoes;
   vector<ItemVenda *>::iterator varre = carros.begin();

   while(varre != carros.end()){
      opcoes.push_back((*varre++)->getDescricao()+" por R$"+ to_string((*varre)->getValor()));
   };
   Menu menu("Modelos disponiveis", opcoes);

   return (carros.at(menu.getEscolha()));
};

ItemVenda * Sistema::escolheMotor(){
   vector<string> opcoes;
   vector<ItemVenda *>::iterator varre = motores.begin();

   while(varre != motores.end()){
      opcoes.push_back((*varre)->getDescricao() + " por R$ " + to_string((*varre)->getValor()));
      varre++;
   };
   Menu menu("Motorizacoes disponiveis", opcoes);

   return (motores.at(menu.getEscolha()));
};

ItemVenda * Sistema::escolheCambio(){
   vector<string> opcoes;
   vector<ItemVenda *>::iterator varre = cambios.begin();

   while(varre != cambios.end()){
	   opcoes.push_back((*varre)->getDescricao() + " por R$ " + to_string((*varre)->getValor()));
	   varre++;
   };
   Menu menu("Cambios disponiveis", opcoes);

   return (cambios.at(menu.getEscolha()));
};

ItemVenda * Sistema::escolheCor(){
   vector<string> opcoes;
   vector<ItemVenda *>::iterator varre = cores.begin();

   while(varre != cores.end()){
	   opcoes.push_back((*varre)->getDescricao() + "  por R$  " +  to_string((*varre)->getValor()));
	   varre++;
   };
   Menu menu("Cores disponiveis", opcoes);

   return (cores.at(menu.getEscolha()));
};

ItemVenda * Sistema::escolherDirecao(){
   vector<string> opcoes;
   vector<ItemVenda *>::iterator varre = direcao.begin();

   while(varre != direcao.end())
      {
	   opcoes.push_back((*varre)->getDescricao() + " por R$ " +  to_string((*varre)->getValor()));
	   varre++;
      };
   Menu menu("Direçoẽs disponiveis", opcoes);

   return (direcao.at(menu.getEscolha()));
};

ItemVenda * Sistema::escolherRodas(){
   vector<string> opcoes;
   vector<ItemVenda *>::iterator varre = rodas.begin();

   while(varre != rodas.end())
      {
	   opcoes.push_back((*varre)->getDescricao() + " por R$ " + to_string((*varre)->getValor()));
	   varre++;
      };
   Menu menu("Rodas disponiveis", opcoes);

   return (rodas.at(menu.getEscolha()));
};

ItemVenda * Sistema::escolherSonorizacao(){
   vector<string> opcoes;
   vector<ItemVenda *>::iterator varre = sonorizacao.begin();

   while(varre != sonorizacao.end())
      {
	  opcoes.push_back((*varre)->getDescricao() + " por R$ " + to_string((*varre)->getValor()));
      varre++;
      };
   Menu menu("Sonorizacoẽs disponiveis", opcoes);

   return (sonorizacao.at(menu.getEscolha()));
};

void Sistema:: imprimirOrcto(){
	   double total=0;
	   boasVindas();
	   cout << "------------------------------\nOrçamento do Automovel:\n------------------------------\n";

	   vector<ItemVenda *>::iterator varre = orcamento.begin();

	   while(varre != orcamento.end())
	      {
	      cout << (*varre)->getDescricao() << "\tR$ " << (*varre)->getValor() << endl;
	      total =(*varre)->getValor()+total;
	      varre++;
	      };
	   cout<<"___________________________________________________________________________"<<endl;
	   cout<<"Valor do seu veiculo\t\t "<<total<<endl;
   };

/* fim de arquivo */
