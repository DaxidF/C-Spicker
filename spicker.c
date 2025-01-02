/* "immer std + '' + .h in den Klammern */
#include <stdio.h>
#include <stdbool.h>

int main()
{
    /* Du kannst diese Datei nicht ausführen! */
}

void Datatype()
{
    /* Character */
    char Zeichen = 'A';                                /* Einzelnes Zeichen */
    char *ZeichenKette = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; /* Mehrere Zeichen (Kette) */
    printf("%d", Zeichen);                             /* Dezimalzahl aus, also: „65“ */
    printf("%c", Zeichen);                             /* ASCII-Zeichen aus, also: „A“ */
    /* Integer */
    char ganzzahl = 1;      /* Mindestens 8 Bit */
    short ganzzahl = 2;     /* Mindestens 16 Bit */
    int ganzzahl = 3;       /* Mindestens 16 Bit */
    long ganzzahl = 4;      /* Mindestens 32 Bit */
    long long ganzzahl = 5; /* Mindestens 64 Bit */
    /* Float */
    float kommazahl = 0.000001f;          /* Eine Kommazahl mit einem „f“ am Ende */
    double kommazahl = 0.000000000000002; /* Eine genaue Kommazahl */
    long double kommazahl = 0.3l;         /* Eine Kommazahl die auf zwei Stellen endet */
    /* Boolean */
    bool Wahrheitswert = false; /* Ein Boolischer Wert (T\F) */
    /* Umsetzungssequenz mit „%“ : */
    /* %i oder %d für int bzw. Dezimalzahl */
    /* %x oder %X für Hexadezimalschreibweise in Groß- oder Kleinschreibung */
    /* %o für Oktalschreibweise */
    /* %f für float oder double */
    /* %c für char */
    /* %s für char* (String) */
    /* %p für Adresse (void *) */
    /* %i für Boolean bzw. Boolische Werte*/
    /*Siehe Datatype.png*/
    return;
}

void read_and_write()
{
    /* Print Funktion */
    printf("Test Text"); /* Printet einen Text in die Konsole */
    char *ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%s", ABC); /* Printet den Wert einer Variable in die Konsole */
}