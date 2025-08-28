//gustavostefanon
#include <stdio.h>
#include <string.h>

struct SuperTrunfo {
   char estado;
   char codigo; 
   char cidade[50];
   int populacao;
   int area;
   int pib;
   int pontostur;
};

void lerCarta(struct SuperTrunfo *carta) {
   printf("\nDigite o estado (uma letra de A a H): ");
   scanf(" %c", &carta->estado);
   printf("Digite o código da carta: ");
   scanf(" %s", &carta->codigo);
   printf("Digite o nome da cidade: ");
   scanf(" %s", &carta->cidade[50]);
   printf("Digite a população da cidade: ");
   scanf(" %d", &carta->populacao);
   printf("Digite a area em km2: ");
   scanf(" %d", &carta->area);
   printf("Digite o pib: ");
   scanf(" %d", &carta->pib);
   printf("Digite o numéro de pontos turisticos da cidade: ");
   scanf(" %d", &carta->pontostur);

}

int main() {
   struct SuperTrunfo carta1, carta2;

   printf("Insira os dados da primeira carta:");
   lerCarta(&carta1);

   printf("\nInsira os dados da segunda carta:");
   lerCarta(&carta2);

   printf("\n\nDados da primeira carta:\n");
   printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea em km2: %d\nProduto Interno Bruto: %d\nPontos Turísticos: %d\n",
          carta1.estado, carta1.codigo, carta1.cidade, carta1.populacao, carta1.area, carta1.pib, carta1.pontostur);

   printf("\nDados da segunda carta:\n");
   printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea em km2: %d\nProduto Interno Bruto: %d\nPontos Turísticos: %d\n",
          carta2.estado, carta2.codigo, carta2.cidade, carta2.populacao, carta2.area, carta2.pib, carta2.pontostur);

   return 0;
}