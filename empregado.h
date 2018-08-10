#ifndef EMPREGADO_H_INCLUDED
#define EMPREGADO_H_INCLUDED

class Empregado{

public:
    std::std nome, sobrenome;
    double salario;

    Empregado(char nome, char sobrenome, double salario);

    char getNome();
    void setNome(char nome);

    char getSobrenome();
    void setSobrenome(char sobrenome);

    double getSalario();
    void setSalario(double salario);

};


#endif // EMPREGADO_H_INCLUDED
