// re2c $INPUT -o $OUTPUT -i
const std = @import("std");

fn lex(s: [:0]const u8) bool {
    var cursor: usize = 0;
    /*!re2c
        re2c:define:YYCTYPE = u8;
        re2c:define:YYPEEK = "s[cursor]";
        re2c:define:YYSKIP = "cursor += 1;";
        re2c:yyfill:enable = 0;

        number = [1-9][0-9]*;

        number { return true; }
        *      { return false; }
    */
}

pub fn main() !void {
    std.debug.assert(lex("1234"));
}
