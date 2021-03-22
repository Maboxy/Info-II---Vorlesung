//
//  main.c
//  Info II - Vorlesung
//
//  Created by Paul Hackenberg on 20.03.21.
//

#include <stdio.h>

void vergleich(){
    int a = 0;
    int b = 0;
    
    printf("Bitte geben Sie zwei Zahlen ein: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    
    if(a >= b){
        
        printf("%d ist größer als %d \n", a,b);
    }
}


int main(int argc, const char * argv[]) {
    
    vergleich();
    return 0;
  
}


