#include <iostream>
#include <string>

int main(){
    std::string palavra;
    
    std::cout<<"digite uma palavra: ";
    std::getline(std::cin>>std::ws,palavra);
    std::cout<<"quantidades de caracteres: "<<palavra.size()<<"\n";
    std::cout<<"primeiro caractere: "<<palavra[0]<<"\n";
    std::cout<<"ultimo caractere: "<<palavra[palavra.size()-1]<<"\n";
    std::cout<<"palavra como foi escrita: "<<palavra<<"\n";
    palavra[0]='x';
    std::cout<<"palavra modificada: "<<palavra<<"\n";
    

    return 0;
}