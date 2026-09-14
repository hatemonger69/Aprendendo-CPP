#include <iostream>
#include <string>

int main(){
    std::string palavra;
    int num=0;

    std::cout<<"digite uma palavra: ";
    std::getline(std::cin>>std::ws,palavra);
    int n=palavra.size();

        for(int i = 0;i<n; i++){
            if(palavra[i]=='a'){
                num++;
        }
    }
    std::cout<<"numero de vezes que o carctere 'a' aparaceu em '"<<palavra<<"': "<<num;

    return 0;
}