#include <iostream>
#include <string>

int main(){
    std::string palavra;
    std::cout<<"digite uma palavra: ";
    std::getline(std::cin>>std::ws,palavra);
    int n=palavra.size();
    for(int i=0;i<n;i++){
        std::cout<<palavra[i]<<"\n";
    }
    

    return 0;
}