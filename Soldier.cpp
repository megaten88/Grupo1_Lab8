#include "Soldier.h"

Soldier::Soldier(){

}

Soldier::~Soldier(){
    std::cout << "adios soldado" << '\n';
}

Soldier::Soldier(string nombre, int edad, string ciudad ){
    this->name = nombre;
    this->age = edad;
    this->city = ciudad;
}

void Soldier::setName(string nombre){
    this->name = nombre;
}

string Soldier::getName(){
    return this->name;
}

void Soldier::setAge(int edad){
    this->age = edad;
}

int Soldier::getAge(){
    return this->age;
}

void Soldier::setCity(string nombre){
    this->city = nombre;
}

string Soldier::getCity(){
    return this->city;
}

double Soldier::efficiencyAttack(){
    return 0.0;
}

double Soldier::efficiencyDefense(){
    return 0.0;
}

string Soldier::toString(){

    return "spoof";
};
