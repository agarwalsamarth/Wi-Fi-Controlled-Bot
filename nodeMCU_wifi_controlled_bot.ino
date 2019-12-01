#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "e1d4667972c44384967897fd5081e1fe"; //You will get this Auth Token in Gmail if you signin Blynk app with your Gmail ID

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Cookie"; //Enter your WIFI Name
char pass[] = "12345678";//Enter your WIFI Password

void setup()
{
  // Debug console
  Serial.begin(9600);
 
  pinMode(D4, OUTPUT);//code 1
  pinMode(D5, OUTPUT);//code 2
  pinMode(D6, OUTPUT);//code 3
  pinMode(D7, OUTPUT);//code 4
 

 
  digitalWrite(D4, LOW);
  digitalWrite(D5, LOW);
  digitalWrite(D6, LOW);
  digitalWrite(D7, LOW);


  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 8442);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8442);
}

void loop()
{
  Blynk.run();
}
