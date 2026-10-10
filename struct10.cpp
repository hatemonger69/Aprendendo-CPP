#include <iostream>
#include <string>

struct npc{
std::string nome;
int vida=0;
int mana=0;
int nivel=0;
};

int main(){
        
npc persona[7], maiorvida,menorvida;

for(int i=0;i<7;i++){
    std::cout<<"nome do personagem["<<i+1<<"]: ";
    std::getline(std::cin>>std::ws,persona[i].nome);
    std::cout<<"vida: ";
    std::cin>>persona[i].vida;
    std::cout<<"mana: ";
    std::cin>>persona[i].mana;
    std::cout<<"nivel: ";
    std::cin>>persona[i].nivel;
    std::cout<<"\n";

    if(i==0){
        maiorvida=persona[i];
        menorvida=persona[i];
    }

    if(maiorvida.vida<persona[i].vida){
        maiorvida=persona[i];
    }

    if(menorvida.vida>persona[i].vida){
        menorvida=persona[i];
    }
}
std::cout<<"npc com maior vida:\n";
std::cout<<"nome: "<<maiorvida.nome<<"\n";
std::cout<<"vida: "<<maiorvida.vida<<"\n";
std::cout<<"mana: "<<maiorvida.mana<<"\n";
std::cout<<"nivel: "<<maiorvida.nivel<<"\n\n";

std::cout<<"npc com menor vida:\n";
std::cout<<"nome: "<<menorvida.nome<<"\n";
std::cout<<"vida: "<<menorvida.vida<<"\n";
std::cout<<"mana: "<<menorvida.mana<<"\n";
std::cout<<"nivel: "<<menorvida.nivel<<"\n\n";

    return 0;
}