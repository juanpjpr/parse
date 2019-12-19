#include <stdio.h>
#include <ctype.h>
#include <string.h>

unsigned int int2bin(unsigned int k);
int char2Hex(char x);

int main(){
    char buff[256];
    fgets(buff, 256, stdin); 
    printf("%s",buff);

    //printf("%ld",(long unsigned int)strlen(buff));

    for(int i=0;i<(long unsigned int)strlen(buff);i++){
         int value;
        if(isalpha((buff[i]))){
            value=char2Hex(buff[i]);
        }else{
            value=((int)buff[i])-48;
        }
   
        
        if(!isspace(buff[i])){
             printf("%04d \n",int2bin(value)); //imprire hexa
             printf("%X \n\n",value);           //imprime bin
        }
    }
    
    

    getchar();
}

unsigned int int2bin(unsigned int k) {
    return (k == 0 || k == 1 ? k : ((k % 2) + 10 * int2bin(k / 2)));
}

int char2Hex(char x){
    switch(x){
        case 'A': return 10;
        case 'B': return 11;
        case 'C': return 12;
        case 'D': return 13;
        case 'E': return 14;
        case 'F': return 15;

    }
}

