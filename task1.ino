const int buttonPin = 2;
const int porchLight = 3;
const int hallwayLight = 4;

void setup()
{
    pinMode(buttonPin, INPUT_PULLUP);

    pinMode(porchLight, OUTPUT);
    pinMode(hallwayLight, OUTPUT);

    digitalWrite(porchLight, LOW);
    digitalWrite(hallwayLight, LOW);
}

void turnOnPorchLight()
{
    digitalWrite(porchLight, HIGH);
    delay(30000);
    digitalWrite(porchLight, LOW);
}

void turnOnHallwayLight()
{
    digitalWrite(hallwayLight, HIGH);
    delay(60000);
    digitalWrite(hallwayLight, LOW);
}

void loop()
{
    if (digitalRead(buttonPin) == LOW)
    {
        turnOnPorchLight();
        turnOnHallwayLight();
    }
}
