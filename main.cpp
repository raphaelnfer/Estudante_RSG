#include <iostream>
#include <iomanip>
#include <string>
#include "Estudante.hpp"

using namespace std;


int main(){



  Estudante turma[10];
  Estudante turmaAuxiliar[10];

  float RSG;

  int x = 0, y = 0;
  
  turma[0].matricula =2015000111; turma[x].nome = "João"; turma[x].notas[y] = 60; turma[x].notas[y++] = 60; turma[x].notas[y++] = 55; turma[x].notas[y++] = 82; turma[x].notas[y++] = 90; y = 0; x++;

  turma[1].matricula =2015111222; turma[x].nome = "Maria"; turma[x].notas[y++] = 85; turma[x].notas[y++] = 83; turma[x].notas[y++] = 60; turma[x].notas[y++] = 75; turma[x].notas[y++] = 61; y = 0;x++;

  turma[2].matricula =2015222333; turma[x].nome = "Carlos"; turma[x].notas[y++] = 72; turma[x].notas[y++] = 99; turma[x].notas[y++] = 80; turma[x].notas[y++] = 73; turma[x].notas[y++] = 78; y = 0;x++;

  turma[3].matricula =2015333444; turma[x].nome = "Felipe"; turma[x].notas[y++] = 89; turma[x].notas[y++] = 67; turma[x].notas[y++] = 72; turma[x].notas[y++] = 75; turma[x].notas[y++] = 80; y = 0;x++;

  turma[4].matricula =2015444555; turma[x].nome = "Carolina"; turma[x].notas[y++] = 55; turma[x].notas[y++] = 83; turma[x].notas[y++] = 95; turma[x].notas[y++] = 92; turma[x].notas[y++] = 60; y = 0;x++;

  turma[5].matricula =2015555666; turma[x].nome = "Joana"; turma[x].notas[y++] = 64; turma[x].notas[y++] = 67; turma[x].notas[y++] = 69; turma[x].notas[y++] = 69; turma[x].notas[y++] = 65; y = 0;x++;

  turma[6].matricula =2015666777; turma[x].nome = "Gabriel"; turma[x].notas[y++] = 93; turma[x].notas[y++] = 85; turma[x].notas[y++] = 95; turma[x].notas[y++] = 87; turma[x].notas[y++] = 91; y = 0;x++;

  turma[7].matricula =2015777888; turma[x].nome = "Fernanda"; turma[x].notas[y++] = 82; turma[x].notas[y++] = 66; turma[x].notas[y++] = 78; turma[x].notas[y++] = 65; turma[x].notas[y++] = 77; y = 0;x++;

  turma[8].matricula =2015888999; turma[x].nome = "Daniel"; turma[x].notas[y++] = 68; turma[x].notas[y++] = 71; turma[x].notas[y++] = 72; turma[x].notas[y++] = 77; turma[x].notas[y++] = 77; y = 0;x++;

  turma[9].matricula =2015999000; turma[x].nome = "Marcos"; turma[x].notas[y++] = 77; turma[x].notas[y++] = 57; turma[x].notas[y++] = 60; turma[x].notas[y++] = 58; turma[x].notas[y++] = 58; y = 0;


  for(int z = 0; z < 10; z++){
    cout << turma[z].matricula << " ";
    cout << turma[z].nome<< " ";
    RSG = turma[z].calcularRSG();

    cout << std::setprecision(5) << RSG;
    cout << endl;
  }

  


  x = 0;
  cout << turma[x].calcularRSG() << endl;
  cout << turma[x++].calcularRSG() << endl;
  cout << turma[x++].calcularRSG() << endl;
  cout << turma[x++].calcularRSG() << endl;
  cout << turma[x++].calcularRSG() << endl;
  cout << turma[x++].calcularRSG() << endl;
  cout << turma[x++].calcularRSG() << endl;
  cout << turma[x++].calcularRSG() << endl;
  cout << turma[x++].calcularRSG() << endl;
  cout << turma[x++].calcularRSG() << endl;

  


  
 
  for (int indice = 0; indice < 10; ++indice) {
    int indiceMenor = indice;
    for (int indiceSeguinte = indice+1; indiceSeguinte < 10; ++indiceSeguinte) {
        if (turma[indiceSeguinte].calcularRSG() <= turma[indiceMenor].calcularRSG()) {
          if(turma[indiceSeguinte].calcularRSG() == turma[indiceMenor].calcularRSG()){
            if(turma[indiceSeguinte].matricula < turma[indiceMenor].matricula){
              turmaAuxiliar[indice] = turma[indice];
              turma[indice] = turma[indiceMenor];
              turma[indiceMenor] = turmaAuxiliar[indice];
            }
          }else{
            indiceMenor = indiceSeguinte;
          }
            
        }
    }
    turmaAuxiliar[indice] = turma[indice];
    turma[indice] = turma[indiceMenor];
    turma[indiceMenor] = turmaAuxiliar[indice];
  }


  
  for(int z = 9; z >= 0; z--){
    cout << turma[z].matricula << " ";
    cout << turma[z].nome<< " ";
    RSG = turma[z].calcularRSG();
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << RSG;
    cout << endl;
  }
  

  
  

  
  return 0;
}