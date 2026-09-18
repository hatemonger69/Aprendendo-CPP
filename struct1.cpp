#include <iostream>
#include <string>

struct personagem{
    std::string nome; 
    int vida=0;
    int mana=0;
    int nivel=0;
};


int main(){
    personagem prota;
    std::cout<<"nome do personagem: ";
    std::getline(std::cin>>std::ws,prota.nome);
    prota.vida=200;
    prota.nivel=15;
    prota.mana=100;

    std::cout<<"nome do personagem: "<<prota.nome<<"\n";
    std::cout<<"vida do personagem: "<<prota.vida<<"\n";
    std::cout<<"mana do personagem: "<<prota.mana<<"\n";
    std::cout<<"nivel do personagem: "<<prota.nivel<<"\n";
    return 0;
}