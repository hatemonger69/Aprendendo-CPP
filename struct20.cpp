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
        person npc[10];
        std::string pesquisa;
        bool controle=false;

        for (int i = 0; i < 10; i++){
            std::cout << "digite as informaçoes do npc["<<i+1<<"]: \n";
            std::cout << "nome: ";
            std::getline(std::cin >> std::ws, npc[i].nome);
            std::cout << "vida: ";
            std::cin >> npc[i].vida;
            std::cout << "mana: ";
            std::cin >> npc[i].mana;
            std::cout << "nivel: ";
            std::cin >> npc[i].nivel;

            std::cout << "\n";
        }

        std::cout << "digite o nome do npc que voce deseja encontrar: ";
        std::getline(std::cin >> std::ws, pesquisa);


        for (int i = 0; i < 10; i++){

            if (pesquisa==npc[i].nome) {
                std::cout << "npc "<<pesquisa<<" encontrado:\n";
                std::cout << "nome: "<<npc[i].nome<<"\n";
                std::cout << "vida: "<<npc[i].vida<<"\n";
                std::cout << "mana: "<<npc[i].mana<<"\n";
                std::cout << "nivel: "<<npc[i].nivel<<"\n\n";

                if (npc[i].vida>=200) {
                    std::cout << "possui vida maior ou igual 200.\n";
                } else{
                    std::cout << "possui vida menor que 200.\n";
                }

                if (npc[i].mana<50) {
                    std::cout << "possui mana menor que 50.\n";
                } else{
                    std::cout << "possui mana maior ou igual a 50.\n";
                }

                if (npc[i].nivel>=10) {
                    std::cout << "possui nivel maior ou igual a 10.\n";
                } else{
                    std::cout << "possui nivel menor que 10.\n";
                }
                controle=true;

                break;
            }
        }

        if (controle==false) {
            std::cout << "npc nao encontrado.\n";
        }
        
        
    return 0;
}