#include <iostream>

int main(){
    int dano[5]={25,70,23,200,80};
    int menor=dano[0];
    int maior=dano[0];
    for(int i=0;i<5;i++){
        if(menor>dano[i]){
            menor=dano[i];
        };
        if(maior<dano[i]) {
            maior=dano[i];
        };
    }
    std::cout<<"menor dano: "<<menor<<"\n";
    std::cout<<"maior dano: "<<maior<<"\n";
    return 0;
}