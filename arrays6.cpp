#include <iostream>

void mostrararray(int a[], int b){
    for(int A=0;A<b;A++){
        std::cout<<a[A]<<"\n";
    }

}

int main(){
    int arr[5]={1,2,3,4,5,};

    mostrararray(arr,5);
    return 0;
}