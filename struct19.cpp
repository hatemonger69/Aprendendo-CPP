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
        
    person npc[10],maiorvida,menorvida,maiormana;
    int abaixo10=0,entre1020=0,acima20=0,contador=0;
    float mediamana=0;
    bool con1=true,con2=true, con3=true;

    for (int i = 0; i < 10; i++)
    {
        std::cout << "digite os dados do npc["<<i+1<<"]: \n";
        std::cout << "nome: ";
        std::getline(std::cin >> std::ws, npc[i].nome);
        std::cout << "vida: ";
        std::cin >> npc[i].vida;
        std::cout << "mana: ";
        std::cin >> npc[i].mana;
        std::cout << "nivel: ";
        std::cin >> npc[i].nvl;
        std::cout << "\n";

        if (npc[i].nvl<10) {
            abaixo10++;

            if (con2==true) {
                menorvida=npc[i];
                con2=false;
            }else if(menorvida.vida>npc[i].vida){
                menorvida=npc[i];
            }

        }

        if (npc[i].nvl>=10 && npc[i].nvl<=20) {
            entre1020++;
        }

        if (npc[i].nvl>20) {
            acima20++;

            mediamana+=npc[i].mana;
            contador++;
        }

        if (npc[i].nvl>=10) {
            if (con1==true) {
                maiorvida=npc[i];
                con1=false;
            }else if(maiorvida.vida<npc[i].vida){
                maiorvida=npc[i];
            }
        }

        if (npc[i].vida>=200) {
            if (con3==true) {
                maiormana=npc[i];
                con3=false;
            }else if(maiormana.mana<npc[i].mana){
                maiormana=npc[i];
            }
        }
    }

    if (con1==false) {
        std::cout << "NPC com maior vida entre aqueles com nivel maior ou igual a 10:\n";
        std::cout << "nome: "<<maiorvida.nome<<"\n";
        std::cout << "vida: "<<maiorvida.vida<<"\n";
        std::cout << "mana: "<<maiorvida.mana<<"\n";
        std::cout << "nivel: "<<maiorvida.nvl<<"\n\n";

    }else{
        std::cout << "nenhum NPC com a maior vida entre aqueles com nivel maior ou igual a 10 foi encontrado\n\n";
    }

    if (con2==false) {
        std::cout << "NPC com menor vida entre aqueles com nível abaixo de 10:\n";
        std::cout << "nome: "<<menorvida.nome<<"\n";
        std::cout << "vida: "<<menorvida.vida<<"\n";
        std::cout << "mana: "<<menorvida.mana<<"\n";
        std::cout << "nivel: "<<menorvida.nvl<<"\n\n";

    }else{
        std::cout << "nenhum NPC com menor vida entre aqueles com nível abaixo de 10 foi encontrado\n\n";
    }

    if (con3==false) {
        std::cout << "NPC com maior mana entre aqueles com vida maior ou igual a 200:\n";
        std::cout << "nome: "<<maiormana.nome<<"\n";
        std::cout << "vida: "<<maiormana.vida<<"\n";
        std::cout << "mana: "<<maiormana.mana<<"\n";
        std::cout << "nivel: "<<maiormana.nvl<<"\n\n";

    }else{
        std::cout << "nenhum NPC com maior mana entre aqueles com vida maior ou igual a 200 foi encontrado\n\n";
    }

    if (contador!=0) {
        mediamana/=contador;
        std::cout << "média de mana dos NPCs com nível acima de 20: "<<mediamana<<"\n\n";
    } else {
        std::cout << "sem npc's para contabilizar a media de mana.\n\n";
    }

    if (abaixo10!=0) {
        std::cout << "npc's com Nível abaixo de 10: "<<abaixo10<<"\n";
    }else{
        std::cout << "nenhum npc com nivel abaixo de 10 foi encontrado.\n";
    }

    if (entre1020!=0) {
        std::cout << "npc's com Nível igual ou maior que 10 e igual ou menor que 20: "<<entre1020<<"\n";
    }else{
        std::cout << "nenhum npc com nivel entre 10 e 20 foi encontrado.\n";
    }

    if (acima20!=0) {
        std::cout << "npc's com Nível acima de 20: "<<acima20<<"\n";
    }else{
        std::cout << "nenhum npc com nivel acima de 20 foi encontrado.\n";
    }
    return 0;
}