#ifndef AGENTE_H
#define AGENTE_H
#include "../headers/casa.h"
/*
 * Tipo opaco Agente
 */
typedef struct agente Agente;

void imprime_agente(Agente* ag);

Agente* InitAgente(Casa* casa);

void ProcessaAgente(Agente* ag);

#endif /* AGENTE_H */
