#include "dominios/dominios.hpp"

// Método para validação sem lançamento de exceção.

bool CodigoCliente::validar(int valor)
{
    if (valor > LIMITE)
        return false;
    return true;
}

// Método para acesso a atributo.

bool CodigoCliente::setValor(int valor)
{
    if (!validar(valor))
        return false;
    this->valor = valor;
    return true;
}
