#include <stdio.h>

char Schiff [30];
int Besatzung;
int Missionstage;

long Entfernung = 6280000000;  
float lichtgeschwindigkeit = 32.9;
float Reichweite = 56425.658;

int main() {
    printf("Enter Class, Crew Count, Mission Days:\n");
    scanf("%s", Schiff);
    scanf("%d", &Besatzung);
    scanf("%d", &Missionstage);

    printf("%-30s %s\n", "Name", "Value");
    printf("----------------------------------------\n");
    printf("%-30s %s\n", "Class", Schiff);
    printf("%-30s %d\n", "Crew Count", Besatzung);
    printf("%-30s %d\n", "Missions Days", Missionstage);
    printf("%-30s %ld\n", "Distance", Entfernung);
    printf("%-30s %3.1f\n", "% of light speed", lichtgeschwindigkeit);
    printf("%-30s %7.3f\n", "Range", Reichweite);

    }