#include <stdio.h>
#include <stdbool.h>

int input_char_to_mask(int input_char);

int main() {
   int inputc;
   int outputc;
   int outputmask;
   int mask;
   bool high = false;
   do {
      inputc = getc(stdin);
      outputmask = input_char_to_mask(inputc);
      if (outputmask != 0xFF) {
         if (!high) {
            outputc = outputmask * 16;
         } else {
            outputc = outputc | outputmask;
            putc(outputc, stdout);
         }
         high = !high;
      }
   } while (inputc != EOF);
   return 0;
}

int input_char_to_mask(int input_char) {
   switch (input_char) {
      case '0': return 0x00;
      case '1': return 0x01;
      case '2': return 0x02;
      case '3': return 0x03;
      case '4': return 0x04;
      case '5': return 0x05;
      case '6': return 0x06;
      case '7': return 0x07;
      case '8': return 0x08;
      case '9': return 0x09;
      case 'A': return 0x0A;
      case 'B': return 0x0B;
      case 'C': return 0x0C;
      case 'D': return 0x0D;
      case 'E': return 0x0E;
      case 'F': return 0x0F;
      case 'a': return 0x0A;
      case 'b': return 0x0B;
      case 'c': return 0x0C;
      case 'd': return 0x0D;
      case 'e': return 0x0E;
      case 'f': return 0x0F;
      default : return 0xFF;
   }
}
