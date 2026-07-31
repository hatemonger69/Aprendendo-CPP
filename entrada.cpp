#include <iostream>
#include <string>

int main(){
    std::string nome;
    std::string classe;
    int idade;
    int nivel;
    int mana;

    std::cout<<"criacao de personagem\n";
    std::cout<<"nome: ";
    std::getline(std::cin >> std::ws, nome);
    std::cout<<"classe: ";
    std::getline(std::cin >> std::ws, classe);
    std::cout<<"idade: ";
    std::cin>>idade;
    std::cout<<"nivel: ";
    std::cin>> nivel;
    std::cout<<"mana: ";
    std::cin>> mana;

    std::cout<<"ficha de personagem\n";
    std::cout<<"nome: "<< nome <<"\n";
    std::cout<<"classe: "<< classe <<"\n";
    std::cout<<"idade: "<< idade <<"\n";
    std::cout<<"nivel: "<< nivel <<"\n";
    std::cout<<"mana: "<< mana <<"\n";
    //std::cout<<"nome: " <<nome;
    

    return 0;
}