#include <iostream>
#include "Dominios.h"

using namespace std;

int main()
{
    Tela t1, t2;

    Tela::set_cor(9000);
    cout << "t1 cor: " << t1.get_cor() << endl;
    cout << "t2 cor: " << t2.get_cor() << endl;

    Tela::set_cor(78);
    cout << "t1 cor: " << t1.get_cor() << endl;
    cout << "t2 cor: " << t2.get_cor() << endl;

    t1.set_coordenada_x(80);
    t1.set_coordenada_y(97);

    t2.set_coordenada_x(69);
    t2.set_coordenada_y(82);

    cout << endl;
    cout << "t1 cor: " << t1.get_cor() << endl;
    cout << "t1 coordenada_x: " << t1.get_coordenada_x() << endl;
    cout << "t1 coordenada_y: " << t1.get_coordenada_y() << endl;

    cout << "t2 cor: " << t2.get_cor() << endl;
    cout << "t2 coordenada_x: " << t2.get_coordenada_x() << endl;
    cout << "t2 coordenada_y: " << t2.get_coordenada_y() << endl;


    return 0;
}
