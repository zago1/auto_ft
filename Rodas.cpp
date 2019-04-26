#include <string>

#include "ItemVenda.h"
#include "Rodas.h"


Rodas::Rodas(int aro,string tipo,double valor): ItemVenda(valor)
{
	this->aro=aro;
	this->tipo=tipo;
	};

string Rodas::getDescricao(){
	return ( "Aro: " + to_string(aro) +" "+ tipo );
}
