#include <Arduino.h>
// Définir le taux de communication du port série
#define BAUDRATE 115200
// put function declarations here:
int myFunction(int, int);

void setup() {
  Serial.begin(BAUDRATE);
  Serial.println("Bonjour, le module fonctionne correctement !");
}

void loop() {
  // Ajouter ici le code qui doit s'exécuter en boucle
}


// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}