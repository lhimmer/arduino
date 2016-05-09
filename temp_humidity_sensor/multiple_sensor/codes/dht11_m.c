#include <dht11.h> // charger la librairie

dht11 DHT11_1; // Créer le capteur
dht11 DHT11_2; // Créer le capteur

#define DHT11PIN1 3 // Définir la pin utilisée
#define DHT11PIN2 7 // Définir la pin utilisée

void setup()
{
  // Initialiser la liaison série
  Serial.begin(115200);
}

void loop()
{
  Serial.print(" --- Nouvelle lecture --- ");

  int chk1 = DHT11_1.read(DHT11PIN1); // Lecture du capteur
  int chk2 = DHT11_2.read(DHT11PIN2); // Lecture du capteur

  Serial.print("Etat du capteur: ");

  switch (chk1) // Est-ce que le capteur fonctionne?
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

  switch (chk2) // Est-ce que le capteur fonctionne?
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
  Serial.print("Humidity (%) #1: "); // Humidité
  Serial.println((float)DHT11_1.humidity, 2);
  Serial.print("Humidity (%) #2: "); // Humidité
  Serial.println((float)DHT11_2.humidity, 2);

  Serial.print("Temp (°C) #1: "); // Température
  Serial.println((float)DHT11_1.temperature, 2);
  Serial.print("Temp (°C) #2: "); // Température
  Serial.println((float)DHT11_2.temperature, 2);

  delay(1000); // Pause avant prochaine lecture

}
