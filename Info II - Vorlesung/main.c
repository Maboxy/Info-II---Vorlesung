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
    int f1 = 1;
    int f2;
    int f0 = 0;
    printf("Einzel Werte der Fibonaci-Folge mit 10 Durchläufen: \n");
    for(int i = 0; i < 11; i++){
        f2 = f1 + f0;
        
        f0 = f1;
        i++;
        printf("%d \n", i);
    }
}

void whileSchleife(){
    int i = 1;
    int e = 0;
    while(i < 11){
        e += i;
        i++;
        printf("%d \n", e);
    }
}

//fakultät(); gehört mit zur funktionen() Funktion zu Veranschaulichung des Funktionsprinzipes von einzelnen Methoden/Funktionen
float fakultät(float fZahl_1){
    //Satt Rekursion wurde in der Vorlesung eine for-Schleife verwendet worden
    if(fZahl_1 > 1) {
        return fZahl_1 * fakultät(fZahl_1-1);
    }else {
        return 1;
    }
}

void funktionen(){
    float fZahl_1;
    printf("Bitte geben Sie eine Zahl zur Berechnung der Fakultät an: \n");
    scanf("%f", &fZahl_1);
    printf("Ergebnis: %f \n", fakultät(fZahl_1));
}

void str_anhängen(char *u, char*v){
    while(*u){
        u++;
    }
    while(*u = *v){ //*u = *v darf kein Vergleichsein, solange etwas von V in U "getan" werden kann läuft die Schleife weiter
        u++;
        v++;
    }
}

void mehrdimensionaleFelder(){
    int iArray[2][2] = {
        { 1, 2},
        { 3, 4}};
    
    int iArray2[2][2] = {
        { 2, 4},
        { 1, 3}};
    
    int iLösung[2][2];
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++ ){
            iLösung[i][j] = iArray[i][0] * iArray2[0][j] + iArray[i][1] * iArray2[1][j];
        }
    }
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++ ){
            printf("%d \n", iLösung[i][j]);
        }
    }
    
}

int charkomisch(){
    char cCach = 'A';
    int iCount = 0;
    while(cCach != '+'){
        cCach = getchar();
        putchar(cCach);
        iCount++;
        //printf("%c", cCach);
    }
    printf("%d \n", iCount/2);
    
    return 0;
    
}

int dateiopen(){
    FILE *datei;
    int messdaten[30][3];
    int i, j;
    datei = fopen("/Users/paul/OneDrive/Uni-GoodNotes/2. Semester/Informatik II/C - Programme/Info II - Vorlesung/Info II - Vorlesung/Messdaten.txt", "r"); //Bei Apple muss der genaue Dateipfad angegeben werden
    if (datei == NULL) {
        fprintf(stderr, "Fehler bei Oeffnen der Datei!\n");
        return -1;
    }
    
    for (i = 0; i < 30; i++) {
        for (j = 0; j < 3; j++) {
            fscanf(datei, "%d", &(messdaten[i][j]));
        }
        fscanf(datei, "\n");
    }
    for (i = 0; i < 30; i++) {
        for (j = 0; j < 3; j++) {
            printf("%6d ", messdaten[i][j]);
        }
        printf("\n");
    }
    if (fclose(datei)==EOF){
        fprintf(stderr,"Datei konnte nicht geschlossen werde!\n");
        return -2;
    }
    for (i = 0; i < 30; i++) {
    for (j = 0; j < 3; j++) {
    fscanf(datei, "%d", messdaten[i]+j);
    }
    fscanf(datei, "\n");
    }
    
    return 0;
}
int main(int argc, const char * argv[]) {
    
    //vergleich();
    //ifVergleich();
    //elseIf();
    //ifKomplex();
    //switchCase();
    //forSchleife();
    //whileSchleife();
    //funktionen();
    //    char c1[80] = "Hallo ";
    //    char c2[80] = "Paul";
    //    str_anhängen(c1, c2);
    //    printf("%s \n", c1);
    //mehrdimensionaleFelder();
    //charkomisch();
    dateiopen();
    
    
    
    
    return 0;
}


