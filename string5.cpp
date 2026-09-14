#include <iostream>
#include <string>

int main(){
    std::string nome;

    std::cout<<"seu nome: ";
    std::getline(std::cin>>std::ws,nome);
    std::cout<<"primeiro caractere de "<<nome<<": "<<nome[0]; 

    return 0;
}