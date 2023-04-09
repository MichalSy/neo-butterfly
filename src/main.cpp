#pragma warning( disable : 4507 34; once : 4385; error : 164 )

#include "Manager/ButterflyManager.cpp"

ButterflyManager *butterflyManager = ButterflyManager::getInstance();

void setup()
{
  Serial.begin(9600);

  while (!Serial)
  {
    ;
  } // wait for serial port to connect

  butterflyManager->init();
}

void loop()
{
  butterflyManager->update();
  delay(10);
}