#ifndef TEMPO_H
#define TEMPO_H

#include <string>

class Astronaut {
    private:
        std::string name, cpf, gender;
        int age, medals, status;

    public:
        Astronaut(const std::string& _name, const std::string& _cpf, const std::string& _gender,
              int _age, int _medals = 0, int _status = 1);

        void saveAstronautaData(const Astronaut& astronaut);

};

#endif
