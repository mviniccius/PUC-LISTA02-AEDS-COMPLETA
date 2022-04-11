#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int ex01();
int ex02();
int ex03();
int ex04();
int ex05();
int ex06();
int ex07();
int ex08();
int ex09();
int ex10();

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("LISTA 2 DE EXERCICIOS\n\n");

    int numero, menu;

    printf("Digite 1 para entrar e 0 para sair:");
    scanf("%i", &menu);

    while(menu!=0){
    printf("Digite o numero do exercicio: 1 a 10\n");
    scanf("%i",&numero);

            switch(numero){

            case 1:
                ex01();
                break;
            case 2:
                ex02();
                break;
            case 3:
                ex03();
                break;
            case 4:
                ex04();
                break;
            case 5:
                ex05();
                break;
            case 6:
                ex06();
                break;
            case 7:
                ex07();
                break;
            case 8:
                ex08();
                break;
            case 9:
                ex09();
                break;
            case 10:
                ex10();
                break;
            default:
                printf("Opção invalida\n");
            }
    printf("Digite 1 para entrar e 0 para sair:\n");
    scanf("%i", &menu);
    }

    printf("OBRIGADO!\n");



    return 0;
}

int ex01(){
/*              Entrada            Saida
                    2                 O número é par
                    5                 O número é impar
*/

    printf("Exercício 1\n");
    printf("1.Fazer um algoritmo que leia um numero inteiro e mostre uma mensagem indicando se este numero e par ou impar.\n");

    int num;

    printf("Digite um número inteiro: \n");
    scanf("%i", &num);

    if(num%2 == 0){
        printf("O número é par: %i", num%2 == 0);
    }else{
    printf("O número é impar: %i", num%2 != 0);
    }

printf("\n\n");
return 0;
}

int ex02(){

/*
            ENTRADA                   SAIDA
        MARCUS 5 5 5                MARCUS REPROVADO MEDIA 5
        MARCUS 8 8 8                MARCUS APROVADO MEDIA 8
*/


    printf("Exercício 2\n");
    printf("2.Fazer um algoritmo peça o nome e as 3 notas de um aluno e mostre, além do nome e do valor da media do aluno, ");
    printf("uma mensagem de Aprovado, caso a media seja igual ou superior a 6, ou a mensagem reprovado,");
    printf("caso contrario.\n");

    int nota1, nota2, nota3, media;
    char nome[50];


    printf("Digite o nome do aluno: \n");
    fflush(stdin);
    gets(nome);

    printf("Digite as tres notas do aluno: \n");
    scanf("%i %i %i", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3)/3;

    if(media >= 6){
        printf("Aprovado!\n");
        printf("O aluno %s foi aprovado com a média %i", nome, media);
    }else{
    printf("Reprovado\n");
    printf("O aluno %s foi reprovado com a média %i", nome, media);
    }
printf("\n\n");
return 0;
}

int ex03(){

/*              ENTRADA            SAIDA
                    -1              SOLIDO
                    50              LIQUIDO
                    150             GASOSO
*/

    printf("Exercício 3\n");
    printf("3.Fazer um algoritmo que leia a temperatura da água e mostre se está no estado solido, líquido ou gasoso.");

    int temperatura;

    printf("Digite a temperatura da água: ");
    scanf("%i",&temperatura);

    if(temperatura <= 0){
        printf("Estado sólido");
    }else{
        if(temperatura > 0 && temperatura < 100){
        printf("Estado liquido");
        }else{
            printf("Estado gasoso");
        }
    }
printf("\n\n");
return 0;
}

int ex04(){
/*              ENTRADA             SAIDA
                -1                      5
                1                       -2

*/
    printf("Exercício 4\n");
    printf("4.Leia um valor X e se ele for menor que 0 avalie Y = x^2 + 4. Se ele for maior que 0 avalie x^3 - 3 e se ele for igual a 0 de ");
    printf("uma mensagem de erro.\n");

    int x, y;
    printf("Digite um valor inteiro para X: \n");
    scanf("%i", &x);

    if(x < 0){
        y = (x * x) + 4;
        printf("%i", y);
    }else{
        if(x > 0){
            y = (x * x * x) - 3;
            printf("%i", y);
        }else{
        printf("ERRO!");
        }
    }

printf("\n\n");
return 0;
}

