#include <stdio.h>


//declarando as variaveis

char estado1, estado2, codigo1[5], codigo2[5], cidade1[50], cidade2[50];
int turismo1, turismo2;
unsigned long int populacao1, populacao2, superP1, superP2;
float pib1, pib2, area1, area2, ppca1, ppca2, dens1, dens2;

//função para coleta de dados das cartas

void coletaDados(void){

//Mensagem que deve aparecer ao começar a coleta de informações

    printf("_______________________________________\n");
    printf("Digite as informações da PRIMEIRA Carta:\n");
    printf("_______________________________________\n");

//Primeira carta

    printf("Digite uma letra para esse estado, de A-H:\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta; A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf(" %4s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%49s", cidade1);

    printf("Digite o número populacional:\n");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turismo1);

//Essa mensagem deve aparecer na coleta das informações da segunda carta

    printf("_______________________________________\n");
    printf("Digite as informações da SEGUNDA Carta:\n");
    printf("_______________________________________\n");

//Segunda Carta

    printf("Digite uma letra para esse estado, de A-H:\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta; A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%4s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%49s", cidade2);

    printf("Digite o número populacional:\n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turismo2);

}

//funcao para a exposicao de dados

void mostrarDados(void){
    
//Exibibçao das Informações das cartas    

    printf("-----------------------------------------\n");
    printf("-----------------CARTAS------------------\n");
    printf("-----------------------------------------\n");

    printf("_________________________________________\n");

//calculo para densidade e pib per capta;

    dens1 = (float) populacao1 / area1;
    ppca1 = (float) pib1 / populacao1;
    superP1 = populacao1 + area1 + pib1 + turismo1 + ppca1 + (1 / dens1);
   

    printf("Carta 1:\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", turismo1);
    printf("Densidade populacional: %.2f hab/km²\n", dens1);
    printf("PIB per capta: %.2f Reais\n", ppca1);
    printf("Super Poder: %lu\n", superP1);
    printf("_________________________________________\n");
    
//calculo para densidade e pin per capta;

    dens2 = (float) populacao2 / area2;
    ppca2 = (float) pib2 / populacao2;
    superP2 = populacao2 + area2 + pib2 + turismo2 + ppca2 + (1 / dens2);

    printf("Carta 2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", turismo2);
    printf("Densidade populacional: %.2f hab/km²\n", dens2);
    printf("PIB per capta: %.2f Reais\n", ppca2);
    printf("Super Poder: %lu\n\n", superP2);


    printf("_______________________________________\n");
    printf("________!!!!RESULTADO FINAL!!!!________\n");
    printf("_______________________________________\n\n");

    //comparando atributos de população.
      if(populacao1 > populacao2){
        printf("População: (%lu) Carta 1 (%s) venceu!\n", populacao1, cidade1);
    } else {
        printf("População: (%lu) Carta 2 (%s) venceu!\n", populacao2, cidade2);
    }

    //comparando atributos de área.
      if(area1 > area2){
        printf("Área: (%f) Carta 1 (%s) venceu!\n", area1, cidade1);
    } else {
        printf("Área: (%f) Carta 2 (%s) venceu!\n", area2, cidade2);
    }

    //comparando atributos do PIB.
      if(pib1 > pib2){
        printf("PIB: (%f) Carta 1 (%s) venceu!\n", pib1, cidade1);
    } else {
        printf("PIB: (%f) Carta 2 (%s) venceu!\n", pib2, cidade2);
    }

    //comparando os números de pontos turísticos.
      if(turismo1 > turismo2){
        printf("Pontos Turísticos: (%d) Carta 1 (%s) venceu!\n", turismo1, cidade1);
    } else {
        printf("Pontos Turísticos: (%d) Carta 2 (%s) venceu!\n", turismo1, cidade2);
    }

    //comparando a densidade populaciuonal.
      if(dens1 < dens1){
        printf("Densidade Populacional: (%f) Carta 1 (%s) venceu!\n", dens1, cidade1);
    } else {
        printf("Densidade Populacional: (%f) Carta 2 (%s) venceu!\n", dens2, cidade2);
    }

    //comparando o pib per capta.
      if(ppca1 > ppca2){
        printf("Pib Per Capta: (%f) Carta 1 (%s) venceu!\n", ppca1, cidade1);
    } else {
        printf("Pib Per Capta: (%f) Carta 2 (%s) venceu!\n", ppca2, cidade2);
    }

    //comparando o super poder.
      if(superP1 > superP2){
        printf("Super Poder: (%lu) Carta 1 (%s) venceu!\n", superP1, cidade1);
    } else {
        printf("Super Poder: (%lu) Carta 2 (%s) venceu!\n", superP2, cidade2);
    }



  
           
}

    
    int main (){
        
        coletaDados();
        mostrarDados();
        
return 0;   
    }