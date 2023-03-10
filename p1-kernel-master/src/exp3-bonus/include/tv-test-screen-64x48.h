/*  GIMP header image file format (RGB): Y:\teaching\p1-kernel-workspace\p1-kernel\src\exp3-bonus\include\tv-test-screen-64x48.h  */

static unsigned int img_width = 64;
static unsigned int img_height = 48;

/*  Call this macro repeatedly.  After each use, the pixel data can be extracted  */

#define HEADER_PIXEL(data,pixel) {\
pixel[0] = (((data[0] - 33) << 2) | ((data[1] - 33) >> 4)); \
pixel[1] = ((((data[1] - 33) & 0xF) << 4) | ((data[2] - 33) >> 2)); \
pixel[2] = ((((data[2] - 33) & 0x3) << 6) | ((data[3] - 33))); \
data += 4; \
}
static char *img_data =
	"````````FZ?8!!!!!!!!2U>(````````````Q=(\"!!!!!!!!!!!![OLK````````"
	"[/DI!!!!!!!!!!!!T=X.````````````!!!!!!!!!!!!K;GJ````````````@(R]"
	"!!!!!!!!@(R]````````````K+CI!!!!!!!!!!!!````````````TM\\/!!!!!!!!"
	"!!!!Y_0D````````[OLK!!!!!!!!!!!!Q=(\"````````````6F:7!!!!!!!!FJ;7"
	"P\\_`P\\_`FJ;79'\"A9'\"AAI+#P\\_`P\\_`P\\_`K;GJ9'\"A9'\"A9'\"AO\\O\\P\\_`P\\_`"
	"OLK[9'\"A9'\"A9'\"AJK;GP\\_`P\\_`Q=(\"8V^@9'\"A9'\"AE*#1P\\_`P\\_`P\\_`>X>X"
	"9'\"A9'\"A?(BYP\\_`P\\_`P\\_`EJ+39'\"A9'\"A9'\"AQ]0$P\\_`P\\_`K+CI9'\"A9'\"A"
	"9'\"AO,CYP\\_`P\\_`O\\O\\9'\"A9'\"A9'\"AK;GJP\\_`P\\_`P\\_`C)C)9'\"A9'\"AG*C9"
	"A)#!A)#!G:G:A)#!A)#!HZ_@A)#!A)#!A)#!G:G:A)#!A)#!A)#!EZ/4A)#!A)#!"
	"EZ/4A)#!A)#!A)#!C)C)A)#!A)#!AY/$@X^`A)#!A)#!A9'\"A)#!A)#!A)#!?HJ["
	"A)#!A)#!?XN\\A)#!A)#!A)#!BI;'A)#!A)#!A)#!C)C)A)#!A)#!D)S-A)#!A)#!"
	"A)#!F:76A)#!A)#!F*35A)#!A)#!A)#!G:G:A)#!A)#!A)#!I[/DA)#!A)#!H:W>"
	"A)#!A)#!G:G:A)#!A)#!HZ_@A)#!A)#!A)#!G:G:A)#!A)#!A)#!EZ/4A)#!A)#!"
	"EZ/4A)#!A)#!A)#!C)C)A)#!A)#!AY/$@X^`A)#!A)#!A9'\"F*35M<'RQM,#T]`0"
	"W>H:W>H:T]`0QM,#M<'RF*35BI;'A)#!A)#!A)#!C)C)A)#!A)#!D)S-A)#!A)#!"
	"A)#!F:76A)#!A)#!F*35A)#!A)#!A)#!G:G:A)#!A)#!A)#!I[/DA)#!A)#!H:W>"
	"@HZ_@HZ_FZ?8@HZ_@HZ_HJ[?@HZ_@HZ_@HZ_G*C9@HZ_@HZ_@HZ_E:'2@HZ_@HZ_"
	"E:'2@HZ_@HZ_@HZ_BY?(@HZ_@HZ_A9'\"@8V^K;GJV.45^04U````````````````"
	"````````````````````````^04UV.45K;GJ@HZ_BY?(@HZ_@HZ_CIK+@HZ_@HZ_"
	"@HZ_F*35@HZ_@HZ_EZ/4@HZ_@HZ_@HZ_FZ?8@HZ_@HZ_@HZ_I;'B@HZ_@HZ_H*S="
	"@(R]@(R]FJ;7@(R]@(R]GZO<5+3+5+3+5+3+5:G85IKE5IKE5IKE>Y'(@(R]@(R]"
	"E*#1@(R]@(R]@(R]B97&@(R]@8V^P,S]\\O\\O[?HJ!!!!!!!!!!!!!!!!!!!!!!!!"
	"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![?HJ\\O\\OP<W^@8V^@(R]C9G*@(R]@(R]"
	"@(R]EJ+3@(R]@(R]D*'45IKE5IKE5IKEA*G!G[22G[22G[22D)W'@(R]@(R]GZO<"
	"A)#!A)#!G:G:A)#!A)#!HJW?7+;/7+;/7+;/7:S;7I[G7I[G7I[G@)7,A)#!A)#!"
	"EZ/4A)#!A)#!A)#!C)C)L;WN]0$Q````````[?HJ!!!!!!!!!!!!!!!!!!!!!!!!"
	"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![?HJ````````]0$QL;WND)S-A)#!A)#!"
	"A)#!F:76A)#!A)#!E*387I[G7I[G7I[GB*S%HK::HK::HK::E*'+A)#!A)#!H:W>"
	"A)#!A)#!G:G:A)#!A)#!HJW?7+;/7+;/7+;/7:S;7I[G7I[G7I[G@)7,A)#!A)#!"
	"EZ/4A)#!A)#!C)C)W.D9````````````````[?HJ!!!!!!!!!!!!!!!!!!!!!!!!"
	"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![?HJ````````````````W>H:BY?(A)#!"
	"A)#!F:76A)#!A)#!E*387I[G7I[G7I[GB*S%HK::HK::HK::E*'+A)#!A)#!H:W>"
	"DI[/DI[/I[/DDI[/DI[/J[?H7+;/7+;/7+;/7:S;7I[G7I[G7I[GC*#6DI[/DI[/"
	"HJ[?DI[/BI;'N,3UT]`0T]`0^`@X^P<W`@X^]@(RJ+3EJ+3EJ+3EJ+3EJ+3EJ+3E"
	"J+3EJ+3EJ+3EJ+3EJ+3EJ+3EJ+3EJ+3E]@(R````````^`@XU>(2U>(2N\\?XBY?("
	"DI[/I+#ADI[/DI[/GJ[A7I[G7I[G7I[GB*S%HK::HK::HK::GJO6DI[/DI[/J[?H"
	"A)#!A)#!G:G:A)#!A)#!HJW?7+;/7+;/7+;/7:S;7I[G7I[G7I[G@)7,A)#!A)#!"
	"EZ/4?XN\\,#QM!!!!!!!!!!!![/DIZ_@H_@HZ````````````````````````````"
	"````````````````````````````````````````````[/DI!!!!!!!!!!!!,#QM"
	"@(R]F:76A)#!A)#!DZ387I[G7I[G7I[GB*S%HK::HK::HK::E*'+A)#!A)#!H:W>"
	"A)#!A)#!G:G:A)#!A)#!HJW?7+;/7+;/7+;/7:S;7I[G7I[G7I[G@)7,A)#!A)#!"
	"CYO,,#QM!!!!!!!!!!!!!!!![/DIZ_@H_@HZ````````````````````````````"
	"````````````````````````````````````````````[/DI!!!!!!!!!!!!!!!!"
	",3UND9W.A)#!A)#!DZ387I[G7I[G7I[GB*S%HK::HK::HK::E*'+A)#!A)#!H:W>"
	"A)#!A)#!G:G:A)#!A)#!HJW?7+;/7+;/7+;/7:S;7I[G7I[G7I[G@)7,A)#!@HZ_"
	"2U>(!!!!!!!!!!!!!!!!!!!![/DIZ_@H_@HZ````````````````````````````"
	"````````````````````````````````````````````[/DI!!!!!!!!!!!!!!!!"
	"!!!!3EJ+@HZ_A)#!DZ387I[G7I[G7I[GB*S%HK::HK::HK::E*'+A)#!A)#!H:W>"
	"HZ_@HZ_@M,#QHZ_@HZ_@N,/T7+;/7+;/7+;/>[+9AY_7AY_7AY_7J;?IHZ_@HZ_@"
	"J;7FJ;7F\"15&!!!!;GJKJ;7FS]P,?HJ[BI;'L+SMUN,3UN,3C9G*C9G*M,#QUN,3"
	"UN,3C9G*C9G*N,3UUN,3U^04C9G*C9G*NL;WUN,3U^04@(R]!!!!@X^`J;7FIK+C"
	"!!!!!!!!G*C9HZ_@KKOMAY_7AY_7AY_7H[C-HK::HK::HK::K+GDHZ_@HZ_@M\\/T"
	"A)#!A)#!G:G:A)#!A)#!HJW?7+;/7+;/7+;/?J_3A)#!A)#!A)#!EZ/4>H:W@HZ_"
	"P\\_`P\\_`\"Q=(!!!!@(R]P\\_`P\\_`!!!!!!!!@X^`P\\_`P\\_`!!!!!!!!BY?(P\\_`"
	"P\\_`!!!!!!!!D9W.P\\_`Q-$!!!!!!!!!E:'2P\\_`Q=(\"!!!!!!!!F*35P\\_`P,S]"
	"!!!!!!!!GJK;G:G:F*35A)#!A)#!A)#!I[;)HK::HK::HK::E*'+A)#!A)#!H:W>"
	"A)#!A)#!G:G:A)#!A)#!HJW?7+;/7+;/7+;/?J_3A)#!A)#!A)#!F:761%\"!@HZ_"
	"P\\_`P\\_`\"Q=(!!!!@(R]P\\_`P\\_`!!!!!!!!@X^`P\\_`P\\_`!!!!!!!!BY?(P\\_`"
	"P\\_`!!!!!!!!D9W.P\\_`Q-$!!!!!!!!!E:'2P\\_`Q=(\"!!!!!!!!F*35P\\_`P,S]"
	"!!!!!!!!GJK;OLK[FZ?8A)#!A)#!A)#!I[;)HK::HK::HK::E*'+A)#!A)#!H:W>"
	"HZ_@HZ_@L[_PHZ_@HZ_@M\\/T7+;/7+;/7+;/C;K?HZ_@HZ_@HZ_@F*3-15%)BY>Z"
	"P\\_YQ-#Y,$=F\"T1U?)/$O-$!O-$!!$!Q\"T1U?Y;$O-#YO-#Y\"4-&\"T1(AIS#O-#Y"
	"O-#Y.!AU.!AUEIC3Q,D!Q<H\".!=U.!=UF9O.Q,CYQLG[.!=).!=)G)[0Q,CYO<7["
	"#1EU#!ATF*3>N\\@!M<'XHZ_@HZ_@HZ_@L<'6HK::HK::HK::K+CDHZ_@HZ_@M\\/T"
	"A)#!A)#!G:G:A)#!A)#!HJW?7+;/7+;/7+;/?J_3A)#!A)#!A)#!P\\^2Q-!!Q-!!"
	"Q-!!Q-!!F\\^]!-#`!-#`!-#`!-#`!-#`!-#`!-#P!,]!!,]!!,]!!,]!!,]!!,]!"
	"!,]!PQ#`PQ#`PQ#`PQ#`PQ#`PQ#`PQ#`PQ\";PA!#PA!#PA!#PA!#PA!#PA!#@133"
	"!!'_!!'_!!'_!!'_5F+^A)#!A)#!A)#!I[;)HK::HK::HK::E*'+A)#!A)#!H:W>"
	"A)#!A)#!G:G:A)#!A)#!HJW?7+;/7+;/7+;/?J_3A)#!A)#!EJ*RQ-!!Q-!!Q-!!"
	"Q-!!Q-!!F\\^]!-#`!-#`!-#`!-#`!-#`!-#`!-#P!,]!!,]!!,]!!,]!!,]!!,]!"
	"!,]!PQ#`PQ#`PQ#`PQ#`PQ#`PQ#`PQ#`PQ\";PA!#PA!#PA!#PA!#PA!#PA!#@133"
	"!!'_!!'_!!'_!!'_!!'_=8'2A)#!A)#!I[;)HK::HK::HK::E*'+A)#!A)#!H:W>"
	"A)#!A)#!G:G:A)#!A)#!HJW?7+;/7+;/7+;/?J_3A)#!A)#!K+B6Q-!!Q-!!Q-!!"
	"Q-!!Q-!!F\\^]!-#`!-#`!-#`!-#`!-#`!-#`!-#P!,]!!,]!!,]!!,]!!,]!!,]!"
	"!,]!PQ#`PQ#`PQ#`PQ#`PQ#`PQ#`PQ#`PQ\";PA!#PA!#PA!#PA!#PA!#PA!#@133"
	"!!'_!!'_!!'_!!'_!!'_6F;GA)#!A)#!I[;)HK::HK::HK::E*'+A)#!A)#!H:W>"
	"E:'2E:'2J;7FE:'2E:'2K;GJ7+;/7+;/7+;/AK79E:'2E:'2O\\MWQ-!!Q-!!Q-!!"
	"Q-!!Q-!!F\\^]!-#`!-#`!-#`!-#`!-#`!-#`!-#P!,]!!,]!!,]!!,]!!,]!3KF+"
	"5[24J&/EK5KJPQ#`PQ#`PQ#`PQ#`PQ#`PA\";PA!#PA!#PA!#PA!#PA!#PA!#@A74"
	"!!'_!!'_!!'_!!'_!!'_.D;ZE:'2E:'2K+S0HK::HK::HK::H:W8E:'2E:'2K;GJ"
	"A)#!A)#!G:G:A)#!A)#!HJW?7+;/7+;/7+;/?J_3A)#!C)B[Q-!!Q-!!Q-!!Q-!!"
	"Q-!!Q-!!F\\^]!-#`!-#`!-#`!-#`!-#`!-#`!-#P!,]!!,]!!,]!!,]!!,]!!&=!"
	"!!!!!!!!6Q\"8PQ#`PQ#`PQ#`PQ#`PQ#`PQ\";PA!#PA!#PA!#PA!#PA!#PA!#@133"
	"!!'_!!'_!!'_!!'_!!'_!!'_?HK)A)#!I[;)HK::HK::HK::E*'+A)#!A)#!H:W>"
	"A)#!A)#!G:G:A)#!A)#!HJW?7+;/7+;/7+;/?J_3A)#!F:6NQ-!!Q-!!Q-!!Q-!!"
	"Q-!!Q-!!F\\^]!-#`!-#`!-#`!-#`!-#`!-#`!-#P!,]!!,]!!,]!!,]!!,]!!&=!"
	"!!!!!!!!6Q\"8PQ#`PQ#`PQ#`PQ#`PQ#`PQ\";PA!#PA!#PA!#PA!#PA!#PA!#@133"
	"!!'_!!'_!!'_!!'_!!'_!!'_<7W6A)#!I[;)HK::HK::HK::E*'+A)#!A)#!H:W>"
	"A)#!A)#!G:G:A)#!A)#!HJW?7+;/7+;/7+;/?J_3A)#!HJZEQ-!!Q-!!Q-!!Q-!!"
	"Q-!!Q-!!F\\^]!-#`!-#`!-#`!-#`!-#`!-#`!-#P!,]!!,]!!,]!!,]!!,]!!&=!"
	"!!!!!!!!6Q\"8PQ#`PQ#`PQ#`PQ#`PQ#`PQ\";PA!#PA!#PA!#PA!#PA!#PA!#@133"
	"!!'_!!'_!!'_!!'_!!'_!!'_:'3>A)#!I[;)HK::HK::HK::E*'+A)#!A)#!H:W>"
	"@(R]@(R]FJ;7@(R]@(R]GZK<7+;/7+;/7+;/?:[2@(R]=H*A8&Q!>(2+8&Q!8&Q!"
	"?8F48&Q!2VMZ!6R<.WJK!6R<!6R<!&F:!6R<!&R4!6M\"!&E!!6M\"!6M\"!6M\"!#1!"
	"!!!!!!!!*1!F7Q&<7Q&<7Q&<71\":7Q&<7Q!I7Q%\"7!!!7Q%\"7Q%\";4=X7Q%\"/A&%"
	"!!\"<5V.Z!!\"<!!\"<3UNU!!\"<9'\"S@(R]I;7'HK::HK::HK::D9[(@(R]@(R]GZO<"
	"A)#!A)#!G:G:A)#!A)#!HJW?7+;/7+;/7+;/?[#4A)#!4EZ/!!!!56&2!!!!!!!!"
	"7VN<!!!!!!!!!!!!/TM\\!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"
	"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!/TM\\!!!!!!!!"
	"!!!!7VN<!!!!!!!!56&2!!!!4EZ/A)#!I[?(HK::HK::HK::E*'+A)#!A)#!H:W>"
	"A)#!A)#!G:G:A)#!A)#!H:[?JVBZJVBZJVBZI(K)A)#!4EZ/!!!!56&2!!!!!!!!"
	"7VN<!!!!!!!!!!!!/TM\\!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"
	"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!/TM\\!!!!!!!!"
	"!!!!7VN<!!!!!!!!56&2!!!!4EZ/A)#!D)CH:VGI:VGI:VGICYK2A)#!A)#!H:W>"
	"@8V^@8V^FZ?8@8V^@8V^H*S=JFFZJFFZJFFZHXK(@8V^:76F!!!!3UN,!!!!2E:'"
	"7&B92E:'35F*'2E:8&R=35F*/4EZ-D)S15&\"/DI[/TM\\3%B)/$AY/$AY256&&R=8"
	"!!!!!!!!,#QM.45V256&4%R--$!Q!!!!*35F256&5&\"16F:756&27&B90DY_0$Q]"
	"04U^:W>H256&!!!!4%R-!!!!:76F@8V^CY;H:VGI:VGI:VGIC9C0@8V^@8V^H*S="
	"A)#!A)#!G:G:A)#!A)#!H:[?JFFZJFFZJFFZI(O)A)#!;GJK!!!!!!!!!!!!F:76"
	"256&F:76GZO<0DY_H:W>GZO<@(R]?(BYD)S-@HZ_A9'\"HZ_@?HJ[?HJ[EZ/40DY_"
	"!!!!!!!!:76F=X.TF*35IK+C=(\"Q!!!!5V.4F*35LK[ON,3UL+SMF*35B97&AY/$"
	"B)3%BY?(EZ/4!!!!!!!!!!!!;GJKA)#!D)CH:VGI:VGI:VGICYK2A)#!A)#!H:W>"
	"A)#!A)#!G:G:A)#!A)#!H:[?JFFZJFFZJFFZI(O)A)#!>H:W!!!!!!!!!!!!F:76"
	"256&F:76GZO<0DY_H:W>GZO<@(R]?(BYD)S-@HZ_A9'\"HZ_@?HJ[?HJ[EZ/40DY_"
	"!!!!!!!!:76F=X.TF*35IK+C=(\"Q!!!!5V.4F*35LK[ON,3UL+SMF*35B97&AY/$"
	"B)3%BY?(EZ/4!!!!!!!!!!!!>86VA)#!D)CH:VGI:VGI:VGICYK2A)#!A)#!H:W>"
	"A)#!A)#!G:G:A)#!A)#!H:[?JFFZJFFZJFFZI(O)A)#!@X^`!!!!!!!!!!!!F:76"
	"256&F:76GZO<0DY_H:W>GZO<@(R]?(BYD)S-@HZ_A9'\"HZ_@?HJ[?HJ[EZ/40DY_"
	"!!!!!!!!:76F=X.TF*35IK+C=(\"Q!!!!5V.4F*35LK[ON,3UL+SMF*35B97&AY/$"
	"B)3%BY?(EZ/4!!!!!!!!!!!!@X^`A)#!D)CH:VGI:VGI:VGICYK2A)#!A)#!H:W>"
	"F*35F*35J[?HF*35F*35K[SLJFFZJFFZJFFZJI31F*35F*3515&\"!!!!!!!!F:76"
	"256&F:76GZO<0DY_H:W>GZO<@(R]?(BYD)S-@HZ_A9'\"HZ_@?HJ[?HJ[EZ/4E:'2"
	"?(BYCIK+FZ?8=X.TF*35IK+C=(\"Q!!!!5V.4F*35LK[ON,3UL+SMF*35B97&AY/$"
	"B)3%BY?(EZ/4!!!!!!!!0T]`F*35F*35F*#O:VGI:VGI:VGIGZKAF*35F*35K[OL"
	"A)#!A)#!G:G:A)#!A)#!H:[?JFFZJFFZJFFZI(O)A)#!A)#!8V^@!!!!!!!!F:76"
	"256&F:76GZO<0DY_H:W>GZO<@(R]?(BYD)S-@HZ_A9'\"HZ_@?HJ[?HJ[EZ/4H*S="
	"=8&RF*35G:G:=X.TF*35IK+C=(\"Q!!!!5V.4F*35LK[ON,3UL+SMF*35B97&AY/$"
	"B)3%BY?(EZ/4!!!!!!!!8FZ?A)#!A)#!D)CH:VGI:VGI:VGICYK2A)#!A)#!H:W>"
	"A)#!A)#!G:G:A)#!A)#!H:[?JFFZJFFZJFFZI(O)A)#!A)#!>X>X!!!!!!!!F:76"
	"256&F:76GZO<0DY_H:W>GZO<@(R]?(BYD)S-@HZ_A9'\"HZ_@?HJ[?HJ[EZ/4H*S="
	"=8&RF*35G:G:=X.TF*35IK+C=(\"Q!!!!5V.4F*35LK[ON,3UL+SMF*35B97&AY/$"
	"B)3%BY?(EZ/4!!!!!!!!>H:WA)#!A)#!D)CH:VGI:VGI:VGICYK2A)#!A)#!H:W>"
	"A)#!A)#!G:G:A)#!A)#!H:[?JFFZJFFZJFFZI(O)A)#!A)#!@X^`76F:!!!!F:76"
	"256&F:76GZO<0DY_H:W>GZO<@(R]?(BYD)S-@HZ_A9'\"HZ_@?HJ[?HJ[EZ/4H*S="
	"=8&RF*35G:G:=X.TF*35IK+C=(\"Q!!!!5V.4F*35LK[ON,3UL+SMF*35B97&AY/$"
	"B)3%BY?(EZ/4!!!!76F:@X^`A)#!A)#!D)CH:VGI:VGI:VGICYK2A)#!A)#!H:W>"
	"I[/DI[/DM\\/TI[/DI[/DNL;WJFFZJFFZJFFZKYO7IK+CIK+CIK+CE*#1)C)C.D9W"
	"*S=H.D9W0DY_15&\"45V.4%R-3%B)3%B)3EJ+8&R=<GZO=8&R<GZO<7VN=(\"Q=8&R"
	"<'RMGZO<H*S=G:G:GZO<H:W>G:G:F:76P\\_`S=H*S]P,S]P,SML+S=H*S-D)Z_@H"
	"_@HZ_@HZ_@HZ^P<WT=X.IK+CIK+CIK+CGJ;T:VGI:VGI:VGIJ[;MI[/DI[/DNL;W"
	"A)#!A)#!G:G:A)#!A)#!H:[?JFFZJFFZJFFZHXO)A)#!A)#!A)#!F:761%\"!!!!!"
	"!!!!!!!!(R]@-T-T-T-T-T-T-T-T-T-T-T-T5&\"1:G:G:G:G:G:G:G:G:G:G:G:G"
	":G:GG:G:G:G:G:G:G:G:G:G:G:G:G:G:R-4%T-T-T-T-T-T-T-T-T-T-T-T-\\?XN"
	"````````````]P,SG*C9A)#!A)#!A)#!D)CI:VGI:VGI:VGICYK2A)#!A)#!H:W>"
	"A)#!A)#!G:G:A)#!A)#!H:[?JFFZJFFZJFFZHXO)A)#!A)#!A)#!EZ/4>H:W!!!!"
	"!!!!!!!!(R]@-T-T-T-T-T-T-T-T-T-T-T-T5&\"1:G:G:G:G:G:G:G:G:G:G:G:G"
	":G:GG:G:G:G:G:G:G:G:G:G:G:G:G:G:R-4%T-T-T-T-T-T-T-T-T-T-T-T-\\?XN"
	"````````````M<'RF*35A)#!A)#!A)#!D)CI:VGI:VGI:VGICYK2A)#!A)#!H:W>"
	"H:W>H:W>LK[OH:W>H:W>M<+RJFFZJFFZJFFZKI30I:G7I:G7I:G7K+;GH*S=DY_0"
	"CIK+CIK+DI[/FJ;7FJ;7FJ;76&25/$AY/$AY3UN,8FZ?8FZ?8FZ?8FZ?8FZ?8FZ?"
	"8FZ?BY?(BY?(BY?(BY?(BY?(BY?(BY?(K[OLM\\/TM\\/TO\\O\\X.T=X.T=X.T=]P,S"
	"````````Y_0DH*S=KKGJI:G7I:G7I:G7FI[M:VGI:VGI:VGIIK'HH:W>H:W>M<'R"
	"A)#!A)#!G:G:A)#!A)#!H:[?JFFZJFFZJFFZJG6MJ8&:J8&:J8&:CH^\\A)#!C)C)"
	"\\O\\O````````````````````@(R]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"
	"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!?HJ[````````````````"
	"````\\O\\OC)C)A)#!FJ'0J8&:J8&:J8&:C'7,:VGI:VGI:VGICYK2A)#!A)#!H:W>"
	"A)#!A)#!G:G:A)#!A)#!H:[?JFFZJFFZJFFZJG6MJ8&:J8&:J8&:CH^\\A)#!A)#!"
	"I[/D^04U````````````````@(R]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"
	"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!?HJ[````````````````"
	"^04UJ+3EA)#!A)#!FJ'0J8&:J8&:J8&:C'7,:VGI:VGI:VGICYK2A)#!A)#!H:W>"
	"A)#!A)#!G:G:A)#!A)#!H:[?JFFZJFFZJFFZJG6MJ8&:J8&:J8&:CH^\\A)#!A)#!"
	"EZ/4G:G:^04U````````````@(R]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"
	"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!?HJ[````````````^04U"
	"G:G:F:76A)#!A)#!FJ'0J8&:J8&:J8&:C'7,:VGI:VGI:VGICYK2A)#!A)#!H:W>"
	"CIK+CIK+I+#ACIK+CIK+J+3EJFFZJFFZJFFZJG6MJ8&:J8&:J8&:EIC%CIK+CIK+"
	"GZO<CIK+H:W>U>'NW^OEW^OEK;F.G:E!G:E!G:E!G:E!G:E!G:E!G:E!G:E!G:E!"
	"G:E!G:E!G:E!G:E!G:E!G:E!G:E!G:E!G:E!G:E!G:E!K+B-W^OEW^OEU>'NH:W>"
	"CIK+H:W>CIK+CIK+H:G8J8&:J8&:J8&:C'7,:VGI:VGI:VGIEZ+9CIK+CIK+J+3E"
	"A)#!A)#!G:G:A)#!A)#!H:[?JFFZJFFZJFFZJG6MJ8&:J8&:J8&:CI\"\\A)#!A)#!"
	"EZ/4A)#!A)#!AY._K[N>Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!"
	"Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!L;VAAY._A)#!"
	"A)#!F:76A)#!A)#!FZ'1J8&:J8&:J8&:C'7,:VGI:VGI:VGICYK2A)#!A)#!H:W>"
	"A)#!A)#!G:G:A)#!A)#!H:[?JFFZJFFZJFFZJG6MJ8&:J8&:J8&:CI\"\\A)#!A)#!"
	"EZ/4A)#!A)#!A)#!C)C)EZ.PN\\=VQ-!!Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!"
	"Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!N\\=VEZ.PD)S-A)#!A)#!"
	"A)#!F:76A)#!A)#!FZ'1J8&:J8&:J8&:C'7,:VGI:VGI:VGICYK2A)#!A)#!H:W>"
	"@(R]@(R]FJ;7@(R]@(R]GZO<JFBYJFBYJFBYJ72LJ8\"9J8\"9J8\"9BXRY@(R]@(R]"
	"E*#1@(R]@(R]@(R]B97&@(R]@(R\\G:FCN,1KQ-!!Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!"
	"Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!N,1LGZNF@(R\\@(R]C9G*@(R]@(R]"
	"@(R]EJ+3@(R]@(R]F)_.J8\"9J8\"9J8\"9BW3+:FCI:FCI:FCIC)?/@(R]@(R]GZO<"
	"@8V^@8V^FZ?8@8V^@8V^H:W>@HZ_@HZ_@HZ_FZ?8@HZ_@HZ_@HZ_E*#1@8V^@8V^"
	"E*#1@8V^@8V^@8V^B97&@8V^@8V^@X^`@(R]E:&RJ[>7O<EQQ-!!Q-!!Q-!!Q-!!"
	"Q-!!Q-!!Q-!!Q-!!Q-!!Q-!!OLISJ[>7EJ*R@(R]B97&@8V^@8V^C9G*@8V^@8V^"
	"@8V^EZ/4@8V^@8V^EJ+3@HZ_@HZ_@HZ_FZ?8@HZ_@HZ_@HZ_I;'B@8V^@8V^GZO<"
	"A)#!A)#!G:G:A)#!A)#!HZ_@A)#!A)#!A)#!G:G:A)#!A)#!A)#!EZ/4A)#!A)#!"
	"EZ/4A)#!A)#!A)#!C)C)A)#!A)#!AY/$@X^`A)#!A)#!A9'\"C)B[F:6NHJZEI[.6"
	"KKJ3KKJ3J+27HJZEF:6NC)B[BI;'A)#!A)#!A)#!C)C)A)#!A)#!D)S-A)#!A)#!"
	"A)#!F:76A)#!A)#!F*35A)#!A)#!A)#!G:G:A)#!A)#!A)#!I[/DA)#!A)#!H:W>"
	"A)#!A)#!G:G:A)#!A)#!HZ_@A)#!A)#!A)#!G:G:A)#!A)#!A)#!EZ/4A)#!A)#!"
	"EZ/4A)#!A)#!A)#!C)C)A)#!A)#!AY/$@X^`A)#!A)#!A9'\"A)#!A)#!A)#!?HJ["
	"A)#!A)#!?XN\\A)#!A)#!A)#!BI;'A)#!A)#!A)#!C)C)A)#!A)#!D)S-A)#!A)#!"
	"A)#!F:76A)#!A)#!F*35A)#!A)#!A)#!G:G:A)#!A)#!A)#!I[/DA)#!A)#!H:W>"
	"";
