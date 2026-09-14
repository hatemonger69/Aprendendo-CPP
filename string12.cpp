#include <iostream>
#include <string>

int main(){
    std::string palavra;
    char car;
    int num=0;
    bool n=false;

    std::cout<<"digite uma palavra: ";
    std::getline(std::cin>>std::ws,palavra);

    num=palavra.size();

    std::cout<<"digite uma letra para buscar: ";
    std::cin>>car;

    for(int i=0;i<num;i++){
        if(palavra[i]==car){
            n=true;
            break;
        } 
    }

    if(n){
        std::cout<<"a letra existe na palavra";
    }else{
        std::cout<<"a letra nao existe na palavra";
    }
}