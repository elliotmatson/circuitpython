// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2020 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#include "py/objtuple.h"
#include "shared-bindings/board/__init__.h"

static const mp_rom_obj_tuple_t matrix_addr_tuple = {
    {&mp_type_tuple},
    5,
    {
        MP_ROM_PTR(&pin_GPIO38),
        MP_ROM_PTR(&pin_GPIO39),
        MP_ROM_PTR(&pin_GPIO40),
        MP_ROM_PTR(&pin_GPIO41),
        MP_ROM_PTR(&pin_GPIO48),
    }
};

static const mp_rom_obj_tuple_t matrix_data_tuple = {
    {&mp_type_tuple},
    6,
    {
        MP_ROM_PTR(&pin_GPIO11),
        MP_ROM_PTR(&pin_GPIO12),
        MP_ROM_PTR(&pin_GPIO13),

        MP_ROM_PTR(&pin_GPIO14),
        MP_ROM_PTR(&pin_GPIO21),
        MP_ROM_PTR(&pin_GPIO47),
    }
};

static const mp_rom_map_elem_t matrix_common_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_rgb_pins), MP_ROM_PTR(&matrix_data_tuple) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_clock_pin), MP_ROM_PTR(&pin_GPIO42) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_latch_pin), MP_ROM_PTR(&pin_GPIO2) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_output_enable_pin), MP_ROM_PTR(&pin_GPIO1) },
};
MP_DEFINE_CONST_DICT(matrix_common_dict, matrix_common_table);

static const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    { MP_ROM_QSTR(MP_QSTR_BUTTON), MP_ROM_PTR(&pin_GPIO0) },
    { MP_ROM_QSTR(MP_QSTR_BOOT0), MP_ROM_PTR(&pin_GPIO0) },
    { MP_ROM_QSTR(MP_QSTR_D0), MP_ROM_PTR(&pin_GPIO0) },

    { MP_ROM_QSTR(MP_QSTR_LED), MP_ROM_PTR(&pin_GPIO13) },
    { MP_ROM_QSTR(MP_QSTR_D13), MP_ROM_PTR(&pin_GPIO13) },
    { MP_ROM_QSTR(MP_QSTR_L), MP_ROM_PTR(&pin_GPIO13) },

    { MP_ROM_QSTR(MP_QSTR_A4), MP_ROM_PTR(&pin_GPIO11) },
    { MP_ROM_QSTR(MP_QSTR_A3), MP_ROM_PTR(&pin_GPIO10) },
    { MP_ROM_QSTR(MP_QSTR_A2), MP_ROM_PTR(&pin_GPIO9) },
    { MP_ROM_QSTR(MP_QSTR_A1), MP_ROM_PTR(&pin_GPIO3) },
    { MP_ROM_QSTR(MP_QSTR_A0), MP_ROM_PTR(&pin_GPIO12) },

    { MP_ROM_QSTR(MP_QSTR_NEOPIXEL), MP_ROM_PTR(&pin_GPIO10) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_MTX_ADDRESS), MP_ROM_PTR(&matrix_addr_tuple) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_MTX_COMMON), MP_ROM_PTR(&matrix_common_dict) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_MTX_R1), MP_ROM_PTR(&pin_GPIO11) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_MTX_G1), MP_ROM_PTR(&pin_GPIO12) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_MTX_B1), MP_ROM_PTR(&pin_GPIO13) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_MTX_R2), MP_ROM_PTR(&pin_GPIO14) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_MTX_G2), MP_ROM_PTR(&pin_GPIO21) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_MTX_B2), MP_ROM_PTR(&pin_GPIO47) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_MTX_ADDRA), MP_ROM_PTR(&pin_GPIO38) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_MTX_ADDRB), MP_ROM_PTR(&pin_GPIO39) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_MTX_ADDRC), MP_ROM_PTR(&pin_GPIO40) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_MTX_ADDRD), MP_ROM_PTR(&pin_GPIO41) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_MTX_ADDRE), MP_ROM_PTR(&pin_GPIO48) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_MTX_CLK), MP_ROM_PTR(&pin_GPIO42) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_MTX_LAT), MP_ROM_PTR(&pin_GPIO2) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_MTX_OE), MP_ROM_PTR(&pin_GPIO1) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
