#include <string>
#include <sstream>
#include "ItemVenda.h"

using namespace std;

string ItemVenda::to_string(int numero){
	ostringstream buffer;
	buffer << numero;
	return buffer.str();
}

string ItemVenda::to_string(float numero){
	ostringstream buffer;
	buffer << numero;
	return buffer.str();
}
string ItemVenda::to_string(double numero){
	ostringstream buffer;
	buffer << numero;
	return buffer.str();
}


ItemVenda::ItemVenda(double valor)
   {
   this->valor = valor;
   };
   
double ItemVenda::getValor()
   { 
   return (valor); 
   };
   

