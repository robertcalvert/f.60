/*
Copyright 2017 Robert Calvert <robert.calvert.io>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	/*
	 * Default Layer
	 */
    [0] = \
    KEYMAP(
    ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,
    CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,NUHS,ENT,
    LSFT,NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,
    LCTL,LGUI,LALT,          SPC,                     RALT,FN0,FN1, RCTL 
    ),
    
    /*
     * Fn Layer
     */
    [1] = \
    KEYMAP(
    GRV,F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10,   F11,F12, DEL,
    TAB, Q,  UP,   E,   R,   T,   CALC,   U,   INS,   O,PSCR,   SLCK,BRK,
    CAPS,LEFT,DOWN,RIGHT,F,   G,   H,   J,   K,   L,   HOME,PGUP,NUHS,ENT,
    LSFT,NUBS,Z,   APP,   C,   V,   B,   VOLD,   VOLU,   MUTE ,END, PGDN, RSFT,
    LCTL,LGUI,LALT,          SPC,                     RALT,FN0,FN1, RCTL
    ),
    
    /*
     * Pn Layer
     */
    [2] = \
    KEYMAP(
    GRV,F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10,   F11,F12, DEL,
    TAB, Q,  UP,   E,   R,   T,   CALC,   U,   INS,   O, FN2,   SLCK,BRK,
    CAPS,LEFT,DOWN,RIGHT,F,   G,   H,   J,   K,   L,   HOME,PGUP,NUHS,ENT,
    LSFT,NUBS,Z,   APP,   C,   V,   B,   VOLD,   VOLU,   MUTE ,END, PGDN, RSFT,
    LCTL,LGUI,LALT,          SPC,                     RALT,FN0,FN1, RCTL
    ),
};

/*
 * Fn action definition
 */	
const action_t PROGMEM fn_actions[] = {
	
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_MOMENTARY(2),
    
    [2] = ACTION_MODS_KEY(MOD_LALT, KC_PSCR),
};
