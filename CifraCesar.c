#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

void CaesaCipher(char *ptr, int tam, int num) {
  for (int i = 0; i < num; i++) {
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
  int number, tam;
  char mesage[50], *ptrMesage;

  // printf("Digite qualquer numero: ");
  // scanf("%d", &number);

  ptrMesage = getMesage();

  // tam = sizeof(ptrMesage);


  // CaesaCipher(ptrMesage,tam, number);

  
  printf("%s\n", ptrMesage);

  // printString();

  return 0;
}
