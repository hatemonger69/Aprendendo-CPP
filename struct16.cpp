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
        person npc[10],maiorvida,menormana;
        int maiorq10=0, vidamenorq100=0, somadmana=0;
        bool veri1=false,veri2=false;

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
            //condiçao 1
            if (npc[i].nivel>=10) {
                maiorq10++;
                somadmana+=npc[i].mana;

                if (veri1==false){
                    maiorvida=npc[i];

                    veri1=true;
                } else if(maiorvida.vida<=npc[i].vida){
                    maiorvida=npc[i];
                }

            }
            //condiçao 2
            if (npc[i].vida<100){
                vidamenorq100++;
            }
            //condiçao 3
            if (npc[i].vida>=100) {
                if (veri2==false){
                    menormana=npc[i];
                    veri2=true;
                }else if (menormana.mana>=npc[i].mana) {
                    menormana=npc[i];
            }
            }
        }

        if(veri1==true){
            std::cout << "npc com maior vida com nivel>=10: \n";
            std::cout << "nome: "<<maiorvida.nome<<"\n";
            std::cout << "vida: "<<maiorvida.vida<<"\n";
            std::cout << "mana: "<<maiorvida.mana<<"\n";
            std::cout << "nivel: "<<maiorvida.nivel<<"\n\n";
        }else{
            std::cout << "Nenhum NPC atende à condição.\n";
        }

        if(veri2==true){
            std::cout << "npc com menor mana com vida>=100: \n";
            std::cout << "nome: "<<menormana.nome<<"\n";
            std::cout << "vida: "<<menormana.vida<<"\n";
            std::cout << "mana: "<<menormana.mana<<"\n";
            std::cout << "nivel: "<<menormana.nivel<<"\n\n";
        }else{
            std::cout << "Nenhum NPC atende à condição.\n";
        }
            std::cout << "npc's com nivel maior ou igual a 10: "<<maiorq10<<"\n";
            std::cout << "npc's com vida menor que 100: "<<vidamenorq100<<"\n";
            std::cout << "soma de mana dos npc's com nivel maior ou igual a 10: "<<somadmana<<"\n";
        

    return 0;
}