#pragma once

/* SPI Config for LED Driver */
#ifndef SPI_DRIVER
#define SPI_DRIVER SPID1
#endif

/* Force NKRO on boot up regardless of the setting saved in the EEPROM (uncomment to enable it) */
#ifdef NKRO_DEFAULT_ON
#undef NKRO_DEFAULT_ON
#endif
#define NKRO_DEFAULT_ON true

// Need to define this so that the leds turn off when USB is off or suspended.
#ifndef RGB_DISABLE_WHEN_USB_SUSPENDED
#define RGB_DISABLE_WHEN_USB_SUSPENDED
#endif

// Turn RGB off after N milliseconds. Covers when power goes out and comes back on. This will usually turn on the LEDs even though the PC is off.
#ifdef RGB_DISABLE_TIMEOUT
#undef RGB_DISABLE_TIMEOUT
#endif
#define RGB_DISABLE_TIMEOUT 1800000

// Raise it to 8ms to see if it helps
#ifdef DEBOUNCE
#undef DEBOUNCE
#endif
#define DEBOUNCE 8