#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

typedef struct s_equipa     //Parte 1, ponto 1
{
    char equipa[15];
    char estadio[46];
    int pontos;
    int vitorias;
    int empates;
    int derrotas;
    int golos_marcados;
    int golos_sofridos;
} t_equipa;

void ler_equipas(t_equipa NEQS[18])              //Parte 1, ponto 2
{
    //Nomes das equipas
    strcpy(NEQS[0].equipa, "Arouca        ");
    strcpy(NEQS[1].equipa, "Belenenses    ");
    strcpy(NEQS[2].equipa, "Benfica       ");
    strcpy(NEQS[3].equipa, "Boavista      ");
    strcpy(NEQS[4].equipa, "Braga         ");
    strcpy(NEQS[5].equipa, "Estoril       ");
    strcpy(NEQS[6].equipa, "Famalicao     ");
    strcpy(NEQS[7].equipa, "Gil Vicente   ");
    strcpy(NEQS[8].equipa, "Maritimo      ");
    strcpy(NEQS[9].equipa, "Moreirense    ");
    strcpy(NEQS[10].equipa, "Pacos Ferreira");
    strcpy(NEQS[11].equipa, "Porto         ");
    strcpy(NEQS[12].equipa, "Portimonense  ");
    strcpy(NEQS[13].equipa, "Santa Clara   ");
    strcpy(NEQS[14].equipa, "Sporting      ");
    strcpy(NEQS[15].equipa, "Tondela       ");
    strcpy(NEQS[16].equipa, "Vitoria       ");
    strcpy(NEQS[17].equipa, "Vizela        ");
    //Nomes dos estádios
    strcpy(NEQS[0].estadio, "Estadio Municipal de Arouca");
    strcpy(NEQS[1].estadio, "Estadio do Restelo");
    strcpy(NEQS[2].estadio, "Estadio da Luz");
    strcpy(NEQS[3].estadio, "Estadio do Bessa");
    strcpy(NEQS[4].estadio, "Estadio Municipal de Braga");
    strcpy(NEQS[5].estadio, "Estadio Antonio Coimbra da Mota");
    strcpy(NEQS[6].estadio, "Estadio Municipal 22 de Junho");
    strcpy(NEQS[7].estadio, "Estadio Cidade de Barcelos");
    strcpy(NEQS[8].estadio, "Estadio dos Barreiros");
    strcpy(NEQS[9].estadio, "Estadio Comendador Joaquim de Almeida Freitas");
    strcpy(NEQS[10].estadio, "Estadio da Capital Movel");
    strcpy(NEQS[11].estadio, "Estadio do Dragao");
    strcpy(NEQS[12].estadio, "Estadio do Portimonense");
    strcpy(NEQS[13].estadio, "Estadio de Sao Miguel");
    strcpy(NEQS[14].estadio, "Estadio Jose Alvalade");
    strcpy(NEQS[15].estadio, "Estadio Joao Cardoso");
    strcpy(NEQS[16].estadio, "Estadio Dom Afonso Henriques");
    strcpy(NEQS[17].estadio, "Estadio do Vizela");
}

void zerar_score(t_equipa NEQS[])    //zerar pontos, vitórias, empates, derrotas, golos(tem que ser uma funcao)
{
    int n=18;
    for(int i=0; i<n; i++)
    {
        NEQS[i].pontos=0;
        NEQS[i].vitorias=0;
        NEQS[i].empates=0;
        NEQS[i].derrotas=0;
        NEQS[i].golos_marcados=0;
        NEQS[i].golos_sofridos=0;
    }
}

void escrever_equipas(t_equipa Neq[], int n)         //Parte 1, ponto 3
{

    for(int i=0; i<n; i++)
    {
      printf("%s     %.2d  %.2d  %.2d  %.2d  %.2d  %.2d\n", Neq[i].equipa, Neq[i].pontos, Neq[i].vitorias, Neq[i].empates, Neq[i].derrotas, Neq[i].golos_marcados, Neq[i].golos_sofridos);
    }
}

void escrever_tabela(t_equipa Neq[], int n)          //Parte 1, ponto 4
{
    printf("                   P   V   E   D   M   S \n");
    escrever_equipas(Neq, n);
}

int main()
{
    int n=18;
    struct s_equipa equipa;
    t_equipa Neqs[n];
    printf("Este trabalho consiste na simulacao do campeonato portugues de futebol 2021/2022\n\n");
    ler_equipas(Neqs);          //Se calhar é a única vez que vai ser usado
    printf("==============Tabela Inicial==============\n");
    zerar_score(Neqs);          //Única vez que vai ser usado
    escrever_tabela(Neqs, n);
    printf("==========================================\n\n");
    printf("Jogos da Jornada 1:\n");

    getchar();
    return 0;
}