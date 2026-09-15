#include <iostream>
#include <string>

int main(){

    std::string palavra;

    std::cout<<"escreva uma palavra: ";
    std::getline(std::cin>>std::ws,palavra);

    int n=palavra.size();

    std::cout<<"palavra normal: "<<palavra<<"\n";
    for(int i=0;i<n;i++){
        if(palavra[i]=='a'){
            palavra[i]='A';
        }

    }
    std::cout<<"palavra modificada: "<<palavra;


    return 0;
}