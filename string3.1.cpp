#include <iostream>
#include <string>

int main(){
    std::string nome;
    std::string classe;
    std::cout<<"digite seu nome: \n";
    std::getline(std::cin>>std::ws,nome);
    std::cout<<"digite sua clase: \n";
    std::getline(std::cin>>std::ws,classe);

    std::cout<<"nome: "<<nome<<"\n";
    std::cout<<"classe: "<<classe<<"\n";

    return 0;
}