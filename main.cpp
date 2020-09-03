#include <iostream>
#include "Dominios.h"

using namespace std;

int main()
{
    Aluno a1;
    string nome = "Bruce";
    int matricula = 124;

    //Armazenando os dados nos atributos da instancia a1.
    a1.set_nome(nome);
    a1.set_matricula(matricula);

    //Acessando os dados.
    cout << "nome: " << a1.get_nome() << endl;
    cout << "matricula: " << a1.get_matricula() << endl;

    return 0;
}
