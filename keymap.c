#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	//Base Layer (alpha, punct)
	[0] = LAYOUT_split_3x5_2(
		// row 1 right - left
		// pinky	ring		middle		index		index+
		KC_QUOT,	KC_Y,		KC_U,		KC_L,		KC_J,
		// index+	index		middle		ring		pinky
		KC_B,		KC_P,		KC_F,		KC_W,		KC_Q,

		// row 2 right - left
		// pinky	ring		middle		index		index+
		RGUI_T(KC_O),	RALT_T(KC_I),	RSFT_T(KC_E),	RCTL_T(KC_N),	KC_M,
		// index+	index		middle		ring		pinky
		KC_G,		LCTL_T(KC_T),	LSFT_T(KC_S),	LALT_T(KC_R),	LGUI_T(KC_A),
		
		// row 3 right - left
		// pinky	ring		middle		index		index+
		KC_SLSH,	KC_DOT,		KC_COMM,	KC_H,		KC_K,
		// index+	index		middle		ring		pinky
		KC_V,		KC_D,		KC_C,		KC_X,		KC_Z,

		// row 4
		// lthumb_i	lthumb_o	rthumb_o	rthumb_i
		LT(KC_BSPC,1),	LT(KC_ENT,2),	LT(KC_TAB,3),	LT(KC_SPC,4)
	),
	// Function Layer
	[1] = LAYOUT_split_3x5_2(
		// row 1 right - left
		// pinky	ring		middle		index		index+
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		// index+	index		middle		ring		pinky
		KC_PSCR,	KC_F4,		KC_F3,		KC_F2,		KC_F1,

		// row 2 right - left
		// pinky	ring		middle		index		index+
		KC_RGUI,	KC_RALT,	KC_RSFT,	KC_RCTL,	KC_ESC,
		// index+	index		middle		ring		pinky
		KC_ESC,		KC_F8,		KC_F7,		KC_F6,		KC_F5,

		// row 3 right - left
		// pinky	ring		middle		index		index+
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		// index+	index		middle		ring		pinky
		KC_SCRL,	KC_F12,		KC_F11,		KC_F10,		KC_F9,
		
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
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,

		// row 2 right - left
		// pinky	ring		middle		index		index+
		KC_RGUI,	KC_RALT,	KC_RSFT,	KC_RCTL,	KC_ESC,
		// index+	index		middle		ring		pinky
		KC_ESC,		KC_RBRC,	KC_LBRC,	KC_SCLN,	KC_BSLS,

		// row 3 right - left
		// pinky	ring		middle		index		index+
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		// index+	index		middle		ring		pinky
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		
		// row 4
		// lthumb_i	lthumb_o	rthumb_o	rthumb_i
		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS
	),
	// number/symbol layer 1
	[3] = LAYOUT_split_3x5_2(
		// row 1 right - left
		// pinky	ring		middle		index		index+
		KC_9,		KC_8,		KC_7,		KC_MINS,	KC_PSLS,
		// index+	index		middle		ring		pinky
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,

		// row 2 right - left
		// pinky	ring		middle		index		index+
		KC_3,		KC_2,		KC_1,		KC_0,		KC_ESC,
		// index+	index		middle		ring		pinky
		KC_ESC,		KC_LCTL,	KC_LSFT,	KC_LALT,	KC_LGUI,

		// row 3 right - left
		// pinky	ring		middle		index		index+
		KC_6,		KC_5,		KC_4,		KC_EQL,		KC_NO,
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
		KC_INS,		KC_DEL,		KC_HOME,	KC_END,		KC_NO,
		// index+	index		middle		ring		pinky
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,

		// row 2 right - left
		// pinky	ring		middle		index		index+
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_ESC,
		// index+	index		middle		ring		pinky
		KC_ESC,		KC_LCTL,	KC_LSFT,	KC_LALT,	KC_LGUI,

		// row 3 right - left
		// pinky	ring		middle		index		index+
		KC_NO,		KC_NO,		KC_PGUP,	KC_PGDN,	KC_NO,
		// index+	index		middle		ring		pinky
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		
		// row 4
		// lthumb_i	lthumb_o	rthumb_o	rthumb_i
		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS
	),

};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)





