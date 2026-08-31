#include <iostream>

int main(){
    int inimigo[5]={10,130,50,30,200};
    int dano;

    std::cout<<"digite o dano: ";
    std::cin>>dano;

    for(int i =0;i<5;i++){
        inimigo[i]-=dano;
        if(inimigo[i]<=0){
            std::cout<<"INIMIGO MORTO\n";
        }else{
            std::cout<<"vida do inimigo"<<i+1<<": "<<inimigo[i]<<"\n";
        }
    }


    return 0;
}