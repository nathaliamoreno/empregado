#include <iostream>
#include "Invoice.h"
#include <string>

using namespace std;

int main()
{
        Empregado empregado = Empregado("Nathalia", "Moreno", 3000.0);

        cout << empregado.salario() <<endl;


    return 0;
}
