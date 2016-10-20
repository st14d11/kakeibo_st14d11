#include <stdio.h>
#include "average.h"

int average(int payments[]) {
    int result = 0;
    int sum = 0;
    int i;
    for (i=0; i<5; i++) {
     	sum += payments[i];
        }
    	result = sum / 5;
    return result;
}
