#include <stdio.h>
// LISTA 01 - Algoritmos
/*
int main()
{
    double novoSalario, salarioAtual;
    printf("Informe o seu salario:");
    scanf("%lf", &salarioAtual);
    novoSalario = salarioAtual * 1.25;
    printf("O seu novo salario eh: %.2lf\n %.2lf\n ", novoSalario, salarioAtual);
    return 0;
}
*/

#include <stdio.h>
/*
int main()
{
    double novoSalario, salarioAtual, percentual;
    printf("Informe o seu salario:");
    scanf("%lf", &salarioAtual);
    printf("Informe o seu percentual de aumento:");
    scanf("%lf", &percentual);
    novoSalario = salarioAtual * (1 + percentual / 100);
    printf("O seu novo salario eh: %.2lf\n %.2lf\n ", novoSalario, percentual);
    return 0;
}
*/

#include <stdio.h>
/*
int main()
{
    double nascimento, anoAtual, idade, idadeMes, idadeDia;
    printf ("Informe seu ano de nascimento:");
    scanf("%lf", &nascimento);
    printf("Informe seu ano atual:");
    scanf("%lf", &anoAtual);
    idade = anoAtual - nascimento;
    idadeMes = idade * 12;
    idadeDia = idade * 365;
    printf ("Sua idade é: %.2lfAnos\nSua idade em meses é: %.2lfmeses\nSua idade em dias são: %.2lfdias",idade,idadeMes,idadeDia);
    return 0;
}
*/

#include <stdio.h>
/*
int main()
{
    double a, b, aux;
    printf("Informe um valor para A:");
    scanf("%lf", &a);
    printf ("Informe um valor para B:");
    scanf("%lf", &b);
    aux = a;
    a = b;
    b = aux;
    printf("O valor trocado da variavel A eh: %.2lf\n", a);
    printf("O valor trocado da variavel B eh: %.2lf\n", b);
    return 0;
}
*/

#include <stdio.h>
/*
int main()
{
    double real, dolar, cotacao;
    printf("Informe um valor em real:");
    scanf("%lf", &real);
    printf("Informe o valor da cotacao atual:");
    scanf("%lf", &cotacao);
    dolar = real * cotacao;
    printf("O valor convertido eh: %.2lf\n", dolar);
    return 0;
}
*/

#include <stdio.h>
/*
int main()
{
    double racao, gato1, gato2, restante;
    printf("Informe a quantidade em kg de racao:");
    scanf("%lf", &racao);
    printf("Informe a quantidade em porcao que o gato1 come:");
    scanf("%lf", &gato1);
    printf("Informe a quantidade em porcao que o gato 2 come:");
    scanf("%lf", &gato2);
    gato1 *= 5;
    gato2 *= 5;
    restante = (racao - (gato1 + gato2))/1000;
    printf("O gato 1 comeu %.2lfgrama em 5 dias\nO gato 2 comeu %.2lfgrama em 5 dias\nSobraram %.2lfKG de racao", gato1, gato2, racao);
    return 0;
}
*/    