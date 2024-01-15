#include <stdio.h>
#include <stdlib.h>

struct SequenzaBid {
    float info;
    struct SequenzaBid *next;
    struct SequenzaBid *prev;
};

typedef struct SequenzaBid sequenza;

sequenza *InitSeq(sequenza *);

int main(){
    sequenza *p_s;
    p_s = NULL;
    p_s = InitSeq(p_s);

    return 0;
}

sequenza *InitSeq(sequenza *p_s){
    sequenza s;
    p_s = &s;
    p_s->next = NULL;
    p_s->prev = NULL;
    p_s->info = 0;

    return p_s;
}
