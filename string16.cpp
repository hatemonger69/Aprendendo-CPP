#include <iostream>
#include <string>

int main(){

    std::string palavra;
    std::cout<<"digite uma palavra: ";
    std::getline(std::cin>>std::ws,palavra);
    int n=palavra.size();
    int contagem=0;
    for(int i=0;i<n;i++){
        if(palavra[i]>='0'&&palavra[i]<='9'){
            contagem++;
        }
    }
    std::cout<<"numeros: "<<contagem;

    return 0;
}