int ex05(){

/*
            ENTRADA                 SAIDA
            123                     123
            132
            213
            231
            312
            321
*/

    printf("Exercício 5\n");
    printf("5.Construa um algoritmo que receba como entrada três valores (A,B e C). Após o processamento o menor valor ");
    printf("deverá estar em A e o maior valor em C, e o valor intermediário em B. Imprima A,B e C.\n");

    int A, B, C, aux, aux2;

    printf("Digite o valor de A: \n");
    scanf("%i", &A);

    printf("Digite o valor de B: \n");
    scanf("%i", &B);

    printf("Digite o valor de C: \n");
    scanf("%i", &C);


    // possibilidades: 123,321, 132, 213, 312, 231

    if(A < B && B < C ){                 // ordem crescente 1 2 3
        printf("Valor de A: %i\n",A);
        printf("Valor de B: %i\n",B);
        printf("Valor de C: %i\n",C);
    }else{
        if(A > B && B > C){              // troca o C e o A de lugar DECRESCENTE 3 2 1

            aux = C;
            C = A;
            A = aux;

        printf("Valor de A: %i\n",A);
        printf("Valor de B: %i\n",B);
        printf("Valor de C: %i\n",C);
        }else{
            if(C > A && B > C){          // troca o B e o C de lugar 1 3 2
                aux = B;
                B = C;
                C = aux;

            printf("Valor de A: %i\n",A);
            printf("Valor de B: %i\n",B);
            printf("Valor de C: %i\n",C);
            }else{
                if(A > B && C > A){          // troca o A e o B de lugar 2 1 3
                    aux = A;
                    A = B;
                    B = aux;

            printf("Valor de A: %i\n",A);
            printf("Valor de B: %i\n",B);
            printf("Valor de C: %i\n",C);

                }else{
                    if(C > B && C < A){                //troca o A e o C 312
                        aux = A;
                        A = C;
                        C = aux;

                        aux = A;
                        A = B;
                        B = aux;
            printf("Valor de A: %i\n",A);
            printf("Valor de B: %i\n",B);
            printf("Valor de C: %i\n",C);
                    }else{
                                            // C < A && B > A     231

                            aux = C;
                            C = B;
                            B = aux;

                            aux2 = A;
                            A = B;
                            B = aux2;

            printf("Valor de A: %i\n",A);
            printf("Valor de B: %i\n",B);
            printf("Valor de C: %i\n",C);

                    }
                }
            }
        }
    }

printf("\n\n");
return 0;
}

int ex06(){

/*
                ENTRADA                          SAIDA
                8 4 2                               1 0 0 0
                8 4 3                               0 1 0 0
                8 3 4                               0 0 1 0
                8 3 5                               0 0 0 1

*/

    printf("Exercício 6\n");
    printf("6.Desenvolver um algoritmo que leia três números inteiros: X, Y, Z e verifique se o número X é divisível por Y e por Z.\n");

    int X, Y, Z;

    printf("Digite o valor de X: \n");
    scanf("%i", &X);

    printf("Digite o valor de Y: \n");
    scanf("%i", &Y);

    printf("Digite o valor de Z: \n");
    scanf("%i", &Z);


    printf("O algoritmo deverá mostrar as possíveis mensagens:\n");
    printf("     -o número é divisível por Y e Z. %i  \n", X%Y==0 && X%Z==0);
    printf("     -o número é divisível por Y mas não por Z.  %i\n", X%Y==0 && X%Z!=0);
    printf("     -o número é divisível por Z mas não por Y.  %i\n", X%Y!=0 && X%Z==0);
    printf("     -o número não é divisível nem Y nem por Z.  %i\n", X%Y!=0 && X%Z!=0);


printf("\n\n");
return 0;
}

int ex07(){

/*
                ENTRADA                 SAIDA
                3025                    POSSUI CARACTERISTICA
                2348                    NÃO POSSUI A CARACTERISTICA
*/

    printf("Exercício 7\n");
    printf("O numero 3025 possui a seguinte característica:\n");
    printf("30 + 25 = 55  => 55^2 = 3025\n");
    printf("Fazer um algoritmo que dado um numero de 4 dígitos (verifique se o número pertence a faixa) calcule e escreva se ele possui ou não esta característica.\n");

    int numero, Q, R, soma, potencia;
    printf("Digite um numero de 4 digitos\n");
    scanf("%i",&numero);

    if(numero > 999 && numero <10000){
        Q = numero/100;
        R = numero % 100;

        soma = Q + R;
        potencia = soma*soma;

        if(potencia == numero){

            printf("O numero %i tem a característica\n", numero);
        }else{
            printf("O numero %i não tem a característica\n",numero);
        }
    }else{
        printf("O numero invalido\n");
    }

return 0;
}

