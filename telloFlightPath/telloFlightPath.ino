// Justin Chen
// CS 599 2022
// FLS Holographic Flight Planning

// Source: https://github.com/akshayvernekar/telloArduino

#include <Tello.h>

// WiFi network name and password:
const char * networkName = "TELLO-HOLO2";
const char * networkPswd = "123";

// Values from positionData.csv
float[] pathX = [0.4848722, 0.4900842, 0.4967375, 0.1472727, -0.4827658, -0.264446, -0.1285823];
float[] pathY = [-0.7208939,-1.060022, -1.359561, -1.736166, -1.528416, -1.24635, -1.301718];
float[] pathZ = [1.393712, 1.336436, 1.225708, 1.169791, 1.215771, 1.318583, 0.5169242];
int count = 0;
int newX = 0;
int newY = 0;
int newZ = 0;

//Are we currently connected?
boolean connected = false;

Tello tello;

void setup() 
{
  Serial.begin(9600); 
  //Connect to the WiFi network
  connectToWiFi(networkName, networkPswd);

  // Multiply each xyz coordinate by 100 into cm
  for (int i = 0; i < sizeof(pathX); i++)
  {
    pathX[i] = pathX[i] * 100;
    pathY[i] = pathY[i] * 100;
    pathZ[i] = pathZ[i] * 100;
  }
}

void loop() 
{
  if (connected)
  {
    tello.takeoff();
    delay(5000);
    for (int count = 0; i < sizeof(pathX); count++)
    {
      // Cast to int in centimeters
      newX = (int)pathX[count];
      newY = (int)pathY[count];
      newZ = (int)pathY[count];

      if (newX > 0)
      {
        tello.right(newX);
      }
      else
      {
        tello.left(abs(newX));
      }
      if (newY > 0)
      {
        tello.forward(newY);
      }
      else
      {
        tello.backward(abs(newY));
      }
      if (newZ > 0)
      {
        tello.up(newZ);
      }
      else
      {
        tello.down(abs(newZ));
      }

      // Wait 2sec before next motion
      delay(2000);
    }

    tello.land();

    //do once and go into a while loop
    while(1)
    {
      delay(5000);
    }
  }
}

void connectToWiFi(const char * ssid, const char * pwd) 
{
  Serial.println("Connecting to WiFi network: " + String(ssid));

  // delete old config
  WiFi.disconnect(true);
  //register event handler
  WiFi.onEvent(WiFiEvent);

  //Initiate connection
  WiFi.begin(ssid, pwd);

  Serial.println("Waiting for WIFI connection...");
}

//wifi event handler
void WiFiEvent(WiFiEvent_t event) 
{
  switch (event) 
  {
    case SYSTEM_EVENT_STA_GOT_IP:
      //When connected set
      Serial.print("WiFi connected! IP address: ");
      Serial.println(WiFi.localIP());
      //initialise Tello after we are connected
      tello.init();
      connected = true;
      break;
      
    case SYSTEM_EVENT_STA_DISCONNECTED:
      Serial.println("WiFi lost connection");
      connected = false;
      break;
  }
}