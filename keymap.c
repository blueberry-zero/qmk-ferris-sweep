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
		KC_PCSR,	KC_F4,		KC_F3,		KC_F2,		KC_F1,

		// row 2 right - left
		// pinky	ring		middle		index		index+
		KC_RGUI,	KC_RALT,	KC_RSFT,	KC_RCTL,	KC_ESC,
		// index+	index		middle		ring		pinky
		KC_ESC,		KC_F8,		KC_F7,		KC_F6,		KC_F5,

		// row 3 right - left
		// pinky	ring		middle		index		index+
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		// index+	index		middle		ring		pinky
		PC_SCRL,	KC_F12,		KC_F11,		KC_F10,		KC_F9,
		
		// row 4
		// lthumb_i	lthumb_o	rthumb_o	rthumb_i
		KC_TRANS,	KC_TRANS,	KC_TRANS,	KC_TRANS
	),
	// symbol layer
	[2] = LAYOUT_split_3x5_2(
		// row 1 right - left
		// pinky	ring		middle		index		index+
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		// index+	index		middle		ring		pinky
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_ESC,

		// row 2 right - left
		// pinky	ring		middle		index		index+
		KC_RGUI,	KC_RALT,	KC_RSFT,	KC_RCTL,	KC_ESC,
		// index+	index		middle		ring		pinky
		KC_ESC,		KC_LCTL,	KC_LSFT,	KC_LALT,	KC_LGUI,

		// row 3 right - left
		// pinky	ring		middle		index		index+
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		// index+	index		middle		ring		pinky
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		
		// row 4
		// lthumb_i	lthumb_o	rthumb_o	rthumb_i
		KC_TRANS,	KC_TRANS,	KC_TRANS,	KC_TRANS
	),
	// number layer
	[3] = LAYOUT_split_3x5_2(
		// row 1 right - left
		// pinky	ring		middle		index		index+
		KC_ESC,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		// index+	index		middle		ring		pinky
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,

		// row 2 right - left
		// pinky	ring		middle		index		index+
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_ESC,
		// index+	index		middle		ring		pinky
		KC_ESC,		KC_LCTL,	KC_LSFT,	KC_LALT,	KC_LGUI,

		// row 3 right - left
		// pinky	ring		middle		index		index+
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		// index+	index		middle		ring		pinky
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		
		// row 4
		// lthumb_i	lthumb_o	rthumb_o	rthumb_i
		KC_TRANS,	KC_TRANS,	KC_TRANS,	KC_TRANS
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
		KC_NO,		KC_NO,		KC_PGUP,	KC_PGDOWN,	KC_NO,
		// index+	index		middle		ring		pinky
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		
		// row 4
		// lthumb_i	lthumb_o	rthumb_o	rthumb_i
		KC_TRANS,	KC_TRANS,	KC_TRANS,	KC_TRANS
	),

};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)





