#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void InsereElemento(int valor, int * tam_n, int * vetor);
void ImprimeElemento(int *tam_n, int * vetor);
int main(){
    int *vetor;
    vetor = NULL;
    int * tam_n;
    tam_n = (int * ) malloc(1*sizeof(int));
    *tam_n = 0;
    int removido = 0, num, valor;
    printf("Digite 1, 2, 3 ou 4 :\n1- Inserir um elemento na heap\n2- Remover um elemento\n3- Imprimir a Heap\n4- Sair:\n");
    scanf("%d", &num);

    while(num !=4){

        switch (num)
        {
            case 1:
                puts("Informe o elemento que deseja inserir");
                scanf("%d", &valor);
                InsereElemento(valor,tam_n,vetor);

                break;
            case 2:
                printf("O numero removido foi: %d", removido);
                break;

            case 3:
                ImprimeElemento(tam_n,vetor);
                break;

            case 4:
                puts("Limpar o vetor aqui");
                exit(0);
                break;
            default:
                puts("\nNúmero invalido.");
                break;
        }
        printf("\nAAA : %d", *tam_n);
        printf("\nDigite 1, 2, 3 ou 4 :\n1- Inserir um elemento na heap\n2- Remover um elemento\n3- Imprimir a Heap\n4- Sair\n");
        scanf("%d", &num);
    }
}



void InsereElemento(int valor, int * tam_n, int * vetor){
    vetor = realloc (vetor, ((*tam_n) + 1) * sizeof (int));
    vetor[*tam_n] = valor;
    *tam_n = *tam_n + 1 ;
    printf("\nBBB : %d", *tam_n);

}

void ImprimeElemento(int *tam_n, int * vetor){
    puts("O vetor heap é: ");
    for(int i=0;i<*tam_n;i++){
        printf(" %d", vetor[i]);
    }
}