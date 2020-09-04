#include "Dominios.h"
#include <iostream>

using namespace std;


//Classe Aluno
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


//Classe Tela
int Tela::cor;

bool Tela::validar_numero(int numero){
    if(numero >= LIMITE_INFERIOR && numero <= LIMITE_SUPERIOR){
        return true;
    } else{
        return false;
    }
}

void Tela::set_cor(int Cor){
    if(validar_numero(Cor)){
        cor = Cor;
    }
}

int Tela::get_cor(){
    return cor;
}

void Tela::set_coordenada_x(int coordenada_x){
    if(validar_numero(coordenada_x)){
        this->coordenada_x = coordenada_x;
    }
}

void Tela::set_coordenada_y(int coordenada_y){
    if(validar_numero(coordenada_y)){
        this->coordenada_y = coordenada_y;
    }
}

int Tela::get_coordenada_x(){
    return this->coordenada_x;
}

int Tela::get_coordenada_y(){
    return this->coordenada_y;
}
