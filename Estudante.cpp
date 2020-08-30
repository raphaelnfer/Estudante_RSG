#include "Estudante.hpp"


using namespace std;


//Retorna a nota média do Estudante.
float Estudante::calcularRSG(){
    
    float Soma = 000.0000;

    for (int i=0; i<5; i++){
        Soma+=notas[i];
    }

    return Soma/5; 
}