#include "wifi_esp01.h"
#include <stdio.h>
#include <string.h>
#include "stm32f4xx_hal.h" // Assurez-vous d'inclure les bons headers STM32 HAL ici

static char wifi_ssid[64];
static char wifi_password[64];

void wifi_init(const char *ssid, const char *password) {
    strncpy(wifi_ssid, ssid, sizeof(wifi_ssid) - 1);
    wifi_ssid[sizeof(wifi_ssid) - 1] = '\0';

    strncpy(wifi_password, password, sizeof(wifi_password) - 1);
    wifi_password[sizeof(wifi_password) - 1] = '\0';
}

void wifi_connect() {
    // Code de connexion WiFi avec ESP-01 (hypothétique, à adapter)
    printf("Connecting to WiFi SSID: %s ...\n", wifi_ssid);
    // Ici, vous auriez le code réel pour initialiser et connecter l'ESP-01 au WiFi
    printf("Connected to WiFi!\n");
}

void wifi_disconnect() {
    // Code pour déconnexion WiFi (hypothétique, à adapter)
    printf("Disconnecting from WiFi...\n");
    // Ici, vous auriez le code réel pour déconnecter l'ESP-01 du WiFi
    printf("Disconnected from WiFi!\n");
}
