#include <iostream>

int maior(int a[], int b){
int n=0;
for(int i=0;i<b;i++){
    if(n<a[i]){
        n=a[i];
    }
}
return n;
}

int main(){
    int arr[5]={1,2,9,4,5};

    std::cout<<maior(arr,5);


}