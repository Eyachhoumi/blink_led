#ifndef WIFI_ESP01_H
#define WIFI_ESP01_H

#include <stdint.h>

// Initialisation du module WiFi ESP-01 avec les identifiants réseau
void wifi_init(const char *ssid, const char *password);

// Connexion au réseau WiFi
void wifi_connect();

// Déconnexion du réseau WiFi
void wifi_disconnect();

#endif // WIFI_ESP01_H
