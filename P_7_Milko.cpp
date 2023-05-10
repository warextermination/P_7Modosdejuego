// P_7_Milko.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//hacer un programa que te solicite el numero de peleadores en una arena y te de el numero de batallas que se tendrán para obtener a un ganador
//1.Royal rumble
//2.Eliminatoria directa
//3.Grupos, semifinal y final
//
//

#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UFT-8");
    int Nj, Mj, P = 0;

    std::cout << "Bienvenido a Doorcama "  << std::endl;
    std::cout << "Elige que el modo de juego que prefieras " << std::endl;
    std::cout << "1.Royal rumble 2.Eliminatoria directa 3.Grupos" << std::endl;
    std::cin >> Mj;

    switch (Mj)
    {
    case 1:
        std::cout << "Royal rumble" << std::endl;
        std::cout << "Elige el numero de jugadores " << std::endl;
        std::cin >> Nj;
        for (int i = 0; i < Nj; i++)
        {
            P += i;

        }
        std::cout << "El contador va en: " << P << "." << std::endl;
        break;
    case 2:
        std::cout << "Eliminacion, Ellige el numero de jugadores, recuerda que solo puedes poner: 2, 4, 8, 16 o 32" << std::endl;
        std::cin >> Nj;
        P = Nj - 1;

        std::cout << "El contador va en: " << P << "." << std::endl;
        break;
    case 3:
        std::cout << "Grupos, cuantos jugadores quieres agregar " << std::endl;
        std::cin >> Nj;
        for (int i = 0; i < Nj; i++)
        {
            P += i;

        }
        P + 3;
        std::cout << "El contador va en: " << P << "." << std::endl;
        break;
    default:
        std::cout << "No puedes reaizar esa accion" << std::endl;
    }
    
    

}


