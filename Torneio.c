#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

typedef
struct s_equipa
{
    char equipas[13];
    char estadios[40];
    int pontos;
    int vitorias;
    int empates;
    int derrotas;
    int golos_marcados;
    int golos_sofridos;

} t_equipa;

int equipas(t_equipa ttt ){


}
int escrever_equipa(t_equipa *equipas){



}
void Equipas(char equipa[], int n)
{
    printf("[ ");
    for(int i=0;i<n;i++) printf("%s \n ",equipa[i]);
    printf("]\n");
}

int main()
{
    int n=18;
    char equipa[18][14]= {"Arouca", "Belenenses", "Benfica", "Boavista", "Braga", "Estoril", "Famalicao", "Gil Vicente", "Maritimo", "Moreirense", "Pacos Ferreira", "Porto", "Portimonense", "Santa Clara", "Sporting", "Tondela", "Vitoria", "Vizela"};
    Equipas(equipa,18);

  getchar();
  return 0;
}
