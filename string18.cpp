#include <iostream>
#include <string>

int main(){

    std::string palavra;
    std::cout<<"digite uma palavra: ";
    std::getline(std::cin>>std::ws,palavra);
    int n=palavra.size();
    int c1=0;
    for(int i=0;i<n;i++){
        if(palavra[i]==' '){
            c1++;
        }

    }
    std::cout<<"espaços: "<<c1<<"\n";
    return 0;
}