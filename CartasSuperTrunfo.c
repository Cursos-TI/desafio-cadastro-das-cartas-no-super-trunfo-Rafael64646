    #include <stdio.h>

    int main (){
    //primeira carta
    char estado[20];
    char codigo_da_carta[4];
    char nome_da_cidade[50];
    unsigned long int populacao;
    float areakm2; //A área da cidade em quilômetros quadrados
    float PIB;
    int pontos;//A quantidade de pontos turísticos na cidade
    float Densidade_Populacional;
    float PIB_per_Capita;
    float Super_poder;

    //segunda carta
    char estado_2[20];
    char codigo_da_carta_2[4];
    char nome_da_cidade_2[50];
    unsigned long int populacao_2;
    float areakm2_2;//A quantidade de pontos turísticos na cidade
    float PIB_2;
    int pontos_2;//A quantidade de pontos turísticos na cidade
    float Densidade_Populacional_2;
    float PIB_per_Capita_2;
    float Super_poder_2;

    //primeira carta
    printf("insira os dados da carta 1-");

    printf("digite o Estado escolhido:\n");
    scanf("%s",estado);

    printf("digite o código da carta ex:A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s",codigo_da_carta);

    printf("digite o nome da cidade:\n");
    scanf("%s",nome_da_cidade);

    printf("digite a população da cidade:\n");
    scanf("%lu",&populacao);

    printf("digite a area total em km2:\n");
    scanf("%f",&areakm2);

    printf("digite o PIB da cidade:\n");
    scanf("%f",&PIB);

    printf("digite quantos pontos turísticos tem na cidade:\n");
    scanf("%d",&pontos);
    printf("\n\n\n\n\n\n\n\n\n\n\n");

    //segunda carta
    printf("insira os dados da carta 2-\n");

    printf("digite o Estado escolhido:\n");
    scanf("%s",estado_2);

    printf("digite o código da carta ex:A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s",codigo_da_carta_2);

    printf("digite o nome da cidade:\n");
    scanf("%s",nome_da_cidade_2);

    printf("digite a população da cidade:\n");
    scanf("%lu", &populacao_2);

    printf("digite a area total em km2:\n");
    scanf("%f",&areakm2_2);

    printf("digite o PIB da cidade:\n");
    scanf("%f",&PIB_2);

    printf("digite quantos pontos turísticos tem na cidade:\n");
    scanf("%d",&pontos_2);
    printf("\n\n\n\n\n\n");

    //Calculando Densidade Populacional e PIB per Capita

    Densidade_Populacional= (float) populacao / areakm2;
    PIB_per_Capita=(float)PIB / populacao;

    Densidade_Populacional_2=(float) populacao_2 / areakm2_2;
    PIB_per_Capita_2=(float)PIB_2 / populacao_2;

    Super_poder = populacao + areakm2 + PIB + pontos + PIB_per_Capita + areakm2/(float)populacao;
    Super_poder_2 = populacao_2 + areakm2_2 + PIB_2 + pontos_2 + PIB_per_Capita_2 + areakm2_2/(float)populacao_2;

    //exibindo na tela a 1 carta
    printf("Carta 1:\n");
    printf("Estado: %s \n",estado);
    printf("Código: %s \n",codigo_da_carta);
    printf("Nome da Cidade: %s\n",nome_da_cidade);
    printf("População: %lu\n",populacao);
    printf("Área: %.2f km²\n",areakm2);
    printf("PIB: %.2f bilhões de reais\n",PIB);
    printf("Número de Pontos Turísticos: %d\n",pontos);
    printf("Densidade Populacional: %.2f hab/km²\n",Densidade_Populacional);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita);
    printf("\n");
    //exibindo na tela a 2 carta
    printf("Carta 2:\n");
    printf("Estado: %s \n",estado_2);
    printf("Código: %s \n",codigo_da_carta_2);
    printf("Nome da Cidade: %s\n",nome_da_cidade_2);
    printf("População: %lu\n",populacao_2);
    printf("Área: %.2f km²\n",areakm2_2);
    printf("PIB: %.2f  bilhões de reais\n",PIB_2);
    printf("Número de Pontos Turísticos: %d\n",pontos_2);
    printf("Densidade Populacional: %.2f hab/km²\n",Densidade_Populacional_2);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita_2);
    printf("\n\n");
    //vencedores
    /*printf("*** Comparação de cartas ***\n");
    printf("*(1 carta 1 vence, 0 carta 2 vence)*\n");
    printf("População: %d\n",populacao>populacao_2);
    printf("Área: %d\n",areakm2>areakm2_2);
    printf("PIB: %d\n",PIB>PIB_2);
    printf("Pontos Turísticos: %d\n",pontos>pontos_2);
    printf("Densidade Populacional: %d\n",areakm2/(float)populacao > areakm2_2/(float)populacao_2);
    printf("PIB per Capita: %d\n",PIB_per_Capita>PIB_per_Capita_2);
    printf("Super Poder: %d\n",Super_poder>Super_poder_2);*/

    //vencedores com logica
    printf("*** Comparação de cartas ***\n");
    //população
    printf("Carta 1 população: %dpessoas.\n",populacao);
    printf("Carta 2 população: %dpessoas.\n",populacao_2);
    if(populacao>populacao_2) {
    printf("carta 1 venceu em maior população.\n");
    }else if(populacao==populacao_2){
        printf("ninguem venceu.\n");
    }else{
        printf("carta 2 venceu em maior população.\n");
    }
    printf("\n");

    //areakm2
    printf("Carta 1 areakm2: %.2fkm2\n",areakm2);
    printf("Carta 2 areakm2: %.2fkm2\n",areakm2_2);
    if(areakm2>areakm2_2) {
    printf("carta 1 venceu em maior areakm2.\n");
    }else if(areakm2==areakm2_2){
        printf("ninguem venceu.\n");
    }else{
        printf("carta 2 venceu em maior areakm2.\n");
    }
    printf("\n");

    //PIB
    printf("Carta 1 PIB: %.2f\n",PIB);
    printf("Carta 2 PIB: %.2f\n",PIB_2);
    if(PIB>PIB_2) {
    printf("carta 1 venceu em maior PIB.\n");
    }else if(PIB==PIB_2){
        printf("ninguem venceu.\n");
    }else{
        printf("carta 2 venceu em maior PIB.\n");
    }
    printf("\n");

    //
    printf("Carta 1 pontos turísticos: %d\n",pontos);
    printf("Carta 2 pontos turísticos: %d\n",pontos_2);
    if(pontos>pontos_2) {
    printf("carta 1 venceu em maior número de pontos turísticos.\n");
    }else if(pontos==pontos_2){
        printf("ninguem venceu.\n");
    }else{
        printf("carta 2 venceu em maior número de pontos turísticos.\n");
    }
    printf("\n");

    //Densidade Populacional
    printf("Carta 1 Densidade Populacional: %.2f\n",Densidade_Populacional);
    printf("Carta 2 Densidade Populacional: %.2f\n",Densidade_Populacional_2);
    if(Densidade_Populacional<Densidade_Populacional_2) {
    printf("carta 1 venceu em menor número de Densidade Populacional.\n");
    }else if(Densidade_Populacional_2==Densidade_Populacional){
        printf("ninguem venceu.\n");
    }else{
        printf("carta 2 venceu em menor número de Densidade Populacional.\n");
    }
    printf("\n");

    //PIB_per_Capita
    printf("Carta 1 PIB per Capita: %.2f\n",PIB_per_Capita);
    printf("Carta 2 PIB per Capita: %.2f\n",PIB_per_Capita_2);
    if(PIB_per_Capita>PIB_per_Capita_2) {
    printf("carta 1 venceu em maior número de PIB per Capita.\n");
    }else if(PIB_per_Capita==PIB_per_Capita_2){
        printf("ninguem venceu.\n");
    }else{
        printf("carta 2 venceu em maior número de PIB per Capita.\n");
    }
    printf("\n");

    //Super poder
    printf("Carta 1 Super poder: %.2f\n",Super_poder);
    printf("Carta 2 Super poder: %.2f\n",Super_poder_2);
    if(Super_poder>Super_poder_2) {
    printf("carta 1 venceu em Super poderes.\n");
    }else if(Super_poder==Super_poder_2){
        printf("ninguem venceu.\n");
    }else{
        printf("carta 2 venceu em Super poderes.\n");
    }
    printf("\n");

    return 0;
    }
