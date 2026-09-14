#include <iostream>
#include <string>

int main(){
    std::string nome;
    
    std::cout<<"nome: ";
    std::getline(std::cin>>std::ws,nome);
    std::cout<<"nome: "<< nome<<"\n";
    nome[0]='x';
    std::cout<<"nome manipulado: "<< nome;

    return 0;
}