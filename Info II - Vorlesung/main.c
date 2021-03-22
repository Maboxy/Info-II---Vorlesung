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

void ifVergleich(){
    float zahl_1 = 0;
    printf("Bitte geben Sie eine Zahle ein: \n");
    scanf("%f", &zahl_1);
   
    
    if(zahl_1 > 5){
        
        printf("%f ist größer als 5 \n", zahl_1);
    }else{
        printf("%f ist kleiner als 5 \n", zahl_1);
    }
    
}

void elseIf(){
    float zahl_1 = 0;
    printf("Bitte geben Sie eine Zahle ein: \n");
    scanf("%f", &zahl_1);
    if(zahl_1 == 6){
        printf("%f ist == 6 \n", zahl_1);
    }else if(zahl_1 > 6){
        printf("%f ist größer als 6 \n", zahl_1);
        
    }
}


int main(int argc, const char * argv[]) {
    
    //vergleich();
    //ifVergleich();
    elseIf();
    
    
    return 0;
  
}


