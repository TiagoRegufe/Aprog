#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

#define NEQS 18

typedef struct s_equipa                         //Parte 1, ponto 1
{
    char nome[15];
    char estadio[46];
    int pontos;
    int vitorias;
    int empates;
    int derrotas;
    int golos_marcados;
    int golos_sofridos;
} t_equipa;

void criar_equipas(t_equipa vEq[])              //Parte 1, ponto 2
{
    //Nomes das equipas
    strcpy(vEq[0].nome,  "Arouca        ");
    strcpy(vEq[1].nome,  "Belenenses    ");
    strcpy(vEq[2].nome,  "Benfica       ");
    strcpy(vEq[3].nome,  "Boavista      ");
    strcpy(vEq[4].nome,  "Braga         ");
    strcpy(vEq[5].nome,  "Estoril       ");
    strcpy(vEq[6].nome,  "Famalicao     ");
    strcpy(vEq[7].nome,  "Gil Vicente   ");
    strcpy(vEq[8].nome,  "Maritimo      ");
    strcpy(vEq[9].nome,  "Moreirense    ");
    strcpy(vEq[10].nome, "Pacos Ferreira");
    strcpy(vEq[11].nome, "Porto         ");
    strcpy(vEq[12].nome, "Portimonense  ");
    strcpy(vEq[13].nome, "Santa Clara   ");
    strcpy(vEq[14].nome, "Sporting      ");
    strcpy(vEq[15].nome, "Tondela       ");
    strcpy(vEq[16].nome, "Vitoria       ");
    strcpy(vEq[17].nome, "Vizela        ");
    //Nomes dos estádios
    strcpy(vEq[0].estadio, "Estadio Municipal de Arouca");
    strcpy(vEq[1].estadio, "Estadio do Restelo");
    strcpy(vEq[2].estadio, "Estadio da Luz");
    strcpy(vEq[3].estadio, "Estadio do Bessa");
    strcpy(vEq[4].estadio, "Estadio Municipal de Braga");
    strcpy(vEq[5].estadio, "Estadio Antonio Coimbra da Mota");
    strcpy(vEq[6].estadio, "Estadio Municipal 22 de Junho");
    strcpy(vEq[7].estadio, "Estadio Cidade de Barcelos");
    strcpy(vEq[8].estadio, "Estadio dos Barreiros");
    strcpy(vEq[9].estadio, "Estadio Comendador Joaquim de Almeida Freitas");
    strcpy(vEq[10].estadio, "Estadio da Capital Movel");
    strcpy(vEq[11].estadio, "Estadio do Dragao");
    strcpy(vEq[12].estadio, "Estadio do Portimonense");
    strcpy(vEq[13].estadio, "Estadio de Sao Miguel");
    strcpy(vEq[14].estadio, "Estadio Jose Alvalade");
    strcpy(vEq[15].estadio, "Estadio Joao Cardoso");
    strcpy(vEq[16].estadio, "Estadio Dom Afonso Henrique");
    strcpy(vEq[17].estadio, "Estadio do Vizela");
}

void zerar_score(t_equipa vEq[])    //zerar pontos, vitórias, empates, derrotas, golos
{
    for(int i=0;i<NEQS;i++)
    {
        vEq[i].pontos=0;
        vEq[i].vitorias=0;
        vEq[i].empates=0;
        vEq[i].derrotas=0;
        vEq[i].golos_marcados=0;
        vEq[i].golos_sofridos=0;
    }
}

void escrever_equipas(t_equipa vEq[])         //Parte 1, ponto 3
{
    for(int i=0;i<NEQS;i++) printf("%s     %.2d  %.2d  %.2d  %.2d  %.2d  %.2d\n", vEq[i].nome, vEq[i].pontos, vEq[i].vitorias, vEq[i].empates, vEq[i].derrotas, vEq[i].golos_marcados, vEq[i].golos_sofridos);
}

void escrever_tabela(t_equipa vEq[])          //Parte 1, ponto 4
{
    printf("                   P   V   E   D   M   S \n");
    escrever_equipas(vEq);
}

void troca(t_equipa vEq[], int p1, int p2)           //Parte 1, ponto 6
{
    t_equipa a=vEq[p1];vEq[p1]=vEq[p2];vEq[p2]=a;
}


void baralhar_equipas(t_equipa vEq[]){                            //Parte 1, ponto 8
    for(int i=NEQS-1;i>0;i--) troca(vEq,i,rand()%(i+1));
}

