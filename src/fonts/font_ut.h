static const struct
{   // X pos  Y pos  width  length 
	u8 charX, charY, charW, charL;
} font_cdrmap[0x60] = {
	{128, 34, 4, 9,},  //space
	{80, 24, 3, 9}, //!
	{104, 34, 5, 9}, //"
	{88, 24, 7, 9}, //#
	{32, 34, 7, 9}, //$
	{136, 34, 9, 9}, //%
	{56, 34, 7, 9}, //&
	{112, 34, 3, 9}, //'
	{120, 24, 4, 9}, //(
	{128, 24, 4, 9}, //)
	{0, 29, 10, 15}, //*
	{168, 24, 5, 9}, //+
	{192, 24, 4, 9}, //,
	{168, 24, 5, 9}, //-
	{200, 24, 3, 9}, //.
	{8, 34, 7, 9}, // /
	{0, 24, 7, 9}, //0
	{8, 24, 7, 9}, //1
	{16, 24, 7, 9}, //2
	{24, 24, 7, 9}, //3
	{32, 24, 7, 9}, //4
	{40, 24, 7, 9}, //5
	{48, 24, 7, 9}, //6
	{56, 24, 7, 9}, //7
	{64, 24, 7, 9}, //8
	{72, 24, 7, 9}, //9
	{104, 24, 3, 9}, //:
	{120, 34, 3, 9}, //;
	{88, 34, 6, 9}, //<
	{184, 24, 6, 9}, //=
	{96, 34, 6, 9}, //>
	{0, 34, 7, 9}, //?
	{72, 34, 7, 9}, //@
	{0, 0, 8, 15}, //A
	{8, 0, 8, 15}, //B
	{16, 0, 8, 15}, //C
	{24, 0, 8, 15}, //D
	{32, 0, 8, 15}, //E
	{40, 0, 8, 15}, //F
	{48, 0, 8, 15}, //G
	{56, 0, 8, 15}, //H
	{64, 0, 8, 15}, //I
	{73, 0, 8, 15}, //J
	{80, 0, 8, 15}, //K
	{88, 0, 8, 15}, //L
	{96, 0, 8, 15}, //M
	{104, 0, 8, 15}, //N
	{112, 0, 8, 15}, //O
	{120, 0, 8, 15}, //P
	{128, 0, 8, 15}, //Q
	{136, 0, 8, 15}, //R
	{144, 0, 8, 15}, //S
	{152, 0, 8, 15}, //T
	{160, 0, 8, 15}, //U
	{168, 0, 8, 15}, //V
	{176, 0, 8, 15}, //W
	{184, 0, 8, 15}, //X
	{192, 0, 8, 15}, //Y
	{200, 0, 8, 15}, //Z
	{152, 24, 4, 9}, //[
	{16, 34, 7, 9}, // backslash, can't type it for some reason
	{160, 24, 4, 9}, //]
	{64, 34, 5, 9}, //^
	{24, 34, 7, 9}, //_
	{40, 34, 4, 9}, //`
	{0, 14, 8, 15}, //a
	{8, 14, 8, 15}, //b
	{16, 14, 8, 15}, //c
	{24, 14, 8, 15}, //d
	{32, 14, 8, 15}, //e
	{40, 14, 8, 15}, //f
	{48, 14, 8, 15}, //g
	{56, 14, 8, 15}, //h
	{64, 14, 8, 15}, //i
	{72, 14, 8, 15}, //j
	{80, 14, 8, 15}, //k
	{88, 14, 8, 15}, //l
	{96, 14, 8, 15}, //m
	{104, 14, 8, 15}, //n
	{112, 14, 8, 15}, //o
	{120, 14, 8, 15}, //p
	{128, 14, 8, 15}, //q
	{136, 14, 8, 15}, //r
	{144, 14, 8, 15}, //s
	{152, 14, 8, 15}, //t
	{160, 14, 8, 15}, //u
	{168, 14, 8, 15}, //v
	{176, 14, 8, 15}, //w
	{184, 14, 8, 15}, //x
	{192, 14, 8, 15}, //y
	{200, 14, 8, 15}, //z
	{136, 24, 5, 9}, //{
	{112, 24, 3, 9}, //|
	{144, 24, 5, 9}, //}
	{48, 34, 7, 9}, //~
};