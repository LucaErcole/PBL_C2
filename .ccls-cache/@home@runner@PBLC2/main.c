/*****************************************************************
 PBL C2

Grupo 7
Nome:Alexandre Theo Kogut
Nome:Luca Hideo Umeda Ercole
Nome:Marina Althoff Maziero
Nome:Nicholas Henrique Barbosa Oliveira

******************************************************************/
/*****************************************************************

       Exercício 1

******************************************************************/

#include <stdio.h>
int main(void) {
  char s[2];
  int i = 0;
  int vogal = 0;
  int consoante = 0;
  do {
    printf("Digite uma letra: ");
    scanf("%s", s);
    if (s[i] == 'a'  s[i] == 'e'  s[i] == 'i'  s[i] == 'o'  s[i] == 'u'){
    vogal ++;
    }else{
      consoante ++;
    }
  }
  while (s[i] != '0');
  printf("Vogais: %d, consoantes: %d", vogal, consoante -= 1);
  return 0;
}

/*****************************************************************

       Exercício 2

******************************************************************/

#include <stdio.h>
#include <stdbool.h>
int main(void) {
  int tentativas = 0;
  int min, max;

  do{
    printf("Digite um número: ");
    scanf("%d", &min);
    printf("Digite um número: ");
    scanf("%d", &max);
    }
   while (!true);
    if (min > max)
      printf("Valor minimo incorreto");
      tentativas ++;
      if (tentativas > 3)
        return 15;

    if (min <= max)
      while (min <= max)
      if (min % 3 == 0){
        printf("%d\n", min);
        min ++;
      }else{
        min ++;
      }
  return 0;
}