#include <Arduino.h>

// Executes integer operations
void runMIPSTest(const long iterations) {
    volatile int sum = 0; // If we don't use volatile the compiler checks that the sum variable is never used so does not run the for loop
    for (long i = 0; i < iterations; i++) {
        sum += 1;
    }
}

// Executes floating point operations
void runFLOPSTest(const long iterations) {
    volatile float sum = 0.0; // If we don't use volatile the compiler checks that the sum variable is never used so does not run the for loop
    for (long i = 0; i < iterations; i++) {
        sum += 1.1f;
    }
}

// This function performs the math to simulate workload
void runTest(const char* type) {
    long iterations = 40000000; // 40 M operations
    unsigned long startMs = millis(); //outputs the current time in miliseconds

    if (strcmp(type, "integer") == 0) {
        runMIPSTest(iterations);
    } else {
        runFLOPSTest(iterations);
    }

    unsigned long endMs = millis();
    Serial.printf("Test [%s] finished. Time: %lu ms\n", type, endMs - startMs);
}

void setup() {
    Serial.begin(115200);
    delay(2000);
    Serial.println("\n--- STARTING PERFORMANCE TEST ---");

    // TEST 1: LOW FREQUENCY (80MHz)
    Serial.println("\nTest 1: Setting CPU to 80MHz...");
    setCpuFrequencyMhz(80);
    Serial.printf("Current Frequency: %u MHz\n", getCpuFrequencyMhz());
    runTest("integer");
    runTest("float");

    delay(3000); 

    // TEST 2: HIGH FREQUENCY (240MHz)
    Serial.println("\nTest 2: Setting CPU to 240MHz...");
    setCpuFrequencyMhz(240);
    Serial.printf("Current Frequency: %u MHz\n", getCpuFrequencyMhz());
    runTest("integer");
    runTest("float");
    
    Serial.println("\n--- TEST COMPLETE ---");
}

void loop() {
    // Empty
}