/* Generated by re2c */
digraph re2c {
0 -> INITIAL [label="state=INITIAL"]
0 -> ST_OFFSET [label="state=ST_OFFSET"]
0 -> ST_SECTION_VALUE [label="state=ST_SECTION_VALUE"]
0 -> ST_VALUE [label="state=ST_VALUE"]
0 -> ST_SECTION_RAW [label="state=ST_SECTION_RAW"]
0 -> ST_DOUBLE_QUOTES [label="state=ST_DOUBLE_QUOTES"]
0 -> ST_VARNAME [label="state=ST_VARNAME"]
0 -> ST_RAW [label="state=ST_RAW"]
INITIAL -> 2
2 -> 3 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][#][%]['][*-:][<][>-E][G-M][P-S][U-X][Z][\\-0x5D][_-e][g-m][p-s][u-x][z][0x7F-0xFF]"]
2 -> 6 [label="[0x09]"]
2 -> 9 [label="[0x0A]"]
2 -> 11 [label="[0x0D]"]
2 -> 12 [label="[ ]"]
2 -> 14 [label="[!-\"][$][&][(-)][^][{-~]"]
2 -> 16 [label="[;]"]
2 -> 18 [label="[=]"]
2 -> 21 [label="[F][f]"]
2 -> 22 [label="[N][n]"]
2 -> 23 [label="[O][o]"]
2 -> 24 [label="[T][t]"]
2 -> 25 [label="[Y][y]"]
2 -> 26 [label="[[]"]
3 -> 4
4 -> 3 [label="[0x00-0x08][0x0B-0x0C][0x0E- ][#][%]['][*-:][<][>-Z][\\-0x5D][_-z][0x7F-0xFF]"]
4 -> 5 [label="[0x09-0x0A][0x0D][!-\"][$][&][(-)][;][=][^][{-~]"]
4 -> 28 [label="[[]"]
5 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:481"]
6 -> 7
7 -> 8 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!-:][<][>-0xFF]"]
7 -> 6 [label="[0x09][ ]"]
7 -> 9 [label="[0x0A]"]
7 -> 11 [label="[0x0D]"]
7 -> 16 [label="[;]"]
7 -> 18 [label="[=]"]
8 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:627"]
9 -> 10
10 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:632"]
11 -> 10 [label="[0x00-0x09][0x0B-0xFF]"]
11 -> 9 [label="[0x0A]"]
12 -> 13
13 -> 3 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][#][%]['][*-:][<][>-Z][\\-0x5D][_-z][0x7F-0xFF]"]
13 -> 6 [label="[0x09]"]
13 -> 9 [label="[0x0A]"]
13 -> 11 [label="[0x0D]"]
13 -> 12 [label="[ ]"]
13 -> 5 [label="[!-\"][$][&][(-)][^][{-~]"]
13 -> 16 [label="[;]"]
13 -> 18 [label="[=]"]
13 -> 28 [label="[[]"]
14 -> 15
15 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:555"]
16 -> 17
17 -> 16 [label="[0x00-0x09][0x0B-0x0C][0x0E-0xFF]"]
17 -> 31 [label="[0x0A]"]
17 -> 33 [label="[0x0D]"]
18 -> 19
19 -> 20 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
19 -> 18 [label="[0x09][ ]"]
20 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:491"]
21 -> 4 [label="[0x00-@][B-`][b-0xFF]"]
21 -> 34 [label="[A][a]"]
22 -> 4 [label="[0x00-N][P-T][V-n][p-t][v-0xFF]"]
22 -> 35 [label="[O][o]"]
22 -> 37 [label="[U][u]"]
23 -> 4 [label="[0x00-E][G-M][O-e][g-m][o-0xFF]"]
23 -> 38 [label="[F][f]"]
23 -> 39 [label="[N][n]"]
24 -> 4 [label="[0x00-Q][S-q][s-0xFF]"]
24 -> 42 [label="[R][r]"]
25 -> 4 [label="[0x00-D][F-d][f-0xFF]"]
25 -> 43 [label="[E][e]"]
26 -> 27
27 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:406"]
28 -> 29
29 -> 30 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
29 -> 28 [label="[0x09][ ]"]
30 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:431"]
31 -> 32
32 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:637"]
33 -> 32 [label="[0x00-0x09][0x0B-0xFF]"]
33 -> 31 [label="[0x0A]"]
34 -> 4 [label="[0x00-K][M-k][m-0xFF]"]
34 -> 44 [label="[L][l]"]
35 -> 4 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][#][%]['][*-:][<][>-M][O-0x5D][_-m][o-z][0x7F-0xFF]"]
35 -> 45 [label="[0x09]"]
35 -> 36 [label="[0x0A][0x0D][!-\"][$][&][(-)][;][=][^][{-~]"]
35 -> 47 [label="[ ]"]
35 -> 49 [label="[N][n]"]
36 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:473"]
37 -> 4 [label="[0x00-K][M-k][m-0xFF]"]
37 -> 50 [label="[L][l]"]
38 -> 4 [label="[0x00-E][G-e][g-0xFF]"]
38 -> 47 [label="[F][f]"]
39 -> 40
40 -> 3 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][#][%]['][*-:][<][>-Z][\\-0x5D][_-z][0x7F-0xFF]"]
40 -> 51 [label="[0x09]"]
40 -> 41 [label="[0x0A][0x0D][!-\"][$][&][(-)][;][=][^][{-~]"]
40 -> 39 [label="[ ]"]
40 -> 28 [label="[[]"]
41 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:469"]
42 -> 4 [label="[0x00-T][V-t][v-0xFF]"]
42 -> 53 [label="[U][u]"]
43 -> 4 [label="[0x00-R][T-r][t-0xFF]"]
43 -> 39 [label="[S][s]"]
44 -> 4 [label="[0x00-R][T-r][t-0xFF]"]
44 -> 49 [label="[S][s]"]
45 -> 46
46 -> 36 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
46 -> 45 [label="[0x09][ ]"]
47 -> 48
48 -> 3 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][#][%]['][*-:][<][>-Z][\\-0x5D][_-z][0x7F-0xFF]"]
48 -> 45 [label="[0x09]"]
48 -> 36 [label="[0x0A][0x0D][!-\"][$][&][(-)][;][=][^][{-~]"]
48 -> 47 [label="[ ]"]
48 -> 28 [label="[[]"]
49 -> 4 [label="[0x00-D][F-d][f-0xFF]"]
49 -> 47 [label="[E][e]"]
50 -> 4 [label="[0x00-K][M-k][m-0xFF]"]
50 -> 54 [label="[L][l]"]
51 -> 52
52 -> 41 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
52 -> 51 [label="[0x09][ ]"]
53 -> 4 [label="[0x00-D][F-d][f-0xFF]"]
53 -> 39 [label="[E][e]"]
54 -> 55
55 -> 3 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][#][%]['][*-:][<][>-Z][\\-0x5D][_-z][0x7F-0xFF]"]
55 -> 57 [label="[0x09]"]
55 -> 56 [label="[0x0A][0x0D][!-\"][$][&][(-)][;][=][^][{-~]"]
55 -> 54 [label="[ ]"]
55 -> 28 [label="[[]"]
56 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:477"]
57 -> 58
58 -> 56 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
58 -> 57 [label="[0x09][ ]"]
ST_OFFSET -> 60
60 -> 61 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!][#][%-&][(-,][/][:][<-@][[][^][`][{-0xFF]"]
60 -> 64 [label="[0x09][ ]"]
60 -> 66 [label="[0x0A][0x0D][;]"]
60 -> 68 [label="[\"]"]
60 -> 70 [label="[$]"]
60 -> 71 [label="[']"]
60 -> 72 [label="[--.]"]
60 -> 73 [label="[0-9]"]
60 -> 76 [label="[A-Z][_][a-z]"]
60 -> 79 [label="[\\]"]
60 -> 80 [label="[0x5D]"]
61 -> 62
62 -> 61 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(-:][<-[][^-0xFF]"]
62 -> 63 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
62 -> 82 [label="[$]"]
62 -> 79 [label="[\\]"]
63 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:573"]
64 -> 65
65 -> 61 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!][#][%-&][(-:][<-[][^-0xFF]"]
65 -> 64 [label="[0x09][ ]"]
65 -> 63 [label="[0x0A][0x0D]['][;]"]
65 -> 68 [label="[\"]"]
65 -> 82 [label="[$]"]
65 -> 79 [label="[\\]"]
65 -> 80 [label="[0x5D]"]
66 -> 67
67 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:648"]
68 -> 69
69 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:577"]
70 -> 67 [label="[0x00]"]
70 -> 61 [label="[0x01-[][0x5D-z][|-0xFF]"]
70 -> 84 [label="[\\]"]
70 -> 86 [label="[{]"]
71 -> 88 [label="[0x00-&][(-0xFF]"]
71 -> 67 [label="[']"]
72 -> 62 [label="[0x00-/][:-0xFF]"]
72 -> 90 [label="[0-9]"]
73 -> 74
74 -> 61 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(--][/][:][<-[][^-0xFF]"]
74 -> 75 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
74 -> 82 [label="[$]"]
74 -> 90 [label="[.]"]
74 -> 73 [label="[0-9]"]
74 -> 79 [label="[\\]"]
75 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:551"]
76 -> 77
77 -> 61 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(-/][:][<-@][[][^][`][{-0xFF]"]
77 -> 78 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
77 -> 82 [label="[$]"]
77 -> 76 [label="[0-9][A-Z][_][a-z]"]
77 -> 79 [label="[\\]"]
78 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:547"]
79 -> 61
80 -> 81
81 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:444"]
82 -> 83 [label="[0x00][{]"]
82 -> 61 [label="[0x01-[][0x5D-z][|-0xFF]"]
82 -> 84 [label="[\\]"]
83 -> 63 [label="yyaccept=0"]
83 -> 75 [label="yyaccept=1"]
83 -> 78 [label="yyaccept=2"]
84 -> 85
85 -> 61 [label="[0x00-#][%-[][0x5D-0xFF]"]
85 -> 84 [label="[$][\\]"]
86 -> 87
87 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:449"]
88 -> 89
89 -> 88 [label="[0x00-&][(-0xFF]"]
89 -> 92 [label="[']"]
90 -> 91
91 -> 61 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(-/][:][<-[][^-0xFF]"]
91 -> 75 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
91 -> 82 [label="[$]"]
91 -> 90 [label="[0-9]"]
91 -> 79 [label="[\\]"]
92 -> 93
93 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:416"]
ST_SECTION_VALUE -> 95
95 -> 96 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!][#][%-&][(-,][/][:][<-@][[][^][`][{-0xFF]"]
95 -> 99 [label="[0x09][ ]"]
95 -> 101 [label="[0x0A][0x0D][;]"]
95 -> 103 [label="[\"]"]
95 -> 105 [label="[$]"]
95 -> 106 [label="[']"]
95 -> 107 [label="[--.]"]
95 -> 108 [label="[0-9]"]
95 -> 111 [label="[A-Z][_][a-z]"]
95 -> 114 [label="[\\]"]
95 -> 115 [label="[0x5D]"]
96 -> 97
97 -> 96 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(-:][<-[][^-0xFF]"]
97 -> 98 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
97 -> 118 [label="[$]"]
97 -> 114 [label="[\\]"]
98 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:573"]
99 -> 100
100 -> 96 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!][#][%-&][(-:][<-[][^-0xFF]"]
100 -> 99 [label="[0x09][ ]"]
100 -> 98 [label="[0x0A][0x0D]['][;][0x5D]"]
100 -> 103 [label="[\"]"]
100 -> 118 [label="[$]"]
100 -> 114 [label="[\\]"]
101 -> 102
102 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:648"]
103 -> 104
104 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:577"]
105 -> 102 [label="[0x00]"]
105 -> 96 [label="[0x01-[][0x5D-z][|-0xFF]"]
105 -> 120 [label="[\\]"]
105 -> 122 [label="[{]"]
106 -> 124 [label="[0x00-&][(-0xFF]"]
106 -> 102 [label="[']"]
107 -> 97 [label="[0x00-/][:-0xFF]"]
107 -> 126 [label="[0-9]"]
108 -> 109
109 -> 96 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(--][/][:][<-[][^-0xFF]"]
109 -> 110 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
109 -> 118 [label="[$]"]
109 -> 126 [label="[.]"]
109 -> 108 [label="[0-9]"]
109 -> 114 [label="[\\]"]
110 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:551"]
111 -> 112
112 -> 96 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(-/][:][<-@][[][^][`][{-0xFF]"]
112 -> 113 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
112 -> 118 [label="[$]"]
112 -> 111 [label="[0-9][A-Z][_][a-z]"]
112 -> 114 [label="[\\]"]
113 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:547"]
114 -> 96
115 -> 116
116 -> 117 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!-0xFF]"]
116 -> 115 [label="[0x09][ ]"]
116 -> 128 [label="[0x0A]"]
116 -> 129 [label="[0x0D]"]
117 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:425"]
118 -> 119 [label="[0x00][{]"]
118 -> 96 [label="[0x01-[][0x5D-z][|-0xFF]"]
118 -> 120 [label="[\\]"]
119 -> 98 [label="yyaccept=0"]
119 -> 110 [label="yyaccept=1"]
119 -> 113 [label="yyaccept=2"]
120 -> 121
121 -> 96 [label="[0x00-#][%-[][0x5D-0xFF]"]
121 -> 120 [label="[$][\\]"]
122 -> 123
123 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:449"]
124 -> 125
125 -> 124 [label="[0x00-&][(-0xFF]"]
125 -> 130 [label="[']"]
126 -> 127
127 -> 96 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(-/][:][<-[][^-0xFF]"]
127 -> 110 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
127 -> 118 [label="[$]"]
127 -> 126 [label="[0-9]"]
127 -> 114 [label="[\\]"]
128 -> 117
129 -> 117 [label="[0x00-0x09][0x0B-0xFF]"]
129 -> 128 [label="[0x0A]"]
130 -> 131
131 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:416"]
ST_VALUE -> 133
133 -> 134 [label="[0x00]"]
133 -> 136 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#][%][*-,][/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
133 -> 139 [label="[0x09][ ]"]
133 -> 142 [label="[0x0A]"]
133 -> 144 [label="[0x0D]"]
133 -> 145 [label="[!][&][(-)][^][|][~]"]
133 -> 148 [label="[\"]"]
133 -> 150 [label="[$]"]
133 -> 151 [label="[']"]
133 -> 152 [label="[--.]"]
133 -> 153 [label="[0-9]"]
133 -> 156 [label="[;]"]
133 -> 158 [label="[=]"]
133 -> 160 [label="[A-E][G-M][P-S][U-X][Z][_][a-e][g-m][p-s][u-x][z]"]
133 -> 163 [label="[F][f]"]
133 -> 164 [label="[N][n]"]
133 -> 165 [label="[O][o]"]
133 -> 166 [label="[T][t]"]
133 -> 167 [label="[Y][y]"]
134 -> 135
135 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:643"]
136 -> 137
137 -> 138 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
137 -> 136 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#][%][*-:][<][>-0x5D][_-{][}][0x7F-0xFF]"]
137 -> 168 [label="[$]"]
138 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:569"]
139 -> 140
140 -> 141 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!][#-:][<-0xFF]"]
140 -> 139 [label="[0x09][ ]"]
140 -> 142 [label="[0x0A]"]
140 -> 144 [label="[0x0D]"]
140 -> 148 [label="[\"]"]
140 -> 156 [label="[;]"]
141 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:623"]
142 -> 143
143 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:541"]
144 -> 143 [label="[0x00-0x09][0x0B-0xFF]"]
144 -> 142 [label="[0x0A]"]
145 -> 146
146 -> 147 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
146 -> 145 [label="[0x09][ ]"]
147 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:559"]
148 -> 149
149 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:577"]
150 -> 135 [label="[0x00]"]
150 -> 136 [label="[0x01-[][0x5D-z][|-0xFF]"]
150 -> 170 [label="[\\]"]
150 -> 171 [label="[{]"]
151 -> 173 [label="[0x00-&][(-0xFF]"]
151 -> 135 [label="[']"]
152 -> 137 [label="[0x00-/][:-0xFF]"]
152 -> 175 [label="[0-9]"]
153 -> 154
154 -> 155 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
154 -> 136 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#][%][*--][/][:][<][>-0x5D][_-{][}][0x7F-0xFF]"]
154 -> 168 [label="[$]"]
154 -> 175 [label="[.]"]
154 -> 153 [label="[0-9]"]
155 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:551"]
156 -> 157
157 -> 156 [label="[0x00-0x09][0x0B-0x0C][0x0E-0xFF]"]
157 -> 177 [label="[0x0A]"]
157 -> 179 [label="[0x0D]"]
158 -> 159
159 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:563"]
160 -> 161
161 -> 162 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
161 -> 136 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#][%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
161 -> 168 [label="[$]"]
161 -> 160 [label="[0-9][A-Z][_][a-z]"]
162 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:547"]
163 -> 162 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
163 -> 137 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
163 -> 160 [label="[0-9][B-Z][_][b-z]"]
163 -> 180 [label="[A][a]"]
164 -> 162 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
164 -> 137 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
164 -> 160 [label="[0-9][A-N][P-T][V-Z][_][a-n][p-t][v-z]"]
164 -> 181 [label="[O][o]"]
164 -> 183 [label="[U][u]"]
165 -> 162 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
165 -> 137 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
165 -> 160 [label="[0-9][A-E][G-M][O-Z][_][a-e][g-m][o-z]"]
165 -> 184 [label="[F][f]"]
165 -> 185 [label="[N][n]"]
166 -> 162 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
166 -> 137 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
166 -> 160 [label="[0-9][A-Q][S-Z][_][a-q][s-z]"]
166 -> 187 [label="[R][r]"]
167 -> 162 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
167 -> 137 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
167 -> 160 [label="[0-9][A-D][F-Z][_][a-d][f-z]"]
167 -> 188 [label="[E][e]"]
168 -> 169 [label="[0x00][{]"]
168 -> 136 [label="[0x01-[][0x5D-z][|-0xFF]"]
168 -> 170 [label="[\\]"]
169 -> 138 [label="yyaccept=0"]
169 -> 155 [label="yyaccept=1"]
169 -> 162 [label="yyaccept=2"]
169 -> 182 [label="yyaccept=3"]
169 -> 186 [label="yyaccept=4"]
169 -> 203 [label="yyaccept=5"]
170 -> 136 [label="[0x00-#][%-0xFF]"]
170 -> 189 [label="[$]"]
171 -> 172
172 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:449"]
173 -> 174
174 -> 173 [label="[0x00-&][(-0xFF]"]
174 -> 191 [label="[']"]
175 -> 176
176 -> 155 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
176 -> 136 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#][%][*-/][:][<][>-0x5D][_-{][}][0x7F-0xFF]"]
176 -> 168 [label="[$]"]
176 -> 175 [label="[0-9]"]
177 -> 178
178 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:637"]
179 -> 178 [label="[0x00-0x09][0x0B-0xFF]"]
179 -> 177 [label="[0x0A]"]
180 -> 162 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
180 -> 137 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
180 -> 160 [label="[0-9][A-K][M-Z][_][a-k][m-z]"]
180 -> 193 [label="[L][l]"]
181 -> 182 [label="[0x00][0x0A][0x0D][!-\"][&-)][;][=][^][|][~]"]
181 -> 137 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
181 -> 194 [label="[0x09][ ]"]
181 -> 160 [label="[0-9][A-M][O-Z][_][a-m][o-z]"]
181 -> 196 [label="[N][n]"]
182 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:473"]
183 -> 162 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
183 -> 137 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
183 -> 160 [label="[0-9][A-K][M-Z][_][a-k][m-z]"]
183 -> 197 [label="[L][l]"]
184 -> 162 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
184 -> 137 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
184 -> 160 [label="[0-9][A-E][G-Z][_][a-e][g-z]"]
184 -> 198 [label="[F][f]"]
185 -> 186 [label="[0x00][0x0A][0x0D][!-\"][&-)][;][=][^][|][~]"]
185 -> 137 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
185 -> 199 [label="[0x09][ ]"]
185 -> 160 [label="[0-9][A-Z][_][a-z]"]
186 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:469"]
187 -> 162 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
187 -> 137 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
187 -> 160 [label="[0-9][A-T][V-Z][_][a-t][v-z]"]
187 -> 201 [label="[U][u]"]
188 -> 162 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
188 -> 137 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
188 -> 160 [label="[0-9][A-R][T-Z][_][a-r][t-z]"]
188 -> 185 [label="[S][s]"]
189 -> 190
190 -> 138 [label="[0x00]"]
190 -> 136 [label="[0x01-#][%-[][0x5D-0xFF]"]
190 -> 189 [label="[$]"]
190 -> 170 [label="[\\]"]
191 -> 192
192 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:416"]
193 -> 162 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
193 -> 137 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
193 -> 160 [label="[0-9][A-R][T-Z][_][a-r][t-z]"]
193 -> 196 [label="[S][s]"]
194 -> 195
195 -> 182 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
195 -> 194 [label="[0x09][ ]"]
196 -> 162 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
196 -> 137 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
196 -> 160 [label="[0-9][A-D][F-Z][_][a-d][f-z]"]
196 -> 198 [label="[E][e]"]
197 -> 162 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
197 -> 137 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
197 -> 160 [label="[0-9][A-K][M-Z][_][a-k][m-z]"]
197 -> 202 [label="[L][l]"]
198 -> 182 [label="[0x00][0x0A][0x0D][!-\"][&-)][;][=][^][|][~]"]
198 -> 137 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
198 -> 194 [label="[0x09][ ]"]
198 -> 160 [label="[0-9][A-Z][_][a-z]"]
199 -> 200
200 -> 186 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
200 -> 199 [label="[0x09][ ]"]
201 -> 162 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
201 -> 137 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
201 -> 160 [label="[0-9][A-D][F-Z][_][a-d][f-z]"]
201 -> 185 [label="[E][e]"]
202 -> 203 [label="[0x00][0x0A][0x0D][!-\"][&-)][;][=][^][|][~]"]
202 -> 137 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
202 -> 204 [label="[0x09][ ]"]
202 -> 160 [label="[0-9][A-Z][_][a-z]"]
203 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:477"]
204 -> 205
205 -> 203 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
205 -> 204 [label="[0x09][ ]"]
ST_SECTION_RAW -> 207
207 -> 208 [label="[0x00-0x09][0x0B-0x0C][0x0E-\\][^-0xFF]"]
207 -> 211 [label="[0x0A][0x0D]"]
207 -> 213 [label="[0x5D]"]
208 -> 209
209 -> 208 [label="[0x00-0x09][0x0B-0x0C][0x0E-\\][^-0xFF]"]
209 -> 210 [label="[0x0A][0x0D][0x5D]"]
210 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:537"]
211 -> 212
212 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:648"]
213 -> 214
214 -> 215 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!-0xFF]"]
214 -> 213 [label="[0x09][ ]"]
214 -> 216 [label="[0x0A]"]
214 -> 217 [label="[0x0D]"]
215 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:425"]
216 -> 215
217 -> 215 [label="[0x00-0x09][0x0B-0xFF]"]
217 -> 216 [label="[0x0A]"]
ST_DOUBLE_QUOTES -> 219
219 -> 220 [label="[0x00-!][#][%-0xFF]"]
219 -> 222 [label="[\"]"]
219 -> 225 [label="[$]"]
220 -> 221
221 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:587"]
222 -> 223
223 -> 224 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
223 -> 222 [label="[0x09][ ]"]
224 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:582"]
225 -> 221 [label="[0x00-z][|-0xFF]"]
225 -> 226 [label="[{]"]
226 -> 227
227 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:449"]
ST_VARNAME -> 229
229 -> 230 [label="[0x00-0x08][0x0B-0x0C][0x0E- ][#][%]['][*-:][<][>-Z][\\-0x5D][_-z][0x7F-0xFF]"]
229 -> 233 [label="[0x09-0x0A][0x0D][!-\"][$][&][(-)][;][=][[][^][{-|][~]"]
229 -> 235 [label="[}]"]
230 -> 231
231 -> 230 [label="[0x00-0x08][0x0B-0x0C][0x0E- ][#][%]['][*-:][<][>-Z][\\-0x5D][_-z][0x7F-0xFF]"]
231 -> 232 [label="[0x09-0x0A][0x0D][!-\"][$][&][(-)][;][=][[][^][{-~]"]
232 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:454"]
233 -> 234
234 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:648"]
235 -> 236
236 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:464"]
ST_RAW -> 238
238 -> 239 [label="[0x00]"]
238 -> 241 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][!-:][<-0xFF]"]
238 -> 243 [label="[0x09][ ]"]
238 -> 244 [label="[0x0A]"]
238 -> 246 [label="[0x0D]"]
238 -> 247 [label="[;]"]
239 -> 240
240 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:643"]
241 -> 242
242 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:500"]
243 -> 242 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!-:][<-0xFF]"]
243 -> 250 [label="[0x09-0x0A][0x0D][ ][;]"]
244 -> 245
245 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:541"]
246 -> 245 [label="[0x00-0x09][0x0B-0xFF]"]
246 -> 244 [label="[0x0A]"]
247 -> 248
248 -> 247 [label="[0x00-0x09][0x0B-0x0C][0x0E-0xFF]"]
248 -> 252 [label="[0x0A]"]
248 -> 254 [label="[0x0D]"]
249 -> 250
250 -> 251 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!-:][<-0xFF]"]
250 -> 249 [label="[0x09][ ]"]
250 -> 244 [label="[0x0A]"]
250 -> 246 [label="[0x0D]"]
250 -> 247 [label="[;]"]
251 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:627"]
252 -> 253
253 [label="dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:637"]
254 -> 253 [label="[0x00-0x09][0x0B-0xFF]"]
254 -> 252 [label="[0x0A]"]
}
dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:384:13: warning: escape has no effect: '\.' [-Wuseless-escape]
dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:384:32: warning: escape has no effect: '\.' [-Wuseless-escape]
dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:391:27: warning: escape has no effect: '\[' [-Wuseless-escape]
dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:392:11: warning: escape has no effect: '\[' [-Wuseless-escape]
dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:648:7: warning: unreachable rule in condition 'INITIAL' (shadowed by rules at lines 406, 481, 491, 555, 627, 632, 637) [-Wunreachable-rules]
dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:623:50: warning: unreachable rule in condition 'ST_OFFSET' (shadowed by rule at line 573) [-Wunreachable-rules]
dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:623:50: warning: unreachable rule in condition 'ST_SECTION_VALUE' (shadowed by rule at line 573) [-Wunreachable-rules]
dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:648:7: warning: unreachable rule in condition 'ST_VALUE' (shadowed by rules at lines 541, 547, 551, 559, 563, 569, 577, 623, 643) [-Wunreachable-rules]
dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:648:7: warning: unreachable rule in condition 'ST_DOUBLE_QUOTES' (shadowed by rules at lines 582, 587) [-Wunreachable-rules]
dot/php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:648:7: warning: unreachable rule in condition 'ST_RAW' (shadowed by rules at lines 500, 541, 643) [-Wunreachable-rules]
