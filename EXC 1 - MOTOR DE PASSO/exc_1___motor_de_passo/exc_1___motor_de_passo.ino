// ConstantSpeed.pde
// -*- mode: C++ -*-
//
// Shows how to run AccelStepper in the simplest,
// fixed speed mode with no accelerations
/// \author  Mike McCauley (mikem@open.com.au)
// Copyright (C) 2009 Mike McCauley
// $Id: HRFMessage.h,v 1.1 2009/08/15 05:32:58 mikem Exp mikem $

#include <AccelStepper.h>

AccelStepper stepper; // Defaults to 4 pins on 2, 3, 4, 5  (define 4 pinos em 2, 3, 4, e 5)
int contvoltas = 0;
void setup()
{
  stepper.setMaxSpeed(300.0);
  stepper.setAcceleration(300.0);


}

void loop()
{
  Serial.print("volta: ");

   
  while (contvoltas <= 3)
  {
       for (int i = 1; i <= 2; i++)
    {
      stepper.runToNewPosition (200);
      stepper.runToNewPosition (-200);
      contvoltas++;
    }
    contvoltas = contvoltas;
    Serial.println(contvoltas);
  }
}
