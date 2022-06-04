#if defined(EXAMPLE_BUILD)

#include <Arduino.h>
#include <ESP8266WiFi.h>
#include "AsyncWebSocket.h"
#include <ArduinoJson.h>

const char *ssid = pSSID;
const char *password = pWLANPASSWORD;

AsyncWebServer server(80);
AsyncWebSocket ws("/connection");

void setup()
{
    Serial.begin(115200);

    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);
        Serial.print(".");
    }
    Serial.println("");
    Serial.println("WiFi connected.");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());

    server.addHandler(&ws);
    server.begin();

    ws.onEvent([](AsyncWebSocket *server, AsyncWebSocketClient *client, AwsEventType type, void *arg, uint8_t *data, size_t len)
    {
        DynamicJsonDocument jsonDoc(4000);
        jsonDoc["warning"]["code"] = 600;
        jsonDoc["warning"]["description"] = "Your device got removed.";
        jsonDoc["warning"]["message"] = "You have been logged out.";
        jsonDoc["warning1"]["code"] = 600;
        jsonDoc["warning1"]["description"] = "Your device got removed.";
        jsonDoc["warning1"]["message"] = "You have been logged out.";
        jsonDoc["warning2"]["code"] = 600;
        jsonDoc["warning2"]["description"] = "Your device got removed.";
        jsonDoc["warning2"]["message"] = "You have been logged out.";
        jsonDoc["warning3"]["code"] = 600;
        jsonDoc["warning3"]["description"] = "Your device got removed.";
        jsonDoc["warning3"]["message"] = "You have been logged out.";
        jsonDoc["warning4"]["code"] = 600;
        jsonDoc["warning4"]["description"] = "Your device got removed.";
        jsonDoc["warning4"]["message"] = "You have been logged out.";
        jsonDoc["warning5"]["code"] = 600;
        jsonDoc["warning5"]["description"] = "Your device got removed.";
        jsonDoc["warning5"]["message"] = "You have been logged out.";
        jsonDoc["warning6"]["code"] = 600;
        jsonDoc["warning6"]["description"] = "Your device got removed.";
        jsonDoc["warning6"]["message"] = "You have been logged out.";
        jsonDoc["warning7"]["code"] = 600;
        jsonDoc["warning7"]["description"] = "Your device got removed.";
        jsonDoc["warning7"]["message"] = "You have been logged out.";
        jsonDoc["warning8"]["code"] = 600;
        jsonDoc["warning8"]["description"] = "Your device got removed.";
        jsonDoc["warning8"]["message"] = "You have been logged out.";
        jsonDoc["warning9"]["code"] = 600;
        jsonDoc["warning9"]["description"] = "Your device got removed.";
        jsonDoc["warning9"]["message"] = "You have been logged out.";
        jsonDoc["warning10"]["code"] = 600;
        jsonDoc["warning10"]["description"] = "Your device got removed.";
        jsonDoc["warning10"]["message"] = "You have been logged out.";

        jsonDoc["warning11"]["code"] = 600;
        jsonDoc["warning11"]["description"] = "Your device got removed.";
        jsonDoc["warning11"]["message"] = "You have been logged out.";
        jsonDoc["warning12"]["code"] = 600;
        jsonDoc["warning12"]["description"] = "Your device got removed.";
        jsonDoc["warning12"]["message"] = "You have been logged out.";
        jsonDoc["warning13"]["code"] = 600;
        jsonDoc["warning13"]["description"] = "Your device got removed.";
        jsonDoc["warning13"]["message"] = "You have been logged out.";
        jsonDoc["warning14"]["code"] = 600;
        jsonDoc["warning14"]["description"] = "Your device got removed.";
        jsonDoc["warning14"]["message"] = "You have been logged out.";
        jsonDoc["warning15"]["code"] = 600;
        jsonDoc["warning15"]["description"] = "Your device got removed.";
        jsonDoc["warning15"]["message"] = "You have been logged out.";
        jsonDoc["warning16"]["code"] = 600;
        jsonDoc["warning16"]["description"] = "Your device got removed.";
        jsonDoc["warning16"]["message"] = "You have been logged out.";
        jsonDoc["warning17"]["code"] = 600;
        jsonDoc["warning17"]["description"] = "Your device got removed.";
        jsonDoc["warning17"]["message"] = "You have been logged out.";
        jsonDoc["warning18"]["code"] = 600;
        jsonDoc["warning18"]["description"] = "Your device got removed.";
        jsonDoc["warning18"]["message"] = "You have been logged out.";
        jsonDoc["warning19"]["code"] = 600;
        jsonDoc["warning19"]["description"] = "Your device got removed.";
        jsonDoc["warning19"]["message"] = "You have been logged out.";
        jsonDoc["warning20"]["code"] = 600;
        jsonDoc["warning20"]["description"] = "Your device got removed.";
        jsonDoc["warning20"]["message"] = "You have been logged out.";

        //size_t jsonLen = measureJson(jsonDoc);
        //AsyncWebSocketMessageBuffer *buffer = ws.makeBuffer(jsonLen);
        //if (buffer)
        //{
        //    serializeJson(jsonDoc, (char *)buffer->get(), jsonLen + 1);
        //    client->text(buffer);
        //}

        client->text(jsonDoc);
    });
}

void loop()
{
    ws.cleanupClients();
}

#endif