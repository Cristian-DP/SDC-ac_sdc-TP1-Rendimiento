#include "esp32-hal-cpu.h"
bool sumar = true;

void setup() {
  // Options: 240, 160, 80
  setCpuFrequencyMhz(80); 
  //setCpuFrequencyMhz(160);
  //setCpuFrequencyMhz(240);
  Serial.begin(115200);
}

void loop() {
  Serial.println(getCpuFrequencyMhz()); // Check speed

  volatile  int suma = 0;
  volatile float suma_f = 0.0;
 
  if (sumar) {
    unsigned long inicio = micros(); // inicio medición
    for (int j = 0; j < 1000; j++) {   
      for (int i = 1; i <= 1000; i++) { suma += i;  }
    }
    for (int j = 0; j < 1000; j++) { 
      for (float i = 1.0; i <= 1000.0; i++) { suma_f += i;  }
    }

    unsigned long fin = micros(); // fin medición

    Serial.print("Tiempo total (us): ");
    Serial.println(fin - inicio);
  }
  
  Serial.print("suma ");
  Serial.println(suma);
  sumar = false;
}