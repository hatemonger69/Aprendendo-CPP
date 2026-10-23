#include <iostream>
#include <string>

struct person{
    std::string nome;
    int vida=0;
    int mana=0;
    int nvl=0;
};

int main(){
    person npc[10],maiormana,menorvida;
    int nvlmenorq10=0,nvlmaiorq10menorq20=0,nvlmaiorq20=0,mediadevida=0,contador=0;
    bool ref1=true,ref2=true;
    for (int i = 0; i < 10; i++){
        std::cout << "npc["<<i+1<<"]\n";
        std::cout << "nome: ";
        std::getline(std::cin >> std::ws, npc[i].nome);
        std::cout << "vida: ";
        std::cin >> npc[i].vida;
        std::cout << "mana: ";
        std::cin >> npc[i].mana;
        std::cout << "nivel; ";
        std::cin >> npc[i].nvl;
        std::cout << "\n";
        //primeira referencia
        if (npc[i].nvl<10) {
            nvlmenorq10++;
            if (ref2==true) {
                menorvida=npc[i];
                ref2=false;
            }else if (menorvida.vida>npc[i].vida) {
                menorvida=npc[i];
            }
        }
        //segunda referencia
        if (npc[i].nvl>=10 && npc[i].nvl<=20){
          nvlmaiorq10menorq20++;  
        }
        //terceira referencia
        if (npc[i].nvl>20) {
           nvlmaiorq20++; 
        }
        //quarta referencia
        if (npc[i].nvl>=10) {
            mediadevida+=npc[i].vida;
            contador++;
        }
        //quinta referencia
        if (npc[i].nvl>20){
            if (ref1==true) {
                maiormana=npc[i];
                ref1=false;
            }else if(maiormana.mana<npc[i].mana){
                maiormana=npc[i];
            }

        }
        
        
    }

    if (contador!=0)
    {
        mediadevida/=contador;
    }
    
    


    if(ref1==false){
        std::cout << "npc com maior mana acima do nivel 20:\n";
        std::cout << "nome: "<<maiormana.nome<<"\n";
        std::cout << "vida: "<<maiormana.vida<<"\n";
        std::cout << "mana: "<<maiormana.mana<<"\n";
        std::cout << "nivel: "<<maiormana.nvl<<"\n\n";
    }else if(ref1==true){
        std::cout << "npc com maior mana acima do nivel 20 nao encontrado\n\n";
    }

    if(ref2==false){
        std::cout << "npc com menor vida com nivel menor que 10:\n";
        std::cout << "nome: "<<menorvida.nome<<"\n";
        std::cout << "vida: "<<menorvida.vida<<"\n";
        std::cout << "mana: "<<menorvida.mana<<"\n";
        std::cout << "nivel: "<<menorvida.nvl<<"\n\n";
    }else if(ref2==true){
        std::cout << "npc com menor vida com nivel menor que 10 nao encontrado:\n\n";
    }

    std::cout << "npc's com nivel menor que 10: "<<nvlmenorq10<<"\n";
    std::cout << "npc's com nivel maior ou igual a 10 e menor ou igual a 20: "<<nvlmaiorq10menorq20<<"\n";
    std::cout << "npc's com nivel maior que 20: "<<nvlmaiorq20<<"\n";

    if(contador!=0){
    std::cout << "media de vida dos npc's com nivel maior ou igual a 10: "<<mediadevida;
    }else{std::cout << "nao foi possivel fazer a media\n";}
    return 0;
}