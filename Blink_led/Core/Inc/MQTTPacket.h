#ifndef MQTTPACKET_H
#define MQTTPACKET_H

#include <stdint.h>

// Définition des types d'état MQTT
typedef enum {
    MQTT_OK = 0,
    MQTT_ERROR = 1,
    MQTT_CONNECT_FAILED = 2,
    // Ajoutez d'autres états si nécessaire
} MQTT_Status_t;

// Fonction de connexion au broker MQTT
MQTT_Status_t MQTT_Connect(const char *broker_address, const char *client_id);

// Fonction pour se déconnecter du broker MQTT
MQTT_Status_t MQTT_Disconnect(void);

// Fonction pour publier un message MQTT sur un topic spécifié
MQTT_Status_t MQTT_Publish(const char *topic, const char *message);

// Fonction pour souscrire à un topic MQTT
MQTT_Status_t MQTT_Subscribe(const char *topic);

#endif // MQTTPACKET_H
