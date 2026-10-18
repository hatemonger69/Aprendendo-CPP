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
        person npc[10], maiormana;
        int menorq10=0, maiorq10=0,somadevidanvlm10=0, somadevidanvl10=0;
        
        for (int i = 0; i < 10; i++)
        {
            std::cout << "digite o nome do npc["<<i+1<<"]: ";
            std::getline(std::cin >> std::ws, npc[i].nome);
            std::cout << "vida: ";
            std::cin >> npc[i].vida;
            std::cout << "mana: ";
            std::cin >> npc[i].mana;
            std::cout << "nivel: ";
            std::cin >> npc[i].nivel;

            std::cout << "\n";

            if (i==0)
            {
                maiormana=npc[i];
            }
            
            if (maiormana.mana<npc[i].mana)
            {
                maiormana=npc[i];
            }
            

            if (npc[i].nivel<10)
            {
                menorq10++;
                somadevidanvlm10+=npc[i].vida;
            }
            
            if (npc[i].nivel>=10)
            {
                maiorq10++;
                somadevidanvl10+=npc[i].vida;
            }
        }
    std::cout << "npc's com nivel menor que 10: "<<menorq10<<"\n";
    std::cout << "npc's com nivel maior ou igual a 10: "<<maiorq10<<"\n\n";

    std::cout << "soma de vida dos npc's com nivel menor que 10: "<<somadevidanvlm10<<"\n";
    std::cout << "soma da vida dos npc's com nivel maior ou igual a 10: "<<somadevidanvl10<<"\n\n";

    std::cout << "npc com maior mana:\n";
    std::cout << "nome: "<<maiormana.nome<<"\n";
    std::cout << "vida: "<<maiormana.vida<<"\n";
    std::cout << "mana: "<<maiormana.mana<<"\n";
    std::cout << "nivel: "<<maiormana.nivel<<"\n";
    return 0;
}