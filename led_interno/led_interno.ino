void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // utiliza o led interno
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // led ligado
  delay(1000); // espera 1 segundo
  digitalWrite(LED_BUILTIN, LOW); // led desligado
  delay(2000); // espera mais 1 segundo
}