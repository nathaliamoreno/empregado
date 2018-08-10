#include <iostream>
#include "Empregado.h"
#include <string>

using namespace std;

int main()
{
        Empregado empregado1 = Empregado("Nathalia", "Moreno", 2000);
        Empregado empregado2 = Empregado("Derzu", "Omaia", 12000);


        cout << "Nome: " << empregado1.getNome() << " " << empregado1.getSobrenome()<< endl;
        cout << "Salario Mensal: R$ " << empregado1.getSalario() << endl;
        cout << "Valor do Salario Anual: R$ " << empregado1.SalarioAnual() << endl;
        cout << "Aumento de 10% ao mes: R$ " << empregado1.CalculaAumento() << endl;
        cout << "Valor Anual com Aumento: R$ " << empregado1.CalculaAumento()*12 + empregado1.SalarioAnual() << endl;
        cout <<"--------------------------------------" << endl;
        cout << "Nome: " << empregado2.getNome() << " " << empregado2.getSobrenome()<< endl;
        cout << "Salario Mensal: R$ " << empregado2.getSalario() << endl;
        cout << "Valor do Salario Anual: R$ " << empregado2.SalarioAnual() << endl;
        cout << "Aumento de 10% ao mes: R$ " << empregado2.CalculaAumento() << endl;
        cout << "Valor Anual com Aumento: R$ " << empregado2.CalculaAumento()*12 + empregado2.SalarioAnual() << endl;
        cout <<"--------------------------------------" << endl;


    return 0;
}
