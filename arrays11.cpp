#include <iostream>

int main(){
    int inimigos[5]={50,40,0,0,30};
    int contador=0;
    for(int i=0;i<5;i++){
        if(inimigos[i]>0){
            std::cout<<"inimigo "<<i+1<<" vivo!!\n";
            contador++;
        }
    }
    std::cout<<contador<< " inimigos vivos!\n";
    return 0;
}