#ifndef PROCC_SHIP_H_
#define PROCC_SHIP_H_

struct ship {
    enum shipType {LINER, TUGBOAT, TANKER};
    enum shipType st;
    int displacement;
};

double TimeToDest(const struct ship *s);

#endif