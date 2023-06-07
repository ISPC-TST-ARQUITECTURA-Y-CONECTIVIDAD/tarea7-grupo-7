#include <SoftwareSerial.h>
#include <EasyVR.h>

SoftwareSerial bluetoothSerial(2, 3); // Configura los pines RX y TX para la comunicación Bluetooth
EasyVR easyvr(10, 11); // Configura los pines RX y TX para el módulo EasyVR

const int ventiladorPin = 8; // Pin para controlar el ventilador

void setup() {
  Serial.begin(9600); // Inicia la comunicación serie para el monitor serial
  bluetoothSerial.begin(9600); // Inicia la comunicación Bluetooth
  easyvr.begin(bluetoothSerial); // Inicia el módulo EasyVR utilizando la comunicación Bluetooth

  pinMode(ventiladorPin, OUTPUT); // Configura el pin del ventilador como salida
}

void loop() {
  if (bluetoothSerial.available()) {
    char command = bluetoothSerial.read(); // Lee el comando recibido por Bluetooth

    if (command == 'F') {
      encenderVentilador();
    } else if (command == 'O') {
      apagarVentilador();
    }

    Serial.println(command); // Muestra el comando en el monitor serial
  }

  if (easyvr.getID() != EasyVR::ID_INVALID) {
    int16_t idx = easyvr.recognize();
    
    if (idx >= 0) {
      switch (idx) {
        case 0:
          encenderVentilador();
          break;
        case 1:
          apagarVentilador();
          break;
       
      }
    }
  }
}

void encenderVentilador() {
  digitalWrite(ventiladorPin, HIGH); // Enciende el ventilador
  Serial.println("Ventilador encendido");
}

void apagarVentilador() {
  digitalWrite(ventiladorPin, LOW); // Apaga el ventilador
  Serial.println("Ventilador apagado");
}
