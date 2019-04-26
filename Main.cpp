#include <iostream>
#include "Sistema.h"
#include "Concessionaria.h"
#include "ConcessionariaModerna.h"
int main(int argc, char* argv[])
  {
  try
     {
     ConcessionariaModerna * cliente = new ConcessionariaModerna(
        "www.autoftveiculos.com.br",
        "Auto-FT_Veiculos", 
        "@Auto-FT", 
        "+55 19 2113-3306",
        "Auto-FT Veiculos S.A.", 
        "R. Paschoal Marmo, 1888", 
        "Limeira", 
        "SP", 
        "+55 19 2113-3306");
     Sistema * programa = new Sistema(cliente);
     programa->processa();
     delete cliente;
     }
  catch(exception& excecao)
     {
     cerr << "Ocorreu um problema: " << excecao.what();
     };
  };
  
/* fim de arquivo */
