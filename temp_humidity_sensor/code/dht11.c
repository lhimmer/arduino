#include <dht11.h> // charger la librairie

dht11 DHT11; // Créer le capteur

#define DHT11PIN 2 // Définir la pin utilisée

void setup()
{
  // Initialiser la liaison série
  Serial.begin(115200);
}

void loop()
{
  Serial.print(" --- Nouvelle lecture --- ");

  int chk = DHT11.read(DHT11PIN); // Lecture du capteur

  Serial.print("Etat du capteur: ");

  switch (chk) // Est-ce que le capteur fonctionne?
  {
    case DHTLIB_OK: 
                Serial.println("OK"); 
                break;
    case DHTLIB_ERROR_CHECKSUM: 
                Serial.println("Checksum erreur"); 
                break;
    case DHTLIB_ERROR_TIMEOUT: 
                Serial.println("Time out erreur"); 
                break;
    default: 
                Serial.println("Erreur inconnue"); 
                break;
  }

  Serial.print("Humidite (%): "); // Humidité
  Serial.println((float)DHT11.humidity, 2);

  Serial.print("Temperature (°C): "); // Température
  Serial.println((float)DHT11.temperature, 2);

  delay(1000); // Pause avant prochaine lecture

}
