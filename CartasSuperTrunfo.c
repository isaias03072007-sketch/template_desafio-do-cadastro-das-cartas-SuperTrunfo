#include <stdio.h>
int main() {

    char codigo[10]; // Caracteres/strings. Declara uma variável de caractere   
    char cidade[30]; // Caracteres/strings. Declara uma variável de caractere
    char estado; // Caracteres/strings. Declara uma variável de caractere
    int habitantes; //declara uma varíavel de numero inteiro chamada "habitantes".
    int pontos; //declara uma váriavel de número inteiro chamada "Pontos" 
    float area, PIB; // Casas decimais. Declara uma variável de ponto flutuante chamada "PIB".
    int numero; //declara uma varíavel de numero inteiro chamada "número".

    printf("Desafio Super Trunfo!!") ; //imprime a informação que esta ente aspas.


    printf("Digite as Informações da sua carta:\n"); //imprime a informação que esta ente aspas.

    printf("Carta (número): "); // pede o número da carta
    scanf("%d", &numero); // Lê o que o usuário digita e armazena no local certo com ajudado do %d.

    /* o resto do código segue essa mesma lógica, o que muda é o indicador de dado "%". 
    %d: Imprime um inteiro no formato decimal.
    %i: equivalente a %d.
    %f: Imprime uma variável de ponto flutuante no formato padrão.
    %e: imprime uma variável de ponto flutuante na notção cientifica.
    %c: imprime um único caractere.
    %s: imprime uma cadeia de (string) de caracteres.

    o \n é pra pular uma linha 
*/

    printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &estado);

    printf("Código da Carta (Ex. A01, B03): ");
    scanf(" %s", codigo);

    printf("Nome da Cidade: "); 
    scanf(" %s", cidade); /*eu não consegui fazer um espaço pro usuário escrever um nome de cidade
    quebrado, tipo "são paulo", sempre que escrevo nomes assim o código para, mas funciona bem pra cidades 
    com o nome interio tipo "Lábrea, Manaus..." eu não sei como resolver isso */
    printf("População: ");
    scanf(" %d", &habitantes);

    printf("Área (em Km2): ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos);

    //----------------------------------------------------//

    /*aqui eu apenas coloquei um caracter "1" na frente dos tipos de dados, e repeti o código */

    char codigo1[10];
    char cidade1[30];
    char estado1;
    int habitantes1;
    int pontos1;
    float area1, PIB1;
    int numero1;

    printf("Digite as Informações da sua carta:\n");

    printf("Carta (número): ");
    scanf("%d", &numero1);

    printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &estado1);

    printf("Código da Carta (Ex. A01, B03): ");
    scanf(" %s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %s", cidade1); /*eu não consegui fazer um espaço pro usuário escrever um nome de cidade
    quebrado, tipo "são paulo", sempre que escrevo nomes assim o código para, mas funciona bem pra cidades 
    com o nome interio tipo "Lábrea, Manaus..." eu não sei como resolver isso */

    printf("População: ");
    scanf(" %d", &habitantes1);

    printf("Área (em Km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &PIB1);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos1);

    printf("\n"); //separa as coisas com uma linha imaginaria

    /*a sequencia de printf, abaixo imprime os dados da primeira carta, a atenção nos indicadores "%",
    fora isso oq muda é a semantica, e o printf funciona assim:
    printf("%formato1 %formato2 3formato3" variável1, variável2, variavl3, ...) ;
    
    usei a mesma lógica pra outra carta.*/

    printf("Dados da Carta 1: \n");  
    printf("Carta: %d\n", numero);
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", habitantes);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turisticos: %d\n", pontos); 

    printf("-------------------------------------------------------------\n") ; //separa com uma linha de tracinhos

    printf("Dados da Carta 2: \n");
    printf("Carta: %d\n", numero1);
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", habitantes1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turisticos: %d\n", pontos1); 

return 0; // isso encerra a leitura do código 
} 
