/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -cri
#include <assert.h>
#include <ctype.h>
#include <stdio.h>

template<typename char_t>
struct input_t {
    size_t len;
    char_t *str;

    input_t(FILE *f) : len(0), str(NULL)
    {
        fseek(f, 0, SEEK_END);
        len = ftell(f) / sizeof(char_t);
        fseek(f, 0, SEEK_SET);
        str = new char_t[len + 1];
        fread(str, sizeof(char_t), len, f);
        str[len] = 0;
    }
    ~input_t() { delete[] str; }
};

typedef input_t<unsigned char>  iutf8_t;
typedef input_t<unsigned short> iutf16_t;
typedef input_t<unsigned int>   iutf32_t;
typedef input_t<unsigned short> iucs2_t;

struct out_t {
    bool caps;

    out_t() : caps(false) {}
    void prt(char c)
    {
        fprintf(stderr, "%c", caps ? toupper(c) : c);
        caps = false;
    }
    void err()
    {
        fprintf(stderr, " ... error\n");
    }
};



enum YYCONDTYPE {
	yycl,
	yycn,
};


static void lex_utf8(const iutf8_t & in)
{
    const unsigned char *YYCURSOR = in.str, *YYMARKER;
    int c = yycl;
    out_t out;
    
{
	unsigned char yych;
	switch (c) {
	case yycl:
		goto yyc_l;
	case yycn:
		goto yyc_n;
	}
/* *********************************** */
yyc_l:
	yych = *YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy2;
	case '\n':	goto yy6;
	case ' ':	goto yy8;
	case 0xE2:	goto yy10;
	default:	goto yy4;
	}
yy2:
	++YYCURSOR;
	{ if (YYCURSOR != in.str + in.len + 1) out.err(); return; }
yy4:
	++YYCURSOR;
yy5:
	{ out.err(); return; }
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\r':	goto yy11;
	default:	goto yy7;
	}
yy7:
	{ out.prt('\n'); goto yyc_l; }
yy8:
	++YYCURSOR;
	{ out.prt(' '); goto yyc_l; }
yy10:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xA0:	goto yy12;
	default:	goto yy5;
	}
yy11:
	++YYCURSOR;
	goto yy7;
yy12:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:	goto yy8;
	case 0x81:	goto yy14;
	case 0x82:	goto yy16;
	case 0x83:	goto yy18;
	case 0x84:	goto yy20;
	case 0x85:	goto yy22;
	case 0x86:	goto yy24;
	case 0x87:	goto yy26;
	case 0x89:	goto yy28;
	case 0x8A:	goto yy30;
	case 0x8B:	goto yy32;
	case 0x8D:	goto yy34;
	case 0x8E:	goto yy36;
	case 0x8F:	goto yy38;
	case 0x91:	goto yy40;
	case 0x92:	goto yy42;
	case 0x93:	goto yy44;
	case 0x94:	goto yy46;
	case 0x95:	goto yy48;
	case 0x96:	goto yy50;
	case 0x97:	goto yy52;
	case 0x99:	goto yy54;
	case 0x9A:	goto yy56;
	case 0x9B:	goto yy58;
	case 0x9D:	goto yy60;
	case 0x9E:	goto yy62;
	case 0x9F:	goto yy64;
	case 0xA0:	goto yy66;
	case 0xA4:	goto yy68;
	case 0xA5:	goto yy70;
	case 0xA6:	goto yy72;
	case 0xA7:	goto yy74;
	case 0xAD:	goto yy76;
	case 0xB0:	goto yy78;
	case 0xB2:	goto yy80;
	case 0xB5:	goto yy82;
	case 0xBA:	goto yy84;
	case 0xBC:	goto yy86;
	case 0xBD:	goto yy88;
	default:	goto yy13;
	}
yy13:
	YYCURSOR = YYMARKER;
	goto yy5;
yy14:
	++YYCURSOR;
	{ out.prt('a'); goto yyc_l; }
yy16:
	++YYCURSOR;
	{ out.prt(','); goto yyc_l; }
yy18:
	++YYCURSOR;
	{ out.prt('b'); goto yyc_l; }
yy20:
	++YYCURSOR;
	{ out.prt('\''); goto yyc_l; }
yy22:
	++YYCURSOR;
	{ out.prt('k'); goto yyc_l; }
yy24:
	++YYCURSOR;
	{ out.prt(';'); goto yyc_l; }
yy26:
	++YYCURSOR;
	{ out.prt('l'); goto yyc_l; }
yy28:
	++YYCURSOR;
	{ out.prt('c'); goto yyc_l; }
yy30:
	++YYCURSOR;
	{ out.prt('i'); goto yyc_l; }
yy32:
	++YYCURSOR;
	{ out.prt('f'); goto yyc_l; }
yy34:
	++YYCURSOR;
	{ out.prt('m'); goto yyc_l; }
yy36:
	++YYCURSOR;
	{ out.prt('s'); goto yyc_l; }
yy38:
	++YYCURSOR;
	{ out.prt('p'); goto yyc_l; }
yy40:
	++YYCURSOR;
	{ out.prt('e'); goto yyc_l; }
yy42:
	++YYCURSOR;
	{ out.prt(':'); goto yyc_l; }
yy44:
	++YYCURSOR;
	{ out.prt('h'); goto yyc_l; }
yy46:
	++YYCURSOR;
	{ out.prt('*'); goto yyc_l; }
yy48:
	++YYCURSOR;
	{ out.prt('o'); goto yyc_l; }
yy50:
	++YYCURSOR;
	{ out.prt('!'); goto yyc_l; }
yy52:
	++YYCURSOR;
	{ out.prt('r'); goto yyc_l; }
yy54:
	++YYCURSOR;
	{ out.prt('d'); goto yyc_l; }
yy56:
	++YYCURSOR;
	{ out.prt('j'); goto yyc_l; }
yy58:
	++YYCURSOR;
	{ out.prt('g'); goto yyc_l; }
yy60:
	++YYCURSOR;
	{ out.prt('n'); goto yyc_l; }
yy62:
	++YYCURSOR;
	{ out.prt('t'); goto yyc_l; }
