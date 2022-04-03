#pragma once

#ifndef ENCODER_ENABLE
#define ENCODER_ENABLE
#endif

/* Force NKRO on boot up regardless of the setting saved in the EEPROM (uncomment to enable it) */
#define FORCE_NKRO

// Need to define this so that the leds turn off when USB is off or suspended.
#define RGB_DISABLE_WHEN_USB_SUSPENDED