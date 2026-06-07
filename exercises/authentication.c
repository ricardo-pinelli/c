#include <stdio.h>
#include <string.h>

int main() {
    char message[50] = "=== Autenticação ===";

    char name[50];
    char password[16];

    printf("%s\n", message);

    printf("Nome: ");
    fflush(stdout);
    scanf("%s", name);

    printf("Senha: ");
    fflush(stdout);
    scanf("%s", password);

    if (strcmp(name, "Ricardo") == 0) {
        printf("Nome salvo");
    };
    
    return 0;
}