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

class Tela {
    private:
            static const int LIMITE_INFERIOR = 0;
            static const int LIMITE_SUPERIOR = 99;
            int coordenada_x;
            int coordenada_y;
            static int cor;
            static bool validar_numero(int numero);
    public:
            static void set_cor(int Cor);
            static int get_cor();

            void set_coordenada_x(int coordenada_x);
            void set_coordenada_y(int coordenada_y);

            int get_coordenada_x();
            int get_coordenada_y();
};

#endif // DOMINIOS_H_INCLUDED
