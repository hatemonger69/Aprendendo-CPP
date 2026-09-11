#include <iostream>

int main(){
    int dano[5] = {10, 20, 30, 40, 50};
    for(int i=0;i<5;i++){
        dano[i]+=5;
        std::cout<<dano[i]<<"\n";
    }

    return 0;
}