#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

#define NEQS 18         //NEQS vale sempre 18

typedef struct s_equipa         //Parte 1, ponto 1
{
    char nome[15];
    char estadio[50];
    int pontos;
    int vitorias;
    int empates;
    int derrotas;
    int golos_marcados;
    int golos_sofridos;
} t_equipa;

void criar_equipas(t_equipa vEq[])          //Parte 1, ponto 2
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
    strcpy(vEq[10].estadio, "Estadio Capital do Movel");
    strcpy(vEq[11].estadio, "Estadio do Dragao");
    strcpy(vEq[12].estadio, "Estadio do Portimonense");
    strcpy(vEq[13].estadio, "Estadio de Sao Miguel");
    strcpy(vEq[14].estadio, "Estadio Jose Alvalade");
    strcpy(vEq[15].estadio, "Estadio Joao Cardoso");
    strcpy(vEq[16].estadio, "Estadio Dom Afonso Henriques");
    strcpy(vEq[17].estadio, "Estadio do Vizela");
    for(int i=0;i<NEQS;i++)         //zerar pontos, vitórias, empates, derrotas, golos
    {
        vEq[i].pontos=0;
        vEq[i].vitorias=0;
        vEq[i].empates=0;
        vEq[i].derrotas=0;
        vEq[i].golos_marcados=0;
        vEq[i].golos_sofridos=0;
    }
}

void escrever_equipas(t_equipa vEq[])           //Parte 1, ponto 3   (escrever equipas e o nº de pontos, vitorias, etc.)
{
    for(int i=0;i<NEQS;i++) printf("%s     %.2d  %.2d  %.2d  %.2d  %.2d  %.2d\n", vEq[i].nome, vEq[i].pontos, vEq[i].vitorias, vEq[i].empates, vEq[i].derrotas, vEq[i].golos_marcados, vEq[i].golos_sofridos);
}

void escrever_tabela(t_equipa vEq[])            //Parte 1, ponto 4
{
    printf("                   P   V   E   D   M   S \n");
    escrever_equipas(vEq);
}

void troca(t_equipa vEq[], int p1, int p2)          //Parte 1, ponto 6   (trocas as posições de duas equipas)
{
    t_equipa temp=vEq[p1];          //t_equipa a é temporária
    vEq[p1]=vEq[p2];
    vEq[p2]=temp;
}

void baralhar_equipas(t_equipa vEq[])           //Parte 1, ponto 8   (baralhar tabela)
{
    for(int i=NEQS-1; i>0; i--) troca(vEq, i, rand()%(i+1));
}

int melhor_qualificacao(t_equipa eqA, t_equipa eqB)         //Parte 1, ponto 11   (determinar equipa melhor qualificada)
{
    if(eqA.pontos>eqB.pontos) return 1;
    if(eqA.pontos<eqB.pontos) return 0;
    if(eqA.golos_marcados>eqB.golos_marcados) return 1;
    if(eqA.golos_marcados<eqB.golos_marcados) return 0;
    if(eqA.golos_sofridos<eqB.golos_sofridos) return 1;
    if(eqA.golos_sofridos>eqB.golos_sofridos) return 0;
    return 1;
}

int PosDoMenor(t_equipa vEq[], int n)           //Posição do pior classificado entre duas equipas
{
    t_equipa eqA, eqB;
    int p=0;
    for(int i=1; i<n; i++)
    {
        eqA=vEq[i];
        eqB=vEq[p];
        if(melhor_qualificacao(eqB, eqA)==1) p=i;
    }
    return p;
}

int ordenar_por_qualificacao(t_equipa vEq[])            //Parte 1, ponto 13   (ordenar pela ordem de melhor qualificação para o pior)
{
    for (int q=NEQS; q>1; q--) troca(vEq, PosDoMenor(vEq, q), q-1);
    escrever_tabela(vEq);
}

int posicao_equipa (char nome[], t_equipa vEq[])            //Parte 1, ponto 15   (descobrir a posição de uma equipa)
{
    for(int i=0; i<NEQS; i++) if(strcmp(nome, vEq[i].nome)==0) return i;
    return -1;
}

void rodar_vEq(t_equipa vEq[])          //Parte 1, ponto 17   (rodar a equipa de baixo para cima, mantendo a 1ºequipa no mesmo lugar)
{
    t_equipa a=vEq[NEQS-1];
    for(int i=1; i<NEQS-1; i++) troca(vEq, i, i+1);
    a=vEq[1];
}

typedef struct s_jogo           //Parte 2, ponto 19
{
    char estadio[50];
    t_equipa eq_casa;
    t_equipa eq_fora;
    int golos_casa;
    int golos_fora;
}t_jogo;

