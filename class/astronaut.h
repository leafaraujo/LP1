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
        const std::string& getName() const;
        const std::string& getCPF() const;
        const std::string& getGender() const;
        const int getAge() const;
        const int getMedals() const;
        const int getStatus() const;
        void saveAstronautData(const Astronaut& astronaut);
};

#endif
