//
//  main.c
//  Info II - Vorlesung
//
//  Created by Paul Hackenberg on 20.03.21.
// Einzelene Aufgaben aus der Informatik II - Vorlesung an der Ostfalia in Wolfsburg

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

int dynamischerSpeicher(){
    int iANzahlElemente;
    printf("Wie viele Messwerte möchten Sie einlesen?\n");
    scanf("%d", &iANzahlElemente);
    
    double *heapSpeicherPtr = malloc(sizeof(double)*iANzahlElemente);
    
    if(heapSpeicherPtr == NULL){ //nicht 0, sonder es steht wirklich nix drin also NULL
        printf("Es gibt nicht genügend Speicher!!! \n");
        return 1;       //Bricht das Programm ab
    }
    
    
    
    return 0;
}

    

/*
 -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
 Ab hier, LISTE:
 -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
 */

// Deklaration eigener Strukturen
    struct _messdaten;
    struct _messdaten {
    struct _messdaten *next;
    char sensorname[10];
    float messwert;
    };
    typedef struct _messdaten messdaten;
    
    // Deklaration eigener Routinen
    int messwert_hinzufuegen(char *, float);
    messdaten * sensor_suchen(char *);
    int sensormessdatum_loeschen(char *);
    void messdaten_ausgeben(void);
    // Initialisierung der verketteten Liste
    messdaten *start_pointer = NULL;

int listeMain(){
    // Variablendeklaration
    int i; // Schleifenvariable
    int anzahl; // Anzahl der Messdaten
    char name[10]; // Sensorbezeichnung
    float messung; // Messwert
    messdaten * ptr;
    messdaten * ptr_2;
    // Anzahl Messdaten eingeben
    printf("\nWie viele Messdaten wollen Sie eingeben? ");
    scanf ("%d", &anzahl);
    // Eingabe der Sensordaten
    for (i = 1; i <= anzahl; i++) {
    printf("\nGeben Sie den Namen des Sensors %d ein: ", i);
    scanf("%s", name);
    printf("Geben Sie den Messwert ein: ");
    scanf("%f", &messung);
    // Messwert in Liste eintragen
    if (messwert_hinzufuegen(name, messung) != 0) {
    printf("\nFehler beim Hinzufuegen eines Elements!\n");
    return -1;
    }
    }
    
    // Ausgabe der kompletten Liste
    messdaten_ausgeben();
    // Sensor suchen
    printf("\n\nWelchen Sensor wollen Sie suchen? ");
    scanf("%s", name);
    if ((ptr = sensor_suchen (name)) == NULL)
    printf("\nSensor mit Namen %s ist nicht vorhanden!", name);
    else
    printf("\nDer Sensor %s hat den Messwert %6.3f m.\n",
    ptr->sensorname, ptr->messwert);
    
    // Sensoreintrag loeschen
    printf("\n\nWelchen Eintrag wollen Sie loeschen? ");
    scanf("%s", name);
    if (sensormessdatum_loeschen(name) != 0) {
    printf("\nFehler beim Loeschen!\n");
    return 1;
    }
    // Ausgabe der geaenderten Liste
    messdaten_ausgeben();
    
    // Liste loeschen
    ptr = start_pointer;
    // Speicher wieder freigeben
    while (ptr != NULL) {
    ptr_2 = ptr->next;
    free(ptr);
    ptr = ptr_2;
    }
    // Programm ohne Fehler beenden
    return 0;
    }


// Neues Element an den Anfang der Liste einfuegen
int messwert_hinzufuegen(char * name, float messwert) {
messdaten * ptr;
if ((ptr = (messdaten *)malloc(sizeof(messdaten))) == NULL) {
return -1;
}
else {
strcpy(ptr->sensorname, name);
ptr->messwert = messwert;
ptr->next = start_pointer;
start_pointer = ptr;
return 0;
}
}

// Sensor in der Liste suchen
messdaten* sensor_suchen(char * name) {
messdaten *ptr = start_pointer;
while((ptr != NULL) && (strcmp(ptr->sensorname, name))) {
// Weitersuchen
ptr = ptr->next;
}
// Pointer auf das gesuchte Element wird zurueckgegeben
return ptr;
}

// Sesormessdatum aus der Liste loeschen
int sensormessdatum_loeschen(char * name) {
messdaten *ptr = start_pointer, *vorgaenger;
// Sensor suchen
while ((ptr != NULL) && strcmp(ptr->sensorname, name)) {
vorgaenger = ptr;
ptr = ptr->next;
}
if (ptr == NULL)
return 1; // Sensor nicht gefunden
else {
    // Sensor ist der erste Eintrag
    if(ptr == start_pointer)
    start_pointer = ptr->next;
    else
    vorgaenger->next = ptr->next;
    // Speicher freigeben
    free(ptr);
    // Sesormessdatum erfolgreich geloescht
    return 0;
    }
    }
// Ausgabe der verketteten Liste Messdaten
void messdaten_ausgeben(void) {
messdaten * ptr = start_pointer;
while (ptr != NULL) {
printf("Der Sensor %s hat den Messwert: %6.3f\n",
ptr->sensorname, ptr->messwert);
ptr = ptr->next;
}
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
    //dateiopen();
   // dynamischerSpeicher();
    listeMain();

    
    return 0;
}


