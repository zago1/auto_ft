#ifndef SONORIZACAO_H_
#define SONORIZACAO_H_

#include "ItemVenda.h"

class Sonorizacao: public ItemVenda {
private:
	int potencia=0;
	string tipo;
public:
	Sonorizacao(int,string,double);
	virtual string getDescricao();
};

#endif /* SONORIZACAO_H_ */
