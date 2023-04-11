#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

// function encrypt message
void CaesaCipher(char *ptr, int num) {

  for (int i = 0; i <= sizeof(ptr); i++) {
    // condicion for the letter 'z'
    if (*(ptr + i) >= 122) {
      *(ptr + i) = 'a';
      *(ptr + i) += num - 1;
    } else { 
      *(ptr + i) += num; // encrypt the letter 
    }
  }
}

// function to receive a message and return a pointer to message
char* getMessage() {
  char message[100];
  char *ptr;

  printf("Digite a mensagem: ");
  scanf("%s", message);

  ptr = (char *) &message;

  return ptr;
}

int main() {
  // declare the variables
  int number, tam;
  char *ptrMessage;

  // receive a number
  printf("Digite qualquer numero: ");
  scanf("%d", &number);

  // ptrMessage receive a message and call function getMessage
  ptrMessage = getMessage();

  // call encrypt funcition
  CaesaCipher(ptrMessage, number);
  
  // print encrypt message
  printf("%s\n", ptrMessage);

  // deallocate pointer
  // free(ptrMessage);

  return 0;
}
