RGB_MATRIX_EFFECT(caps_lock_matrix)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static bool caps_lock_matrix(effect_params_t* params)
{
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    for (uint8_t i = led_min; i < led_max; i++)
    {
        rgb_matrix_set_color(i, 0xff, 0x00, 0x00);
    }
    
    return led_max < DRIVER_LED_TOTAL;
}

#endif