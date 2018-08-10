#include "Empregado.h"
#include <iostream>

Empregado::Empregado(char nome, char sobrenome, double salario){

    this.nome = nome;
    this.sobrenome = sobrenome;
    this.salario = salario;

}

char Empregado::getNome() {
    return nome;
}
void Empregado::setNome(char nome) {
    this.nome = nome;
}
char Empregado::getSobrenome() {
    return sobrenome;
}
void Empregado::setSobrenome(char sobrenome) {
    this.sobrenome = sobrenome;
}
double Empregado::getSalario() {
    return salario;
}
void Empregado::setSalario(double salario) {
    if(salario>0){
        this.salario = salario;
    }
    else

}
