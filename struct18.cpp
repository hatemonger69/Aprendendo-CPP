#include <iostream>
#include <string>

struct person
{
    std::string nome;
    int vida=0;
    int mana=0;
    int nvl=0;
};


int main(){

    person npc[10],maiorvida,menormana;
    int vidamaiorq200=0,manamenorq50=0, mediamana=0,contador=0;
    bool dem1=false,dem2=false;

    for (int i=0;i<10;i++){
        std::cout << "nome do npc["<<i+1<<"]: ";
        std::getline(std::cin >> std::ws, npc[i].nome);
        std::cout << "vida: ";
        std::cin >> npc[i].vida;
        std::cout << "mana: ";
        std::cin >> npc[i].mana;
        std::cout << "nivel: ";
        std::cin >> npc[i].nvl;

        if (npc[i].vida>=200) {
            vidamaiorq200++;
            
            if (npc[i].nvl>=10) {
                if (dem2==false) {
                    menormana=npc[i];
                    dem2=true;
                }else if(menormana.mana>npc[i].mana){
                    menormana=npc[i];
                }
            }
        }

        if (npc[i].mana<50) {
            manamenorq50++;

            if (dem1==false) {
                maiorvida=npc[i];
                dem1=true;
            } else if(maiorvida.vida<npc[i].vida){
                maiorvida=npc[i];
            }
        }

        if (npc[i].nvl>=10) {
            mediamana+=npc[i].mana;
            contador++;
        }
    }
    if (dem1==true) {
        std::cout << "npc com maior vida entre aqueles com mana menor que 50: \n";
        std::cout << "nome: "<<maiorvida.nome<<"\n";
        std::cout << "vida: "<<maiorvida.vida<<"\n";
        std::cout << "mana: "<<maiorvida.mana<<"\n";
        std::cout << "nivel: "<<maiorvida.nvl<<"\n\n";
    }else{
        std::cout << "npc com maior vida nao existente.\n";
    }

    if (dem2==true) {
    std::cout << "npc com menor mana entre aqueles com vida maior ou igual a 200 e nivel maior ou igual a 10: \n";
    std::cout << "nome: "<<menormana.nome<<"\n";
    std::cout << "vida: "<<menormana.vida<<"\n";
    std::cout << "mana: "<<menormana.mana<<"\n";
    std::cout << "nivel: "<<menormana.nvl<<"\n\n";

    }else{
        std::cout << "npc com menor mana nao existente.\n\n";
    }

    if (contador!=0) {
        mediamana/=contador;
    std::cout << "media de mana dos NPCs com nivel maior ou igual a 10: "<<mediamana<<"\n\n";
    }else{
        std::cout << "media nao existente.\n\n";
    }

    std::cout << "npc's com vida maior ou igual a 200: "<<vidamaiorq200<<"\n";
    std::cout << "npc's com mana menor que 50: "<<manamenorq50<<"\n\n";
    return 0;
}