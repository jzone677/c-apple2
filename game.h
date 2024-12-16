#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>

#define mainf void main(){
#define forever while(1){ clrscr();
#define end }

void beep(int duration, int frequency) {
    int i;
    for (i = 0; i < duration * frequency; i++) {
        printf("\a");
    }
}
