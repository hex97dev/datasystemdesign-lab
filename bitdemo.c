#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint8_t verdi = 0b00101100;
    uint8_t maske = 0b00001111;

    printf("verdi: %u\n", verdi);
    printf("nedre fire bit: %u\n", verdi & maske);
    return 0;
}
