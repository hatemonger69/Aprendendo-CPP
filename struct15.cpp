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
        int contador=0;
        bool verificador=true;

        for (int i = 0; i < 10; i++){
            std::cout << "digite o nome do npc["<<i+1<<"]: ";
            std::getline(std::cin >> std::ws, npc[i].nome);
            std::cout << "vida: ";
            std::cin >> npc[i].vida;
            std::cout << "mana: ";
            std::cin >> npc[i].mana;
            std::cout << "nivel: ";
            std::cin >> npc[i].nivel;

            std::cout << "\n";

            if (npc[i].nivel>=10 && npc[i].vida>=200) {
                contador++;

                if (verificador==true)
                {
                    maiormana=npc[i];
                    verificador=false;
                } else if (maiormana.mana<=npc[i].mana){
                    maiormana=npc[i];
                }   
            }
        }
        
        std::cout << "npc's que atendem os requisitos: "<<contador<<"\n\n";

        if (contador!=0)
        {
            std::cout << "npc com maior mana:\n";
            std::cout << "nome: "<<maiormana.nome<<"\n";
            std::cout << "vida: "<<maiormana.vida<<"\n";
            std::cout << "mana: "<<maiormana.mana<<"\n";
            std::cout << "nivel: "<<maiormana.nivel<<"\n";
        } else {
            std::cout << "nenhum npc atende as condicoes";
        }
        

        
    return 0;
}