#include "ItemVenda.h"
#include "Sonorizacao.h"

Sonorizacao::Sonorizacao(int potencia,string tipo ,double valor): ItemVenda(valor){

	this->potencia=potencia;
	this->tipo=tipo;

}

string Sonorizacao::getDescricao(){

	return("Potencia: "+to_string(potencia)+" W "+ tipo);

}
