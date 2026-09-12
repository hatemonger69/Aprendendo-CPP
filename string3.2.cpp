#include <iostream>
#include <string>

int main(){
std::string nome;
std::string sobrenome;
std::cout<<"digite seu nome: ";
std::getline(std::cin>>std::ws,nome);
std::cout<<"digite seu sobre-nome: ";
std::getline(std::cin>>std::ws,sobrenome);

std::cout<<"nome completo: "<<nome +" "+ sobrenome;

}