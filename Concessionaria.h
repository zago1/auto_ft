#ifndef CONCESSIONARIA_H

#define CONCESSIONARIA_H

#include <string>

using namespace std;


class Concessionaria
{
private:
	string nome;
	string endereco;
	string cidade;
	string estado;
	string fone;
public:
Concessionaria(string, string, string, string, string);

const virtual string getNome();
const virtual string getEndereco();
const virtual string getCidade();
const virtual string getEstado();
const virtual string getFone();
};
#endif
