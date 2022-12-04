/*
* This file is part of Cleanflight.
*
* Cleanflight is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* Cleanflight is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdbool.h>
#include <platform.h>
#include "drivers/bus.h"
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"
#include "drivers/pinio.h"

timerHardware_t timerHardware[] = {
    DEF_TIM(TIM9, CH2, PA3,  TIM_USE_PPM,      0, 0),

    DEF_TIM(TIM2, CH1, PA0,  TIM_USE_MC_MOTOR|TIM_USE_FW_MOTOR, 0, 0),
    DEF_TIM(TIM2, CH3, PB10, TIM_USE_MC_MOTOR|TIM_USE_FW_MOTOR, 0, 0),
    DEF_TIM(TIM4, CH1, PB6,  TIM_USE_MC_MOTOR|TIM_USE_FW_MOTOR, 0, 0),
    DEF_TIM(TIM4, CH2, PB7,  TIM_USE_MC_MOTOR|TIM_USE_FW_MOTOR, 0, 0),

    DEF_TIM(TIM1, CH1, PA8,  TIM_USE_LED,      0, 0), 
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
