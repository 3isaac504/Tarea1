//TAREA #1-joseisaactorresmendez-61921402 - calculadora de bmi 

#include <iostream>

int main(){

    //Variables
    int peso = 0;
    int altura = 0;
    int bmi = 0;

    //Pedir datos
    std::cout << "Bienvenido, a su calculador de indice de masa corporal." << std::endl;
    std::cout << "Ingrese su peso en kilogramos";
    std::cin >> peso;
    std::cout << "Ingrese su altura en metros";
    std::cin >> altura;

    //Calculos
    bmi = peso / (altura * altura);

    //Resultado
    std::cout << "Su Índice de masa corporal es: " << bmi << std::endl;

    //Comparación de resultado
    std::cout << "Compare su resultado con los valores proporcionados a continuación" << std::endl;
    std::cout << "Bajo peso: menos de 18.5" << std::endl;
    std::cout << "Normal: entre 18.5 y 24.9" << std::endl;
    std::cout << "Sobrepeso entre 25 y 29.9" << std::endl;
    std::cout << "Obeso: 30 o mas" << std::endl;

    return 0;
}
