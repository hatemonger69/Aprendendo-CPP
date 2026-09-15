#include <iostream>
#include <string>

int main(){

    std::string palavra;
    int n1=0, n2=0;

    std::cout<<"escreva uma palavra: ";
    std::getline(std::cin>>std::ws,palavra);

    int n=palavra.size();

    for(int i=0;i<n;i++){
        if(palavra[i] >= 'a' && palavra[i] <= 'z'){
            n1++;
        } else if(palavra[i] >= 'A' && palavra[i] <= 'Z'){
            n2++;
        }
    }
    
    std::cout<<"minuscula: "<< n1<<"\n";
    std::cout<<"maiscula: "<< n2;

    return 0;
}