int ex08(){

/*
                ENTRADA        SAIDA
                221            Bernardo
                211            Eustáquio
                311            Luiz
                312            Mário
                332            Artur
                111            OPÇÃO INVALIDA
*/

    printf("Exercicio 8\n");
    printf("- ler um código do teclado e mostrar o nome correspondente, de acordo com a lista:\n");
    printf("     221 Bernardo\n");
    printf("     211 Eustáquio\n");
    printf("     311 Luiz \n");
    printf("     312 Mário\n");
    printf("     332 Artur\n");


    int codigo;

    printf("Digito o código: \n");
    scanf("%i", &codigo);

    switch(codigo){

    case 221:
        printf("Bernardo");
        break;
    case 211:
        printf("Eustáqio");
        break;
     case 311:
        printf("Luiz");
        break;
     case 312:
        printf("Mário");
        break;
     case 332:
        printf("Artur");
        break;
     default:
        printf("Opção inválida");

    }
return 0;
}

int ex09(){

/*
            ENTRADA                    SAIDA
            42124                       É PALINDROMO
            12345                       NÃO É PALINDROMO
            1234                        OPÇAO INVALIDA
            123456                      OPÇÃO INVALIDA
*/

    printf("Exercício 9\n");
    printf("Números palíndromos são aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor.\n Exemplo:929, 44, 97379. \nFazer um algoritmo que dado um numero de 5 dígitos; calcule e escreva se este e ou não palíndromo.\n");

    int numero, num1, num2, num3, num4, num5, aux, trocado;

    printf("Digite um número de 5 dígitos: \n");
    scanf("%i", &numero);

    if(numero > 9999 && numero < 100000){

       num1 = numero / 10000;
       aux = numero % 10000;

       num2 = aux / 1000;
       aux = aux % 1000;

       num3 = aux / 100;
       aux = aux % 100;

       num4 = aux / 10;

       num5 = aux %10;

       trocado = (num5 * 10000) + (num4 * 1000) + (num3 * 100) + (num2 * 10) + (num1 * 1);

       if(numero == trocado){
        printf("O número %i é palíndromo", numero);
       }else{
            printf("o número %i não é palindromo", numero);
       }


    }else{
        printf("Número inválido");
    }
return 0;
}

int ex10(){

/*
            ENTRADA                 SAIDA
            1 80                       355
            1 100                      425
            2 50                       500
            2 85                       527,50
            3 75                       800
            3 101                      808

*/


    printf("Exercício 10\n");
    printf("Desenvolver um algoritmo para calcular a conta de água para a SANEAGO.\nO custo da água varia dependendo do tipo doconsumidor - residencial, comercial ou industrial");
    printf("A regra para calcular a conta e:\n");
    printf("Residencial: R$ 75,00 de taxa mais R$ 3,50 por m3 gastos;\n");
    printf("Comercial: R$ 500,00 para os primeiros 80 m3 gastos mais R$ 5,50 por m3 gastos acima dos 80 m3;\n");
    printf("Industrial: R$ 800,00 para os primeiros 100 m3 gastos mas R$ 8,00 por m3 gastos acima dos 100 m3\n\n");

    int escolha;

    printf("Escolha o tipo do consumidor:\n");
    printf("1 - residencial\n");
    printf("2 - comercial\n");
    printf("3 - industrial\n");
    scanf("%i", &escolha);

    switch (escolha){
    case 1:
        printf("Consumo residencial\n\n");

        float taxa = 75.00, preco = 3.5, consumo, total;

        printf("Informe a quantidade de água consumida: \n");
        scanf("%f",&consumo);

        total = taxa + (consumo * preco);

        printf("o total a pagar é:R$%.2f\n", total);
        break;

    case 2:
        printf("Consumo comercial\n\n");

        float taxaC = 500.00, precoC = 5.5, consumoC, totalC;

        printf("Informe a quantidade de água consumida: \n");
        scanf("%f",&consumoC);

        if(consumoC > 80.00){

            totalC = taxaC + ((consumoC - 80.00) * precoC);
            printf(" total%.2f\n", totalC);
        }else{
        printf("Total %.2f\n", taxaC);
        }
        break;

    case 3:
        printf("Consumo industrial");

         float taxaI = 800.00, precoI = 8.00, consumoI, totalI;

        printf("Informe a quantidade de água consumida: \n");
        scanf("%f",&consumoI);

        if(consumoI > 100.00){

            totalI = taxaI + ((consumoI - 100.00) * precoI);
            printf("total %.2f\n", totalI);
        }else{
        printf("Total %.2f\n", taxaI);
        }
        break;
    default:
        printf("Opção inválida\n");

    }


return 0;
}