int melhor_qualificacao(t_equipa vEq[], int eqA, int eqB)         //Parte 1, ponto 11    //Tem que receber duas t_equipas em vez de posições
{
    if(vEq[eqA].pontos>vEq[eqB].pontos) return 1;
    if(vEq[eqA].pontos<vEq[eqB].pontos) return 0;
    if(vEq[eqA].golos_marcados>vEq[eqB].golos_marcados) return 1;
    if(vEq[eqA].golos_marcados<vEq[eqB].golos_marcados) return 0;
    if(vEq[eqA].golos_sofridos<vEq[eqB].golos_sofridos) return 1;
    if(vEq[eqA].golos_sofridos>vEq[eqB].golos_sofridos) return 0;
    return 1;
}


int PosDoMenor(t_equipa vEq[], int n){
    int p=0;
    for(int i=1; i<n; i++) if(melhor_qualificacao(vEq, p, i)==1) p=i;
    return p;
}

int ordenar_por_qualificacao(t_equipa vEq[]){                     //Parte 1, ponto 13
    for (int q=NEQS; q>1; q--)
    {
        troca(vEq, PosDoMenor(vEq, q), q-1);
    }
    escrever_tabela(vEq);
}

int posicao_equipa (char nome[], t_equipa vEq[]){                 //Parte 1, ponto 15
    for(int i=0; i<NEQS; i++) if (strcmp(nome, vEq[i].nome)==0) return i;
    return -1;
}

void rodar_vEq (t_equipa vEq[]){                                  //Parte 1,ponto 17
    t_equipa  a=vEq[NEQS-1];
    for(int i=1; i<NEQS-1; i++) troca(vEq, i, i+1);
    a=vEq[1];
    escrever_tabela(vEq);
}

typedef struct s_jogo{                                            //Parte 2, ponto 19
    
    char estadio[50];
    t_equipa eq_casa;
    t_equipa eq_fora;
    int golos_casa;
    int golos_fora;
}t_jogo;

void escrever_jogo(t_jogo jogo)                                   //Parte 2, ponto 20
{

    printf("%s %d X %d %s  (%s)\n",jogo.eq_casa.nome,jogo.golos_casa,jogo.golos_fora,jogo.eq_fora.nome,jogo.estadio);
}


int main()
{
    srand(time(NULL));

    t_equipa vEq[NEQS];

    printf("Este trabalho consiste na simulacao do campeonato portugues de futebol 2021/2022\n\n");
    criar_equipas(vEq);          //Se calhar é a única vez que vai ser usado

/*PARA TESTAR               // Parte 1, ponto 10
    vEq[12].pontos=2;
    vEq[15].pontos=3;
    vEq[12].golos_marcados=6;
    vEq[15].golos_marcados=5;
    vEq[12].golos_sofridos=1;
    vEq[15].golos_sofridos=8;

    vEq[2].pontos=8;
    vEq[5].pontos=6;
    vEq[2].golos_marcados=4;
    vEq[5].golos_marcados=5;
    vEq[2].golos_sofridos=1;
    vEq[5].golos_sofridos=3;

    vEq[3].pontos=6;
    vEq[6].pontos=5;
    vEq[3].golos_marcados=5;
    vEq[6].golos_marcados=1;
    vEq[3].golos_sofridos=4;
    vEq[6].golos_sofridos=8;

    vEq[0].pontos=1;
    vEq[7].pontos=2;
    vEq[0].golos_marcados=9;
    vEq[7].golos_marcados=9;
    vEq[0].golos_sofridos=1;
    vEq[7].golos_sofridos=2;

*/
    printf("==============Tabela Inicial==============\n");
    zerar_score(vEq);          //Única vez que vai ser usado

    baralhar_equipas(vEq);

    ordenar_por_qualificacao(vEq);
    //escrever_tabela(vEq);
    printf("==========================================\n\n");
    printf("Jogos da Jornada 1:\n");


    //printf (" --->>>>  %d    %s     %s\n", melhor_qualificacao(vEq, 0, 1), vEq[0].nome, vEq[1].nome);
    //printf("%d \n", posicao_equipa(vEq[17].nome, vEq));

    t_jogo jogox;
    jogox.eq_casa=vEq[3];
    jogox.eq_fora=vEq[5];
    jogox.golos_casa=5;
    jogox.golos_fora=2;
    strcpy(jogox.estadio,vEq[3].estadio);
    escrever_jogo(jogox);

    getchar();
    return 0;
}
