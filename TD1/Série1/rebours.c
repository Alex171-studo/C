#include <stdio.h>
#include <unistd.h> 

int main(void){
    int i = 10;
    while(i != 0){
        printf("%d\n", i);      
        sleep(1);          
        i--;
        system("clear");
    }
    
    return 0;
}