yy64:
	++YYCURSOR;
	{ out.prt('q'); goto yyc_l; }
yy66:
	++YYCURSOR;
	{ out.caps = true; goto yyc_l; }
yy68:
	++YYCURSOR;
	{ out.prt('-'); goto yyc_l; }
yy70:
	++YYCURSOR;
	{ out.prt('u'); goto yyc_l; }
yy72:
	++YYCURSOR;
	{ out.prt('?'); goto yyc_l; }
yy74:
	++YYCURSOR;
	{ out.prt('v'); goto yyc_l; }
yy76:
	++YYCURSOR;
	{ out.prt('x'); goto yyc_l; }
yy78:
	++YYCURSOR;
	goto yyc_l;
yy80:
	++YYCURSOR;
	{ out.prt('.'); goto yyc_l; }
yy82:
	++YYCURSOR;
	{ out.prt('z'); goto yyc_l; }
yy84:
	++YYCURSOR;
	{ out.prt('w'); goto yyc_l; }
yy86:
	++YYCURSOR;
	c = yycn;
	goto yyc_n;
yy88:
	++YYCURSOR;
	{ out.prt('y'); goto yyc_l; }
/* *********************************** */
yyc_n:
	yych = *YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy92;
	case '\n':	goto yy96;
	case ' ':	goto yy98;
	case 0xE2:	goto yy100;
	default:	goto yy94;
	}
yy92:
	++YYCURSOR;
	{ if (YYCURSOR != in.str + in.len + 1) out.err(); return; }
yy94:
	++YYCURSOR;
yy95:
	{ out.err(); return; }
yy96:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\r':	goto yy101;
	default:	goto yy97;
	}
yy97:
	{ out.prt('\n'); goto yyc_l; }
yy98:
	++YYCURSOR;
	{ out.prt(' '); goto yyc_l; }
yy100:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xA0:	goto yy102;
	default:	goto yy95;
	}
yy101:
	++YYCURSOR;
	goto yy97;
yy102:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:	goto yy98;
	case 0x81:	goto yy104;
	case 0x82:	goto yy106;
	case 0x83:	goto yy108;
	case 0x84:	goto yy110;
	case 0x86:	goto yy112;
	case 0x89:	goto yy114;
	case 0x8A:	goto yy116;
	case 0x8B:	goto yy118;
	case 0x91:	goto yy120;
	case 0x92:	goto yy122;
	case 0x93:	goto yy124;
	case 0x94:	goto yy126;
	case 0x96:	goto yy128;
	case 0x99:	goto yy130;
	case 0x9A:	goto yy132;
	case 0x9B:	goto yy134;
	case 0xA0:	goto yy136;
	case 0xA4:	goto yy138;
	case 0xA6:	goto yy140;
	case 0xB0:	goto yy142;
	case 0xB2:	goto yy144;
	case 0xBC:	goto yy146;
	default:	goto yy103;
	}
yy103:
	YYCURSOR = YYMARKER;
	goto yy95;
yy104:
	++YYCURSOR;
	{ out.prt('1'); goto yyc_n; }
yy106:
	++YYCURSOR;
	{ out.prt(','); goto yyc_l; }
yy108:
	++YYCURSOR;
	{ out.prt('2'); goto yyc_n; }
yy110:
	++YYCURSOR;
	{ out.prt('\''); goto yyc_l; }
yy112:
	++YYCURSOR;
	{ out.prt(';'); goto yyc_l; }
yy114:
	++YYCURSOR;
	{ out.prt('3'); goto yyc_n; }
yy116:
	++YYCURSOR;
	{ out.prt('9'); goto yyc_n; }
yy118:
	++YYCURSOR;
	{ out.prt('6'); goto yyc_n; }
yy120:
	++YYCURSOR;
	{ out.prt('5'); goto yyc_n; }
yy122:
	++YYCURSOR;
	{ out.prt(':'); goto yyc_l; }
yy124:
	++YYCURSOR;
	{ out.prt('8'); goto yyc_n; }
yy126:
	++YYCURSOR;
	{ out.prt('*'); goto yyc_l; }
yy128:
	++YYCURSOR;
	{ out.prt('!'); goto yyc_l; }
yy130:
	++YYCURSOR;
	{ out.prt('4'); goto yyc_n; }
yy132:
	++YYCURSOR;
	{ out.prt('0'); goto yyc_n; }
yy134:
	++YYCURSOR;
	{ out.prt('7'); goto yyc_n; }
yy136:
	++YYCURSOR;
	{ out.caps = true; goto yyc_l; }
yy138:
	++YYCURSOR;
	{ out.prt('-'); goto yyc_l; }
yy140:
	++YYCURSOR;
	{ out.prt('?'); goto yyc_l; }
yy142:
	++YYCURSOR;
	c = yycl;
	goto yyc_l;
yy144:
	++YYCURSOR;
	{ out.prt('.'); goto yyc_l; }
yy146:
	++YYCURSOR;
	goto yyc_n;
}

}

