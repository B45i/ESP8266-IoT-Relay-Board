#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "2f6cbf3gs4fg531sdf3g1s2df1g21sdfg1597"; // BLYNK API KEY

char ssid[] = "EvilCorp"; // WiFi SSID
char pass[] = "helloworld"; // Your WiFi Password

void setup()
{
	Serial.begin(9600);

	Blynk.begin(auth, ssid, pass);
}

void loop()
{
	Blynk.run();
}

