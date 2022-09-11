#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

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

int main()
{
    int op;
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));
    do
    {
        system("CLS");
        printf("0 - Sair do programa\n");
        printf("1 - Exercício 01\n");
        printf("2 - Exercício 02\n");
        printf("3 - Exercício 03\n");
        printf("4 - Exercício 04\n");
        printf("5 - Exercício 05\n");
        printf("6 - Exercício 06\n");
        printf("7 - Exercício 07\n");
        printf("8 - Exercício 08\n");
        printf("9 - Exercício 09\n");
        printf("10 - Exercício 10\n");
        printf("\n- Escolha: ");
        scanf("%i", &op);
        switch (op)
        {
        case 0:
            break;
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
            printf("Numero invalido");
        }
        system("pause");
    } while (op != 0);
}
int ex01()
{
    /**1 - Faça um algoritmo que leia um conjunto de números (X) e imprima a quantidade de números pares
    (QPares) e a quantidade de números impares (QImpares) lidos. Admita que o valor 9999 é utilizado como
    sentinela (FLAG) para fim de leitura. Ex.: 1,2,3,4,5,9999 => Pares=2 Impares=3

                Testes - Entrada: 1, 2, 3, 4, 5 / 2, 6, 7, 8, 9
                         Saida: Pares = 2 Impares = 3 / Pares = 3 Impares = 2
    
    */


    int num, i = 0, I = 0;
    printf("\n- Digite um valor: ");
    scanf("%i", &num);
    while (num != 9999)
    {
        if (num % 2 == 0)
        {
            i++;
        }
        else
        {
            if (num % 2 != 0)
            {
                I++;
            }
            else
            {
                printf("Numero invalido");
            }
        }
        printf("\n- Digite um valor ou 9999 para encerrar: ");
        scanf("%i", &num);
    }
    printf("- Numeros pares: %i\n", i);
    printf("- Numeros impares: %i\n\n", I);
    fflush(stdin);
    getchar();
    return 0;
}
int ex02()
{
    /** 2 - Faça um programa que leia um conjunto indeterminado de números inteiros positivos e imprima o maior, o
    menor e a média aritmética desse conjunto de dados. (Flag -1).
    Execute este programa para os seguintes valores

                            Entrada:  1.1,2,3,-1    Saida: maior: 3 media: 2 menor: 1
                                      2.4,2,1,-1           maior: 4 media: 2.33 menor: 1
                                      3.5,3,2,-1           maior: 5 media: 3.33 menor: 2
                                
    
    */
    int menor, maior = 0, num = 0, ntermo = 0, soma = 0;
    float media = 0;

    printf("\nDigite um valor: ");
    scanf("%i", &num);

    while (num != -1)
    {
        if (num > maior)
        {
            maior = num;
        }

        if (num < menor)
        {
            menor = num;
        }

        soma = soma + num;
        ntermo++;
        media = soma * 1.0 / ntermo;

        printf("\nDigite um valor ou -1 para mostrar o resultado: ");
        scanf("%i", &num);
    }

    printf("O menor valor é: %i ", menor);
    printf("\nO maior valor é: %i ", maior);
    printf("\nA media deles é: %5.2f", media);

    fflush(stdin);
    getchar();
    return 0;
}
int ex03()
{
    /**Escrever um algoritmo em Portugol, para calcular e imprimir o fatorial de um número lido do teclado.
    Ex. Fatorial de 5! = 5x4x3x2x1=120 

                        Entrada: 5          Saida: 120
                                 6                 729  
                                 2                 2 
    
    */
    int num, i;
    printf("Digite um numero: ");
    scanf("%i", &num);
    i = num;
    while (num > 1)
    {
        num = num - 1;
        i = i * num;
    }
    printf("O numero fatorado é: %i\n", i);
    fflush(stdin);
    getchar();
    return 0;
}
int ex04()
{
    /** 4 ? Calcule o valor da seguinte série lido a quantidade de termos: */

    int i, ntermos, D = 1, sinal = 1;
    float S = 0, F;

    printf("- Digite a quantidade de termos: ");
    scanf("%i", &ntermos);

    for (i = 0; i <= ntermos; i++)
    {
        if (ntermos <= 0)
        {
            printf("- Numero invalido");
            printf("- Digite novamente a quantidade de termos: ");
            scanf("%i", &ntermos);
        }
        else
        {
            if (ntermos > 0)
            {
                F = 1 / pow(D, 3) * sinal;
                D = D + 2;
                sinal = sinal * (-1);
                S = S + F;
            }
        }
    }

    printf("O resultado é: %f\n", S);
    fflush(stdin);
    getchar();
    return 0;
}
int ex05()
{
    /**  A série de fibonacci é formada pela seqüência: */
    int a = 1, b = 1, n, i;

    printf("Digite o Nésimo termo: ");
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", a);
            a += b;
        }
        else
        {
            printf("%d ", b);
            b += a;
        }
    }

    fflush(stdin);
    getchar();
    return 0;
}
int ex06()
{
    /** 6 - Fazer um algoritmo para calcular o valor de s, dado por, sendo o valor de N  deverá se lido do teclado */
    float N, denominador, numerador = 1, sinal = 1, F, S = 0;

    printf("\n- Digite a quantidade de termos: ");
    scanf("%f", &N);

    denominador = N;
    if (N == 1)
    {
        printf("- O valor de S é = 1 ");
    }
    else
    {
        while (numerador != N)
        {
            sinal = sinal * (-1);
            F = (numerador / denominador) * sinal;
            denominador = denominador - 1;
            numerador = numerador + 1;
            S = S + F;
        }
        printf("- O valor de S é: %5.4f\n\n", S);
    }

    return 0;
}
int ex07()
{
    /** 7 - Números palíndromos são aqueles que escritos da direita para esquerda ou da esquerda para direita
    tem o mesmo valor. Exemplo:929, 44, 97379. Fazer um algoritmo que imprima todos os números
    palíndromos de 10000 a 99999.
    
    */

    int soma, i = 10000, invertido, aux, n1, n2, n3, n4, n5;

    while (i != 100000)
    {
        n1 = i / 10000;
        aux = i % 10000;
        n2 = aux / 1000;
        aux = aux % 1000;
        n3 = aux / 100;
        aux = aux % 100;
        n4 = aux / 10;
        n5 = aux % 10;

        soma = (n5 * 10000) + (n4 * 1000) + (n3 * 100) + (n2 * 10) + n1;
        if (soma == i)
        {
            printf("%i\n", i);
        }
        i++;
    }
    fflush(stdin);
    getchar();
    return 0;
}
int ex08()
{
    /** O numero 3025 possui a seguinte  característica: 
                        30 + 25 = 55 
                        55^2 = 3025 
    Quantos e quais são os números de 4 dígitos possuem essa característica? 
    
    */
    int num, n1, n2, soma, el, i = 0;
    num = 1000;

    while (num != 10000)
    {

        n1 = num / 100;
        n2 = (num % 100);
        soma = n1 + n2;
        el = soma * soma;

        if (el == num)
        {
            printf("\n- Numeros com a característica: %i\n", num);
            i++;
        }
        num++;
    }
    printf("- A quantidade de numeros com essas característica e %i\n\n", i);

    fflush(stdin);
    getchar();
    return 0;
}
int ex09()
{
    /** 9. Faça um programa para um jogo de cara ou coroa. Neste caso, o jogador escolhe cara ou coroa (0 ?
    cara e 1 ?para coroa) mostre ao final de 10 tentativas, quantas foram certas e quantas erradas. 
    (utilize o comando -para que o computador escolha o resultado).  
    
    */
    int i, x, coroa = 0, cara = 0, op;

    printf("\n- Digite 0 para cara e 1 para coroa");
    printf("\n- Escolha: ");
    scanf("%i", &op);

    for (i = 1; i <= 10; i++)
    {
        x = rand() % 2;

        printf("\n- Jogada %d: %d\n", i, x);

        if (x == 1)
        {
            coroa += 1;
        }
        else
        {
            cara += 1;
        }
    }
    if (op == 1)
    {
        printf("\n- Nas 10 tentativas você ganhou em %i e perdeu em %i\n\n ", coroa, cara);
    }
    else
    {
        if (op == 0)
        {
            printf("\n- Nas 10 tentativas você ganhou em %i e perdeu em %i\n\n ", cara, coroa);
        }
    }

    return 0;
}
int ex10()
{
    /**10. Faça um programa para adivinhar um número escolhido pelo usuário, entre 1 e 1023. Indique ao 
    final quantas tentativas foram necessárias. O programa deverá localizar o número escolhido pelo 
    usuário em no máximo 10 tentativas!

    Utilize a seguinte proposta. Pegue o valor intermediário e pergunte ao usuário se o número é 
    igual(=), maior(>) ou menor(<) que o que foi escolhido. Se for (=) implica que acertou! Se for maior 
    escolha agora o número intermediário entre o que foi perguntado e o último, caso contrário escolha o 
    intermediário entre o primeiro e o que foi perguntado, seguindo assim até acertar!
    
    Verifique que você conseguirá acertar qualquer número em no máximo 10 tentativas!!! 
    
    */
    int tentativas = 0, valor = 1023, maior, menor, igual, r;

    printf("\n- Pense em um numero entre 1 e 1023\n");
    valor = valor / 2;
    printf("\n- O valor de %i e menor, maior ou igual ao seu numero?\n", valor);
    printf("\n- Digite 1, 2 ou 3 respectivamente\n");
    printf("\n- Tentativas: %i", tentativas);
    printf("\n- Escolha: ");
    scanf("%i", &r);

    for (tentativas = 0; tentativas <= 10; tentativas++)
    {
        switch (r)
        {
        case 1:

            valor = valor / 2;
            printf("\n- O valor de %i e menor, maior ou igual ao seu numero?\n", valor);
            printf("\n- Digite 1, 2 ou 3 respectivamente\n");
            printf("\n- Escolha: ");
            scanf("%i", &r);
            break;

        case 2:

            valor = (valor / 2) + valor;
            printf("\n- O valor de %i e menor, maior ou igual ao seu numero?\n", valor);
            printf("\n- Digite 1, 2 ou 3 respectivamente\n");
            printf("\n- Escolha: ");
            scanf("%i", &r);
            break;

        case 3:

            printf("Acertei");
            break;

        default:
            return 0;
        }
    }

    return 0;
}