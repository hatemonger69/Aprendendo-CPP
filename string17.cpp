#include <iostream>
#include <string>

int main(){

    std::string palavra;
    std::cout<<"digite uma palavra: ";
    std::getline(std::cin>>std::ws,palavra);
    int n=palavra.size();
    int c1=0,c2=0,c3=0;
    for(int i=0;i<n;i++){
        if(palavra[i]>='0'&&palavra[i]<='9'){
            c1++;
        }

        if(palavra[i]>='a' && palavra[i]<='z'){
            c2++;
        }

        if(palavra[i]>='A' && palavra[i]<='Z'){
            c3++;
        }
    }
    std::cout<<"numeros: "<<c1<<"\n";
    std::cout<<"minusculas: "<<c2<<"\n";
    std::cout<<"maiusculas: "<<c3;
    return 0;
}