#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Cifra uma letra utilizando o deslocamento dado
 char cifra_letra(char letra, int deslocamento) {
    if (letra >= 'a' && letra <= 'z') {
        return (letra - 'a' + deslocamento) % 26 + 'a';
    } else if (letra >= 'A' && letra <= 'Z') {
        return (letra - 'A' + deslocamento) % 26 + 'A';
    }
    return letra; // não cifra caracteres que não são letras
}

// Cifra o texto dado utilizando o deslocamento dado
void cifra_cesar(char *texto, int deslocamento) {
    for (int i = 0; texto[i] != '\0'; i++) {
        texto[i] = cifra_letra(texto[i], deslocamento);
        }
    }

int main() {
    char texto[100];
    int deslocamento;

    printf("Digite o texto a ser cifrado: ");
    fgets(texto, sizeof(texto), stdin);

    printf("Digite o valor de deslocamento: ");
    scanf("%d", &deslocamento);

    cifra_cesar(texto, deslocamento);
    printf("Texto cifrado: %s", texto);
    
    return 0;
}
