#include <iostream>

int maiorN(int a[], int b){
int n=a[0];

    /*for(int i=0;i<b;i++){
            if(n>a[i]){
                n=a[i];
        }
    };*/

    for(int i=0;i<b;i++){
        if(n<a[i]){
            n=a[i];
        }
    }

    return n;
}

int main(){
int arr[5]={-8,-2,-3,-9,-5};

    std::cout<<maiorN(arr,5);
    return 0;
}