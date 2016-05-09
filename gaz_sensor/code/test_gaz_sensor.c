/*
  Programme de test des déctecteurs de gaz de la série MQx
  Plus d'info sur http://www.projetsdiy.fr


*/

const int mqxPin = A6;  // La sortie analogique du détecteur MQx est reliée au Pin analogique A0 de l'Arduino


void setup()
{
	Serial.begin(115200); // Initialise le port série à 9600 bps // 
}

void loop()
{
	Serial.println(analogRead(mqxPin));
	delay(1000); 		// Imprime une mesure chaque seconde
}
