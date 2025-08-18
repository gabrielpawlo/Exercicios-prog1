#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float quadrado(float quad){

    quad = (quad * quad);

    return quad;
}

void ehPar(int num){

    if(num % 2 == 0)
        printf("ehPar");
    else
        printf("Invalido");

}

int divisorComum(int n1, int n2){

    int resto;

   while(n2 != 0){
    resto = n1 % n2;
    n1 = n2;
    n2 = resto;
   }
  return n1;
}

float maiorNumero(float num1, float num2){
    if(num1 > num2)
        return num1;
    else
        return num2;
}

int calcularFatoria(int num){

    int resultado = 1;

    for(int i = 1; i <= num; i++){
        resultado = resultado * i;
    }
    return resultado;
}

void calculaIdade(int idade){

    printf("Escreva sua idade: ");
    scanf("%d", &idade);

    if(idade <= 12 && idade > 0)
        printf("Crianca");
    else if(idade > 12 && idade < 18)
        printf("Adolescente");
    else if(idade >= 18)
        printf("Adulto");
    else
        printf("Invalido");
}

void calcularPrimo(int numero){

    int contado = 0;

    for(int i = 1; i <= numero; i++){
        if(numero % i == 0){
            contado++;
        }
    }

    if(contado == 2)
        printf("Primo");
    else
        printf("Invalido");
}

float converter(float celsius){

    float fa;

    fa = (celsius * 1.8) + 32;

    return fa;
}



