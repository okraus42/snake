unsigned char font8x16[128][16] = {
    // 32 (space)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 33 !
    {0x00, 0x00, 0x5f, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 34 "
    {0x00, 0x07, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 35 #
    {0x14, 0x7f, 0x14, 0x7f, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 36 $
    {0x24, 0x2a, 0x7f, 0x2a, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 37 %
    {0x46, 0x49, 0x31, 0x0c, 0x22, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 38 &
    {0x30, 0x49, 0x56, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 39 '
    {0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 40 (
    {0x00, 0x1c, 0x22, 0x41, 0x41, 0x41, 0x22, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 41 )
    {0x00, 0x1c, 0x22, 0x41, 0x41, 0x41, 0x22, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 42 *
    {0x24, 0x7e, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 43 +
    {0x08, 0x08, 0x3e, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 44 ,
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 45 -
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 46 .
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 47 /
    {0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 48 0
    {0x3e, 0x51, 0x49, 0x45, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 49 1
    {0x00, 0x42, 0x7f, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 50 2
    {0x62, 0x51, 0x49, 0x49, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 51 3
    {0x3e, 0x41, 0x49, 0x49, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 52 4
    {0x18, 0x14, 0x12, 0x7f, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 53 5
    {0x27, 0x45, 0x45, 0x45, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 54 6
    {0x3e, 0x45, 0x45, 0x45, 0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 55 7
    {0x01, 0x01, 0x01, 0x7f, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 56 8
    {0x36, 0x49, 0x49, 0x49, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 57 9
    {0x06, 0x49, 0x49, 0x49, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 58 :
    {0x00, 0x00, 0x14, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 59 ;
    {0x00, 0x00, 0x14, 0x14, 0x10, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 60 <
    {0x10, 0x20, 0x40, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 61 =
    {0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 62 >
    {0x10, 0x08, 0x04, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 63 ?
    {0x10, 0x20, 0x10, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 64 @
    {0x3e, 0x41, 0x45, 0x5f, 0x4d, 0x51, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 65 A
    {0x3e, 0x51, 0x49, 0x49, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 66 B
    {0x3e, 0x51, 0x49, 0x49, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 67 C
    {0x3e, 0x41, 0x41, 0x41, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 68 D
    {0x3e, 0x41, 0x41, 0x41, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // 69 E
    {0x3f, 0x49, 0x49, 0x49, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    // More characters...


	 // 70 F
	 {0x3f, 0x49, 0x49, 0x49, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 71 G
	 {0x3e, 0x41, 0x41, 0x41, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 72 H
	 {0x3f, 0x08, 0x08, 0x08, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 73 I
	 {0x00, 0x41, 0x7f, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 74 J
	 {0x20, 0x40, 0x40, 0x40, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 75 K
	 {0x3f, 0x08, 0x14, 0x22, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 76 L
	 {0x3f, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 77 M
	 {0x3f, 0x20, 0x10, 0x20, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 78 N
	 {0x3f, 0x20, 0x10, 0x08, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 79 O
	 {0x3e, 0x41, 0x41, 0x41, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 80 P
	 {0x3f, 0x49, 0x49, 0x49, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 81 Q
	 {0x3e, 0x41, 0x41, 0x41, 0x3e, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 82 R
	 {0x3f, 0x49, 0x49, 0x49, 0x3f, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 83 S
	 {0x3e, 0x49, 0x49, 0x49, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 84 T
	 {0x01, 0x01, 0x01, 0x7f, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 85 U
	 {0x3f, 0x40, 0x40, 0x40, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 86 V
	 {0x1f, 0x20, 0x40, 0x20, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 87 W
	 {0x3f, 0x40, 0x20, 0x20, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 88 X
	 {0x63, 0x14, 0x08, 0x14, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 89 Y
	 {0x3f, 0x04, 0x04, 0x04, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 90 Z
	 {0x61, 0x51, 0x49, 0x45, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 91 [
	 {0x7f, 0x41, 0x41, 0x41, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 92 backslash
	 {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 93 ]
	 {0x7f, 0x02, 0x02, 0x02, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 94 ^
	 {0x10, 0x20, 0x40, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 95 _
	 {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f},
	 // 96 `
	 {0x00, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 97 a
	 {0x20, 0x54, 0x54, 0x54, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 98 b
	 {0x7f, 0x44, 0x44, 0x44, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 99 c
	 {0x38, 0x44, 0x44, 0x44, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 100 d
	 {0x38, 0x44, 0x44, 0x44, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 101 e
	 {0x38, 0x54, 0x54, 0x54, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 102 f
	 {0x08, 0x7e, 0x09, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // More characters...

	 // 103 g
	 {0x38, 0x44, 0x44, 0x44, 0x3c, 0x04, 0x04, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 104 h
	 {0x7f, 0x04, 0x04, 0x04, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 105 i
	 {0x00, 0x44, 0x7d, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 106 j
	 {0x20, 0x40, 0x40, 0x40, 0x3d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 107 k
	 {0x7f, 0x04, 0x14, 0x24, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 108 l
	 {0x00, 0x44, 0x7f, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 109 m
	 {0x7c, 0x04, 0x18, 0x04, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 110 n
	 {0x7c, 0x04, 0x04, 0x04, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 111 o
	 {0x38, 0x44, 0x44, 0x44, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 112 p
	 {0x7c, 0x14, 0x14, 0x14, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 113 q
	 {0x08, 0x14, 0x14, 0x14, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 114 r
	 {0x7c, 0x04, 0x04, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 115 s
	 {0x38, 0x44, 0x44, 0x44, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 116 t
	 {0x04, 0x04, 0x7e, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 117 u
	 {0x3c, 0x40, 0x40, 0x40, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 118 v
	 {0x1c, 0x20, 0x40, 0x20, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 119 w
	 {0x3c, 0x40, 0x20, 0x20, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 120 x
	 {0x44, 0x28, 0x10, 0x28, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 121 y
	 {0x10, 0x20, 0x40, 0x20, 0x10, 0x04, 0x04, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 122 z
	 {0x44, 0x64, 0x54, 0x4c, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 123 {
	 {0x08, 0x3e, 0x41, 0x41, 0x3e, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 124 |
	 {0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 125 }
	 {0x08, 0x3e, 0x41, 0x41, 0x3e, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	 // 126 ~
	 {0x10, 0x28, 0x28, 0x10, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}


};

int	main(void)
{
	for (int i = ' '; i <= '~'; i++)
	{
		printf("%c\n", i);
		for (int y = 0; y < 16; y++)
		{
			for (int x = 0; x < 8; x++)
			{
				if (font8x16[i - ' '][y] & (1 << x))
					printf("XX");
				else
					printf("..");
			}
			printf("\n");
		}
		printf("\n");
	}
}