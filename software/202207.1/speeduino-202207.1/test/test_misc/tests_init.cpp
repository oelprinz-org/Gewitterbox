#include <globals.h>
#include <init.h>
#include <unity.h>
#include "tests_init.h"


void testInitialisation()
{
  RUN_TEST(test_initialisation_complete);
  RUN_TEST(test_initialisation_ports);
  RUN_TEST(test_initialisation_outputs_V03);
  RUN_TEST(test_initialisation_outputs_V04);
  RUN_TEST(test_initialisation_outputs_MX5_8995);
}

void test_initialisation_complete(void)
{
  initialiseAll(); //Run the main initialise function
  TEST_ASSERT_EQUAL(true, initialisationComplete);
}

void test_initialisation_ports(void)
{
  //Test that all the port values have been set
  initialiseAll(); //Run the main initialise function
  TEST_ASSERT_NOT_EQUAL(0, inj1_pin_port);
  TEST_ASSERT_NOT_EQUAL(0, inj2_pin_port);
  TEST_ASSERT_NOT_EQUAL(0, inj3_pin_port);
  TEST_ASSERT_NOT_EQUAL(0, inj4_pin_port);
  TEST_ASSERT_NOT_EQUAL(0, ign1_pin_port);
  TEST_ASSERT_NOT_EQUAL(0, ign2_pin_port);
  TEST_ASSERT_NOT_EQUAL(0, ign3_pin_port);
  TEST_ASSERT_NOT_EQUAL(0, ign4_pin_port);
}

//Test that all mandatory output pins have their mode correctly set to output
void test_initialisation_outputs_V03(void)
{
  configPage2.pinMapping = 2; //Set the board number to test
  initialiseAll(); //Run the main initialise function

  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinCoil1), "Coil1");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinCoil2), "Coil2");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinCoil3), "Coil3");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinCoil4), "Coil4");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinInjector1), "Injector 1");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinInjector2), "Injector 2");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinInjector3), "Injector 3");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinInjector4), "Injector 4");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinTachOut), "Tacho Out");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinIdle1), "Idle 1");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinIdle2), "Idle 2");
  //if(configPage2.idleUpOutputEnabled) { TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinIdleUpOutput), "Idle Up"); } //This needs to have a default pin set
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinFuelPump), "Fuel Pump");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinFan), "Fan");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinStepperDir), "Stepper Dir");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinStepperStep), "Stepper Step");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinStepperEnable), "Stepper Enable");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinBoost), "Boost");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinVVT_1), "VVT1");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinVVT_2), "VVT2");

}

//Test that all mandatory output pins have their mode correctly set to output
void test_initialisation_outputs_V04(void)
{
  configPage2.pinMapping = 3; //Set the board number to test
  initialiseAll(); //Run the main initialise function

  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinCoil1), "Coil1");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinCoil2), "Coil2");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinCoil3), "Coil3");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinCoil4), "Coil4");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinInjector1), "Injector 1");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinInjector2), "Injector 2");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinInjector3), "Injector 3");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinInjector4), "Injector 4");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinTachOut), "Tacho Out");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinIdle1), "Idle 1");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinIdle2), "Idle 2");
  //if(configPage2.idleUpOutputEnabled) { TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinIdleUpOutput), "Idle Up"); } //This needs to have a default pin set
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinFuelPump), "Fuel Pump");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinFan), "Fan");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinStepperDir), "Stepper Dir");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinStepperStep), "Stepper Step");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinStepperEnable), "Stepper Enable");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinBoost), "Boost");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinVVT_1), "VVT1");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinVVT_2), "VVT2");

}

//Test that all mandatory output pins have their mode correctly set to output
void test_initialisation_outputs_MX5_8995(void)
{
  configPage2.pinMapping = 9; //Set the board number to test
  initialiseAll(); //Run the main initialise function

  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinCoil1), "Coil1");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinCoil2), "Coil2");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinCoil3), "Coil3");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinCoil4), "Coil4");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinInjector1), "Injector 1");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinInjector2), "Injector 2");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinInjector3), "Injector 3");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinInjector4), "Injector 4");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinTachOut), "Tacho Out");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinIdle1), "Idle 1");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinIdle2), "Idle 2");
  //if(configPage2.idleUpOutputEnabled) { TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinIdleUpOutput), "Idle Up"); } //This needs to have a default pin set
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinFuelPump), "Fuel Pump");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinFan), "Fan");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinStepperDir), "Stepper Dir");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinStepperStep), "Stepper Step");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinStepperEnable), "Stepper Enable");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinBoost), "Boost");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinVVT_1), "VVT1");
  TEST_ASSERT_EQUAL_MESSAGE(OUTPUT, getPinMode(pinVVT_2), "VVT2");

}

uint8_t getPinMode(uint8_t pin)
{
  uint8_t bit = digitalPinToBitMask(pin);
  uint8_t port = digitalPinToPort(pin);

  // I don't see an option for mega to return this, but whatever...
  if (NOT_A_PIN == port) return UNKNOWN_PIN;

  // Is there a bit we can check?
  if (0 == bit) return UNKNOWN_PIN;

  // Is there only a single bit set?
  if (bit & (bit - 1)) return UNKNOWN_PIN;

  volatile uint8_t *reg, *out;
  reg = portModeRegister(port);
  out = portOutputRegister(port);

  if (*reg & bit)
    return OUTPUT;
  else if (*out & bit)
    return INPUT_PULLUP;
  else
    return INPUT;
}