#include <iostream>
#include <string>

int main(){
    std::string nome;
    
    std::cout<<"nome: ";
    std::getline(std::cin>>std::ws,nome);
    
    std::cout<<"esta palavra possui "<< nome.size()<< " letras";

    return 0;
}