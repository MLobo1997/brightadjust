#include "brightadjust.h"
#include "writefile.h"
#include "output.h"


int write(FILE *f, int value){
    char value0 = value + '0';
    fseek(f, SEEK_SET, 0);
    if(putc(value0, f)) success();

    return 0;
}
