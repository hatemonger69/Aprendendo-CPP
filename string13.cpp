#include <iostream>
#include <string>
int main(){
    std::string palavra;
    char x='x';
    

    std::cout<<"digite uma palavra: ";
    std::getline(std::cin>>std::ws,palavra);
    
    std::cout<<"palavra normal: "<<palavra<<"\n";

    int n= palavra.size();

    for(int i=0;i<n;i++){
        if(palavra[i]=='a'){
            palavra[i]=x;
        }
    }
    std::cout<<"palavra modificada: "<< palavra;

    return 0;
}