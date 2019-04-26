#include "Direcao.h"
#include "ItemVenda.h"

Direcao::Direcao(string tipo, string marca, double valor) : ItemVenda(valor) 
{
	this->tipo=tipo;
	this->marca=marca;
}

string Direcao::getDescricao()
{
	return ("Direcão "+ tipo  +"  "+ marca );
}