typedef struct s_jornada            //Parte 2, ponto 22
{
    t_jogo jogpjor[NEQS/2];         //jogpjor são os 9 jogos de uma jornada
}t_jornada;

void escrever_jornadas(t_jornada jornadas[], t_equipa equipas[])
{
    int c, f;           //Vão ser as posições das equipas em casa e fora
    for(int i=0; i<(NEQS-1)*2; i++)
    {
        printf("Jogos da jornada %d:\n", i+1);
        for(int j=0; j<(NEQS/2); j++)
        {
            printf("%s %d X %d %s  (%s)\n", jornadas[i].jogpjor[j].eq_casa.nome, jornadas[i].jogpjor[j].golos_casa, jornadas[i].jogpjor[j].golos_fora, jornadas[i].jogpjor[j].eq_fora.nome, jornadas[i].jogpjor[j].estadio);
            c=posicao_equipa(jornadas[i].jogpjor[j].eq_casa.nome, equipas);
            f=posicao_equipa(jornadas[i].jogpjor[j].eq_fora.nome, equipas);
            equipas[c].golos_marcados+=jornadas[i].jogpjor[j].golos_casa;
            equipas[c].golos_sofridos+=jornadas[i].jogpjor[j].golos_fora;
            equipas[f].golos_marcados+=jornadas[i].jogpjor[j].golos_fora;
            equipas[f].golos_sofridos+=jornadas[i].jogpjor[j].golos_casa;
            if (jornadas[i].jogpjor[j].golos_casa>jornadas[i].jogpjor[j].golos_fora)            //A eq_casa ganha
            {
                equipas[c].vitorias=equipas[c].vitorias+1;
                equipas[c].pontos=equipas[c].pontos+3;
                equipas[f].derrotas=equipas[f].derrotas+1;
            }
            else if (jornadas[i].jogpjor[j].golos_casa<jornadas[i].jogpjor[j].golos_fora)           //A eq_fora ganha
            {
                equipas[f].vitorias=equipas[f].vitorias+1;
                equipas[f].pontos=equipas[f].pontos+3;
                equipas[c].derrotas=equipas[c].derrotas+1;
            }
            else            //As equipas empatam
            {
                equipas[c].empates=equipas[c].empates+1;
                equipas[c].pontos=equipas[c].pontos+1;
                equipas[f].empates=equipas[f].empates+1;
                equipas[f].pontos=equipas[f].pontos+1;
            }
        }
        printf("\n============Tabela na Jornada %d===========\n", i+1);
        ordenar_por_qualificacao(equipas);
        printf("==========================================\n\n");
    }
}

void criar_todas_jorn(t_jornada jornadas[], t_equipa equipas[])
{
    for(int i=0; i<(NEQS-1)*2; i++) // 34 jornadas
    {
        if(i%2==0) // jornada impar
        {
            for(int j=0; j<NEQS/2; j++)
            {
                jornadas[i].jogpjor[j].eq_casa=equipas[j];
                jornadas[i].jogpjor[j].eq_fora=equipas[NEQS-1-j];
                strcpy(jornadas[i].jogpjor[j].estadio, jornadas[i].jogpjor[j].eq_casa.estadio);
                jornadas[i].jogpjor[j].golos_casa=rand()%5;
                jornadas[i].jogpjor[j].golos_fora=rand()%3;
            }
        }
        else       // jornada par
        {
            for(int j=0; j<NEQS/2; j++)
            {
                jornadas[i].jogpjor[j].eq_fora=equipas[j];
                jornadas[i].jogpjor[j].eq_casa=equipas[NEQS-1-j];
                strcpy(jornadas[i].jogpjor[j].estadio, jornadas[i].jogpjor[j].eq_casa.estadio);
                jornadas[i].jogpjor[j].golos_casa=rand()%5;
                jornadas[i].jogpjor[j].golos_fora=rand()%3;
            }
        }
        rodar_vEq(equipas);         //Trocar as equipas que se defrontam
    }
}

int main()
{
    srand(time(NULL));          //Para a função rand() funcionar

    t_equipa vEq[NEQS];
    t_jornada j[(NEQS-1)*2];
    t_jogo jogos[NEQS/2];

    printf("Este trabalho consiste na simulacao do campeonato portugues de futebol 2021/2022\n\n");
    criar_equipas(vEq);         //Única vez que vai ser usado
    printf("==============Tabela Inicial==============\n");
    ordenar_por_qualificacao(vEq);
    printf("==========================================\n\n");
    baralhar_equipas(vEq);
    criar_todas_jorn(j, vEq);
    escrever_jornadas(j, vEq);
    getchar();
    return 0;
}
