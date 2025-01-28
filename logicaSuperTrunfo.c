#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    
    char cidadeA[50];
    char cidadeB[50];
    char estadoA[30];
    char estadoB[30];
    char codigoA[20],codigoB[20];
    float pibA,pibB;
    float areaA,areaB;
    float populacaoA,populacaoB;
    int turisticoA,turisticoB;


    printf("Desafio Super Trunfo - Países\n");
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    //primeira cidade
    printf("ENTRE COM OS DADOS DA PRIMEIRA CIDADE!\n");
    printf("Digite o codigo da cidade :");
    scanf("%s",&codigoA);

    printf("Digite o Nome da cidade :");
    scanf("%s",&cidadeA);

    printf("Digite seu Estado :");
    scanf("%s",&estadoA);

    printf("Digite sua população :");
    scanf("%f",&populacaoA);

    printf("Digite o PIB da cidade :");
    scanf("%f",&pibA);

    printf("Digite a área da cidade:");
    scanf("%f",&areaA);

    printf("Digite o numero de pontos turisticos tem a cidade :");
    scanf("%d",&turisticoA);

    //exibição do cadastro em ordem para checagem
    printf("Dados cadastrados com sucesso!\n");
    printf("Dados da primeira cidade:\n");
    printf("Estado: %s",estadoA);
    printf("Codigo da carta:%s",codigoA);
    printf("Nome da Cidade:%s",cidadeA);
    printf("População:%f",populacaoA);
    printf("Área:%f km²",areaA);
    printf("PIB:%f bilhões de reais",pibA);
    printf("Numero de pontos Turisticos: %d \n",turisticoA);


    //segunda cidade
    printf("ENTRE COM OS DADOS DA SEGUNDA CIDADE!\n");
    printf("Digite o codigo da cidade :");
    scanf("%s",&codigoB);

    printf("Digite o Nome da cidade :");
    scanf("%s",&cidadeB);

    printf("Digite seu Estado :");
    scanf("%s",&estadoB);

    printf("Digite sua população :");
    scanf("%f",&populacaoB);

    printf("Digite o PIB da cidade :");
    scanf("%f",&pibB);

    printf("Digite a área da cidade:");
    scanf("%f",&areaB);

    printf("Digite o numero de pontos turisticos tem a cidade :");
    scanf("%d",&turisticoB);

    //exibição do cadastro em ordem para checagem
    printf("Dados cadastrados com sucesso!\n");
    printf("Dados da Segunda cidade:\n");
    printf("Estado: %s",estadoB);
    printf("Codigo da carta:%s",codigoB);
    printf("Nome da Cidade:%s",cidadeA);
    printf("População:%f",populacaoB);
    printf("Área:%f km²",areaB);
    printf("PIB:%f bilhões de reais",pibB);
    printf("Numero de pontos Turisticos: %d \n",turisticoB);

 



    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    
    if (populacaoA>populacaoB)
    {
        printf("Cidade A tem maior população.\n");
     
           }
    else{
        printf("Cidade B tem maior população.\n");
     
    }

    if (pibA>pibB)
    {
       printf("Cidade A tem maior PIB.\n"); 
       
    } else
    {
        printf("Cidade B tem maior PIB.\n");
    }

     if (areaA>areaB)
    {
       printf("Cidade A tem maior Área.\n"); /* code */
    } else{
        printf("Cidade B tem maior Área.\n");
    }

     if (turisticoA>turisticoB)
    {
       printf("Cidade A tem mais pontos turisticos .\n"); /* code */
    } else{
        printf("Cidade B tem mais pontos turisticos .\n");
    }
    
    
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
