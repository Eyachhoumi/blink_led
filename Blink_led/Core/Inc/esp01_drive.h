#ifndef ESP01_DRIVE_H
#define ESP01_DRIVE_H

#include <stdint.h>

// Définition des types d'état du WiFi
typedef enum {
    WiFi_OK = 0,
    WiFi_ERROR = 1,
    WiFi_CONNECT_FAILED = 2,
    // Ajoutez d'autres états si nécessaire
} WiFi_Status_t;

// Fonction d'initialisation du module WiFi ESP-01
WiFi_Status_t esp_init(const char *ssid, const char *password);

// Fonction pour se connecter au réseau WiFi
WiFi_Status_t esp_connect(const char *ssid, const char *password);

#endif // ESP01_DRIVE_H
