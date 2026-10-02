#include <iostream>
#include <string>

struct npc{
    std::string nome;
    int vida=100;
    int mana=100;
    int nivel=1;
};

int main(){
    npc personagems[8];
    int maiorq5=0,menorq5=0;

    for(int i=0;i<8;i++){

        std::cout<<"digite o nome do personagem["<<i+1<<"]: ";
        std::getline(std::cin>>std::ws,personagems[i].nome);

        personagems[i].nivel +=i;

        std::cout<<personagems[i].nivel<<"\n";

        if(personagems[i].nivel<5){
            menorq5++;
        }

        if (personagems[i].nivel>=5)
        {
            maiorq5++;
        }
        
    }

        std::cout<<"npc's com nivel menor que 5: "<<menorq5<<"\n";
        std::cout<<"npc's com nivel maior ou igual a 5: "<<maiorq5<<"\n";
    

    return 0;
}