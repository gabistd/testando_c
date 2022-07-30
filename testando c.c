#include <stdlib.h>
#include <math.h>


void menu(void);
void criar_grafo(void);
void grafo_procurar(void);
void dijkstra(int vertices, int origem,int destino, float *custos);

 

float custo;
float *custos = NULL;
int origem, destino, vertices = 0;

int main(void) {
  int opt = -1;
  do {
    menu();
    scanf("%d", &opt);
    switch (opt) {
    case 1:
      criar_grafo();
      break;

    case 2:
      printf("2\n");
      grafo_procurar();
      break;
    }

  } while (opt != 0);
  return 0;
}