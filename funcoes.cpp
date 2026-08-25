#include <iostream>

void mostrarnome(std::string nome){
    std::cout<<"nome: "<< nome<<"\n";
}

int dobrar(int a){
    return a*2;
}

int calculardano(int a, int b){
    if(a<b){
        return 0;
    } else {
        return a-b;
    }
}
int main() {

    mostrarnome("Isael");

    int resultado = dobrar(10);

    std::cout << resultado << "\n";

    int dano = calculardano(50, 20);

    std::cout << dano << "\n";

    return 0;
}