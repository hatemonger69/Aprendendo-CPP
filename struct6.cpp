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
        int somavida=0, somamana=0, mediavida=0,mediamana=0;

        for(int i=0;i<5;i++){
            std::cout<<"digite o nome do personagem["<<i+1<<"]: ";
            std::getline(std::cin>>std::ws,personagems[i].nome);
            personagems[i].vida*=i+1;
            personagems[i].mana*=i+1;
            //personagems[i].nivel*=i+1;

            somavida+=personagems[i].vida;
            somamana+=personagems[i].mana;

            //std::cout<<"vida: "<<mediav<<" mana: "<<mediam<<"\n";
            if(i==4){
                mediavida=somavida/5;
                mediamana=somamana/5;
            }
        }

    std::cout<<"media de vida: "<<mediavida<<"\n";
    std::cout<<"media de mana: "<<mediamana;
    return 0;
}