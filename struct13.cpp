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
    person npc[10], maiornivel, menormana;
    int contadordenpc=0, somadevida=0;

    for (int i = 0; i < 10; i++)
    {   
        std::cout << "digite o nome do npc["<<i+1<<"]: ";
        std::getline(std::cin >> std::ws, npc[i].nome);
        std::cout << "digite a qauntidade de vida: ";
        std::cin >> npc[i].vida;
        std::cout << "digite a quantidade de mana: ";
        std::cin >> npc[i].mana;
        std::cout << "digite o nivel: ";
        std::cin >> npc[i].nivel;

        if (i==0) {
            maiornivel=npc[i];
            menormana=npc[i];
        }

        if (maiornivel.nivel<npc[i].nivel) {
            maiornivel=npc[i];
        }

        if (menormana.mana>npc[i].mana) {
            menormana=npc[i];
        }

        if (npc[i].vida >= 200 && npc[i].nivel>=10) {
            contadordenpc++;
        }

        somadevida+=npc[i].vida;
    }
    
    std::cout << "npc com maior nivel:\n";
    std::cout << "nome: "<<maiornivel.nome<<"\n";
    std::cout << "vida: "<<maiornivel.vida<<"\n";
    std::cout << "mana: "<<maiornivel.mana<<"\n";
    std::cout << "nivel: "<<maiornivel.nivel<<"\n\n";

    std::cout << "npc com menor mana: \n";
    std::cout << "nome: "<<menormana.nome<<"\n";
    std::cout << "vida: "<<menormana.vida<<"\n";
    std::cout << "mana: "<<menormana.mana<<"\n";
    std::cout << "nivel: "<<menormana.nivel<<"\n\n";

    std::cout << "npc's que possuem vida >=200 e nivel>=10: "<<contadordenpc<<"\n";
    std::cout << "soma das vidas de todos os npc's: "<<somadevida;
        
    return 0;
}