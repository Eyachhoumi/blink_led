// mqtt_client.h

#ifndef MQTT_CLIENT_H
#define MQTT_CLIENT_H

#include <stdint.h>

typedef struct {
    char broker_address[128];
    uint16_t port;
    // Autres informations de configuration MQTT si nécessaire
} MQTTClient;

// Déclaration du prototype de la fonction callback
void mqtt_message_callback(char *topic, uint8_t *payload, uint32_t length);

// Autres fonctions MQTT
void mqtt_init(MQTTClient *client, const char *broker_address, uint16_t port);
void mqtt_connect(MQTTClient *client);
void mqtt_disconnect(MQTTClient *client);
void mqtt_subscribe(MQTTClient *client, const char *topic, void (*callback)(char *topic, uint8_t *payload, uint32_t length));
void mqtt_publish(MQTTClient *client, const char *topic, const uint8_t *payload, uint32_t length);

#endif // MQTT_CLIENT_H
