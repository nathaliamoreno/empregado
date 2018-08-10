#include "Empregado.h"
#include <iostream>
#include <string>

using namespace std;

Empregado::Empregado(char nome, char sobrenome, double salario){

    this->nome = nome;
    this->sobrenome = sobrenome;
    this->salario = salario;

}

/*char Empregado::getNome() {
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
}*/
double Empregado::ValidaSalario() {

    if (salario < 0){
        cout<< "Valor nao configuravel"<< endl();
        salario = 0.0;
}
double Empregado::SalarioAnual(){

 }
double Empregado::CalculaAumento(){

}

