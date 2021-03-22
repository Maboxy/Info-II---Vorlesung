//
//  main.c
//  Info II - Vorlesung
//
//  Created by Paul Hackenberg on 20.03.21.
// Einzelene Aufgaben aus der Informatik II - Vorlesung an der Ostfalia in Wolfsburg

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
    float fZahl_1 = 0;
    printf("Bitte geben Sie eine Zahle ein: \n");
    scanf("%f", &fZahl_1);
    
    
    if(fZahl_1 > 5){
        
        printf("%f ist größer als 5 \n", fZahl_1);
    }else{
        printf("%f ist kleiner als 5 \n", fZahl_1);
    }
    
}

void elseIf(){
    float fZahl_1 = 0;
    while(fZahl_1 != -88){
        printf("\n");
        printf("Bitte geben Sie eine Zahle ein: (-88 beendet das Program)\n");
        scanf("%f", &fZahl_1);
        if(fZahl_1 == 0){
            printf("%f ist == 0 \n", fZahl_1);
        }else if(fZahl_1 > 0){
            printf("%f ist größer als 0 \n", fZahl_1);
            
        }else if (fZahl_1 < 0){
            printf("%f ist kleiner als 0 \n", fZahl_1);
        }
    }
}

void ifKomplex(){
    float fZahl_1, fZahl_2, fZahl_3;
    
    printf("Bitte geben Sie 3 Zahlen ein: \n");
    scanf("%f", &fZahl_1);
    scanf("%f", &fZahl_2);
    scanf("%f", &fZahl_3);
    
    if(fZahl_1 == fZahl_2 && fZahl_1 == fZahl_3 && fZahl_2 == fZahl_3){
        printf("Alle Zahlen sind gleich gross \n");
    }
    
    if(fZahl_1 > fZahl_2 && fZahl_1 > fZahl_3){
        printf("%f ist die größte Zahl /n", fZahl_1);
    }
    if(fZahl_2 > fZahl_1 && fZahl_2 > fZahl_3){
        printf("%f ist die größte Zahl \n", fZahl_2);
    }
    if(fZahl_3 > fZahl_1 && fZahl_3 > fZahl_2){
        printf("%f ist die größte Zahl \n", fZahl_3);
    }
}

void switchCase(){
    char cSymbol;
    printf("Bitte geben Sie einen Rechenoperator ein ( + , - , * , / , : ): \n");
    scanf("%c", &cSymbol);
    float fZahl_1 = 0;
    float fZahl_2 = 0;
    float ergebnis;
    printf("Bitte geben Sie zwei Zahlen ein: \n");
    scanf("%f", &fZahl_1);
    scanf("%f", &fZahl_2);
    switch(cSymbol){
        case '+' :
            ergebnis = fZahl_2 + fZahl_1;
            printf("Ergebnis ist = %f /n", ergebnis);
            break;
        case '-':
            ergebnis = fZahl_1 - fZahl_2;
            printf("Ergebnis ist = %f /n", ergebnis);
            break;
        case '*':
            ergebnis = fZahl_1 * fZahl_2;
            printf("Ergebnis ist = %f /n", ergebnis);
            break;
        case '/':
            ergebnis = fZahl_1 / fZahl_2;
            printf("Ergebnis ist = %f /n", ergebnis);
            break;
        case ':':
            ergebnis = fZahl_1 / fZahl_2;
            printf("Ergebnis ist = %f /n", ergebnis);
            break;
    }
}

void forSchleife(){
    //Fibonaci-Folge
    int f = 1;
    
    printf("Einzel Werte: \n");
    for(int i = 0; i < 11; i++){
        f = ((f-1) + (f-2));
        printf("%d \n", f);
    }
    printf("- - - - - - - - - - - - -  \n");
    printf("Ergebnis: \n");
    printf("%d \n", f);
    
}

int main(int argc, const char * argv[]) {
    
    //vergleich();
    //ifVergleich();
    //elseIf();
    //ifKomplex();
    //switchCase();
    forSchleife();
    
    
    return 0;
    
}


