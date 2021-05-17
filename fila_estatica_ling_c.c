#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tamanho 5

//Criar estrutura da fila
struct tfila {
    int dados[tamanho];
    int ini;
    int fim;
};

//Variaveis globais
struct tfila fila;
int op;


//Funcao para adicionar elementos na fila
void adicionarFila(){
    if(fila.fim == tamanho){
        printf("\nA fila ja esta cheia!!!");
        system("pause");
    }
    else{
        printf("\nDigite o valor a ser inserido: ");
        scanf("%d", &fila.dados[fila.fim]);
        fila.fim++;
    }
}

void removerFila() {
    if(fila.ini == fila.fim){
        printf("\nA fila esta vazia!!!");
        system("pause");
    }
    else {
        int i; 
        for (i = 0; i < tamanho; i++) {
            fila.dados[i] = fila.dados[i+1];
        }
        fila.dados[fila.fim] = 0;
        fila.fim--;
    }
}


 void filaMostrar() {
     int i;
     printf("[ ");
     for(i = 0;i < tamanho; i++){
         printf("%d ", fila.dados[i]);
     }
     printf("]\n\n");
 }   


void mostrar_menu() {
    printf("\nEscolha uma opcao: \n");
    printf("1 - Incluir na fila\n");
    printf("2 - Excluir da fila\n");
    printf("0 - Sair\n\n");
}

//prototipacao
void adicionarFila();
void removerFila();
void mostrarMenu();
void filaMostrar();

int main(void){
op = 1;
fila.ini = 0;
fila.fim = 0;
while(op != 0){
    system("cls");
    filaMostrar();
    mostrar_menu();
    scanf("%d", &op);
    switch(op){
        case 1: 
        adicionarFila();
        break;
        case 2:
        removerFila();
        break;
    }
}
    return(0);
}


