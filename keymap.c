#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	//Base Layer (alpha, punct)
	[0] = LAYOUT_split_3x5_2(
		// row 1 right - left
		// pinky	ring		middle		index		index+
		KC_O,     KC_I,     KC_U,     KC_Y,     KC_NO,
		// index+	index		middle		ring		pinky
		KC_NO,    KC_R,		  KC_E,		  KC_W,		  KC_Q,

		// row 2 right - left
		// pinky	ring		middle		index		index+
		RGUI_T(KC_L),	RALT_T(KC_K),	RSFT_T(KC_J),	RCTL_T(KC_H),	KC_NO,
		// index+	index		middle		ring		pinky
		KC_NO,  LCTL_T(KC_F),	LSFT_T(KC_D),	LALT_T(KC_S),	LGUI_T(KC_A),

    // DONE
		
		// row 3 right - left
		// pinky	ring		middle		index		index+
		KC_DOT,   KC_COMM,  KC_M,     KC_N,     KC_NO,
		// index+	index		middle		ring		pinky
		KC_NO,    KC_V,     KC_C,     KC_X,		  KC_Z,

		// row 4
    // on update update function for hold on other key press
		// rthumb_o     rthumb_i	      lthumb_i	      lthumb_o
		LT(1, KC_DEL),	LT(2, KC_BSPC),	LT(3, KC_SPC),	LT(4, KC_TAB)
	),
  // 
	// Function Layer
	[1] = LAYOUT_split_3x5_2(
		// row 1 right - left
		// pinky	ring		middle		index		index+
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		// index+	index		middle		ring		pinky
		KC_NO,	  KC_0,		  KC_9,		  KC_ESC,		KC_GRV,

		// row 2 right - left
		// pinky	ring		middle		index		index+
		KC_RGUI,	KC_RALT,	KC_RSFT,	KC_RCTL,	KC_NO,
		// index+	index		middle		ring		pinky
		KC_NO,		KC_4,		  KC_3,		  KC_2,		  KC_1,

		// row 3 right - left
		// pinky	ring		middle		index		index+
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		// index+	index		middle		ring		pinky
		KC_NO,  	KC_8,		  KC_7,		  KC_6,		  KC_5,
		
		// row 4
		// lthumb_i	lthumb_o	rthumb_o	rthumb_i
		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS
	),
	// symbol layer 2
	[2] = LAYOUT_split_3x5_2(
		// row 1 right - left
		// pinky	ring		middle		index		index+
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		// index+	index		middle		ring		pinky
		KC_NO,		KC_F8,    KC_F7,    KC_F6,    KC_F5,

		// row 2 right - left
		// pinky	ring		middle		index		index+
		KC_RGUI,	KC_RALT,	KC_RSFT,	KC_RCTL,	KC_NO,
		// index+	index		middle		ring		pinky
		KC_NO,		KC_F4,    KC_F3,    KC_F2,    KC_F1,

		// row 3 right - left
		// pinky	ring		middle		index		index+
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		// index+	index		middle		ring		pinky
		KC_NO,		KC_F12,   KC_F11,   KC_F10,   KC_F9,
		
		// row 4
		// lthumb_i	lthumb_o	rthumb_o	rthumb_i
		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS
	),
	// number/symbol layer 1
	[3] = LAYOUT_split_3x5_2(
		// row 1 right - left
		// pinky	ring		middle		index		index+
    KC_SLSH,  KC_BSLS,  KC_EQL,   KC_MINS,  KC_NO,
		// index+	index		middle		ring		pinky
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,

		// row 2 right - left
		// pinky	ring		middle		index		index+
		KC_QUOT,  KC_SCLN,  KC_RBRC,  KC_LBRC,  KC_NO,
		// index+	index		middle		ring		pinky
		KC_NO,		KC_LCTL,  KC_LSFT,  KC_LALT,  KC_LGUI,

		// row 3 right - left
		// pinky	ring		middle		index		index+
		KC_P,     KC_T,     KC_G,     KC_B,     KC_NO,
		// index+	index		middle		ring		pinky
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		
		// row 4
		// lthumb_i	lthumb_o	rthumb_o	rthumb_i
		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS
	),
	// nav layer
	[4] = LAYOUT_split_3x5_2(
		// row 1 right - left
		// pinky	ring		middle		index		index+
    KC_SCRL,  KC_INS,   KC_PGDN,  KC_PGUP,  KC_NO,
		// index+	index		middle		ring		pinky
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,

		// row 2 right - left
		// pinky	ring		middle		index		index+
    KC_RGHT,  KC_UP,    KC_DOWN,  KC_LEFT,  KC_NO,
		// index+	index		middle		ring		pinky
		KC_NO,		KC_LCTL,	KC_LSFT,	KC_LALT,	KC_LGUI,

		// row 3 right - left
		// pinky	ring		middle		index		index+
		KC_ENT,		KC_CAPS,  KC_END,	  KC_HOME,	KC_NO,
		// index+	index		middle		ring		pinky
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		
		// row 4
		// lthumb_i	lthumb_o	rthumb_o	rthumb_i
		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS
	),

};

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        // layer transition hold on any combo
        case LT(1, KC_DEL):
        case LT(2, KC_BSPC):
        case LT(3, KC_SPC):
        case LT(4, KC_TAB):
            return true;
        // default tapping term behaviour
        default:
            return false;
    }
}

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
