#include "lib_two.h"

void funcTwo(void) {
    Serial.println("Library TWO");
}

void funcOneFromTwo(void) {
    Serial.print("From library two I am calling: ");
    funcOne();
}