static void lex_utf16(const iutf16_t & in)
{
    const unsigned short *YYCURSOR = in.str;
    int c = yycl;
    out_t out;
    
{
	unsigned int yych;
	if (c < 1) {
		goto yyc_l;
	} else {
		goto yyc_n;
	}
/* *********************************** */
yyc_l:
	yych = *YYCURSOR;
	if (yych <= 0x2816) {
		if (yych <= 0x2807) {
			if (yych <= 0x2800) {
				if (yych <= '\n') {
					if (yych <= 0x0000) goto yy150;
					if (yych <= '\t') goto yy152;
					goto yy154;
				} else {
					if (yych == ' ') goto yy156;
					if (yych <= 0x27FF) goto yy152;
					goto yy156;
				}
			} else {
				if (yych <= 0x2803) {
					if (yych <= 0x2801) goto yy158;
					if (yych <= 0x2802) goto yy160;
					goto yy162;
				} else {
					if (yych <= 0x2804) goto yy164;
					if (yych <= 0x2805) goto yy166;
					if (yych <= 0x2806) goto yy168;
					goto yy170;
				}
			}
		} else {
			if (yych <= 0x280E) {
				if (yych <= 0x280A) {
					if (yych <= 0x2808) goto yy152;
					if (yych <= 0x2809) goto yy172;
					goto yy174;
				} else {
					if (yych <= 0x280B) goto yy176;
					if (yych <= 0x280C) goto yy152;
					if (yych <= 0x280D) goto yy178;
					goto yy180;
				}
			} else {
				if (yych <= 0x2812) {
					if (yych <= 0x280F) goto yy182;
					if (yych <= 0x2810) goto yy152;
					if (yych <= 0x2811) goto yy184;
					goto yy186;
				} else {
					if (yych <= 0x2813) goto yy188;
					if (yych <= 0x2814) goto yy190;
					if (yych <= 0x2815) goto yy192;
					goto yy194;
				}
			}
		}
	} else {
		if (yych <= 0x2826) {
			if (yych <= 0x281D) {
				if (yych <= 0x2819) {
					if (yych <= 0x2817) goto yy196;
					if (yych <= 0x2818) goto yy152;
					goto yy198;
				} else {
					if (yych <= 0x281A) goto yy200;
					if (yych <= 0x281B) goto yy202;
					if (yych <= 0x281C) goto yy152;
					goto yy204;
				}
			} else {
				if (yych <= 0x2820) {
					if (yych <= 0x281E) goto yy206;
					if (yych <= 0x281F) goto yy208;
					goto yy210;
				} else {
					if (yych <= 0x2823) goto yy152;
					if (yych <= 0x2824) goto yy212;
					if (yych <= 0x2825) goto yy214;
					goto yy216;
				}
			}
		} else {
			if (yych <= 0x2832) {
				if (yych <= 0x282D) {
					if (yych <= 0x2827) goto yy218;
					if (yych <= 0x282C) goto yy152;
					goto yy220;
				} else {
					if (yych == 0x2830) goto yy222;
					if (yych <= 0x2831) goto yy152;
					goto yy224;
				}
			} else {
				if (yych <= 0x283A) {
					if (yych == 0x2835) goto yy226;
					if (yych <= 0x2839) goto yy152;
					goto yy228;
				} else {
					if (yych <= 0x283B) goto yy152;
					if (yych <= 0x283C) goto yy230;
					if (yych <= 0x283D) goto yy232;
					goto yy152;
				}
			}
		}
	}
yy150:
	++YYCURSOR;
	{ if (YYCURSOR != in.str + in.len + 1) out.err(); return; }
yy152:
	++YYCURSOR;
	{ out.err(); return; }
yy154:
	yych = *++YYCURSOR;
	if (yych == '\r') goto yy234;
yy155:
	{ out.prt('\n'); goto yyc_l; }
yy156:
	++YYCURSOR;
	{ out.prt(' '); goto yyc_l; }
yy158:
	++YYCURSOR;
	{ out.prt('a'); goto yyc_l; }
yy160:
	++YYCURSOR;
	{ out.prt(','); goto yyc_l; }
yy162:
	++YYCURSOR;
	{ out.prt('b'); goto yyc_l; }
yy164:
	++YYCURSOR;
	{ out.prt('\''); goto yyc_l; }
yy166:
	++YYCURSOR;
	{ out.prt('k'); goto yyc_l; }
yy168:
	++YYCURSOR;
	{ out.prt(';'); goto yyc_l; }
yy170:
	++YYCURSOR;
	{ out.prt('l'); goto yyc_l; }
yy172:
	++YYCURSOR;
	{ out.prt('c'); goto yyc_l; }
yy174:
	++YYCURSOR;
	{ out.prt('i'); goto yyc_l; }
yy176:
	++YYCURSOR;
	{ out.prt('f'); goto yyc_l; }
yy178:
	++YYCURSOR;
	{ out.prt('m'); goto yyc_l; }
yy180:
	++YYCURSOR;
	{ out.prt('s'); goto yyc_l; }
yy182:
	++YYCURSOR;
	{ out.prt('p'); goto yyc_l; }
yy184:
	++YYCURSOR;
	{ out.prt('e'); goto yyc_l; }
yy186:
	++YYCURSOR;
	{ out.prt(':'); goto yyc_l; }
yy188:
	++YYCURSOR;
	{ out.prt('h'); goto yyc_l; }
yy190:
	++YYCURSOR;
	{ out.prt('*'); goto yyc_l; }
yy192:
	++YYCURSOR;
	{ out.prt('o'); goto yyc_l; }
yy194:
	++YYCURSOR;
	{ out.prt('!'); goto yyc_l; }
yy196:
	++YYCURSOR;
	{ out.prt('r'); goto yyc_l; }
yy198:
	++YYCURSOR;
	{ out.prt('d'); goto yyc_l; }
yy200:
	++YYCURSOR;
	{ out.prt('j'); goto yyc_l; }
yy202:
	++YYCURSOR;
	{ out.prt('g'); goto yyc_l; }
yy204:
	++YYCURSOR;
	{ out.prt('n'); goto yyc_l; }
yy206:
	++YYCURSOR;
	{ out.prt('t'); goto yyc_l; }
yy208:
	++YYCURSOR;
	{ out.prt('q'); goto yyc_l; }
yy210:
	++YYCURSOR;
	{ out.caps = true; goto yyc_l; }
yy212:
	++YYCURSOR;
	{ out.prt('-'); goto yyc_l; }
yy214:
	++YYCURSOR;
	{ out.prt('u'); goto yyc_l; }
yy216:
	++YYCURSOR;
	{ out.prt('?'); goto yyc_l; }
yy218:
	++YYCURSOR;
	{ out.prt('v'); goto yyc_l; }
yy220:
	++YYCURSOR;
	{ out.prt('x'); goto yyc_l; }
yy222:
	++YYCURSOR;
	goto yyc_l;
yy224:
	++YYCURSOR;
	{ out.prt('.'); goto yyc_l; }
yy226:
	++YYCURSOR;
	{ out.prt('z'); goto yyc_l; }
yy228:
	++YYCURSOR;
	{ out.prt('w'); goto yyc_l; }
yy230:
	++YYCURSOR;
	c = yycn;
	goto yyc_n;
yy232:
	++YYCURSOR;
	{ out.prt('y'); goto yyc_l; }
yy234:
	++YYCURSOR;
	goto yy155;
/* *********************************** */
yyc_n:
	yych = *YYCURSOR;
	if (yych <= 0x2812) {
		if (yych <= 0x2803) {
			if (yych <= ' ') {
				if (yych <= '\t') {
					if (yych >= 0x0001) goto yy239;
				} else {
					if (yych <= '\n') goto yy241;
					if (yych <= 0x001F) goto yy239;
					goto yy243;
				}
			} else {
				if (yych <= 0x2800) {
					if (yych <= 0x27FF) goto yy239;
					goto yy243;
				} else {
					if (yych <= 0x2801) goto yy245;
					if (yych <= 0x2802) goto yy247;
					goto yy249;
				}
			}
		} else {
			if (yych <= 0x2809) {
				if (yych <= 0x2805) {
					if (yych <= 0x2804) goto yy251;
					goto yy239;
				} else {
					if (yych <= 0x2806) goto yy253;
					if (yych <= 0x2808) goto yy239;
					goto yy255;
				}
			} else {
				if (yych <= 0x280B) {
					if (yych <= 0x280A) goto yy257;
					goto yy259;
				} else {
					if (yych <= 0x2810) goto yy239;
					if (yych <= 0x2811) goto yy261;
					goto yy263;
				}
			}
		}
	} else {
		if (yych <= 0x2820) {
			if (yych <= 0x2818) {
				if (yych <= 0x2814) {
					if (yych <= 0x2813) goto yy265;
					goto yy267;
				} else {
					if (yych == 0x2816) goto yy269;
					goto yy239;
				}
			} else {
				if (yych <= 0x281A) {
					if (yych <= 0x2819) goto yy271;
					goto yy273;
				} else {
					if (yych <= 0x281B) goto yy275;
					if (yych <= 0x281F) goto yy239;
					goto yy277;
				}
			}
		} else {
			if (yych <= 0x282F) {
				if (yych <= 0x2824) {
					if (yych <= 0x2823) goto yy239;
					goto yy279;
				} else {
					if (yych == 0x2826) goto yy281;
					goto yy239;
				}
			} else {
				if (yych <= 0x2832) {
					if (yych <= 0x2830) goto yy283;
					if (yych <= 0x2831) goto yy239;
					goto yy285;
				} else {
					if (yych == 0x283C) goto yy287;
					goto yy239;
				}
			}
		}
	}
	++YYCURSOR;
	{ if (YYCURSOR != in.str + in.len + 1) out.err(); return; }
yy239:
	++YYCURSOR;
	{ out.err(); return; }
yy241:
	yych = *++YYCURSOR;
	if (yych == '\r') goto yy289;
yy242:
	{ out.prt('\n'); goto yyc_l; }
yy243:
	++YYCURSOR;
	{ out.prt(' '); goto yyc_l; }
yy245:
	++YYCURSOR;
	{ out.prt('1'); goto yyc_n; }
yy247:
	++YYCURSOR;
	{ out.prt(','); goto yyc_l; }
yy249:
	++YYCURSOR;
	{ out.prt('2'); goto yyc_n; }
yy251:
	++YYCURSOR;
	{ out.prt('\''); goto yyc_l; }
yy253:
	++YYCURSOR;
	{ out.prt(';'); goto yyc_l; }
yy255:
	++YYCURSOR;
	{ out.prt('3'); goto yyc_n; }
yy257:
	++YYCURSOR;
	{ out.prt('9'); goto yyc_n; }
yy259:
	++YYCURSOR;
	{ out.prt('6'); goto yyc_n; }
yy261:
	++YYCURSOR;
	{ out.prt('5'); goto yyc_n; }
yy263:
	++YYCURSOR;
	{ out.prt(':'); goto yyc_l; }
yy265:
	++YYCURSOR;
	{ out.prt('8'); goto yyc_n; }
yy267:
	++YYCURSOR;
	{ out.prt('*'); goto yyc_l; }
yy269:
	++YYCURSOR;
	{ out.prt('!'); goto yyc_l; }
yy271:
	++YYCURSOR;
	{ out.prt('4'); goto yyc_n; }
yy273:
	++YYCURSOR;
	{ out.prt('0'); goto yyc_n; }
yy275:
	++YYCURSOR;
	{ out.prt('7'); goto yyc_n; }
yy277:
	++YYCURSOR;
	{ out.caps = true; goto yyc_l; }
yy279:
	++YYCURSOR;
	{ out.prt('-'); goto yyc_l; }
yy281:
	++YYCURSOR;
	{ out.prt('?'); goto yyc_l; }
yy283:
	++YYCURSOR;
	c = yycl;
	goto yyc_l;
yy285:
	++YYCURSOR;
	{ out.prt('.'); goto yyc_l; }
yy287:
	++YYCURSOR;
	goto yyc_n;
yy289:
	++YYCURSOR;
	goto yy242;
}

}

