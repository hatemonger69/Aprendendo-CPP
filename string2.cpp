#include <iostream>
#include <string>

int main(){
    std::string nome;
    std::cout<<"digite seu nome: \n";
    std::getline(std::cin>>std::ws,nome);
    std::cout<<nome;

    return 0;
}