//SUB-ROTINAS
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int i = 0;
    int j = 0;
    int pares = 0;
    int n1 = 0;
    int n2 = 1;
    int linhas, numero, divisores, proximo;
    char letra;
    int idade = 1;
    //float altura;
    float salario = 0;

    system("color e8");//segundo algorismo cor da letra

    /*while(i<101){ //QUESTAO 3.2

    printf("%d\n", i++);
    }*/

   /* while(i<51){//QUESTAO 3.3
        i++;
        if(i % 2 == 0)
            pares += i;
    }
    printf("A soma dos numeros pares eh: %d", pares);*/



   /* printf("Digite um numero inteiro positivo: ");//QUESTAO 3.4
    scanf("%d", &i);

    if(i <= 0){
        printf("\nO numero deve ser positivo");
    }

    printf("\nOs divisores de %d eh: ", i);


    for(divisores = 1; divisores <= i; divisores++ ){
        if(i % divisores == 0){
            printf("\n%d", divisores);
        }
    }*/


    /*for(i = 1;  i<=15 ; i++){//n1 = 0 n2 = 1//QUESTÃO 3.5
         printf("%d\n", n1);
         proximo = n1 + n2;//proximo 0 + 1 -- 1 + 1
         n1 = n2;//n1 = n2 = 1
         n2 = proximo;//n2 = 1

}*/


    /*for(i = 4; i <= 8; i++){//esse laço roda uma vez e fica aumentando o valor de i
        for(j = 1; j <= i; j++){//esse laço fica rodando
            printf("*");// printa j até j ser = i || onde i = linhas
        }
        printf("\n");*/


    /*for(i = 1; i <= 10; i++){//calculadora 1 a 10
        for(j = 1; j <= 10; j++){
            printf("%d\t", i*j);
        }
    printf("\n");
    }*/


    /*printf("Digite o numero de linhas: ");//TRIANGULO INVERTIDO
    scanf("%d", &linhas);

    for(i = 1; i <= linhas; i++){//esse laço roda uma vez e fica aumentando o valor de i
        for(j = linhas; j >= i; j--){//esse laço fica rodando
            printf("%d", j);// printa j até j ser = i || onde i = linhas
        }
        printf("\n");
    }*/

    /*printf("Digite uma letra: ");
    scanf("%c", &letra);


        if(letra == 'a' ||letra == 'e' ||letra == 'i' ||letra == 'o' ||letra == 'u' || letra == 'A' ||letra == 'E' ||letra == 'I' ||letra == 'O' ||letra == 'U'){
            printf("%c eh uma vogal", letra);
        }else{
            printf("%c eh uma consoante", letra);
        }
    }
    else{
        printf("caraquetere invalido");
    }*/


    /*int soma = 0;//-1 sendo o parar
    float media = 0;
    int cont = 0;

    do{
        printf("Digite um numero:");
        scanf("%d", &numero);

        if(numero != -1){
            soma += numero;
            cont++;
        }
    }while(numero != -1);

    if(cont > 0){
        media = soma/cont;
        printf("A soma eh: %d\n", soma);
        printf("A quantidade de numeros: %d\n", cont);
        printf("A media eh: %2.f\n", media);

    }*/

    /*int x1 = 0;// fibonacci 10
    int x2 = 1;
    int prox;

    for(i = 1; i <= 10; i++){
        printf("%d\n", x1);

        prox = x1 + x2;
        x1 = x2;
        x2 = prox;
    }*/
    /*printf("Digite um numero: ");// verifica se o numero eh primo
    scanf("%d", &numero);

    if(numero <= 1){
        printf("%d nao eh primo", numero);
        return 0;
    }

    for(i = 1; i <= numero; i++){
        if(numero % i == 0){
            divisores ++;
        }
    }

    if(divisores == 2){
        printf("%d eh primo", numero);
    } else{
        printf("%d nao eh primo", numero);
    }

    printf("\n\n%d", divisores);*/

    /*printf("Digite o numero que voce quer saber o multiplo entre 1 e 50: ");
    scanf("%d", &numero);

    for(i = 1; i <= 50; i++){
        if(i % numero == 0){
            printf("%d\n",i);
        }

    }*/

    /*int quant = 0;
    int soma = 0;
    float media= 0;


    do{

        printf("Digite um numero: ");
        scanf("%d", &numero);

        if(numero != 0){
        quant++;
        soma = numero + soma;
        //media = (soma / quant);

        printf("Quantidade: %d  Soma: %d\n", quant, soma);
        }

 } while(numero != 0);


    /*float media = 0;
    int notas = 0;
    int quant= 0;
    int quant2= 0;
    int soma = 0;

    for(i = 1; i <= 5; i++){
        printf("Digite a nota: ");
        scanf("%d", &n1);
        quant2++;

        if(n1 < 0 || n1 > 10){
            printf("Valor invalido");
        }else if(n1 >= 6){
            quant++;
        }
        soma = n1 + soma;
        media = (soma/quant2);
 }

    printf("Acima da media: %d Media: %.2f", quant, media);*/

    /*i = 1;

    do{
        printf("Digite um numero: ");
        scanf("%d", &i);


    }while(i != 0);*/


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   //ESTUDAR PARA P2

    //float result = maiorNumero(2.99,3.96);
    //printf("maior numero eh :%.2f", result);

    //int resultado = calcularFatoria(5);
    //printf("%d", resultado)


    //calcularPrimo(9);

    //float conversao = converter(30);
    //printf("fahrenheit %f", conversao);

    //float quadra = quadrado(9);
    //printf("quadrado: %.2f", quadra);

    //ehPar(8);

    //int divisor = divisorComum(9,81);
    //printf("%d", divisor);


    /*int maior;
    int menor;
    int r;
    int vetor[10];
    int valor;

    for(int r = 0; r < 10; r++){

        printf("Digite um numero inteiro: ");
        scanf("%d", &vetor[r]);

    }

    maior = vetor[0];
    menor = vetor[0];

    for(int o = 0; o < 10; o++){
        if(vetor[o] < menor)
            menor = vetor[o];
        else if(vetor[o] > maior)
            maior = vetor[o];
    }

    printf("maior: %d e menor: %d", maior, menor);*/


    /*float vetor[10];
    float soma;
    float media = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%f", &vetor[i]);
    }

    for(int o = 0; o < 10; o++){
        soma += vetor[o];
    }

    media = (soma / 10);
    printf("%.2f", media);*/

    /*char invertida[100];
    char invertida1[100];
    int temp;

    printf("Digite um nome: ");
    scanf("%s", &invertida);

    strcpy(invertida1, invertida);

    size_t length = strlen(invertida);

    for(int i = 0, j = length - 1; i < j; i++, j--){

        temp = invertida[i];
        invertida1[i] = invertida1[j];
        invertida1[j] = temp;
   }

   if(strcmp(invertida, invertida1) == 0){
        printf("Palindrono");
  } else {
        printf("Invalido");
   }*/

   int vetor[5];
   int soma = 0;

   for(int i = 0; i < 5; i++){

        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);

        soma += vetor[i];
   }
   
   printf("A soma eh: %d", soma);
   
   


   return 0;
}