// peptech GmbH
// Author: Yannik Schneidereit
// E-Mail: yannik.schneidereit@peptech.de
// Date: 08.07.2022

#include "peptech_WiFi.h"

peptechWiFi::peptechWiFi()
{

}

peptechWiFi::~peptechWiFi()
{

}

// Connect to WiFi
// m_ssid and m_password must be specified in private
void peptechWiFi::Connect_to_WiFi()
{
  WiFi.begin(m_ssid, m_password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.println("Connecting to WiFi..");
  }
  Serial.println("Connected to the WiFi network");
}