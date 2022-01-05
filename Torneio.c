#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

typedef struct s_equipa     //ponto 1 da parte 1
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

void ler_equipas()              //ponto 2 da parte 1
{
    struct s_equipa equipa1, equipa2, equipa3, equipa4, equipa5, equipa6, equipa7, equipa8, equipa9, equipa10, equipa11, equipa12, equipa13, equipa14, equipa15, equipa16, equipa17, equipa18;
    t_equipa NEQS[18]={equipa1, equipa2, equipa3, equipa4, equipa5, equipa6, equipa7, equipa8, equipa9, equipa10, equipa11, equipa12, equipa13, equipa14, equipa15, equipa16, equipa17, equipa18};
    //escreve o nome das equipas
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
    //escreve os estádios
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

void zerar_score(t_equipa NEQS[])    //zerar pontos, vitórias, empates, derrotas, golos(tem que ser uma funcao)  /*NÃO SEI SE ESTÁ A FUNCIONAR*/
{
    int n=18;
    for(int i=0;i<n;i++)
    {
        NEQS[i].pontos=0;
        NEQS[i].vitorias=0;
        NEQS[i].empates=0;
        NEQS[i].derrotas=0;
        NEQS[i].golos_marcados=0;
        NEQS[i].golos_sofridos=0;
    }
}

void escrever_equipas()     //ponto 3 parte 1            /*NÃO ESTÁ A FUNCIONAR*/
{
    int n=18;
    for(int i=0;i<n;i++)
    {
      printf("%s     %.2d  %.2d  %.2d  %.2d  %.2d  %.2d\n", ler_equipas());
    }
}

void escrever_tabela()      //ponto 4 parte 1
{
    printf("                   P   V   E   D   M   S \n");
    escrever_equipas();
}

int main()
{
    int n=18;
    printf("Este trabalho consiste na simulacao do campeonato portugues de futebol 2021/2022\n");
    putchar('\n');
    printf("==============Tabela Inicial==============\n");
    escrever_tabela();
    printf("==========================================\n");
    putchar('\n');
    printf("Jogos da Jornada 1:\n");

    getchar();
    return 0;
}
