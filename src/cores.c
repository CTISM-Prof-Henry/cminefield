/**
 * Código adaptado de uma resposta do Stack Overflow: https://stackoverflow.com/a/8765974/2202739
 */

#include <stdio.h>
#include <windows.h>   // só funciona no Windows!

int main() {
    HANDLE  hConsole;

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // existem mais opções de cores, apenas troque o valor máximo de k
    for(int k = 1; k < 255; k++) {
        SetConsoleTextAttribute(hConsole, k);
        printf("%3d  %s\n", k, "Ola mundo!");
    }
    return 0;
}