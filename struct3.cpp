#include <iostream>
#include <string>

struct personagem{
    std::string nome; 
    int vida=0;
    int mana=0;
    int nivel=0;
    int forca=0;
    int defesa=0;
};



int main(){
    personagem prota,npc1,npc2, maior;
    

    std::cout<<"nome do personagem: ";
    std::getline(std::cin>>std::ws,prota.nome);
    prota.vida=200;
    prota.nivel=15;
    prota.mana=100;
    prota.forca=50;
    prota.defesa=100;
    std::cout<<"defesa de "<<prota.nome<<": "<<prota.defesa<<"\n";

    std::cout<<"\n";

    std::cout<<"nome do personagem: ";
    std::getline(std::cin>>std::ws,npc1.nome);
    npc1.vida=200;
    npc1.nivel=15;
    npc1.mana=100;
    npc1.forca=50;
    npc1.defesa=150;
    std::cout<<"defesa de "<<npc1.nome<<": "<<npc1.defesa<<"\n";

    std::cout<<"\n";

    std::cout<<"nome do personagem: ";
    std::getline(std::cin>>std::ws,npc2.nome);
    npc2.vida=200;
    npc2.nivel=15;
    npc2.mana=100;
    npc2.forca=50;
    npc2.defesa=200;
    std::cout<<"defesa de "<<npc2.nome<<": "<<npc2.defesa<<"\n";

    std::cout<<"\n";

    if(maior.defesa<prota.defesa){
        maior=prota;
    }

    if(maior.defesa<npc2.defesa){
        maior=npc2;
    }

    if(maior.defesa<npc1.defesa){
        maior=npc1;
        
    }
    
    std::cout<<"maior defesa: "<<maior.nome;

    return 0;
}