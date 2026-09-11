#include <iostream>

int main(){
    int dano[5]={25,200,23,70,80};
    int menor=dano[0];

    for(int i=0;i<5;i++){
        if(menor>dano[i]){
            menor=dano[i];
        }
    }
    std::cout<<"menor dano: "<<menor<<"\n";
    return 0;
}