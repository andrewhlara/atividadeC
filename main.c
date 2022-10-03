// usuário github -- andrewhlara
// além do material didatico disponibilizado, usei fontes de pesquisas como
// stackoverflow e o canal do youtube (Fernando Kendy Aoki Rizzatto) onde
// consegui entender a funcionalidade da biblioteca math.h

#include <math.h> //importação da biblioteca math, que permite executar funções de calculo pela línguagem C
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  // declaração das váriaveis FLOAT para os 2 números da operação
  float numero1, numero2;

  // declaração da variável "resultado" como INT
  int resultado;

  // declação das váraveis para cada tipo de operação de tipo FLOAT
  float soma, subtracao, multiplicacao, divisao, potencializacao, raiz;

  // apresentação do aluno, com universidade e número de matrícula
  printf("Andrew Henrique de Lara Girarde, Analise e desenvolvimento de "
         "sistemas, Universidade La Salle, matrícula 202220811 \n");

  // disparar uma mensagem no console pedindo para informar o primeiro número da
  // operação
  printf(
      "Digite o primeiro número (esse será usado em caso de raiz quadrada):");
  scanf("%f", &numero1);

  // informar o segundo número da operação
  printf("Digite o segundo número: ");
  scanf("%f", &numero2);

  // com as funções posteriormente criadas, selecionar um número de acordo com
  // cada uma
  printf("Escolha a operação que deseja fazer \n");

  printf("+ : SOMA \n");
  printf("- : SUBTRAÇÃO \n");
  printf("+ : MULTIPLICAÇÃO \n");
  printf("/ : DIVISÃO \n");
  printf("^ : POTENCIALIZAÇÃO \n");
  printf("r : RAIZ QUADRADA \n");
  scanf("%d", &resultado);

  // inicio da função usando o operador lógico SWITCH, em cada caso será
  // realizado um operador diferente, de acordo com o que foi solicitado antes

  switch (resultado) {
    // soma
  case 1:
    soma = numero1 + numero2;
    printf("%.2f + %.2f = %.2f", numero1, numero2, soma);
    break;

    // subtração
  case 2:
    subtracao = numero1 - numero2;
    printf("%.2f - %.2f = %.2f", numero1, numero2, subtracao);
    break;

    // multiplicação
  case 3:
    multiplicacao = numero1 * numero2;
    printf("%.2f x %.2f = %.2f", numero1, numero2, multiplicacao);
    break;

    // divisão
  case 4:
    divisao = numero1 / numero2;
    printf("%.2f / %.2f = %.2f", numero1, numero2, divisao);
    break;

    // potencialização usando a biblioteca MATH
  case 5:
    potencializacao = pow(numero1, numero2);
    printf("%.2f ^ %.2f = %.2f", numero1, numero2, potencializacao);
    break;

    // raiz usando a biblioteca MATH
  case 6:
    raiz = numero1 / numero2;
    printf("%.2f √ %.2f = %.2f", numero1, numero2, raiz);
    break;

  default:
    printf("A opção é inválida");
  }
}