# pragma once
#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

#define JP_N0    N0
#define JP_N1    N1
#define JP_N2    N2
#define JP_N3    N3
#define JP_N4    N4
#define JP_N5    N5
#define JP_N6    N6
#define JP_N7    N7
#define JP_N8    N8
#define JP_N9    N9
#define JP_AT    LEFT_BRACKET     // @
#define JP_CAPS  LS(JP_EISU)      // Caps     Lock
#define JP_CARET EQUAL            // ^
#define JP_COLON SINGLE_QUOTE     // :
#define JP_COMMA COMMA            // ,
#define JP_DOT   DOT              // .
#define JP_EISU  CAPS             // 英数
#define JP_EQUAL LS(JP_MINUS)     // =
#define JP_FSLH  FSLH             // /
#define JP_GRAVE LS(JP_AT)        // `
#define JP_GT    LS(JP_DOT)       // >
#define JP_BSLH  INT1             // (backslash)
#define JP_KANA  INT2             // Katakana ↔ Hiragana ↔ Rōmaji (カタカナ ↔ ひらがな ↔ ローマ字)
#define JP_YEN   INT3             // ¥
#define JP_HENK  INT4             // Henkan   (変換)
#define JP_MHEN  INT5             // Muhenkan (無変換)
#define JP_LBKT  RIGHT_BRACKET    // [
#define JP_RBKT  BACKSLASH        // ]
#define JP_LBRC  LS(JP_LBKT)      // {
#define JP_RBRC  LS(JP_RBKT)      // }
#define JP_LPAR  LS(JP_N8)         // (
#define JP_RPAR  LEFT_PARENTHESIS // )
#define JP_LT    LS(JP_COMMA)     // <
#define JP_MINUS MINUS            // -        
#define JP_EXCL  LS(JP_N1)         // !
#define JP_DQT   LS(JP_N2)         // "
#define JP_HASH  LS(JP_N3)         // #
#define JP_DLLR  LS(JP_N4)         // $
#define JP_PERC  LS(JP_N5)         // %
#define JP_AMPS  LS(JP_N6)         // &
#define JP_SQT   LS(JP_N7)         // '
#define JP_RPRN  LS(JP_N9)         // )
#define JP_PIPE  LS(JP_YEN)       // |
#define JP_PLUS  LS(JP_SEMI)      // +
#define JP_QUES  LS(JP_FSLH)      // ?
#define JP_SEMI  SEMICOLON        // ;
#define JP_STAR  LS(JP_COLON)     // *
#define JP_TILDE LS(JP_CARET)     // ~
#define JP_UNDER LS(JP_BSLH)      // _
#define JP_ZKHK  GRAVE            // 半角/全角

// #define JP_AMPS  CARET            // &
// #define JP_DQT   AT               // "
// #define JP_EQUAL UNDER            // =
// #define JP_GRAVE LEFT_BRACE       // `
// #define JP_KANA  LANGUAGE_1       // かな
// #define JP_LBRC  RIGHT_BRACE      // {
// #define JP_LPAR  ASTERISK         // (
// #define JP_PIPE  LS(0x89)         // |
// #define JP_PLUS  COLON            // +
// #define JP_RBRC  PIPE             // }
// #define JP_SQT   AMPERSAND        // '
// #define JP_STAR  DOUBLE_QUOTES    // *
// #define JP_TILDE PLUS             // ~
// #define JP_UNDER LS(0x87)         // _
