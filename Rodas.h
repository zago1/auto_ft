#ifndef RODAS_H_
#define RODAS_H_

#include <string>

#include "ItemVenda.h"

class Rodas: public ItemVenda {
private:
	int aro=0;
	string tipo;

public:
	Rodas(int,string,double);
	virtual string getDescricao();
	//virtual ~Rodas();
};

#endif /* RODAS_H_ */
