#include <Arduino.h>  // Wajib untuk PlatformIO + ESP32


// Deklarasi pin LED
int lampu = 25; //merah
int lampu2 = 33; //kuning
int lampu3 = 32; //hijau


void setup() {
    Serial.begin(115200);  // Inisialisasi komunikasi Serial
    Serial.println("ESP32 Blinking LED");


    // Atur pin sebagai OUTPUT
    pinMode(lampu, OUTPUT);
    pinMode(lampu2, OUTPUT);
    pinMode(lampu3, OUTPUT);
}


void loop() {
    // Nyalakan kedua LED
    digitalWrite(lampu, HIGH);
    digitalWrite(lampu2, LOW);
    digitalWrite(lampu3, LOW);
    Serial.println("LED 1 ON");
    
    delay(5000); // Tunggu 1 detik

    // Matikan kedua LED
    digitalWrite(lampu, LOW);
    digitalWrite(lampu2, HIGH);
    digitalWrite(lampu3, LOW);
    Serial.println("LED 2 ON");
    
    delay(2000); // Tunggu 1 detik sebelum mengulang

    digitalWrite(lampu, LOW);
    digitalWrite(lampu2, LOW);
    digitalWrite(lampu3, HIGH);
    Serial.println("LED 3 ON");
    
    delay(5000); // Tunggu 1 detik sebelum mengulang
}