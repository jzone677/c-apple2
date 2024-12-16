#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#def mainf void main(){
#def forever while(1){\nclrscr();
#def end }
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void beep(int duration, int frequency) {
    int i;
    for (i = 0; i < duration * frequency; i++) {
        printf("\a");
        usleep(1000000 / frequency);
    }
}