static void lex_utf32(const iutf32_t & in)
{
    const unsigned int *YYCURSOR = in.str;
    int c = yycl;
    out_t out;
    
{
	unsigned int yych;
	if (c < 1) {
		goto yyc_l;
	} else {
		goto yyc_n;
	}
/* *********************************** */
yyc_l:
	yych = *YYCURSOR;
	if (yych <= 0x00002816) {
		if (yych <= 0x00002807) {
			if (yych <= 0x00002800) {
				if (yych <= '\n') {
					if (yych <= 0x00000000) goto yy292;
					if (yych <= '\t') goto yy294;
					goto yy296;
				} else {
					if (yych == ' ') goto yy298;
					if (yych <= 0x000027FF) goto yy294;
					goto yy298;
				}
			} else {
				if (yych <= 0x00002803) {
					if (yych <= 0x00002801) goto yy300;
					if (yych <= 0x00002802) goto yy302;
					goto yy304;
				} else {
					if (yych <= 0x00002804) goto yy306;
					if (yych <= 0x00002805) goto yy308;
					if (yych <= 0x00002806) goto yy310;
					goto yy312;
				}
			}
		} else {
			if (yych <= 0x0000280E) {
				if (yych <= 0x0000280A) {
					if (yych <= 0x00002808) goto yy294;
					if (yych <= 0x00002809) goto yy314;
					goto yy316;
				} else {
					if (yych <= 0x0000280B) goto yy318;
					if (yych <= 0x0000280C) goto yy294;
					if (yych <= 0x0000280D) goto yy320;
					goto yy322;
				}
			} else {
				if (yych <= 0x00002812) {
					if (yych <= 0x0000280F) goto yy324;
					if (yych <= 0x00002810) goto yy294;
					if (yych <= 0x00002811) goto yy326;
					goto yy328;
				} else {
					if (yych <= 0x00002813) goto yy330;
					if (yych <= 0x00002814) goto yy332;
					if (yych <= 0x00002815) goto yy334;
					goto yy336;
				}
			}
		}
	} else {
		if (yych <= 0x00002826) {
			if (yych <= 0x0000281D) {
				if (yych <= 0x00002819) {
					if (yych <= 0x00002817) goto yy338;
					if (yych <= 0x00002818) goto yy294;
					goto yy340;
				} else {
					if (yych <= 0x0000281A) goto yy342;
					if (yych <= 0x0000281B) goto yy344;
					if (yych <= 0x0000281C) goto yy294;
					goto yy346;
				}
			} else {
				if (yych <= 0x00002820) {
					if (yych <= 0x0000281E) goto yy348;
					if (yych <= 0x0000281F) goto yy350;
					goto yy352;
				} else {
					if (yych <= 0x00002823) goto yy294;
					if (yych <= 0x00002824) goto yy354;
					if (yych <= 0x00002825) goto yy356;
					goto yy358;
				}
			}
		} else {
			if (yych <= 0x00002832) {
				if (yych <= 0x0000282D) {
					if (yych <= 0x00002827) goto yy360;
					if (yych <= 0x0000282C) goto yy294;
					goto yy362;
				} else {
					if (yych == 0x00002830) goto yy364;
					if (yych <= 0x00002831) goto yy294;
					goto yy366;
				}
			} else {
				if (yych <= 0x0000283A) {
					if (yych == 0x00002835) goto yy368;
					if (yych <= 0x00002839) goto yy294;
					goto yy370;
				} else {
					if (yych <= 0x0000283B) goto yy294;
					if (yych <= 0x0000283C) goto yy372;
					if (yych <= 0x0000283D) goto yy374;
					goto yy294;
				}
			}
		}
	}
yy292:
	++YYCURSOR;
	{ if (YYCURSOR != in.str + in.len + 1) out.err(); return; }
yy294:
	++YYCURSOR;
	{ out.err(); return; }
yy296:
	yych = *++YYCURSOR;
	if (yych == '\r') goto yy376;
yy297:
	{ out.prt('\n'); goto yyc_l; }
yy298:
	++YYCURSOR;
	{ out.prt(' '); goto yyc_l; }
yy300:
	++YYCURSOR;
	{ out.prt('a'); goto yyc_l; }
yy302:
	++YYCURSOR;
	{ out.prt(','); goto yyc_l; }
yy304:
	++YYCURSOR;
	{ out.prt('b'); goto yyc_l; }
yy306:
	++YYCURSOR;
	{ out.prt('\''); goto yyc_l; }
yy308:
	++YYCURSOR;
	{ out.prt('k'); goto yyc_l; }
yy310:
	++YYCURSOR;
	{ out.prt(';'); goto yyc_l; }
yy312:
	++YYCURSOR;
	{ out.prt('l'); goto yyc_l; }
yy314:
	++YYCURSOR;
	{ out.prt('c'); goto yyc_l; }
yy316:
	++YYCURSOR;
	{ out.prt('i'); goto yyc_l; }
yy318:
	++YYCURSOR;
	{ out.prt('f'); goto yyc_l; }
yy320:
	++YYCURSOR;
	{ out.prt('m'); goto yyc_l; }
yy322:
	++YYCURSOR;
	{ out.prt('s'); goto yyc_l; }
yy324:
	++YYCURSOR;
	{ out.prt('p'); goto yyc_l; }
yy326:
	++YYCURSOR;
	{ out.prt('e'); goto yyc_l; }
yy328:
	++YYCURSOR;
	{ out.prt(':'); goto yyc_l; }
yy330:
	++YYCURSOR;
	{ out.prt('h'); goto yyc_l; }
yy332:
	++YYCURSOR;
	{ out.prt('*'); goto yyc_l; }
yy334:
	++YYCURSOR;
	{ out.prt('o'); goto yyc_l; }
yy336:
	++YYCURSOR;
	{ out.prt('!'); goto yyc_l; }
yy338:
	++YYCURSOR;
	{ out.prt('r'); goto yyc_l; }
yy340:
	++YYCURSOR;
	{ out.prt('d'); goto yyc_l; }
yy342:
	++YYCURSOR;
	{ out.prt('j'); goto yyc_l; }
yy344:
	++YYCURSOR;
	{ out.prt('g'); goto yyc_l; }
yy346:
	++YYCURSOR;
	{ out.prt('n'); goto yyc_l; }
yy348:
	++YYCURSOR;
	{ out.prt('t'); goto yyc_l; }
yy350:
	++YYCURSOR;
	{ out.prt('q'); goto yyc_l; }
yy352:
	++YYCURSOR;
	{ out.caps = true; goto yyc_l; }
yy354:
	++YYCURSOR;
	{ out.prt('-'); goto yyc_l; }
yy356:
	++YYCURSOR;
	{ out.prt('u'); goto yyc_l; }
yy358:
	++YYCURSOR;
	{ out.prt('?'); goto yyc_l; }
yy360:
	++YYCURSOR;
	{ out.prt('v'); goto yyc_l; }
yy362:
	++YYCURSOR;
	{ out.prt('x'); goto yyc_l; }
yy364:
	++YYCURSOR;
	goto yyc_l;
yy366:
	++YYCURSOR;
	{ out.prt('.'); goto yyc_l; }
yy368:
	++YYCURSOR;
	{ out.prt('z'); goto yyc_l; }
yy370:
	++YYCURSOR;
	{ out.prt('w'); goto yyc_l; }
yy372:
	++YYCURSOR;
	c = yycn;
	goto yyc_n;
yy374:
	++YYCURSOR;
	{ out.prt('y'); goto yyc_l; }
yy376:
	++YYCURSOR;
	goto yy297;
/* *********************************** */
yyc_n:
	yych = *YYCURSOR;
	if (yych <= 0x00002812) {
		if (yych <= 0x00002803) {
			if (yych <= ' ') {
				if (yych <= '\t') {
					if (yych >= 0x00000001) goto yy381;
				} else {
					if (yych <= '\n') goto yy383;
					if (yych <= 0x0000001F) goto yy381;
					goto yy385;
				}
			} else {
				if (yych <= 0x00002800) {
					if (yych <= 0x000027FF) goto yy381;
					goto yy385;
				} else {
					if (yych <= 0x00002801) goto yy387;
					if (yych <= 0x00002802) goto yy389;
					goto yy391;
				}
			}
		} else {
			if (yych <= 0x00002809) {
				if (yych <= 0x00002805) {
					if (yych <= 0x00002804) goto yy393;
					goto yy381;
				} else {
					if (yych <= 0x00002806) goto yy395;
					if (yych <= 0x00002808) goto yy381;
					goto yy397;
				}
			} else {
				if (yych <= 0x0000280B) {
					if (yych <= 0x0000280A) goto yy399;
					goto yy401;
				} else {
					if (yych <= 0x00002810) goto yy381;
					if (yych <= 0x00002811) goto yy403;
					goto yy405;
				}
			}
		}
	} else {
		if (yych <= 0x00002820) {
			if (yych <= 0x00002818) {
				if (yych <= 0x00002814) {
					if (yych <= 0x00002813) goto yy407;
					goto yy409;
				} else {
					if (yych == 0x00002816) goto yy411;
					goto yy381;
				}
			} else {
				if (yych <= 0x0000281A) {
					if (yych <= 0x00002819) goto yy413;
					goto yy415;
				} else {
					if (yych <= 0x0000281B) goto yy417;
					if (yych <= 0x0000281F) goto yy381;
					goto yy419;
				}
			}
		} else {
			if (yych <= 0x0000282F) {
				if (yych <= 0x00002824) {
					if (yych <= 0x00002823) goto yy381;
					goto yy421;
				} else {
					if (yych == 0x00002826) goto yy423;
					goto yy381;
				}
			} else {
				if (yych <= 0x00002832) {
					if (yych <= 0x00002830) goto yy425;
					if (yych <= 0x00002831) goto yy381;
					goto yy427;
				} else {
					if (yych == 0x0000283C) goto yy429;
					goto yy381;
				}
			}
		}
	}
	++YYCURSOR;
	{ if (YYCURSOR != in.str + in.len + 1) out.err(); return; }
yy381:
	++YYCURSOR;
	{ out.err(); return; }
yy383:
	yych = *++YYCURSOR;
	if (yych == '\r') goto yy431;
yy384:
	{ out.prt('\n'); goto yyc_l; }
yy385:
	++YYCURSOR;
	{ out.prt(' '); goto yyc_l; }
yy387:
	++YYCURSOR;
	{ out.prt('1'); goto yyc_n; }
yy389:
	++YYCURSOR;
	{ out.prt(','); goto yyc_l; }
yy391:
	++YYCURSOR;
	{ out.prt('2'); goto yyc_n; }
yy393:
	++YYCURSOR;
	{ out.prt('\''); goto yyc_l; }
yy395:
	++YYCURSOR;
	{ out.prt(';'); goto yyc_l; }
yy397:
	++YYCURSOR;
	{ out.prt('3'); goto yyc_n; }
yy399:
	++YYCURSOR;
	{ out.prt('9'); goto yyc_n; }
yy401:
	++YYCURSOR;
	{ out.prt('6'); goto yyc_n; }
yy403:
	++YYCURSOR;
	{ out.prt('5'); goto yyc_n; }
yy405:
	++YYCURSOR;
	{ out.prt(':'); goto yyc_l; }
yy407:
	++YYCURSOR;
	{ out.prt('8'); goto yyc_n; }
yy409:
	++YYCURSOR;
	{ out.prt('*'); goto yyc_l; }
yy411:
	++YYCURSOR;
	{ out.prt('!'); goto yyc_l; }
yy413:
	++YYCURSOR;
	{ out.prt('4'); goto yyc_n; }
yy415:
	++YYCURSOR;
	{ out.prt('0'); goto yyc_n; }
yy417:
	++YYCURSOR;
	{ out.prt('7'); goto yyc_n; }
yy419:
	++YYCURSOR;
	{ out.caps = true; goto yyc_l; }
yy421:
	++YYCURSOR;
	{ out.prt('-'); goto yyc_l; }
yy423:
	++YYCURSOR;
	{ out.prt('?'); goto yyc_l; }
yy425:
	++YYCURSOR;
	c = yycl;
	goto yyc_l;
yy427:
	++YYCURSOR;
	{ out.prt('.'); goto yyc_l; }
yy429:
	++YYCURSOR;
	goto yyc_n;
yy431:
	++YYCURSOR;
	goto yy384;
}

}

