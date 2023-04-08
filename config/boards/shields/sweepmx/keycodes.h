// Behaviours
#define XXXXXXX &none           // None
#define _______ &trans          // Transparent

#define _RESET_ &reset          // Reset : Reset the keyboard side and re-run the firmware flashed to the device
#define _BTLDR_ &bootloader     // Bootloader Reset : Reset the keyboard side and put it into bootloader mode

// Bluetooth
#define _BT_CLR &bt BT_CLR      // Clear paired host the the selected profile
#define _BT_NXT &bt BT_NXT      // Select Next Profile
#define _BT_PRV &bt BT_PRV      // Select Previous Profile
#define _BT_P1_ &bt BT_SEL 0    // Select Profil 1
#define _BT_P2_ &bt BT_SEL 1    // Select Profil 2
#define _BT_P3_ &bt BT_SEL 2    // Select Profil 3
#define _BT_P4_ &bt BT_SEL 3    // Select Profil 4
#define _BT_P5_ &bt BT_SEL 4    // Select Profil 5

/*
 * Base
 *
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ² │ & │ é │ " │ ' │ ( │ - │ è │ _ │ ç │ à │ ) │ = │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ a │ z │   │   │   │   │   │   │   │   │ ^ │ $ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ q │   │   │   │   │   │   │   │   │ m │ ù │ * │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ w │   │   │   │   │   │ , │ ; │ : │ ! │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// Row 1
#define _CARRE_ &kp GRAVE       // ²
#define _AMPS__ &kp N1          // &
#define _EACUTE &kp N2          // é
#define __DQT__ &kp N3          // "
#define __SQT__ &kp N4          // '
#define _LPAR__ &kp N5          // (
#define _MINUS_ &kp N6          // -
#define _EGRAVE &kp N7          // è
#define _UNDER_ &kp N8          // _
#define _CCEDIL &kp N9          // ç
#define _AGRAVE &kp N0          // à
#define _RPAR__ &kp MINUS       // )
#define _EQUAL_ &kp EQUAL       // =
// Row 2
#define ___A___ &kp Q           // a
#define ___Z___ &kp W           // z
#define ___E___ &kp E           // e
#define ___R___ &kp R           // r
#define ___T___ &kp T           // t
#define ___Y___ &kp Y           // y
#define ___U___ &kp U           // u
#define ___I___ &kp I           // i
#define ___O___ &kp O           // o
#define ___P___ &kp P           // p
#define _CIRCW_ &kp LBKT        // ^ (Touche morte)
#define _DOLLAR &kp RBKT        // $
// Row 3
#define ___Q___ &kp A           // q
#define ___S___ &kp S           // s
#define ___D___ &kp D           // d
#define ___F___ &kp F           // f
#define ___G___ &kp G           // g
#define ___H___ &kp H           // h
#define ___J___ &kp J           // j
#define ___K___ &kp K           // k
#define ___L___ &kp L           // l
#define ___M___ &kp SEMI        // m
#define _UGRAVE &kp SQT         // ù
#define _ASTRK_ &kp NUHS        // *
// Row 4
#define __LT___ &kp NUBS        // <
#define ___W___ &kp Z           // w
#define ___X___ &kp X           // x
#define ___C___ &kp C           // c
#define ___V___ &kp V           // v
#define ___B___ &kp B           // b
#define ___N___ &kp N           // n
#define _COMMA_ &kp M           // ,
#define _SEMI__ &kp COMMA       // ;
#define _COLON_ &kp DOT         // :
#define _EXCL__ &kp FSLH        // !

/*
 * Shift
 *
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ° │ + │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ A │ Z │   │   │   │   │   │   │   │   │ ¨  │ £ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ Q │   │   │   │   │   │   │   │   │ M │ % │ µ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │ W │   │   │   │   │   │ ? │ . │ / │ § │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// Row 1
#define _DEGRE_ &kp LS(MINUS)   // °
#define _PLUS__ &kp LS(EQUAL)   // +
// Row 2
#define _TREMA_ &kp LS(LBKT)    // ¨  (Touche morte)
#define _LIVRE_ &kp LS(RBKT)    // £
// Row 3
#define _PRCNT_ &kp LS(SQT)     // %
#define _MICRO_ &kp LS(NUHS)    // µ
// Row 4
#define __GT___ &kp LS(NUBS)    // >
#define _QMARK_ &kp LS(M)       // ?
#define __DOT__ &kp LS(COMMA)   // .
#define _FSLH__ &kp LS(DOT)     // /
#define _PRGPH_ &kp LS(FSLH)    // §


/*
 * AltGr
 *
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ ~ │ # │ { │ [ │ | │ ` │ \ │ ^ │ @ │ ] │ } │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │ € │   │   │   │   │   │   │   │   │ ¤ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

 // Row 1
#define _TILDE_ &kp RA(N2)      // ~
#define _HASH__ &kp RA(N3)      // #
#define _LBRC__ &kp RA(N4)      // {
#define _LBKT__ &kp RA(N5)      // [
#define _PIPE__ &kp RA(N6)      // |
#define _GRAVE_ &kp RA(N7)      // ` (Touche morte)
#define _BSLH__ &kp RA(N8)      // Backslash
#define _CIRC__ &kp RA(N9)      // ^
#define __AT___ &kp RA(N0)      // @
#define _RBKT__ &kp RA(MINUS)   // ]
#define _RBRC__ &kp RA(EQUAL)   // }
// Row 2 
#define _EURO__ &kp RA(E)       // Euro
#define _CURR__ &kp RA(RBKT)    // ¤ Currency : Symbole monétaire générique

// Control & Whitespace
#define __ESC__ &kp ESCAPE      // Escape
#define _ENTER_ &kp ENTER       // Enter
#define _SPACE_ &kp SPACE       // Space
#define __TAB__ &kp TAB         // Tab
#define _BSPC__ &kp BSPC        // Backspace
#define _CLCK__ &kp CAPSLOCK    // Caps Lock
#define _CMENU_ &kp K_CMENU     // Context Menu

// Functions Keys
#define __F1___ &kp F1          // F1
#define __F2___ &kp F2          // F2
#define __F3___ &kp F3          // F3
#define __F4___ &kp F4          // F4
#define __F5___ &kp F5          // F5
#define __F6___ &kp F6          // F6
#define __F7___ &kp F7          // F7
#define __F8___ &kp F8          // F8
#define __F9___ &kp F9          // F9
#define __F10__ &kp F10         // F10
#define __F11__ &kp F11         // F11
#define __F12__ &kp F12         // F12

// Capital Vowels
#define _A_MAJ_ &kp Q           // A
#define _E_MAJ_ &kp E           // E
#define _U_MAJ_ &kp U           // U
#define _I_MAJ_ &kp I           // I
#define _O_MAJ_ &kp O           // O

/* ====================
      NAVIGATION
==================== */

