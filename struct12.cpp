#include <iostream>
#include <string>

struct npc
{
    std::string nome;
    int vida=0;
    int mana=0;
    int nivel=0;
};

int main(){
    npc person[10], maiorvida;
    int acimad10=0,vidamenorq100=0;
    float mediadmana=0;

    for (int i = 0; i < 10; i++)
    {
        std::cout << "digite o nome do npc["<<i+1<<"]: ";
        std::getline(std::cin >> std::ws,person[i].nome);
        std::cout << "quantidade de vida: ";
        std::cin >> person[i].vida;
        std::cout << "quantidade de mana: ";
        std::cin >> person[i].mana;
        std::cout << "nivel: ";
        std::cin >> person[i].nivel;

        if (i==0)
        {
            maiorvida=person[i];
        }

        if (maiorvida.vida<person[i].vida)
        {
            maiorvida=person[i];
        }

        if (person[i].nivel>=10)
        {
            acimad10++;
        }

        if (person[i].vida<100)
        {
            vidamenorq100++;
        }
        mediadmana+=person[i].mana;
        std::cout << "\n";
    }

    mediadmana/=10;
    
std::cout << "npc com maior vida:\n";
std::cout << "nome: "<<maiorvida.nome<<"\n";
std::cout << "vida: "<<maiorvida.vida<<"\n";
std::cout << "mana: "<<maiorvida.mana<<"\n";
std::cout << "nivel: "<<maiorvida.nivel<<"\n\n";

std::cout << "npc's com nivel >= 10: "<<acimad10<<"\n";
std::cout << "npc's com vida < 100: "<<vidamenorq100<<"\n";
std::cout << "media de mana dos npc's: "<<mediadmana<<"\n";

    return 0;
}