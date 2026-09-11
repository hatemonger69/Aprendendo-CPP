#include <iostream>

int main(){
    int dano[5]={120,200,30,40,80};
    int maior=0;
    for(int i=0;i<5;i++){
        if(maior<dano[i]){
            maior=dano[i];
        }
    }
    std::cout<<"maior dano: "<<maior<<"!!";
    return 0;
}