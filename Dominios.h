#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED
#include <iostream>

using namespace std;

class Aluno {
    private:
            string nome;
            int matricula;
            bool validar_nome(string nome);
            bool validar_matricula(int matricula);
    public:
            Aluno(string nome, int matricula);

            void set_nome(string nome);
            void set_matricula(int matricula);

            string get_nome();
            int get_matricula();
};

#endif // DOMINIOS_H_INCLUDED
