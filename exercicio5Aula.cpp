#include<iostream>

using namespace std;

int func1(int n, int vet[], int val){

    int cont = 0;
    for (int i = 0; i<n; i++){
        if(vet[i]> val){
            cont++;
            cout << "posicao: " << i << "\tvalor: " << vet[i] << "\tendereco: " << &vet[i] << endl;
        }
    }
    return cont;
}

int* func2 (int n, int vet[], int val, int tam){
    if (tam == 0)
    {
        return NULL;
    }

    int *maiores = new int[tam];
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if (vet[i]>val)
        {
            maiores[i]=vet[i];
            j++;
        }
        
    }
    return maiores;
}



int main (){

    // int n;
    // cout << "Digite um tamanho para o vetor:" << endl;
    // cin >> n;
    int vet[10] = {6, 3, 1, 8, 6, 4, 2, 7, 9, 8};
    int tam = func1(10, vet, 7);
    int *maiores = func2(10, vet, 7, tam);

    for (int i = 0; i < tam; i++)
    {
        cout << maiores[i] << " ";
        cout << endl; 
    }
    

    delete [] maiores;
    

    return 0;

}