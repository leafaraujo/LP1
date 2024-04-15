#include "astronaut.h"
#include <fstream>
#include <iostream>

Astronaut();

void saveAstronautaData(const Astronaut& astronaut){

    std::ofstream archive;  

    archive.open("Astronauts.txt", std::ios::app);
    if(!archive.is_open()){
        std::cerr << "Erro ao abrir o arquivo Astronauts.txt para escrita.\n";
        return;
    }


    archive.close();
} 
