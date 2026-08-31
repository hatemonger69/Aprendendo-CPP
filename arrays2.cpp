#include <iostream>

int main(){
    int vida[5]={100,150,80,200,120};

    for(int i=0;i<5;i++){
        vida[i]-=20;
        std::cout<<"vida: "<<vida[i]<<"\n";

    }

    return 0;
}