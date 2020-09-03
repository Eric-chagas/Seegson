#include "Dominios.h"
#include <iostream>

using namespace std;

Aluno::Aluno(string nome, int matricula){
    this->nome = nome;
    this->matricula = matricula;
}

void Aluno::set_nome(string nome){
    if(validar_nome(nome)){
        this->nome = nome;
    }
}

void Aluno::set_matricula(int matricula){
    if (validar_matricula(matricula)){
        this->matricula = matricula;
    }
}

bool Aluno::validar_nome(string nome){
    if (nome.length()==10){
        return true;
    } else {
        return false;
    }
}

bool Aluno::validar_matricula(int matricula){
    if(matricula >= 100 && matricula <= 199){
        return true;
    } else {
        return false;
    }
}

string Aluno::get_nome(){
    return this->nome;
}

int Aluno::get_matricula(){
    return this->matricula;
}
