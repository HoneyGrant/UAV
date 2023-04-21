/*
 * This file is part of INAV.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Alternatively, the contents of this file may be used under the terms
 * of the GNU General Public License Version 3, as described below:
 *
 * This file is free software: you may copy, redistribute and/or modify
 * it under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * This file is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
 * Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see http://www.gnu.org/licenses/.
 */

#include <stdint.h>
#include <platform.h>

#ifdef TARGET_CONFIG
#include "drivers/io.h"
#include "rx/rx.h"
#include "io/serial.h"
#include "io/ledstrip.h"

void targetConfiguration(void)
{
    ledStripConfigMutable()->ledConfigs[0] = DEFINE_LED(0, 0, COLOR_GREEN, 0, LED_FUNCTION_ARM_STATE, LED_FLAG_OVERLAY(LED_OVERLAY_WARNING), 0);
    // serialConfigMutable()->portConfigs[findSerialPortIndexByIdentifier(TELEMETRY_UART)].functionMask = FUNCTION_TELEMETRY_SMARTPORT;
}
#endif
