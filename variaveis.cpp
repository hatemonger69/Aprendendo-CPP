#include <iostream>
#include <string>
int main(){
    //declaraçao de variaveis
    int idade = 20;
    int vida=100;
    int mana=50;
    int nivel=1;
    bool vivo =true;
    std::string nome="israel";
    
    //amostra as informaçoes no terminal utilizando <<
    std::cout << "idade: " << idade << "\n";
    std::cout << "Nome: " << nome << "\n";
    std::cout << "vida: " << vida << "\n";
    std::cout << "mana: " << mana << "\n";
    std::cout << "estado:  " << vivo<<"\n"; 
    std::cout << "nivel:  " << nivel<<"\n"; 

    //modifica as variaveis
    nome="hate";
    idade=21;
    vida-=30;
    mana-=15;
    nivel++;

    std::cout <<"##############################\n";
    //exibe as variaveis modificadas
    std::cout << "idade: " << idade << "\n";
    std::cout << "Nome: " << nome << "\n";
    std::cout << "vida: " << vida<< "\n";
    std::cout << "mana: " << mana << "\n";
    std::cout << "estado:  " << vivo<<"\n"; 
    std::cout << "nivel:  " << nivel<<"\n"; 

    return 0;
}