#ifndef DIRECAO_H_
#define DIRECAO_H_

#include "ItemVenda.h"


class Direcao: public ItemVenda {
private:
	string tipo;
	string marca;

public:
	Direcao(string,string,double);
	virtual  string getDescricao();
};

#endif /* DIRECAO_H_ */
