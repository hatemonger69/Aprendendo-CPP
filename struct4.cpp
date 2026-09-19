#include <iostream>
#include <string>


struct person
{
    std::string nome;
    int vida=0;
    int mana=0;
    int nivel=0;
};


int main(){
        
    person npc[3];

    for(int i=0;i<3;i++){
        std::cout<<"nome do npc["<<i<<"]: ";
        std::getline(std::cin>>std::ws,npc[i].nome);
        npc[i].vida=i*1;
        npc[i].mana=i*1;
        npc[i].nivel=i*1;
        
    }
    std::cout<<"\n";
    for(int i=0;i<3;i++){
        std::cout<<"nome do npc["<<i<<"]: "<<npc[i].nome<<"\n";
        std::cout<<"vida: "<<npc[i].vida<<"\n";
        std::cout<<"mana: "<<npc[i].mana<<"\n";
        std::cout<<"nivel: "<<npc[i].nivel<<"\n";
        
        std::cout<<"\n";
    }



    return 0;
}