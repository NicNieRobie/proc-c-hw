#include <stdlib.h>

#include "container.h"
#include "string.h"

void Initialize(container_st *cont) {
    cont->count = 0;
}

int Insert(container_st *cont, transport_st* tr) {
    if (cont->count < 10000) {
        cont->data[cont->count] = tr;
        cont->count++;
        return 0;
    } else {
        return -1;
    }
}

int RemoveAt(container_st *cont, int index) {
    if (index < 0 || index > cont->count) return -1;

    if (index < cont->count - 1) {
        for (int i = 0; i < cont->count; i++) {
            if (i >= index && i != cont->count - 1) {
                cont->data[i] = cont->data[i+1];
            }
        }
    }

    cont->data[cont->count - 1] = NULL;
    cont->count--;
    return 0;
}

void Clear(container_st *cont) {
    for (int i = 0; i < cont->count; i++) {
        cont->data[i] = NULL;
    }
    cont->count = 0;
}

void In(container_st *cont, FILE *ifstream) {
    transport_st *tr;
    while((tr = TransportIn(ifstream)) != NULL) {
        Insert(cont, tr);
    }
}

void InRand(container_st *cont, unsigned int count) {
    while(cont->count < count) {
        Insert(cont, TransportInRand());
    }
}

void Out(container_st *cont, FILE *ofstream) {
    if(!ofstream) {
        perror("could not write to file");
        exit(EXIT_FAILURE);
    }

    fprintf(ofstream, "Container contains %d elements.\n", cont->count);
    for(int i = 0; i < cont->count; i++) {
        fprintf(ofstream, "%d: ", i + 1);
        TransportOut(cont->data[i], ofstream);
    }
}

void DeleteLessThanAverage(container_st *cont) {
    double sum = 0;
    for (int i = 0; i < cont->count; i++) {
        sum += TimeToDest(cont->data[i]);
    }

    double avg = sum / cont->count;

    for (int i = 0; i < cont->count; i++) {
        if (TimeToDest(cont->data[i]) < avg) {
            RemoveAt(cont, i);
            i--;
        }
    }
}