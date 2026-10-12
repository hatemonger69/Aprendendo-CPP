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
    npc person[8], maiorvida, maiormana;
    int maiorq10=0;
    float media=0;
    for (int i = 0; i < 8; i++)
    {
        std::cout << "digite o nome do npc["<<i+1<<"]: ";
        std::getline(std::cin >> std::ws,person[i].nome);
        std::cout << "vida do npc["<<i+1<<"]: ";
        std::cin >> person[i].vida;
        std::cout << "mana do npc["<<i+1<<"]: ";
        std::cin >> person[i].mana;
        std::cout << "nivel do npc["<<i+1<<"]: ";
        std::cin >> person[i].nivel;

        std::cout << "\n";

        if (i==0) {
            maiorvida=person[i];
            maiormana=person[i];
        }

        if (maiorvida.vida<person[i].vida) {
            maiorvida=person[i];
        }

        if (maiormana.mana<person[i].mana) {
            maiormana=person[i];
        }

        if (person[i].nivel>=10) {
            maiorq10++;
        }

        media+=person[i].nivel;
    }

media=media/8;
    
std::cout << "npc com maior vida:\n";
std::cout << "nome: "<<maiorvida.nome<<"\n";
std::cout << "vida: "<<maiorvida.vida<<"\n";
std::cout << "mana: "<<maiorvida.mana<<"\n";
std::cout << "nivel: "<<maiorvida.nivel<<"\n\n";
    
std::cout << "npc com maior mana:\n";
std::cout << "nome: "<<maiormana.nome<<"\n";
std::cout << "vida: "<<maiormana.vida<<"\n";
std::cout << "mana: "<<maiormana.mana<<"\n";
std::cout << "nivel: "<<maiormana.nivel<<"\n\n";

std::cout << "media de niveis: "<<media<<"\n";
std::cout << "npc's com nivel maior ou igual a 10: "<<maiorq10;

    return 0;
}