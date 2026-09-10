#include <iostream>

int somaarray(int a[], int b){
    int B;
     for(int A=0;A<b;A++){
        B+=a[A];
    }

return B;
}

int main(){
    int n[5]={1,2,3,4,5};

    std::cout<< somaarray(n,5);
    return 0;
}