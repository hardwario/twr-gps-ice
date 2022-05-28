#ifndef _APPLICATION_H
#define _APPLICATION_H

#ifndef VERSION
#define VERSION "vdev"
#endif

#include <twr.h>
#include <twr_pcal6416a.h>
#include <twr_delay.h>
#include <bcl.h>

#define NUMBER_OF_GPIO_TESTS 4
#define NUMBER_OF_GPIO_SUB_TESTS 5

typedef enum 
{
    PU_PIN = 0,
    ON_PIN = 1,
    PD_PIN = 2,
    CL_PIN = 3

} pin_index;

typedef enum
{
    TEST_EXPANDER = 0,
    GPIO_TEST = 1

} test_state;

typedef enum
{
    TEST_GPIO_STATE_1 = 0,
    TEST_GPIO_STATE_2 = 1,
    TEST_GPIO_STATE_3 = 2,
    TEST_GPIO_STATE_4 = 3,
    TEST_GPIO_STATE_5 = 4,
    TEST_GPIO_STATE_DONE = 5

} gpio_test_state;


twr_pcal6416a_pin_t gpio_pins[4][4] = {
    {TWR_PCAL6416A_PIN_P1_5, TWR_PCAL6416A_PIN_P1_3, TWR_PCAL6416A_PIN_P1_7, TWR_PCAL6416A_PIN_P1_6},
    {TWR_PCAL6416A_PIN_P1_0, TWR_PCAL6416A_PIN_P1_2, TWR_PCAL6416A_PIN_P1_4, TWR_PCAL6416A_PIN_P1_1},
    {TWR_PCAL6416A_PIN_P0_5, TWR_PCAL6416A_PIN_P0_3, TWR_PCAL6416A_PIN_P0_7, TWR_PCAL6416A_PIN_P0_6},
    {TWR_PCAL6416A_PIN_P0_2, TWR_PCAL6416A_PIN_P0_0, TWR_PCAL6416A_PIN_P0_4, TWR_PCAL6416A_PIN_P0_1},
};

twr_pcal6416a_pin_direction_t gpio_subtest_pins_setup[5][4] = {
    {TWR_PCAL6416A_PIN_DIRECTION_INPUT, TWR_PCAL6416A_PIN_DIRECTION_INPUT, TWR_PCAL6416A_PIN_DIRECTION_INPUT, TWR_PCAL6416A_PIN_DIRECTION_INPUT},
    {TWR_PCAL6416A_PIN_DIRECTION_OUTPUT, TWR_PCAL6416A_PIN_DIRECTION_INPUT, TWR_PCAL6416A_PIN_DIRECTION_INPUT, TWR_PCAL6416A_PIN_DIRECTION_INPUT},
    {TWR_PCAL6416A_PIN_DIRECTION_INPUT, TWR_PCAL6416A_PIN_DIRECTION_OUTPUT, TWR_PCAL6416A_PIN_DIRECTION_OUTPUT, TWR_PCAL6416A_PIN_DIRECTION_INPUT},
    {TWR_PCAL6416A_PIN_DIRECTION_OUTPUT, TWR_PCAL6416A_PIN_DIRECTION_INPUT, TWR_PCAL6416A_PIN_DIRECTION_INPUT, TWR_PCAL6416A_PIN_DIRECTION_OUTPUT},
    {TWR_PCAL6416A_PIN_DIRECTION_OUTPUT, TWR_PCAL6416A_PIN_DIRECTION_INPUT, TWR_PCAL6416A_PIN_DIRECTION_OUTPUT, TWR_PCAL6416A_PIN_DIRECTION_INPUT},
};

int gpio_subtest_pins_output[5][4] = {
    {1, 1, 1, 1},
    {0, 1, 1, 1},
    {1, 0, 1, 1},
    {0, 1, 1, 1},
    {0, 1, 1, 1},
};

twr_adc_channel_t gpio_adc[4] = {
    TWR_ADC_CHANNEL_A2,
    TWR_ADC_CHANNEL_A3,
    TWR_ADC_CHANNEL_A4,
    TWR_ADC_CHANNEL_A5,
};

#endif
