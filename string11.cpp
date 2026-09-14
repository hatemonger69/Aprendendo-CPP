#include <iostream>
#include <string>

int main(){
    std::string palavra;
    int num=0;

    std::cout<<"digite uma palavra: ";
    std::getline(std::cin>>std::ws,palavra);
    int n=palavra.size();

        for(int i = 0;i<n; i++){
            if(palavra[i]=='a'||palavra[i]=='e'||palavra[i]=='i'||palavra[i]=='o'||palavra[i]=='u'){
                num++;
        }
    }
    std::cout<<"quantidades de vogais: "<<num;

    return 0;
}