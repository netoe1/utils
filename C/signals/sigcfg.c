#ifndef SIGCFG_C
#define SIGCFG_C
#include <stdlib.h>

void handle_signal(int signal, char ptr)
{
    printf("Sinal %d capturado.\n", signal);

    // Limpa o ponteiro se ele não for NULL
    if (ptr != NULL)
    {
        printf("Limpando ponteiro...\n");
        free(ptr);
        ptr = NULL;
        printf("Ponteiro limpo com sucesso!\n");
    }
    else
    {
        printf("Ponteiro já está limpo.\n");
    }

    // Pode-se decidir terminar o programa após o tratamento do sinal
    exit(0);
}
#endif