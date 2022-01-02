#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

typedef  //ponto 1 da parte 1
struct s_equipa
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


void Equipas()  //ponto 2 da parte 1
{
    struct s_equipa equipa1,equipa2,equipa3,equipa4,equipa5,equipa6,equipa7,equipa8,equipa9,equipa10,equipa11,equipa12,equipa13,equipa14,equipa15,equipa16,equipa17,equipa18;
    t_equipa NEQS[18]={equipa1,equipa2,equipa3,equipa4,equipa5,equipa6,equipa7,equipa8,equipa9,equipa10,equipa11,equipa12,equipa13,equipa14,equipa15,equipa16,equipa17,equipa18};

    //escreve o nome das equipas

    strcpy(equipa1.equipa, "Arouca");
    strcpy(equipa2.equipa, "Belenenses");
    strcpy(equipa3.equipa, "Benfica");
    strcpy(equipa4.equipa, "Boavista");
    strcpy(equipa5.equipa, "Braga");
    strcpy(equipa6.equipa, "Estoril");
    strcpy(equipa7.equipa, "Famalicao");
    strcpy(equipa8.equipa, "Gil Vicente");
    strcpy(equipa9.equipa, "Maritimo");
    strcpy(equipa10.equipa, "Moreirense");
    strcpy(equipa11.equipa, "Pacos Ferreira");
    strcpy(equipa12.equipa, "Porto");
    strcpy(equipa13.equipa, "Portimonense");
    strcpy(equipa14.equipa, "Santa Clara");
    strcpy(equipa15.equipa, "Sporting");
    strcpy(equipa16.equipa, "Tondela");
    strcpy(equipa17.equipa, "Vitoria");
    strcpy(equipa18.equipa,  "Vizela");

    //escreve os estádios

    strcpy(equipa1.estadio, "Estadio Municipal de Arouca");
    strcpy(equipa2.estadio, "Estadio do Restelo");
    strcpy(equipa3.estadio, "Estadio da Luz");
    strcpy(equipa4.estadio, "Estadio do Bessa");
    strcpy(equipa5.estadio, "Estadio Municipal de Braga");
    strcpy(equipa6.estadio, "Estadio Antonio Coimbra da Mota");
    strcpy(equipa7.estadio, "Estadio Municipal 22 de Junho");
    strcpy(equipa8.estadio, "Estadio Cidade de Barcelos");
    strcpy(equipa9.estadio, "Estadio dos Barreiros");
    strcpy(equipa10.estadio, "Estadio Comendador Joaquim de Almeida Freitas");
    strcpy(equipa11.estadio, "Estadio da Capital Movel");
    strcpy(equipa12.estadio, "Estadio do Dragao");
    strcpy(equipa13.estadio, "Estadio do Portimonense");
    strcpy(equipa14.estadio, "Estadio de Sao Miguel");
    strcpy(equipa15.estadio, "Estadio Jose Alvalade");
    strcpy(equipa16.estadio, "Estadio Joao Cardoso");
    strcpy(equipa17.estadio, "Estadio Dom Afonso Henriques");
    strcpy(equipa18.estadio,  "Estadio do Vizela");

    //zerar pontos, vitórias, empates, derrotas, golos (nao é assim que devemos fazer)
    int n=18;

        equipa1.pontos=0;
        equipa1.vitorias=0;
        equipa1.empates=0;
        equipa1.derrotas=0;
        equipa1.golos_marcados=0;
        equipa1.golos_sofridos=0;

        equipa2.pontos=0;
        equipa2.vitorias=0;
        equipa2.empates=0;
        equipa2.derrotas=0;
        equipa2.golos_marcados=0;
        equipa2.golos_sofridos=0;

        equipa3.pontos=0;
        equipa3.vitorias=0;
        equipa3.empates=0;
        equipa3.derrotas=0;
        equipa3.golos_marcados=0;
        equipa3.golos_sofridos=0;


        equipa4.pontos=0;
        equipa4.vitorias=0;
        equipa4.empates=0;
        equipa4.derrotas=0;
        equipa4.golos_marcados=0;
        equipa4.golos_sofridos=0;


        equipa5.pontos=0;
        equipa5.vitorias=0;
        equipa5.empates=0;
        equipa5.derrotas=0;
        equipa5.golos_marcados=0;
        equipa5.golos_sofridos=0;


        equipa6.pontos=0;
        equipa6.vitorias=0;
        equipa6.empates=0;
        equipa6.derrotas=0;
        equipa6.golos_marcados=0;
        equipa6.golos_sofridos=0;


        equipa7.pontos=0;
        equipa7.vitorias=0;
        equipa7.empates=0;
        equipa7.derrotas=0;
        equipa7.golos_marcados=0;
        equipa7.golos_sofridos=0;


        equipa8.pontos=0;
        equipa8.vitorias=0;
        equipa8.empates=0;
        equipa8.derrotas=0;
        equipa8.golos_marcados=0;
        equipa8.golos_sofridos=0;


        equipa9.pontos=0;
        equipa9.vitorias=0;
        equipa9.empates=0;
        equipa9.derrotas=0;
        equipa9.golos_marcados=0;
        equipa9.golos_sofridos=0;


        equipa10.pontos=0;
        equipa10.vitorias=0;
        equipa10.empates=0;
        equipa10.derrotas=0;
        equipa10.golos_marcados=0;
        equipa10.golos_sofridos=0;


        equipa11.pontos=0;
        equipa11.vitorias=0;
        equipa11.empates=0;
        equipa11.derrotas=0;
        equipa11.golos_marcados=0;
        equipa11.golos_sofridos=0;

        equipa12.pontos=0;
        equipa12.vitorias=0;
        equipa12.empates=0;
        equipa12.derrotas=0;
        equipa12.golos_marcados=0;
        equipa12.golos_sofridos=0;

        equipa13.pontos=0;
        equipa13.vitorias=0;
        equipa13.empates=0;
        equipa13.derrotas=0;
        equipa13.golos_marcados=0;
        equipa13.golos_sofridos=0;

        equipa14.pontos=0;
        equipa14.vitorias=0;
        equipa14.empates=0;
        equipa14.derrotas=0;
        equipa14.golos_marcados=0;
        equipa14.golos_sofridos=0;

        equipa15.pontos=0;
        equipa15.vitorias=0;
        equipa15.empates=0;
        equipa15.derrotas=0;
        equipa15.golos_marcados=0;
        equipa15.golos_sofridos=0;

        equipa16.pontos=0;
        equipa16.vitorias=0;
        equipa16.empates=0;
        equipa16.derrotas=0;
        equipa16.golos_marcados=0;
        equipa16.golos_sofridos=0;

        equipa17.pontos=0;
        equipa17.vitorias=0;
        equipa17.empates=0;
        equipa17.derrotas=0;
        equipa17.golos_marcados=0;
        equipa17.golos_sofridos=0;

        equipa18.pontos=0;
        equipa18.vitorias=0;
        equipa18.empates=0;
        equipa18.derrotas=0;
        equipa18.golos_marcados=0;
        equipa18.golos_sofridos=0;

//Escrever as equipas e a pontuaçao a zero (nao é assim que devemos fazer)

        printf("%s     %d %d %d %d %d %d \n",equipa1.equipa,equipa1.pontos,equipa1.vitorias,equipa1.empates,equipa1.derrotas,equipa1.golos_marcados,equipa1.golos_sofridos);
        printf("%s     %d %d %d %d %d %d \n",equipa2.equipa,equipa2.pontos,equipa2.vitorias,equipa2.empates,equipa2.derrotas,equipa2.golos_marcados,equipa2.golos_sofridos);
        printf("%s     %d %d %d %d %d %d \n",equipa3.equipa,equipa3.pontos,equipa3.vitorias,equipa3.empates,equipa3.derrotas,equipa3.golos_marcados,equipa3.golos_sofridos);
        printf("%s     %d %d %d %d %d %d \n",equipa4.equipa,equipa4.pontos,equipa4.vitorias,equipa4.empates,equipa4.derrotas,equipa4.golos_marcados,equipa4.golos_sofridos);
        printf("%s     %d %d %d %d %d %d \n",equipa5.equipa,equipa5.pontos,equipa5.vitorias,equipa5.empates,equipa5.derrotas,equipa5.golos_marcados,equipa5.golos_sofridos);
        printf("%s     %d %d %d %d %d %d \n",equipa6.equipa,equipa6.pontos,equipa6.vitorias,equipa6.empates,equipa6.derrotas,equipa6.golos_marcados,equipa6.golos_sofridos);
        printf("%s     %d %d %d %d %d %d \n",equipa7.equipa,equipa7.pontos,equipa7.vitorias,equipa7.empates,equipa7.derrotas,equipa7.golos_marcados,equipa7.golos_sofridos);
        printf("%s     %d %d %d %d %d %d \n",equipa8.equipa,equipa8.pontos,equipa8.vitorias,equipa8.empates,equipa8.derrotas,equipa8.golos_marcados,equipa8.golos_sofridos);
        printf("%s     %d %d %d %d %d %d \n",equipa9.equipa,equipa9.pontos,equipa9.vitorias,equipa9.empates,equipa9.derrotas,equipa9.golos_marcados,equipa9.golos_sofridos);
        printf("%s     %d %d %d %d %d %d \n",equipa10.equipa,equipa10.pontos,equipa10.vitorias,equipa10.empates,equipa10.derrotas,equipa10.golos_marcados,equipa10.golos_sofridos);
        printf("%s     %d %d %d %d %d %d \n",equipa11.equipa,equipa11.pontos,equipa11.vitorias,equipa11.empates,equipa11.derrotas,equipa11.golos_marcados,equipa11.golos_sofridos);
        printf("%s     %d %d %d %d %d %d \n",equipa12.equipa,equipa12.pontos,equipa12.vitorias,equipa12.empates,equipa12.derrotas,equipa12.golos_marcados,equipa12.golos_sofridos);
        printf("%s     %d %d %d %d %d %d \n",equipa13.equipa,equipa13.pontos,equipa13.vitorias,equipa13.empates,equipa13.derrotas,equipa13.golos_marcados,equipa13.golos_sofridos);
        printf("%s     %d %d %d %d %d %d \n",equipa14.equipa,equipa14.pontos,equipa14.vitorias,equipa14.empates,equipa14.derrotas,equipa14.golos_marcados,equipa14.golos_sofridos);
        printf("%s     %d %d %d %d %d %d \n",equipa15.equipa,equipa15.pontos,equipa15.vitorias,equipa15.empates,equipa15.derrotas,equipa15.golos_marcados,equipa15.golos_sofridos);
        printf("%s     %d %d %d %d %d %d \n",equipa16.equipa,equipa16.pontos,equipa16.vitorias,equipa16.empates,equipa16.derrotas,equipa16.golos_marcados,equipa16.golos_sofridos);
        printf("%s     %d %d %d %d %d %d \n",equipa17.equipa,equipa17.pontos,equipa17.vitorias,equipa17.empates,equipa17.derrotas,equipa17.golos_marcados,equipa17.golos_sofridos);
        printf("%s     %d %d %d %d %d %d \n",equipa18.equipa,equipa18.pontos,equipa18.vitorias,equipa18.empates,equipa18.derrotas,equipa18.golos_marcados,equipa18.golos_sofridos);


}

int main()
{
    int n=18;
    char equipa[18][14]= {"Arouca", "Belenenses", "Benfica", "Boavista", "Braga", "Estoril", "Famalicao", "Gil Vicente", "Maritimo", "Moreirense", "Pacos Ferreira", "Porto", "Portimonense", "Santa Clara", "Sporting", "Tondela", "Vitoria", "Vizela"};
    Equipas();

  getchar();
  return 0;
}
