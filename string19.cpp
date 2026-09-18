#include <iostream>
#include <string>

int main(){

    std::string palavra;
    char car;
    std::cout<<"digite uma palavra: ";
    std::getline(std::cin>>std::ws,palavra);
    std::cout<<"digite um caractere: ";
    std::cin>>car;
    int n=palavra.size();
    int c1=0;
    for(int i=0;i<n;i++){
        if(palavra[i]==car){
            c1++;
        }

    }
    std::cout<<"caracteres "<<car<<": "<< c1<<"\n";
    return 0;
}