static void lex_ucs2(const iucs2_t & in)
{
    const unsigned short *YYCURSOR = in.str;
    int c = yycl;
    out_t out;
    
{
	unsigned int yych;
	if (c < 1) {
		goto yyc_l;
	} else {
		goto yyc_n;
	}
/* *********************************** */
yyc_l:
	yych = *YYCURSOR;
	if (yych <= 0x2816) {
		if (yych <= 0x2807) {
			if (yych <= 0x2800) {
				if (yych <= '\n') {
					if (yych <= 0x0000) goto yy434;
					if (yych <= '\t') goto yy436;
					goto yy438;
				} else {
					if (yych == ' ') goto yy440;
					if (yych <= 0x27FF) goto yy436;
					goto yy440;
				}
			} else {
				if (yych <= 0x2803) {
					if (yych <= 0x2801) goto yy442;
					if (yych <= 0x2802) goto yy444;
					goto yy446;
				} else {
					if (yych <= 0x2804) goto yy448;
					if (yych <= 0x2805) goto yy450;
					if (yych <= 0x2806) goto yy452;
					goto yy454;
				}
			}
		} else {
			if (yych <= 0x280E) {
				if (yych <= 0x280A) {
					if (yych <= 0x2808) goto yy436;
					if (yych <= 0x2809) goto yy456;
					goto yy458;
				} else {
					if (yych <= 0x280B) goto yy460;
					if (yych <= 0x280C) goto yy436;
					if (yych <= 0x280D) goto yy462;
					goto yy464;
				}
			} else {
				if (yych <= 0x2812) {
					if (yych <= 0x280F) goto yy466;
					if (yych <= 0x2810) goto yy436;
					if (yych <= 0x2811) goto yy468;
					goto yy470;
				} else {
					if (yych <= 0x2813) goto yy472;
					if (yych <= 0x2814) goto yy474;
					if (yych <= 0x2815) goto yy476;
					goto yy478;
				}
			}
		}
	} else {
		if (yych <= 0x2826) {
			if (yych <= 0x281D) {
				if (yych <= 0x2819) {
					if (yych <= 0x2817) goto yy480;
					if (yych <= 0x2818) goto yy436;
					goto yy482;
				} else {
					if (yych <= 0x281A) goto yy484;
					if (yych <= 0x281B) goto yy486;
					if (yych <= 0x281C) goto yy436;
					goto yy488;
				}
			} else {
				if (yych <= 0x2820) {
					if (yych <= 0x281E) goto yy490;
					if (yych <= 0x281F) goto yy492;
					goto yy494;
				} else {
					if (yych <= 0x2823) goto yy436;
					if (yych <= 0x2824) goto yy496;
					if (yych <= 0x2825) goto yy498;
					goto yy500;
				}
			}
		} else {
			if (yych <= 0x2832) {
				if (yych <= 0x282D) {
					if (yych <= 0x2827) goto yy502;
					if (yych <= 0x282C) goto yy436;
					goto yy504;
				} else {
					if (yych == 0x2830) goto yy506;
					if (yych <= 0x2831) goto yy436;
					goto yy508;
				}
			} else {
				if (yych <= 0x283A) {
					if (yych == 0x2835) goto yy510;
					if (yych <= 0x2839) goto yy436;
					goto yy512;
				} else {
					if (yych <= 0x283B) goto yy436;
					if (yych <= 0x283C) goto yy514;
					if (yych <= 0x283D) goto yy516;
					goto yy436;
				}
			}
		}
	}
yy434:
	++YYCURSOR;
	{ if (YYCURSOR != in.str + in.len + 1) out.err(); return; }
yy436:
	++YYCURSOR;
	{ out.err(); return; }
yy438:
	yych = *++YYCURSOR;
	if (yych == '\r') goto yy518;
yy439:
	{ out.prt('\n'); goto yyc_l; }
yy440:
	++YYCURSOR;
	{ out.prt(' '); goto yyc_l; }
yy442:
	++YYCURSOR;
	{ out.prt('a'); goto yyc_l; }
yy444:
	++YYCURSOR;
	{ out.prt(','); goto yyc_l; }
yy446:
	++YYCURSOR;
	{ out.prt('b'); goto yyc_l; }
yy448:
	++YYCURSOR;
	{ out.prt('\''); goto yyc_l; }
yy450:
	++YYCURSOR;
	{ out.prt('k'); goto yyc_l; }
yy452:
	++YYCURSOR;
	{ out.prt(';'); goto yyc_l; }
yy454:
	++YYCURSOR;
	{ out.prt('l'); goto yyc_l; }
yy456:
	++YYCURSOR;
	{ out.prt('c'); goto yyc_l; }
yy458:
	++YYCURSOR;
	{ out.prt('i'); goto yyc_l; }
yy460:
	++YYCURSOR;
	{ out.prt('f'); goto yyc_l; }
yy462:
	++YYCURSOR;
	{ out.prt('m'); goto yyc_l; }
yy464:
	++YYCURSOR;
	{ out.prt('s'); goto yyc_l; }
yy466:
	++YYCURSOR;
	{ out.prt('p'); goto yyc_l; }
yy468:
	++YYCURSOR;
	{ out.prt('e'); goto yyc_l; }
yy470:
	++YYCURSOR;
	{ out.prt(':'); goto yyc_l; }
yy472:
	++YYCURSOR;
	{ out.prt('h'); goto yyc_l; }
yy474:
	++YYCURSOR;
	{ out.prt('*'); goto yyc_l; }
yy476:
	++YYCURSOR;
	{ out.prt('o'); goto yyc_l; }
yy478:
	++YYCURSOR;
	{ out.prt('!'); goto yyc_l; }
yy480:
	++YYCURSOR;
	{ out.prt('r'); goto yyc_l; }
yy482:
	++YYCURSOR;
	{ out.prt('d'); goto yyc_l; }
yy484:
	++YYCURSOR;
	{ out.prt('j'); goto yyc_l; }
yy486:
	++YYCURSOR;
	{ out.prt('g'); goto yyc_l; }
yy488:
	++YYCURSOR;
	{ out.prt('n'); goto yyc_l; }
yy490:
	++YYCURSOR;
	{ out.prt('t'); goto yyc_l; }
yy492:
	++YYCURSOR;
	{ out.prt('q'); goto yyc_l; }
yy494:
	++YYCURSOR;
	{ out.caps = true; goto yyc_l; }
yy496:
	++YYCURSOR;
	{ out.prt('-'); goto yyc_l; }
yy498:
	++YYCURSOR;
	{ out.prt('u'); goto yyc_l; }
yy500:
	++YYCURSOR;
	{ out.prt('?'); goto yyc_l; }
yy502:
	++YYCURSOR;
	{ out.prt('v'); goto yyc_l; }
yy504:
	++YYCURSOR;
	{ out.prt('x'); goto yyc_l; }
yy506:
	++YYCURSOR;
	goto yyc_l;
yy508:
	++YYCURSOR;
	{ out.prt('.'); goto yyc_l; }
yy510:
	++YYCURSOR;
	{ out.prt('z'); goto yyc_l; }
yy512:
	++YYCURSOR;
	{ out.prt('w'); goto yyc_l; }
yy514:
	++YYCURSOR;
	c = yycn;
	goto yyc_n;
yy516:
	++YYCURSOR;
	{ out.prt('y'); goto yyc_l; }
yy518:
	++YYCURSOR;
	goto yy439;
/* *********************************** */
yyc_n:
	yych = *YYCURSOR;
	if (yych <= 0x2812) {
		if (yych <= 0x2803) {
			if (yych <= ' ') {
				if (yych <= '\t') {
					if (yych >= 0x0001) goto yy523;
				} else {
					if (yych <= '\n') goto yy525;
					if (yych <= 0x001F) goto yy523;
					goto yy527;
				}
			} else {
				if (yych <= 0x2800) {
					if (yych <= 0x27FF) goto yy523;
					goto yy527;
				} else {
					if (yych <= 0x2801) goto yy529;
					if (yych <= 0x2802) goto yy531;
					goto yy533;
				}
			}
		} else {
			if (yych <= 0x2809) {
				if (yych <= 0x2805) {
					if (yych <= 0x2804) goto yy535;
					goto yy523;
				} else {
					if (yych <= 0x2806) goto yy537;
					if (yych <= 0x2808) goto yy523;
					goto yy539;
				}
			} else {
				if (yych <= 0x280B) {
					if (yych <= 0x280A) goto yy541;
					goto yy543;
				} else {
					if (yych <= 0x2810) goto yy523;
					if (yych <= 0x2811) goto yy545;
					goto yy547;
				}
			}
		}
	} else {
		if (yych <= 0x2820) {
			if (yych <= 0x2818) {
				if (yych <= 0x2814) {
					if (yych <= 0x2813) goto yy549;
					goto yy551;
				} else {
					if (yych == 0x2816) goto yy553;
					goto yy523;
				}
			} else {
				if (yych <= 0x281A) {
					if (yych <= 0x2819) goto yy555;
					goto yy557;
				} else {
					if (yych <= 0x281B) goto yy559;
					if (yych <= 0x281F) goto yy523;
					goto yy561;
				}
			}
		} else {
			if (yych <= 0x282F) {
				if (yych <= 0x2824) {
					if (yych <= 0x2823) goto yy523;
					goto yy563;
				} else {
					if (yych == 0x2826) goto yy565;
					goto yy523;
				}
			} else {
				if (yych <= 0x2832) {
					if (yych <= 0x2830) goto yy567;
					if (yych <= 0x2831) goto yy523;
					goto yy569;
				} else {
					if (yych == 0x283C) goto yy571;
					goto yy523;
				}
			}
		}
	}
	++YYCURSOR;
	{ if (YYCURSOR != in.str + in.len + 1) out.err(); return; }
yy523:
	++YYCURSOR;
	{ out.err(); return; }
yy525:
	yych = *++YYCURSOR;
	if (yych == '\r') goto yy573;
yy526:
	{ out.prt('\n'); goto yyc_l; }
yy527:
	++YYCURSOR;
	{ out.prt(' '); goto yyc_l; }
yy529:
	++YYCURSOR;
	{ out.prt('1'); goto yyc_n; }
yy531:
	++YYCURSOR;
	{ out.prt(','); goto yyc_l; }
yy533:
	++YYCURSOR;
	{ out.prt('2'); goto yyc_n; }
yy535:
	++YYCURSOR;
	{ out.prt('\''); goto yyc_l; }
yy537:
	++YYCURSOR;
	{ out.prt(';'); goto yyc_l; }
yy539:
	++YYCURSOR;
	{ out.prt('3'); goto yyc_n; }
yy541:
	++YYCURSOR;
	{ out.prt('9'); goto yyc_n; }
yy543:
	++YYCURSOR;
	{ out.prt('6'); goto yyc_n; }
yy545:
	++YYCURSOR;
	{ out.prt('5'); goto yyc_n; }
yy547:
	++YYCURSOR;
	{ out.prt(':'); goto yyc_l; }
yy549:
	++YYCURSOR;
	{ out.prt('8'); goto yyc_n; }
yy551:
	++YYCURSOR;
	{ out.prt('*'); goto yyc_l; }
yy553:
	++YYCURSOR;
	{ out.prt('!'); goto yyc_l; }
yy555:
	++YYCURSOR;
	{ out.prt('4'); goto yyc_n; }
yy557:
	++YYCURSOR;
	{ out.prt('0'); goto yyc_n; }
yy559:
	++YYCURSOR;
	{ out.prt('7'); goto yyc_n; }
yy561:
	++YYCURSOR;
	{ out.caps = true; goto yyc_l; }
yy563:
	++YYCURSOR;
	{ out.prt('-'); goto yyc_l; }
yy565:
	++YYCURSOR;
	{ out.prt('?'); goto yyc_l; }
yy567:
	++YYCURSOR;
	c = yycl;
	goto yyc_l;
yy569:
	++YYCURSOR;
	{ out.prt('.'); goto yyc_l; }
yy571:
	++YYCURSOR;
	goto yyc_n;
yy573:
	++YYCURSOR;
	goto yy526;
}

}

int main()
{
    FILE *f;

    assert(f = fopen("braille.utf8.txt", "rb"));
    fprintf(stderr, "utf8:\n");
    iutf8_t in8(f);
    lex_utf8(in8);
    fclose(f);

    assert(f = fopen("braille.utf16.txt", "rb"));
    fprintf(stderr, "utf16:\n");
    iutf16_t in16(f);
    lex_utf16(in16);
    fclose(f);

    assert(f = fopen("braille.utf32.txt", "rb"));
    fprintf(stderr, "utf32:\n");
    iutf32_t in32(f);
    lex_utf32(in32);
    fclose(f);

    assert(f = fopen("braille.ucs2.txt", "rb"));
    fprintf(stderr, "ucs2:\n");
    iucs2_t in2(f);
    lex_ucs2(in2);
    fclose(f);

    return 0;
}