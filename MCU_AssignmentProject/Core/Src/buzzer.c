/*
 * buzzer.c
 *
 *  Created on: Dec 6, 2023
 *      Author: kenng
 */

#include "buzzer.h"
#include "main.h"

void buzzer_on(int freq, int time)
{
    // Tính toán chu kỳ PWM dựa trên tần số
    int period = 1000000 / freq; // Đơn vị là micro giây

    // Xác định giá trị prescaler dựa trên tần số đồng hồ và chu kỳ PWM
    int prescaler = 127;     // Giá trị prescaler
    int counter_period = 20; // Giá trị counter period

    // Đặt tần số PWM và tỷ lệ xung đỉnh
    __HAL_TIM_SET_PRESCALER(&htim3, prescaler);
    __HAL_TIM_SET_AUTORELOAD(&htim3, counter_period);
    __HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, 50); // 50% duty cycle

    // Đặt timer để đếm thời gian chờ
    setTimer1(time);

    // Chờ cho đến khi timer hết
    if (timer1_flag)
    {
        // Tắt buzzer
        __HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, 0);

        // Reset timer flag và counter
        clearTimer1();
    }
}
