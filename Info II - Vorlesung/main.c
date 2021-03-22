//
//  main.c
//  Info II - Vorlesung
//
//  Created by Paul Hackenberg on 20.03.21.
//

#include <stdio.h>

void vergleich(){
    float a = 0;
    float b = 0;
    printf("Bitte geben Sie zwei Zahlen ein: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    if(a >= b){
        
        printf("%f ist größer als %f \n", a,b);
    }
}




int main(int argc, const char * argv[]) {
    
    vergleich();
    return 0;
  
}