/*
 * Printing
 *
 * ┌───┬───┬───┐
 * │   │   │   │
 * └───┴───┴───┘
 */

#define _PSCRN_ &kp PSCRN
#define _SLCK__ &kp SLCK
#define _PSBRK_ &kp PAUSE_BREAK

/*
 * Movement
 *
 * ┌───┬───┬───┐
 * │   │   │   │
 * ├───┼───┼───┤
 * │   │   │   │
 * └───┴───┴───┘
 */

#define __INS__ &kp INS
#define __DEL__ &kp DEL
#define _HOME__ &kp HOME
#define __END__ &kp END
#define _PG_UP_ &kp PG_UP
#define _PG_DN_ &kp PG_DN

/*
 * Arrows
 *
 *     ┌───┐
 *     │   │   
 * ┌───┼───┼───┐
 * │   │   │   │
 * └───┴───┴───┘
 */

#define __UP___ &kp UP
#define _DOWN__ &kp DOWN
#define _LEFT__ &kp LEFT
#define _RIGHT_ &kp RIGHT

/* ====================
        NUMPAD
==================== */

/*
 * Numpad
 *
 * ┌───┬───┬───┬───┐
 * │   │ / │ * │ - │
 * ├───┼───┼───┼───┤
 * │ 7 │ 8 │ 9 │ + │
 * ├───┼───┼───┤   │
 * │ 4 │ 5 │ 6 │   │
 * ├───┼───┼───┼───┤
 * │ 1 │ 2 │ 3 │   │
 * ├───┴───┼───┤   │
 * │ 0     │ . │   │
 * └───────┴───┴───┘
 */

// Numbers
#define ___0___ &kp KP_N0 
#define ___1___ &kp KP_N1 
#define ___2___ &kp KP_N2 
#define ___3___ &kp KP_N3 
#define ___4___ &kp KP_N4 
#define ___5___ &kp KP_N5 
#define ___6___ &kp KP_N6 
#define ___7___ &kp KP_N7 
#define ___8___ &kp KP_N8 
#define ___9___ &kp KP_N9
// Operators
#define _N_DVD_ &kp KP_DIVIDE
#define _N_MLT_ &kp KP_MULTIPLY
#define _N_MNS_ &kp KP_MINUS
#define _N_PLS_ &kp KP_PLUS
#define _N_DOT_ &kp KP_DOT
// Others
#define _N_LCK_ &kp KP_NUMLOCK
#define _N_ENT_ &kp KP_ENTER

/* ====================
        MEDIA
==================== */

// Volume
#define _VOL_UP &kp C_VOL_UP            // Volume +
#define _VOL_DN &kp C_VOL_DN            // Volume -
#define _MUTE__ &kp C_MUTE              // Volume ON/OFF
// Brightness
#define _BRI_UP &kp C_BRI_UP            // Brightness +
#define _BRI_DN &kp C_BRI_DN            // Brightness -
// Media Controls
#define __PP___ &kp C_PLAY_PAUSE        // Play
#define _NEXT__ &kp C_NEXT              // Next
#define _PREV__ &kp C_PREV              // Previous
#define __FF___ &kp C_FF                // Fast Forward
#define __RW___ &kp C_RW                // Rewind

/* ====================
       SHORTCUTS
==================== */

#define __CUT__ &kp LC(X)         // Cut
#define _COPY__ &kp LC(C)         // Copy
#define _PASTE_ &kp LC(V)         // Paste

#define _UNDO__ &kp LC(W)         // Undo
#define _REDO__ &kp LC(Y)         // Redo
#define _S_ALL_ &kp LC(Q)         // Select All

#define __CAS__ &kp LCTL(LALT(DEL)) // Ctrl + Alt + Suppr
#define _WLOCK_ &kp LGUI(L)       // Windows + L
