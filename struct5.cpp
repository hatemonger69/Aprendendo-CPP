#include <iostream>
#include <string>

struct npc{
    std::string nome;
    int vida=200;
    int mana=100;
    int nivel=1;
};

int main(){
        npc personagems[5];
        npc maior;

        for(int i=0;i<5;i++){
            std::cout<<"digite o nome do personagem["<<i+1<<"]: ";
            std::getline(std::cin>>std::ws,personagems[i].nome);
            personagems[i].vida*=i;
            personagems[i].mana*=i;
            personagems[i].nivel*=i;

            if(i==0){
                maior=personagems[i];
            }

            if(maior.vida<=personagems[i].vida){
                maior=personagems[i];
            }
        }

    std::cout<<"personagem com maior vida: "<<maior.nome<<"\n";
    std::cout<<"vida: "<<maior.vida;
    return 0;
}