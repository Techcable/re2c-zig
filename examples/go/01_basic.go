// Code generated by re2c, DO NOT EDIT.
//go:generate re2go $INPUT -o $OUTPUT -i --nested-ifs
package main                              //
                                          // Go code
func lex(str string) {                    //
    var cursor int                        //

{
	var yych byte
	yych = str[cursor]
	if (yych <= '0') {
		goto yy1
	}
	if (yych <= '9') {
		goto yy2
	}
yy1:
	cursor += 1
	{ panic("error!") }
yy2:
	cursor += 1
	yych = str[cursor]
	if (yych <= '/') {
		goto yy3
	}
	if (yych <= '9') {
		goto yy2
	}
yy3:
	{ return }
}

}                                         //
                                          //
func main() {                             // Go code
    lex("1234\x00")                       //
}                                         //
