#include <iostream>
//cria uma copia da variavel retorna o valor da copia
int zerar(int a){
    return a = 0;
}
//modifica diretamente a variavel e retorna o valor dela
int zerarreal(int& a){
   return a = 0;
}

int main(){

int n=50;

zerar(n);

std::cout<< "zerar sem & "<<n<<"\n";

zerarreal(n);

std::cout<< "zerar com & "<<n<<"\n";
    return 0;
}