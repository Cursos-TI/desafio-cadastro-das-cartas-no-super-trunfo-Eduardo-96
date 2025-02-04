#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
/*
Teste Eduardo Celente Ocampos
 Programa efetuado de forma semples sem a necessidade de separação de palavaras ou numeros altos.
efetuado tudo com simplicidade, no proximo eu irei implementar a juntura de duas palavras para cadastra uma cidade com nome composta e a
 aceitação de long float para numeros grandes.
*/
int main() {
       
    
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int codigo_da_cidade, pontos_turistico;
    char nome_cidade[50];
    float populacao, pib, area;
     
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf ("**** Olá, vamos cadastrar uma cidade *****\n  \n Lembre você precisa inserir corretamente as informações \n \n");
    // código da cidade    
    printf (" Cire um código para a cidade: \n");
    scanf  (" %d", &codigo_da_cidade);

    printf (" Informe a Cidade: \n");
    scanf  (" %s", &nome_cidade);

    printf (" Informe a população: \n");
    scanf  (" %f", &populacao);

    printf (" Informe a área da Cidade: \n");
    scanf  (" %f", &area);

    printf (" Informe a quantidade de ponstos turisticos que tem na cidade: \n");
    scanf  (" %d", &pontos_turistico);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf(" Beleza, essas foram as informações que você colocou\n Codigo da cidade é :%d\n A Cidade escolhida é: %s\n A população é: %3.f\n A area da cidade é: %3.f\n A quantidade de pontos turisticos é %d",codigo_da_cidade, nome_cidade, populacao, area, pontos_turistico, populacao ); 

   
    
    

    return 0;
}
