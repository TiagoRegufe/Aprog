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

void escrever_equipas(t_equipa NEQS[], int n)         //Parte 1, ponto 3
{

    for(int i=0;i<n;i++)
    {
      printf("%s     %.2d  %.2d  %.2d  %.2d  %.2d  %.2d\n", NEQS[i].equipa, NEQS[i].pontos, NEQS[i].vitorias, NEQS[i].empates, NEQS[i].derrotas, NEQS[i].golos_marcados, NEQS[i].golos_sofridos);
    }
}

void escrever_tabela(t_equipa NEQS[], int n)          //Parte 1, ponto 4
{
    printf("                   P   V   E   D   M   S \n");
    escrever_equipas(NEQS, n);
}


void troca(t_equipa NEQS[],int p1,int p2){           //Parte 1, ponto 6
    t_equipa a=NEQS[p1];NEQS[p1]=NEQS[p2];NEQS[p2]=a;
}


void baralhar_equipas(t_equipa NEQS[],int n){       //Parte 1, ponto 8
    for(int i=n-1;i>0;i--){
            troca(NEQS,i,rand()%(i+1));
    }
}

int melhor_qualificacao(t_equipa NEQS[], int eqA, int eqB)         //Parte 1, ponto 11
{
    if(NEQS[eqA].pontos>NEQS[eqB].pontos) return 1;
    else if(NEQS[eqA].pontos<NEQS[eqB].pontos) return 0;
    else if(NEQS[eqA].pontos==NEQS[eqB].pontos)
    {
        if(NEQS[eqA].golos_marcados>NEQS[eqB].golos_marcados) return 1;
        else if (NEQS[eqA].golos_marcados<NEQS[eqB].golos_marcados) return 0;
        else if (NEQS[eqA].golos_marcados==NEQS[eqB].golos_marcados)
        {
            if (NEQS[eqA].golos_sofridos<NEQS[eqB].golos_sofridos) return 1;
            else if (NEQS[eqA].golos_sofridos>NEQS[eqB].golos_sofridos) return 0;
            else if (NEQS[eqA].golos_sofridos==NEQS[eqB].golos_sofridos) return 1;
        }
    }
}

int PosDoMenor(t_equipa NEQS[],int n){
    int p=0;
    for(int i=1;i<n;i++) if(melhor_qualificacao(NEQS,p,i)==1) p=i;
    return p;
}

int oredenar_por_qualificacao(t_equipa NEQS[],int n){  //Parte 1, ponto 13
    for (int q = n; q > 1; q--) {

            troca(NEQS,PosDoMenor(NEQS,q),q-1);
}
  escrever_tabela(NEQS,n);
}

int posicao_equipa (char nome[],t_equipa NEQS[],int n){                 //Parte 1, ponto 15
    for(int i=0;i<n;i++) if (strcmp(nome,NEQS[i].equipa)==0) return i;
    return -1;
}

void rodar_NEQS (t_equipa NEQS[],int n){           //Parte 1,ponto 17 (ESTÁ A RODAR PARA A DIREITA EM VEZ DE RODAR PARA A ESQUERDA)
    t_equipa  a = NEQS[n-1];

        for(int i=n-1;i>1;i--) troca(NEQS,i,i-1);
        a  = NEQS[1];
    escrever_tabela(NEQS,n);
}

int main()
{
    int n=18;
    struct s_equipa equipa;
    t_equipa NEQS[n];
    srand(time(NULL));
    printf("Este trabalho consiste na simulacao do campeonato portugues de futebol 2021/2022\n\n");
    ler_equipas(NEQS);          //Se calhar é a única vez que vai ser usado
    printf("==============Tabela Inicial==============\n");
    zerar_score(NEQS);          //Única vez que vai ser usado


    baralhar_equipas(NEQS,n);

//PARA TESTAR               // Parte 1, ponto 10
    NEQS[12].pontos=2;
    NEQS[15].pontos=3;
    NEQS[12].golos_marcados=6;
    NEQS[15].golos_marcados=5;
    NEQS[12].golos_sofridos=1;
    NEQS[15].golos_sofridos=8;

    NEQS[2].pontos=8;
    NEQS[5].pontos=6;
    NEQS[2].golos_marcados=4;
    NEQS[5].golos_marcados=5;
    NEQS[2].golos_sofridos=1;
    NEQS[5].golos_sofridos=3;

    NEQS[3].pontos=6;
    NEQS[6].pontos=5;
    NEQS[3].golos_marcados=5;
    NEQS[6].golos_marcados=1;
    NEQS[3].golos_sofridos=4;
    NEQS[6].golos_sofridos=8;

    NEQS[0].pontos=1;
    NEQS[7].pontos=2;
    NEQS[0].golos_marcados=9;
    NEQS[7].golos_marcados=9;
    NEQS[0].golos_sofridos=1;
    NEQS[7].golos_sofridos=2;
//

    escrever_tabela(NEQS, n);
    printf("==========================================\n\n");
    printf("Jogos da Jornada 1:\n");
    oredenar_por_qualificacao(NEQS,n);

    printf (" --->>>>  %d    %s     %s\n",melhor_qualificacao(NEQS,0,1),NEQS[0].equipa,NEQS[1].equipa);

    printf("%d \n",posicao_equipa(NEQS[17].equipa,NEQS,n));


    rodar_NEQS(NEQS,n);


    getchar();
    return 0;
}
