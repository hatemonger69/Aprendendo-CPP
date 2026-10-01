#include <iostream>
#include <string>

struct npc{
    std::string nome;
    int vida=100;
    int mana=100;
    int nivel=1;
};

int main(){
    npc personagems[5], maior, menor;

    for(int i=0;i<5;i++){
        std::cout<<"digite o nome do personagem["<<i+1<<"]: ";
        std::getline(std::cin>>std::ws,personagems[i].nome);
        personagems[i].nivel*=i+1;

        if(i==0){
            maior=personagems[i];
            menor=personagems[i];
        }

       // std::cout<<personagems[i].nivel;

        if (maior.nivel<personagems[i].nivel)
        {
            maior=personagems[i];
        }

        if (menor.nivel>personagems[i].nivel)
        {
            menor=personagems[i];
        }
        
    }

    std::cout<<"npc com maior nivel: "<<maior.nome<<"\n";
    std::cout<<"nivel: "<<maior.nivel<<"\n";
    std::cout<<"\n";
    std::cout<<"npc com menor nivel: "<<menor.nome<<"\n";
    std::cout<<"nivel: "<<menor.nivel<<"\n";

    return 0;
}