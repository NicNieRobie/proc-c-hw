#ifndef PROC_C_1_CONTAINER_H_
#define PROC_C_1_CONTAINER_H_

#include "transport.h"

typedef struct {
    enum {MAX_SIZE = 10000};
    transport_st *data[MAX_SIZE];
    unsigned int count;
} container_st;

void Initialize(container_st *cont);

int Insert(container_st *cont, transport_st* tr);

int RemoveAt(container_st *cont, int index);

void Clear(container_st *cont);

void In(container_st *cont, FILE *ifstream);

void InRand(container_st *cont, unsigned int count);

void Out(container_st *cont, FILE *ofstream);

void DeleteLessThanAverage(container_st *cont);

#endif // PROC_C_1_CONTAINER_H_