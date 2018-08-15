#include "Empregado.h"
#include <iostream>
#include <string>

using namespace std;

Empregado::Empregado(string nome, string sobrenome, double salario){

    this->nome = nome;
    this->sobrenome = sobrenome;
    this->salario = salario;

}
void Empregado::setNome(string nome) {
    this->nome = nome;
}
string Empregado::getNome() {
    return nome;
}
void Empregado::setSobrenome(string sobrenome) {
    this->sobrenome = sobrenome;
}
string Empregado::getSobrenome() {
    return sobrenome;
}
void Empregado::setSalario(double salario) {

    if(salario>0){
    this->salario = salario;

    }else{
        cout<<"Salario negativo, nao configurado!";
    }
}
double Empregado::getSalario() {
    return salario;
}
double Empregado::SalarioAnual(){
    return salario*12;
 }
double Empregado::CalculaAumento(){
    return salario*.10;
}
