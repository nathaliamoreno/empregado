#ifndef EMPREGADO_H_INCLUDED
#define EMPREGADO_H_INCLUDED
#include <string>

class Empregado{

public:
    std::string nome, sobrenome;
    double salario;

    Empregado(std::string nome, std::string sobrenome, double salario);

    double SalarioAnual();
    double CalculaAumento();


    void setNome(std::string nome);
    void setSobrenome(std::string sobrenome);
    void setSalario(double salario);

    std::string getSobrenome();
    std::string getNome();
    double getSalario();

};


#endif // EMPREGADO_H_INCLUDED
