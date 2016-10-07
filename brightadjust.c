#include "brightadjust.h"
#include "writefile.h"
#include "output.h"

int main (){
    int value;
    FILE *file = fopen("/sys/class/backlight/acpi_video0/brightness", "r");

    if (file){
        value = input_output(file); 
        fclose(file);

        file = fopen("/sys/class/backlight/acpi_video0/brightness", "w");
        if(file){
            write(file, value);
            fclose(file);
        }
        else writefail();
    }
    else findfail();

    return 0;
}

