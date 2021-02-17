/********************************/
/* Program Name:                */
/* Author:                      */
/* Date:                        */
/********************************/
/* Description:                 */
/* Validation Checks:           */
/* Enhancements:                */
/********************************/

#include "stdio.h"
#include "stdlib.h"
#include <unistd.h>

#define max_int (255)
#define byte unsigned char

int main (int argc, char * argv[], char ** envp) {

  int count = 10;
  int sum = 0;   
  byte checksum; 
  byte complement;
  byte header[10];
  int quotient;            
  int remainder;
  int retval;
retval = read(STDIN_FILENO, &header, 10);
  
for(int i = 0; i < count; i++){
  if (i == 5) {
            checksum = header[i];
            header[i] = 0;
  }
  sum += header[i];
}
  
  quotient = sum / (max_int + 1);
     remainder = sum % (max_int + 1);
     sum = quotient + remainder;
     complement = max_int - sum;
}
  /* the following is the prototype for the read system call */
  /* int read(int fildes, void *buf, size_t nbyte);  */
