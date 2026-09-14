#include <iostream>
#include <string>

int main(){
    std::string nome;
    
    std::cout<<"nome: ";
    std::getline(std::cin>>std::ws,nome);
    
    std::cout<<"ultimo caractere de seu nome: "<< nome[nome.size()-1];

    return 0;
}