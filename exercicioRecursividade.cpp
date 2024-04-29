#include<iostream>

using namespace std;


int somaVetor(int vet[], int n){
    if (n == 1)
    {
        return vet[0];
    } else{
        int soma=somaVetor(vet, n-1);
        return soma=vet[n-1];
    }
}

int main (){
    int vet[10]={6,3,1,8,6,4,2,7,9,8};
    cout << "Soma dos Valores: " << somaVetor(vet, 10);
    return 0;
}