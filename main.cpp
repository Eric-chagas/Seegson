#include <iostream>
#include "Dominios.h"

using namespace std;

int main()
{
    Aluno a1("juls", 21);

    //Cenario de sucesso.
    a1.set_nome("RipleyAman");
    a1.set_matricula(169);

    cout << "nome: " << a1.get_nome() << endl;
    cout << "matricula: " << a1.get_matricula() << endl;

    //Cenario de falha.
    a1.set_nome("RipleyAmanda");
    a1.set_matricula(21);

    cout << "nome: " << a1.get_nome() << endl;
    cout << "matricula: " << a1.get_matricula() << endl;

    return 0;
}
