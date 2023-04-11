#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

void CaesaCipher(char *ptr, int tam, int num) {
  for (int i = 0; i < tam; i++) {

    if (*ptr >= 122) {
      *ptr = 'a';
      *ptr += num - 1;
    } else {
      *(ptr + i) = num;
    }
  }
}

char* getMesage() {
  char message[100];
  char *ptr;

  printf("Digite a mensagem: ");
  scanf("%s", message);

  ptr = (char *) &message;

  printf("%s\n", ptr);

  // for (int i = 0; i < tam; i++) {
  //   *(ptr + i) = message[i];
  // }
  return ptr;
}

/*
void printString(char *ptr) {
    
    printf("%s", ptr);
}
*/

void testString() {
  char menssagem[] = "Ola mundo!";
  char *ptrMesage = (char *) &menssagem;

  printf("messagem = %s", ptrMesage);

  // for (int i =0; i < sizeof(menssagem); i++) {
  //   printf("%c", menssagem[i]);
  // }
  // printf("%s", menssagem);
}

int main() {
  /*
  int number, tam;
  char message[50];
  char *ptrMessage;

  printf("Digite; qualquer numero: ");
  scanf("%d", &number);

  ptrMessage = getMesage();

  ptrMessage = "dale dele dole";

  tam = sizeof(ptrMessage);

  printf("%s\n", ptrMessage);

  CaesaCipher(ptrMessage,tam, number);

  
  printf("%s\n", getMesage());
  */

  // printString();

  return 0;
}
