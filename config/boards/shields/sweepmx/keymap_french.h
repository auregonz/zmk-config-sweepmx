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
#define FR_CARRE GRAVE  // ²
#define FR_AMPS N1      // &
#define FR_EACUTE N2    // é
#define FR_DQT N3       // "
#define FR_SQT N4       // '
#define FR_LPAR N5      // (
#define FR_MINUS N6     // -
#define FR_EGRAVE N7    // è
#define FR_UNDER N8     // _
#define FR_CCDEDIL N9   // ç
#define FR_AGRAVE N0    // à
#define FR_RPAR MINUS   // )
#define FR_EQUAL EQUAL  // =
// Row 2
#define FR_A Q          // a
#define FR_Z W          // z
#define FR_CIRCW LBKT   // ^ Circonflexe Wait
#define FR_DOLLAR RBKT  // $
// Row 3
#define FR_Q A          // q
#define FR_M SEMI       // m
#define FR_UGRAVE SQT   // ù
#define FR_ASTRK NUHS   // *
// Row 4
#define FR_LT NUBS      // <
#define FR_W Z          // w
#define FR_COMMA M      // ,
#define FR_SEMI COMMA   // ;
#define FR_COLON DOT    // :
#define FR_EXCL FSLH    // !

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
#define FR_DEGRE LS(MINUS) // °
#define FR_PLUS LS(EQUAL)  // +
// Row 2
#define FR_TREMA LS(LBKT)  // ¨
#define FR_LIVRE LS(RBKT)  // £
// Row 3
#define FR_PRCNT LS(SQT)   // %
#define FR_MICRO LS(NUHS)  // µ
// Row 4
#define FR_GT LS(NUBS)     // >
#define FR_QMARK LS(M)     // ?
#define FR_DOT LS(COMMA)   // .
#define FR_FSLH LS(DOT)    // /
#define FR_PRGPH LS(FSLH)  // §


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
#define FR_TILDE RA(N2)    // ~
#define FR_HASH RA(N3)     // #
#define FR_LBRC RA(N4)     // {
#define FR_LBKT RA(N5)     // [
#define FR_PIPE RA(N6)     // |
#define FR_GRAVE RA(N7)    // `
#define FR_BSLH RA(N8)     // Backslash
#define FR_CIRC RA(N9)     // ^
#define FR_AT RA(N0)       // @
#define FR_RBKT RA(MINUS)  // ]
#define FR_RBRC RA(EQUAL)  // }
// Row 2
#define FR_EURO RA(E)      // a
#define FR_CURR RA(RBKT)   // ¤ Currency

