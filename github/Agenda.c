#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    int hora;
    int minuto;
    int segundo;
} Hora;

typedef struct {
    Data data;
    Hora hora;
    char evento[100];
} Evento;

void imprimEvento(Evento evento) {
    printf("%02d/%02d/%04d - %02d:%02d:%02d\n", evento.data.dia, evento.data.mes, evento.data.ano, evento.hora.hora, evento.hora.minuto, evento.hora.segundo);
    printf("%s\n", evento.evento);
}

int main() {
    int n;
    scanf("%d", &n);

    Evento agenda[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &agenda[i].data.dia);
        scanf("%d", &agenda[i].data.mes);
        scanf("%d", &agenda[i].data.ano);
        scanf("%d", &agenda[i].hora.hora);
        scanf("%d", &agenda[i].hora.minuto);
        scanf("%d", &agenda[i].hora.segundo);
        scanf(" %[^\n]", agenda[i].evento);
    }

    for (int i = 0; i < n; i++) {
        imprimEvento(agenda[i]);
    }

    return 0;
}
