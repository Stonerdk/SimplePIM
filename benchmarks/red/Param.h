#ifndef PARAM_H
#define PARAM_H
#include <stdlib.h>

typedef uint64_t T;

#ifndef NR_DPUS
const uint32_t dpu_number = 1;
#else
const uint32_t dpu_number = NR_DPUS;
#endif

#ifndef NR_ELEMENTS
uint64_t nr_elements = 10000;
#else
uint64_t nr_elements = NR_ELEMENTS;
#endif

uint32_t print_info = 0;
#endif
