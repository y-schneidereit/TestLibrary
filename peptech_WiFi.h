// peptech GmbH
// Author: Yannik Schneidereit
// E-Mail: yannik.schneidereit@peptech.de
// Date: 08.07.2022

#pragma once
#include "WiFi.h"

class peptechWiFi
{
    public:
        peptechWiFi();
        ~peptechWiFi();
        void Connect_to_WiFi();                     // Connect to WiFi

    private:
        char m_ssid[8] = "peptech";                 // network SSID (name)
        char m_password[15] = "180216&pepTech";     // network password
};