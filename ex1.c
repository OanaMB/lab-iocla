#include <stdio.h>

/**
 * Afisati adresele elementelor din vectorul "v" impreuna cu valorile
 * de la acestea.
 * Parcurgeti adresele, pe rand, din octet in octet,
 * din 2 in 2 octeti si apoi din 4 in 4.
 */

int main() {
    int v[]= {0xCAFEBABE, 0xDEADBEEF, 0x0B00B135, 0xBAADF00D, 0xDEADC0DE};
    unsigned char *char_ptr = (unsigned char*)v;

    for(int i = 0; i < sizeof(v); i++) {
    printf("%p -> 0x%x\n", char_ptr+i, *(char_ptr+i));
    }
    
    printf("\n");

    unsigned short *char_ptr1 = (unsigned short*)v;
     
     for(int i = 0; i < sizeof(v)/2; i++) {
    printf("%p -> 0x%x\n", char_ptr1+i, *(char_ptr1+i));}


    printf("\n");

    int *char2 = (int*)v;

     for(int i = 0; i < sizeof(v)/4; i++) {
    printf("%p -> 0x%x\n", char2+i, *(char2+i));}
    return 0;
}
