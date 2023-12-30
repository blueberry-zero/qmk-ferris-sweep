#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_2(
		// row 1 right - left
		KC_Q, KC_W, KC_E, KC_R, KC_T,
		KC_Y, KC_U, KC_I, KC_O, KC_P,

		// row 2 right - left
		LSFT_T(KC_A), LT(5,KC_S), LT(1,KC_D), LT(3,KC_F), KC_G,
		KC_H, LT(4,KC_J), LT(2,KC_K), LT(6,KC_L), LSFT_T(KC_SCLN),
		
		// row 3 right - left
		KC_Z, LCTL_T(KC_X), LALT_T(KC_C), KC_V, KC_B,
		KC_N, KC_M, LALT_T(KC_COMM), LCTL_T(KC_DOT), KC_SLSH,

		// row 4
		KC_P0, KC_BSPC, LT(7,KC_SPC), KC_P1),

	[1] = LAYOUT_split_3x5_2(
		// row 1 right - left
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

		// row 2 right - left
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

		// row 3 right - left
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		
		// row 4
		KC_NO, KC_NO, KC_NO, KC_NO),
	[2] = LAYOUT_split_3x5_2(
		// row 1 right - left
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

		// row 2 right - left
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

		// row 3 right - left
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		
		// row 4
		KC_NO, KC_NO, KC_NO, KC_NO),
	[3] = LAYOUT_split_3x5_2(
		// row 1 right - left
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

		// row 2 right - left
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

		// row 3 right - left
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		
		// row 4
		KC_NO, KC_NO, KC_NO, KC_NO),
	[4] = LAYOUT_split_3x5_2(
		// row 1 right - left
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

		// row 2 right - left
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

		// row 3 right - left
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		
		// row 4
		KC_NO, KC_NO, KC_NO, KC_NO),
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)





