char const*const RED_LED_FILE = "/sys/class/leds/led:rgb_red/brightness";
char const*const GREEN_LED_FILE = "/sys/class/leds/led:rgb_green/brightness";
char const*const BLUE_LED_FILE = "/sys/class/leds/led:rgb_blue/brightness";

char const*const BUTTON_BACKLIGHT_FILE[] = {
    "/sys/class/leds/gpled_0/brightness",
    "/sys/class/leds/gpled_1/brightness",
    "/sys/class/leds/gpled_2/brightness",
    "/sys/class/leds/gpled_3/brightness",
};

char const*const LCD_BACKLIGHT_FILE = "/sys/class/leds/lcd-backlight/brightness";
