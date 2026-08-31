#include <iostream>

int main(){
    int vida[5]={100,100,100,100,100};
    int dano;

    std::cout<<"digite o dano do ataque: ";
    std::cin>> dano;
    
    for(int i=0;i<5;i++){
        vida[i]-=dano;
        std::cout<<"vida do inimigo "<<i+1<<": "<<vida[i]<<"\n";
        
    }

    return 0;
}