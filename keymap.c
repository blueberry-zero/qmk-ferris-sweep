#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	//Base Layer (alpha, punct)
	[0] = LAYOUT_split_3x5_2(
		// row 1 right - left
		KC_QUOT,	KC_Y,		KC_U,		KC_L,		KC_J,
		KC_B,		KC_P,		KC_F,		KC_W,		KC_Q,

		// row 2 right - left
		RGUI_T(KC_O),	RALT_T(KC_I),	RSFT_T(KC_E),	RCTL_T(KC_N),	KC_M,
		KC_G,		LCTL_T(KC_T),	LSFT_T(KC_S),	LALT_T(KC_R),	LGUI_T(KC_A),
		
		// row 3 right - left
		KC_SLSH,	KC_DOT,		KC_COMM,	KC_H,		KC_K,
		KC_V,		KC_D,		KC_C,		KC_X,		KC_Z,

		// row 4
		LT(KC_BSPC,1),	LT(KC_ENT,2),	LT(KC_TAB,3),	LT(KC_SPC,4)
	),
	// Function Layer
	[1] = LAYOUT_split_3x5_2(
		// row 1 right - left
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		KC_PCSR,	KC_F4,		KC_F3,		KC_F2,		KC_F1,

		// row 2 right - left
		KC_RGUI,	KC_RALT,	KC_RSFT,	KC_RCTL,	KC_ESC,
		KC_ESC,		KC_F8,		KC_F7,		KC_F6,		KC_F5,

		// row 3 right - left
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		PC_SCRL,	KC_F12,		KC_F11,		KC_F10,		KC_F9,
		
		// row 4
		KC_TRANS,	KC_TRANS,	KC_TRANS,	KC_TRANS
	),
	// symbol layer
	[2] = LAYOUT_split_3x5_2(
		// row 1 right - left
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_ESC,

		// row 2 right - left
		KC_LGUI,	KC_LALT,	KC_LSFT,	KC_LCTL,	KC_ESC,
		KC_ESC,		KC_RCTL,	KC_RSFT,	KC_RALT,	LC_RGUI,

		// row 3 right - left
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		
		// row 4
		KC_TRANS,	KC_TRANS,	KC_TRANS,	KC_TRANS
	),
	// number layer
	[3] = LAYOUT_split_3x5_2(
		// row 1 right - left
		KC_ESC,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,

		// row 2 right - left
		KC_LGUI,	KC_LALT,	KC_LSFT,	KC_LCTL,	KC_ESC,
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		

		// row 3 right - left
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		
		// row 4
		KC_TRANS,	KC_TRANS,	KC_TRANS,	KC_TRANS
	),
	// nav layer
	[4] = LAYOUT_split_3x5_2(
		// row 1 right - left
		KC_INS,		KC_DEL,		KC_HOME,	KC_END,		KC_NO,
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,

		// row 2 right - left
		KC_RIGHT,	KC_LEFT,	KC_UP,		KC_DOWN,	KC_ESC,
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,

		// row 3 right - left
		KC_NO,		KC_NO,		KC_PGUP,	KC_PGDOWN,	KC_NO,
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,
		
		// row 4
		KC_TRANS,	KC_TRANS,	KC_TRANS,	KC_TRANS
	),

};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)





