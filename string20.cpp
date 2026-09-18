#include <iostream>
#include <string>

int main(){

    std::string palavra;
    char car1, car2;
    std::cout<<"digite uma palavra: ";
    std::getline(std::cin>>std::ws,palavra);
    std::cout<<"digite um caractere: ";
    std::cin>>car1;
    std::cout<<"digite um caractere para substituir "<<car1<<": ";
    std::cin>>car2;
    int n=palavra.size();

    std::cout<<"palavra antes de ser alterada: "<<palavra<<"\n";
    for(int i=0;i<n;i++){
        if(palavra[i]==car1){
            palavra[i]=car2;
        }

    }
    std::cout<<"palavra depois de ser alterada: "<<palavra;
    return 0;
}