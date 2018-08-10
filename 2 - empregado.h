#ifndef EMPREGADO_H_INCLUDED
#define EMPREGADO_H_INCLUDED
#include <string>

class Empregado{

public:
    std::string nome, sobrenome;
    double salario;

    Empregado(std::string nome, std::string sobrenome, double salario);
    double ValidaSalario();
    double SalarioAnual();
    double CalculaAumento();


    /*char getNome();;
    void setNome(char nome);

    char getSobrenome();
    void setSobrenome(char sobrenome);

    double getSalario();
    void setSalario(double salario);
*/
};


#endif // EMPREGADO_H_INCLUDED
