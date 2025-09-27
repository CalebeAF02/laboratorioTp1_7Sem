#include "dominios//dominios.hpp"
#include <iostream>

using namespace std;

int main()
{
    /*
    CodigoCliente a;

    if (a.setValor(3))
    {
        cout<<"Valor= "<<a.getValor()<<endl;
    }else
    {
        cout<<"Valor invalido"<<endl;
    }
    cout << "Hello world!" << endl;

    if (a.setValor(30))
    {
        cout<<"Valor= "<<a.getValor()<<endl;
    }else
    {
        cout<<"Valor invalido"<<endl;
    }
    */

    CodigoCliente* ptra;
    ptra = new CodigoCliente();

    // se o set executar normalmente ele entra se não retortana o valor invalido
    if (ptra->setValor(3))
    {
        cout << "Valor= " << ptra->getValor() << endl;
    }
    else
    {
        cout << "Valor invalido" << endl;
    }

    // se o set executar normalmente ele entra se não retortana o valor invalido
    if (ptra->setValor(30))
    {
        cout << "Valor= " << ptra->getValor() << endl;
    }
    else
    {
        cout << "Valor invalido" << endl;
    }

    delete ptra;
    return 0;
}
