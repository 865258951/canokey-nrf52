
#ifndef PCA10059_H
#define PCA10059_H

#ifdef __cplusplus
extern "C" {
#endif

// LED definitions for PCA10059
// Each LED color is considered a separate LED
#define LEDS_NUMBER    1

#define LED_1          NRF_GPIO_PIN_MAP(1,13)
#define LED_START      LED_1
#define LED_STOP       LED_1

#define LEDS_ACTIVE_STATE 0

#define LEDS_LIST { LED_1 }

#define LEDS_INV_MASK  LEDS_MASK

#define BSP_LED_0      LED_1


// There is only one button for the application
// as the second button is used for a RESET.
#define BUTTONS_NUMBER 2

#define BUTTON_1       NRF_GPIO_PIN_MAP(1,11)
#define BUTTON_2       NRF_GPIO_PIN_MAP(0,2)
#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP

#define BUTTONS_ACTIVE_STATE 0

#define BUTTONS_LIST { BUTTON_1, BUTTON_2 }

#define BSP_BUTTON_0   BUTTON_1

#define BSP_SELF_PINRESET_PIN NRF_GPIO_PIN_MAP(0,19)

#define HWFC           false

#ifdef __cplusplus
}
#endif

#endif // PCA10059_H
