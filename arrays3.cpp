#include <iostream>

int main(){
int dano[5];

for (int i=0;i<5;i++){
std::cout<<"digite o dano do ataque  "<<i+1<<": ";
std::cin>>dano[i];
}

for(int i=0;i<5;i++){
 std::cout<<"ataque "<< i+1<<":"<< dano[i]<<"\n";
}
return 0;
}