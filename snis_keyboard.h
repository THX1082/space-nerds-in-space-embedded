#ifndef SNIS_KEYBOARD_H_
#define SNIS_KEYBOARD_H_

enum keyaction {
		keynone		= 0,
		keydown		= 1,
		keyup		= 2,
		keyleft		= 3,
		keyright	= 4,
                keytorpedo	= 5,
		keytransform	= 6,
                keyfullscreen	= 7,
		keythrust	= 8,
                keyquit		= 9,
                keypausehelp	= 10,
		keyreverse	= 11,
		keyf1		= 12,
		keyf2		= 13,
		keyf3		= 14,
		keyf4		= 15,
		keyf5		= 16,
                keyf6		= 17,
		keyf7		= 18,
		keyf8		= 19,
		keyf9		= 20,
		keyf10		= 21,
		keyonscreen	= 22,
		keyviewmode	= 23,
		keyzoom		= 24,
		keyunzoom	= 25,
		keyphaser	= 26,
		keyrenderswitch	= 27,
		keyrollleft = 28,
		keyrollright = 29,
		keysciball_yawleft = 30,
		keysciball_yawright = 31,
		keysciball_pitchup = 32,
		keysciball_pitchdown= 33,
		keysciball_rollleft = 34,
		keysciball_rollright = 35,
		key_invert_vertical = 36,
		key_toggle_frame_stats = 37,
#define NKEYSTATES 38 
};

struct keyboard_state {
	int pressed[NKEYSTATES];
};

#endif

