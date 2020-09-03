#include "Dominios.h"
#include <iostream>

using namespace std;

void Aluno::set_nome(string nome){
    this->nome = nome;
}

void Aluno::set_matricula(int matricula){
    if(matricula <= 123) {
        this->matricula = matricula;
        cout << "Valor valido, armazenado!" << endl;
    } else {
        cout << "Valor invalido." << endl;
    }
}

string Aluno::get_nome(){
    return this->nome;
}

int Aluno::get_matricula(){
    return this->matricula;
}
