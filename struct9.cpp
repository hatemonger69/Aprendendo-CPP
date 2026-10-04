#include <iostream>
#include <string>

struct npc{
    std::string nome;
    int vida=0;
    int mana=0;
    int nivel=0;
};

int main(){
        npc persona[6], maiorvida;

        for(int i=0;i<6;i++){
            std::cout<<"digite o nome do npc["<<i+1<<"]: ";
            std::getline(std::cin>>std::ws,persona[i].nome);
            std::cout<<"digite a vida do npc["<<i+1<<"]: ";
            std::cin>>persona[i].vida;
            std::cout<<"digite a mana do npc["<<i+1<<"]: ";
            std::cin>>persona[i].mana;
            std::cout<<"digite o nivel do npc["<<i+1<<"]: ";
            std::cin>>persona[i].nivel;

            if(maiorvida.vida<persona[i].vida){
                maiorvida=persona[i];
            }
        }

        std::cout<<"npc com maior vida: \n";
        std::cout<<"nome: "<<maiorvida.nome<<"\n";
        std::cout<<"vida: "<<maiorvida.vida<<"\n";
        std::cout<<"mana: "<<maiorvida.mana<<"\n";
        std::cout<<"nivel: "<<maiorvida.nivel<<"\n";
    return 0;
}