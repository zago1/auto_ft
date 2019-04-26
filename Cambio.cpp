#include <string>
#include "Cambio.h"
#include "ItemVenda.h"

using namespace std;


Cambio::Cambio(string tipo, int marcha, double valor) : ItemVenda(valor) {
	this->tipo=tipo;
	this->marchas=marcha;

	}

string Cambio::getDescricao(){
	return (tipo + ", "+to_string(marchas)+" Marchas ");
}
