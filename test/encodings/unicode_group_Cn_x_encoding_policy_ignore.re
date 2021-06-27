// re2c $INPUT -o $OUTPUT -x --encoding-policy ignore
#include <stdio.h>
#include "utf16.h"
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Cn:
	/*!re2c
		re2c:yyfill:enable = 0;
		Cn = [\u0378-\u0379\u0380-\u0383\u038b-\u038b\u038d-\u038d\u03a2-\u03a2\u0530-\u0530\u0557-\u0558\u0560-\u0560\u0588-\u0588\u058b-\u058c\u0590-\u0590\u05c8-\u05cf\u05eb-\u05ef\u05f5-\u05ff\u061d-\u061d\u070e-\u070e\u074b-\u074c\u07b2-\u07bf\u07fb-\u07ff\u082e-\u082f\u083f-\u083f\u085c-\u085d\u085f-\u089f\u08b3-\u08e3\u0984-\u0984\u098d-\u098e\u0991-\u0992\u09a9-\u09a9\u09b1-\u09b1\u09b3-\u09b5\u09ba-\u09bb\u09c5-\u09c6\u09c9-\u09ca\u09cf-\u09d6\u09d8-\u09db\u09de-\u09de\u09e4-\u09e5\u09fc-\u0a00\u0a04-\u0a04\u0a0b-\u0a0e\u0a11-\u0a12\u0a29-\u0a29\u0a31-\u0a31\u0a34-\u0a34\u0a37-\u0a37\u0a3a-\u0a3b\u0a3d-\u0a3d\u0a43-\u0a46\u0a49-\u0a4a\u0a4e-\u0a50\u0a52-\u0a58\u0a5d-\u0a5d\u0a5f-\u0a65\u0a76-\u0a80\u0a84-\u0a84\u0a8e-\u0a8e\u0a92-\u0a92\u0aa9-\u0aa9\u0ab1-\u0ab1\u0ab4-\u0ab4\u0aba-\u0abb\u0ac6-\u0ac6\u0aca-\u0aca\u0ace-\u0acf\u0ad1-\u0adf\u0ae4-\u0ae5\u0af2-\u0b00\u0b04-\u0b04\u0b0d-\u0b0e\u0b11-\u0b12\u0b29-\u0b29\u0b31-\u0b31\u0b34-\u0b34\u0b3a-\u0b3b\u0b45-\u0b46\u0b49-\u0b4a\u0b4e-\u0b55\u0b58-\u0b5b\u0b5e-\u0b5e\u0b64-\u0b65\u0b78-\u0b81\u0b84-\u0b84\u0b8b-\u0b8d\u0b91-\u0b91\u0b96-\u0b98\u0b9b-\u0b9b\u0b9d-\u0b9d\u0ba0-\u0ba2\u0ba5-\u0ba7\u0bab-\u0bad\u0bba-\u0bbd\u0bc3-\u0bc5\u0bc9-\u0bc9\u0bce-\u0bcf\u0bd1-\u0bd6\u0bd8-\u0be5\u0bfb-\u0bff\u0c04-\u0c04\u0c0d-\u0c0d\u0c11-\u0c11\u0c29-\u0c29\u0c3a-\u0c3c\u0c45-\u0c45\u0c49-\u0c49\u0c4e-\u0c54\u0c57-\u0c57\u0c5a-\u0c5f\u0c64-\u0c65\u0c70-\u0c77\u0c80-\u0c80\u0c84-\u0c84\u0c8d-\u0c8d\u0c91-\u0c91\u0ca9-\u0ca9\u0cb4-\u0cb4\u0cba-\u0cbb\u0cc5-\u0cc5\u0cc9-\u0cc9\u0cce-\u0cd4\u0cd7-\u0cdd\u0cdf-\u0cdf\u0ce4-\u0ce5\u0cf0-\u0cf0\u0cf3-\u0d00\u0d04-\u0d04\u0d0d-\u0d0d\u0d11-\u0d11\u0d3b-\u0d3c\u0d45-\u0d45\u0d49-\u0d49\u0d4f-\u0d56\u0d58-\u0d5f\u0d64-\u0d65\u0d76-\u0d78\u0d80-\u0d81\u0d84-\u0d84\u0d97-\u0d99\u0db2-\u0db2\u0dbc-\u0dbc\u0dbe-\u0dbf\u0dc7-\u0dc9\u0dcb-\u0dce\u0dd5-\u0dd5\u0dd7-\u0dd7\u0de0-\u0de5\u0df0-\u0df1\u0df5-\u0e00\u0e3b-\u0e3e\u0e5c-\u0e80\u0e83-\u0e83\u0e85-\u0e86\u0e89-\u0e89\u0e8b-\u0e8c\u0e8e-\u0e93\u0e98-\u0e98\u0ea0-\u0ea0\u0ea4-\u0ea4\u0ea6-\u0ea6\u0ea8-\u0ea9\u0eac-\u0eac\u0eba-\u0eba\u0ebe-\u0ebf\u0ec5-\u0ec5\u0ec7-\u0ec7\u0ece-\u0ecf\u0eda-\u0edb\u0ee0-\u0eff\u0f48-\u0f48\u0f6d-\u0f70\u0f98-\u0f98\u0fbd-\u0fbd\u0fcd-\u0fcd\u0fdb-\u0fff\u10c6-\u10c6\u10c8-\u10cc\u10ce-\u10cf\u1249-\u1249\u124e-\u124f\u1257-\u1257\u1259-\u1259\u125e-\u125f\u1289-\u1289\u128e-\u128f\u12b1-\u12b1\u12b6-\u12b7\u12bf-\u12bf\u12c1-\u12c1\u12c6-\u12c7\u12d7-\u12d7\u1311-\u1311\u1316-\u1317\u135b-\u135c\u137d-\u137f\u139a-\u139f\u13f5-\u13ff\u169d-\u169f\u16f9-\u16ff\u170d-\u170d\u1715-\u171f\u1737-\u173f\u1754-\u175f\u176d-\u176d\u1771-\u1771\u1774-\u177f\u17de-\u17df\u17ea-\u17ef\u17fa-\u17ff\u180f-\u180f\u181a-\u181f\u1878-\u187f\u18ab-\u18af\u18f6-\u18ff\u191f-\u191f\u192c-\u192f\u193c-\u193f\u1941-\u1943\u196e-\u196f\u1975-\u197f\u19ac-\u19af\u19ca-\u19cf\u19db-\u19dd\u1a1c-\u1a1d\u1a5f-\u1a5f\u1a7d-\u1a7e\u1a8a-\u1a8f\u1a9a-\u1a9f\u1aae-\u1aaf\u1abf-\u1aff\u1b4c-\u1b4f\u1b7d-\u1b7f\u1bf4-\u1bfb\u1c38-\u1c3a\u1c4a-\u1c4c\u1c80-\u1cbf\u1cc8-\u1ccf\u1cf7-\u1cf7\u1cfa-\u1cff\u1df6-\u1dfb\u1f16-\u1f17\u1f1e-\u1f1f\u1f46-\u1f47\u1f4e-\u1f4f\u1f58-\u1f58\u1f5a-\u1f5a\u1f5c-\u1f5c\u1f5e-\u1f5e\u1f7e-\u1f7f\u1fb5-\u1fb5\u1fc5-\u1fc5\u1fd4-\u1fd5\u1fdc-\u1fdc\u1ff0-\u1ff1\u1ff5-\u1ff5\u1fff-\u1fff\u2065-\u2065\u2072-\u2073\u208f-\u208f\u209d-\u209f\u20be-\u20cf\u20f1-\u20ff\u218a-\u218f\u23fb-\u23ff\u2427-\u243f\u244b-\u245f\u2b74-\u2b75\u2b96-\u2b97\u2bba-\u2bbc\u2bc9-\u2bc9\u2bd2-\u2bff\u2c2f-\u2c2f\u2c5f-\u2c5f\u2cf4-\u2cf8\u2d26-\u2d26\u2d28-\u2d2c\u2d2e-\u2d2f\u2d68-\u2d6e\u2d71-\u2d7e\u2d97-\u2d9f\u2da7-\u2da7\u2daf-\u2daf\u2db7-\u2db7\u2dbf-\u2dbf\u2dc7-\u2dc7\u2dcf-\u2dcf\u2dd7-\u2dd7\u2ddf-\u2ddf\u2e43-\u2e7f\u2e9a-\u2e9a\u2ef4-\u2eff\u2fd6-\u2fef\u2ffc-\u2fff\u3040-\u3040\u3097-\u3098\u3100-\u3104\u312e-\u3130\u318f-\u318f\u31bb-\u31bf\u31e4-\u31ef\u321f-\u321f\u32ff-\u32ff\u4db6-\u4dbf\u9fcd-\u9fff\ua48d-\ua48f\ua4c7-\ua4cf\ua62c-\ua63f\ua69e-\ua69e\ua6f8-\ua6ff\ua78f-\ua78f\ua7ae-\ua7af\ua7b2-\ua7f6\ua82c-\ua82f\ua83a-\ua83f\ua878-\ua87f\ua8c5-\ua8cd\ua8da-\ua8df\ua8fc-\ua8ff\ua954-\ua95e\ua97d-\ua97f\ua9ce-\ua9ce\ua9da-\ua9dd\ua9ff-\ua9ff\uaa37-\uaa3f\uaa4e-\uaa4f\uaa5a-\uaa5b\uaac3-\uaada\uaaf7-\uab00\uab07-\uab08\uab0f-\uab10\uab17-\uab1f\uab27-\uab27\uab2f-\uab2f\uab60-\uab63\uab66-\uabbf\uabee-\uabef\uabfa-\uabff\ud7a4-\ud7af\ud7c7-\ud7ca\ud7fc-\ud7ff\ufa6e-\ufa6f\ufada-\ufaff\ufb07-\ufb12\ufb18-\ufb1c\ufb37-\ufb37\ufb3d-\ufb3d\ufb3f-\ufb3f\ufb42-\ufb42\ufb45-\ufb45\ufbc2-\ufbd2\ufd40-\ufd4f\ufd90-\ufd91\ufdc8-\ufdef\ufdfe-\ufdff\ufe1a-\ufe1f\ufe2e-\ufe2f\ufe53-\ufe53\ufe67-\ufe67\ufe6c-\ufe6f\ufe75-\ufe75\ufefd-\ufefe\uff00-\uff00\uffbf-\uffc1\uffc8-\uffc9\uffd0-\uffd1\uffd8-\uffd9\uffdd-\uffdf\uffe7-\uffe7\uffef-\ufff8\ufffe-\U0000ffff\U0001000c-\U0001000c\U00010027-\U00010027\U0001003b-\U0001003b\U0001003e-\U0001003e\U0001004e-\U0001004f\U0001005e-\U0001007f\U000100fb-\U000100ff\U00010103-\U00010106\U00010134-\U00010136\U0001018d-\U0001018f\U0001019c-\U0001019f\U000101a1-\U000101cf\U000101fe-\U0001027f\U0001029d-\U0001029f\U000102d1-\U000102df\U000102fc-\U000102ff\U00010324-\U0001032f\U0001034b-\U0001034f\U0001037b-\U0001037f\U0001039e-\U0001039e\U000103c4-\U000103c7\U000103d6-\U000103ff\U0001049e-\U0001049f\U000104aa-\U000104ff\U00010528-\U0001052f\U00010564-\U0001056e\U00010570-\U000105ff\U00010737-\U0001073f\U00010756-\U0001075f\U00010768-\U000107ff\U00010806-\U00010807\U00010809-\U00010809\U00010836-\U00010836\U00010839-\U0001083b\U0001083d-\U0001083e\U00010856-\U00010856\U0001089f-\U000108a6\U000108b0-\U000108ff\U0001091c-\U0001091e\U0001093a-\U0001093e\U00010940-\U0001097f\U000109b8-\U000109bd\U000109c0-\U000109ff\U00010a04-\U00010a04\U00010a07-\U00010a0b\U00010a14-\U00010a14\U00010a18-\U00010a18\U00010a34-\U00010a37\U00010a3b-\U00010a3e\U00010a48-\U00010a4f\U00010a59-\U00010a5f\U00010aa0-\U00010abf\U00010ae7-\U00010aea\U00010af7-\U00010aff\U00010b36-\U00010b38\U00010b56-\U00010b57\U00010b73-\U00010b77\U00010b92-\U00010b98\U00010b9d-\U00010ba8\U00010bb0-\U00010bff\U00010c49-\U00010e5f\U00010e7f-\U00010fff\U0001104e-\U00011051\U00011070-\U0001107e\U000110c2-\U000110cf\U000110e9-\U000110ef\U000110fa-\U000110ff\U00011135-\U00011135\U00011144-\U0001114f\U00011177-\U0001117f\U000111c9-\U000111cc\U000111ce-\U000111cf\U000111db-\U000111e0\U000111f5-\U000111ff\U00011212-\U00011212\U0001123e-\U000112af\U000112eb-\U000112ef\U000112fa-\U00011300\U00011304-\U00011304\U0001130d-\U0001130e\U00011311-\U00011312\U00011329-\U00011329\U00011331-\U00011331\U00011334-\U00011334\U0001133a-\U0001133b\U00011345-\U00011346\U00011349-\U0001134a\U0001134e-\U00011356\U00011358-\U0001135c\U00011364-\U00011365\U0001136d-\U0001136f\U00011375-\U0001147f\U000114c8-\U000114cf\U000114da-\U0001157f\U000115b6-\U000115b7\U000115ca-\U000115ff\U00011645-\U0001164f\U0001165a-\U0001167f\U000116b8-\U000116bf\U000116ca-\U0001189f\U000118f3-\U000118fe\U00011900-\U00011abf\U00011af9-\U00011fff\U00012399-\U000123ff\U0001246f-\U0001246f\U00012475-\U00012fff\U0001342f-\U000167ff\U00016a39-\U00016a3f\U00016a5f-\U00016a5f\U00016a6a-\U00016a6d\U00016a70-\U00016acf\U00016aee-\U00016aef\U00016af6-\U00016aff\U00016b46-\U00016b4f\U00016b5a-\U00016b5a\U00016b62-\U00016b62\U00016b78-\U00016b7c\U00016b90-\U00016eff\U00016f45-\U00016f4f\U00016f7f-\U00016f8e\U00016fa0-\U0001afff\U0001b002-\U0001bbff\U0001bc6b-\U0001bc6f\U0001bc7d-\U0001bc7f\U0001bc89-\U0001bc8f\U0001bc9a-\U0001bc9b\U0001bca4-\U0001cfff\U0001d0f6-\U0001d0ff\U0001d127-\U0001d128\U0001d1de-\U0001d1ff\U0001d246-\U0001d2ff\U0001d357-\U0001d35f\U0001d372-\U0001d3ff\U0001d455-\U0001d455\U0001d49d-\U0001d49d\U0001d4a0-\U0001d4a1\U0001d4a3-\U0001d4a4\U0001d4a7-\U0001d4a8\U0001d4ad-\U0001d4ad\U0001d4ba-\U0001d4ba\U0001d4bc-\U0001d4bc\U0001d4c4-\U0001d4c4\U0001d506-\U0001d506\U0001d50b-\U0001d50c\U0001d515-\U0001d515\U0001d51d-\U0001d51d\U0001d53a-\U0001d53a\U0001d53f-\U0001d53f\U0001d545-\U0001d545\U0001d547-\U0001d549\U0001d551-\U0001d551\U0001d6a6-\U0001d6a7\U0001d7cc-\U0001d7cd\U0001d800-\U0001e7ff\U0001e8c5-\U0001e8c6\U0001e8d7-\U0001edff\U0001ee04-\U0001ee04\U0001ee20-\U0001ee20\U0001ee23-\U0001ee23\U0001ee25-\U0001ee26\U0001ee28-\U0001ee28\U0001ee33-\U0001ee33\U0001ee38-\U0001ee38\U0001ee3a-\U0001ee3a\U0001ee3c-\U0001ee41\U0001ee43-\U0001ee46\U0001ee48-\U0001ee48\U0001ee4a-\U0001ee4a\U0001ee4c-\U0001ee4c\U0001ee50-\U0001ee50\U0001ee53-\U0001ee53\U0001ee55-\U0001ee56\U0001ee58-\U0001ee58\U0001ee5a-\U0001ee5a\U0001ee5c-\U0001ee5c\U0001ee5e-\U0001ee5e\U0001ee60-\U0001ee60\U0001ee63-\U0001ee63\U0001ee65-\U0001ee66\U0001ee6b-\U0001ee6b\U0001ee73-\U0001ee73\U0001ee78-\U0001ee78\U0001ee7d-\U0001ee7d\U0001ee7f-\U0001ee7f\U0001ee8a-\U0001ee8a\U0001ee9c-\U0001eea0\U0001eea4-\U0001eea4\U0001eeaa-\U0001eeaa\U0001eebc-\U0001eeef\U0001eef2-\U0001efff\U0001f02c-\U0001f02f\U0001f094-\U0001f09f\U0001f0af-\U0001f0b0\U0001f0c0-\U0001f0c0\U0001f0d0-\U0001f0d0\U0001f0f6-\U0001f0ff\U0001f10d-\U0001f10f\U0001f12f-\U0001f12f\U0001f16c-\U0001f16f\U0001f19b-\U0001f1e5\U0001f203-\U0001f20f\U0001f23b-\U0001f23f\U0001f249-\U0001f24f\U0001f252-\U0001f2ff\U0001f32d-\U0001f32f\U0001f37e-\U0001f37f\U0001f3cf-\U0001f3d3\U0001f3f8-\U0001f3ff\U0001f4ff-\U0001f4ff\U0001f54b-\U0001f54f\U0001f57a-\U0001f57a\U0001f5a4-\U0001f5a4\U0001f643-\U0001f644\U0001f6d0-\U0001f6df\U0001f6ed-\U0001f6ef\U0001f6f4-\U0001f6ff\U0001f774-\U0001f77f\U0001f7d5-\U0001f7ff\U0001f80c-\U0001f80f\U0001f848-\U0001f84f\U0001f85a-\U0001f85f\U0001f888-\U0001f88f\U0001f8ae-\U0001ffff\U0002a6d7-\U0002a6ff\U0002b735-\U0002b73f\U0002b81e-\U0002f7ff\U0002fa1e-\U000e0000\U000e0002-\U000e001f\U000e0080-\U000e00ff\U000e01f0-\U000effff\U000ffffe-\U000fffff\U0010fffe-\U0010ffff];
		Cn { goto Cn; }
		* { return YYCURSOR == limit; }
	*/
}
static const unsigned int chars_Cn [] = {0x378,0x379,  0x380,0x383,  0x38b,0x38b,  0x38d,0x38d,  0x3a2,0x3a2,  0x530,0x530,  0x557,0x558,  0x560,0x560,  0x588,0x588,  0x58b,0x58c,  0x590,0x590,  0x5c8,0x5cf,  0x5eb,0x5ef,  0x5f5,0x5ff,  0x61d,0x61d,  0x70e,0x70e,  0x74b,0x74c,  0x7b2,0x7bf,  0x7fb,0x7ff,  0x82e,0x82f,  0x83f,0x83f,  0x85c,0x85d,  0x85f,0x89f,  0x8b3,0x8e3,  0x984,0x984,  0x98d,0x98e,  0x991,0x992,  0x9a9,0x9a9,  0x9b1,0x9b1,  0x9b3,0x9b5,  0x9ba,0x9bb,  0x9c5,0x9c6,  0x9c9,0x9ca,  0x9cf,0x9d6,  0x9d8,0x9db,  0x9de,0x9de,  0x9e4,0x9e5,  0x9fc,0xa00,  0xa04,0xa04,  0xa0b,0xa0e,  0xa11,0xa12,  0xa29,0xa29,  0xa31,0xa31,  0xa34,0xa34,  0xa37,0xa37,  0xa3a,0xa3b,  0xa3d,0xa3d,  0xa43,0xa46,  0xa49,0xa4a,  0xa4e,0xa50,  0xa52,0xa58,  0xa5d,0xa5d,  0xa5f,0xa65,  0xa76,0xa80,  0xa84,0xa84,  0xa8e,0xa8e,  0xa92,0xa92,  0xaa9,0xaa9,  0xab1,0xab1,  0xab4,0xab4,  0xaba,0xabb,  0xac6,0xac6,  0xaca,0xaca,  0xace,0xacf,  0xad1,0xadf,  0xae4,0xae5,  0xaf2,0xb00,  0xb04,0xb04,  0xb0d,0xb0e,  0xb11,0xb12,  0xb29,0xb29,  0xb31,0xb31,  0xb34,0xb34,  0xb3a,0xb3b,  0xb45,0xb46,  0xb49,0xb4a,  0xb4e,0xb55,  0xb58,0xb5b,  0xb5e,0xb5e,  0xb64,0xb65,  0xb78,0xb81,  0xb84,0xb84,  0xb8b,0xb8d,  0xb91,0xb91,  0xb96,0xb98,  0xb9b,0xb9b,  0xb9d,0xb9d,  0xba0,0xba2,  0xba5,0xba7,  0xbab,0xbad,  0xbba,0xbbd,  0xbc3,0xbc5,  0xbc9,0xbc9,  0xbce,0xbcf,  0xbd1,0xbd6,  0xbd8,0xbe5,  0xbfb,0xbff,  0xc04,0xc04,  0xc0d,0xc0d,  0xc11,0xc11,  0xc29,0xc29,  0xc3a,0xc3c,  0xc45,0xc45,  0xc49,0xc49,  0xc4e,0xc54,  0xc57,0xc57,  0xc5a,0xc5f,  0xc64,0xc65,  0xc70,0xc77,  0xc80,0xc80,  0xc84,0xc84,  0xc8d,0xc8d,  0xc91,0xc91,  0xca9,0xca9,  0xcb4,0xcb4,  0xcba,0xcbb,  0xcc5,0xcc5,  0xcc9,0xcc9,  0xcce,0xcd4,  0xcd7,0xcdd,  0xcdf,0xcdf,  0xce4,0xce5,  0xcf0,0xcf0,  0xcf3,0xd00,  0xd04,0xd04,  0xd0d,0xd0d,  0xd11,0xd11,  0xd3b,0xd3c,  0xd45,0xd45,  0xd49,0xd49,  0xd4f,0xd56,  0xd58,0xd5f,  0xd64,0xd65,  0xd76,0xd78,  0xd80,0xd81,  0xd84,0xd84,  0xd97,0xd99,  0xdb2,0xdb2,  0xdbc,0xdbc,  0xdbe,0xdbf,  0xdc7,0xdc9,  0xdcb,0xdce,  0xdd5,0xdd5,  0xdd7,0xdd7,  0xde0,0xde5,  0xdf0,0xdf1,  0xdf5,0xe00,  0xe3b,0xe3e,  0xe5c,0xe80,  0xe83,0xe83,  0xe85,0xe86,  0xe89,0xe89,  0xe8b,0xe8c,  0xe8e,0xe93,  0xe98,0xe98,  0xea0,0xea0,  0xea4,0xea4,  0xea6,0xea6,  0xea8,0xea9,  0xeac,0xeac,  0xeba,0xeba,  0xebe,0xebf,  0xec5,0xec5,  0xec7,0xec7,  0xece,0xecf,  0xeda,0xedb,  0xee0,0xeff,  0xf48,0xf48,  0xf6d,0xf70,  0xf98,0xf98,  0xfbd,0xfbd,  0xfcd,0xfcd,  0xfdb,0xfff,  0x10c6,0x10c6,  0x10c8,0x10cc,  0x10ce,0x10cf,  0x1249,0x1249,  0x124e,0x124f,  0x1257,0x1257,  0x1259,0x1259,  0x125e,0x125f,  0x1289,0x1289,  0x128e,0x128f,  0x12b1,0x12b1,  0x12b6,0x12b7,  0x12bf,0x12bf,  0x12c1,0x12c1,  0x12c6,0x12c7,  0x12d7,0x12d7,  0x1311,0x1311,  0x1316,0x1317,  0x135b,0x135c,  0x137d,0x137f,  0x139a,0x139f,  0x13f5,0x13ff,  0x169d,0x169f,  0x16f9,0x16ff,  0x170d,0x170d,  0x1715,0x171f,  0x1737,0x173f,  0x1754,0x175f,  0x176d,0x176d,  0x1771,0x1771,  0x1774,0x177f,  0x17de,0x17df,  0x17ea,0x17ef,  0x17fa,0x17ff,  0x180f,0x180f,  0x181a,0x181f,  0x1878,0x187f,  0x18ab,0x18af,  0x18f6,0x18ff,  0x191f,0x191f,  0x192c,0x192f,  0x193c,0x193f,  0x1941,0x1943,  0x196e,0x196f,  0x1975,0x197f,  0x19ac,0x19af,  0x19ca,0x19cf,  0x19db,0x19dd,  0x1a1c,0x1a1d,  0x1a5f,0x1a5f,  0x1a7d,0x1a7e,  0x1a8a,0x1a8f,  0x1a9a,0x1a9f,  0x1aae,0x1aaf,  0x1abf,0x1aff,  0x1b4c,0x1b4f,  0x1b7d,0x1b7f,  0x1bf4,0x1bfb,  0x1c38,0x1c3a,  0x1c4a,0x1c4c,  0x1c80,0x1cbf,  0x1cc8,0x1ccf,  0x1cf7,0x1cf7,  0x1cfa,0x1cff,  0x1df6,0x1dfb,  0x1f16,0x1f17,  0x1f1e,0x1f1f,  0x1f46,0x1f47,  0x1f4e,0x1f4f,  0x1f58,0x1f58,  0x1f5a,0x1f5a,  0x1f5c,0x1f5c,  0x1f5e,0x1f5e,  0x1f7e,0x1f7f,  0x1fb5,0x1fb5,  0x1fc5,0x1fc5,  0x1fd4,0x1fd5,  0x1fdc,0x1fdc,  0x1ff0,0x1ff1,  0x1ff5,0x1ff5,  0x1fff,0x1fff,  0x2065,0x2065,  0x2072,0x2073,  0x208f,0x208f,  0x209d,0x209f,  0x20be,0x20cf,  0x20f1,0x20ff,  0x218a,0x218f,  0x23fb,0x23ff,  0x2427,0x243f,  0x244b,0x245f,  0x2b74,0x2b75,  0x2b96,0x2b97,  0x2bba,0x2bbc,  0x2bc9,0x2bc9,  0x2bd2,0x2bff,  0x2c2f,0x2c2f,  0x2c5f,0x2c5f,  0x2cf4,0x2cf8,  0x2d26,0x2d26,  0x2d28,0x2d2c,  0x2d2e,0x2d2f,  0x2d68,0x2d6e,  0x2d71,0x2d7e,  0x2d97,0x2d9f,  0x2da7,0x2da7,  0x2daf,0x2daf,  0x2db7,0x2db7,  0x2dbf,0x2dbf,  0x2dc7,0x2dc7,  0x2dcf,0x2dcf,  0x2dd7,0x2dd7,  0x2ddf,0x2ddf,  0x2e43,0x2e7f,  0x2e9a,0x2e9a,  0x2ef4,0x2eff,  0x2fd6,0x2fef,  0x2ffc,0x2fff,  0x3040,0x3040,  0x3097,0x3098,  0x3100,0x3104,  0x312e,0x3130,  0x318f,0x318f,  0x31bb,0x31bf,  0x31e4,0x31ef,  0x321f,0x321f,  0x32ff,0x32ff,  0x4db6,0x4dbf,  0x9fcd,0x9fff,  0xa48d,0xa48f,  0xa4c7,0xa4cf,  0xa62c,0xa63f,  0xa69e,0xa69e,  0xa6f8,0xa6ff,  0xa78f,0xa78f,  0xa7ae,0xa7af,  0xa7b2,0xa7f6,  0xa82c,0xa82f,  0xa83a,0xa83f,  0xa878,0xa87f,  0xa8c5,0xa8cd,  0xa8da,0xa8df,  0xa8fc,0xa8ff,  0xa954,0xa95e,  0xa97d,0xa97f,  0xa9ce,0xa9ce,  0xa9da,0xa9dd,  0xa9ff,0xa9ff,  0xaa37,0xaa3f,  0xaa4e,0xaa4f,  0xaa5a,0xaa5b,  0xaac3,0xaada,  0xaaf7,0xab00,  0xab07,0xab08,  0xab0f,0xab10,  0xab17,0xab1f,  0xab27,0xab27,  0xab2f,0xab2f,  0xab60,0xab63,  0xab66,0xabbf,  0xabee,0xabef,  0xabfa,0xabff,  0xd7a4,0xd7af,  0xd7c7,0xd7ca,  0xd7fc,0xd7ff,  0xfa6e,0xfa6f,  0xfada,0xfaff,  0xfb07,0xfb12,  0xfb18,0xfb1c,  0xfb37,0xfb37,  0xfb3d,0xfb3d,  0xfb3f,0xfb3f,  0xfb42,0xfb42,  0xfb45,0xfb45,  0xfbc2,0xfbd2,  0xfd40,0xfd4f,  0xfd90,0xfd91,  0xfdc8,0xfdef,  0xfdfe,0xfdff,  0xfe1a,0xfe1f,  0xfe2e,0xfe2f,  0xfe53,0xfe53,  0xfe67,0xfe67,  0xfe6c,0xfe6f,  0xfe75,0xfe75,  0xfefd,0xfefe,  0xff00,0xff00,  0xffbf,0xffc1,  0xffc8,0xffc9,  0xffd0,0xffd1,  0xffd8,0xffd9,  0xffdd,0xffdf,  0xffe7,0xffe7,  0xffef,0xfff8,  0xfffe,0xffff,  0x1000c,0x1000c,  0x10027,0x10027,  0x1003b,0x1003b,  0x1003e,0x1003e,  0x1004e,0x1004f,  0x1005e,0x1007f,  0x100fb,0x100ff,  0x10103,0x10106,  0x10134,0x10136,  0x1018d,0x1018f,  0x1019c,0x1019f,  0x101a1,0x101cf,  0x101fe,0x1027f,  0x1029d,0x1029f,  0x102d1,0x102df,  0x102fc,0x102ff,  0x10324,0x1032f,  0x1034b,0x1034f,  0x1037b,0x1037f,  0x1039e,0x1039e,  0x103c4,0x103c7,  0x103d6,0x103ff,  0x1049e,0x1049f,  0x104aa,0x104ff,  0x10528,0x1052f,  0x10564,0x1056e,  0x10570,0x105ff,  0x10737,0x1073f,  0x10756,0x1075f,  0x10768,0x107ff,  0x10806,0x10807,  0x10809,0x10809,  0x10836,0x10836,  0x10839,0x1083b,  0x1083d,0x1083e,  0x10856,0x10856,  0x1089f,0x108a6,  0x108b0,0x108ff,  0x1091c,0x1091e,  0x1093a,0x1093e,  0x10940,0x1097f,  0x109b8,0x109bd,  0x109c0,0x109ff,  0x10a04,0x10a04,  0x10a07,0x10a0b,  0x10a14,0x10a14,  0x10a18,0x10a18,  0x10a34,0x10a37,  0x10a3b,0x10a3e,  0x10a48,0x10a4f,  0x10a59,0x10a5f,  0x10aa0,0x10abf,  0x10ae7,0x10aea,  0x10af7,0x10aff,  0x10b36,0x10b38,  0x10b56,0x10b57,  0x10b73,0x10b77,  0x10b92,0x10b98,  0x10b9d,0x10ba8,  0x10bb0,0x10bff,  0x10c49,0x10e5f,  0x10e7f,0x10fff,  0x1104e,0x11051,  0x11070,0x1107e,  0x110c2,0x110cf,  0x110e9,0x110ef,  0x110fa,0x110ff,  0x11135,0x11135,  0x11144,0x1114f,  0x11177,0x1117f,  0x111c9,0x111cc,  0x111ce,0x111cf,  0x111db,0x111e0,  0x111f5,0x111ff,  0x11212,0x11212,  0x1123e,0x112af,  0x112eb,0x112ef,  0x112fa,0x11300,  0x11304,0x11304,  0x1130d,0x1130e,  0x11311,0x11312,  0x11329,0x11329,  0x11331,0x11331,  0x11334,0x11334,  0x1133a,0x1133b,  0x11345,0x11346,  0x11349,0x1134a,  0x1134e,0x11356,  0x11358,0x1135c,  0x11364,0x11365,  0x1136d,0x1136f,  0x11375,0x1147f,  0x114c8,0x114cf,  0x114da,0x1157f,  0x115b6,0x115b7,  0x115ca,0x115ff,  0x11645,0x1164f,  0x1165a,0x1167f,  0x116b8,0x116bf,  0x116ca,0x1189f,  0x118f3,0x118fe,  0x11900,0x11abf,  0x11af9,0x11fff,  0x12399,0x123ff,  0x1246f,0x1246f,  0x12475,0x12fff,  0x1342f,0x167ff,  0x16a39,0x16a3f,  0x16a5f,0x16a5f,  0x16a6a,0x16a6d,  0x16a70,0x16acf,  0x16aee,0x16aef,  0x16af6,0x16aff,  0x16b46,0x16b4f,  0x16b5a,0x16b5a,  0x16b62,0x16b62,  0x16b78,0x16b7c,  0x16b90,0x16eff,  0x16f45,0x16f4f,  0x16f7f,0x16f8e,  0x16fa0,0x1afff,  0x1b002,0x1bbff,  0x1bc6b,0x1bc6f,  0x1bc7d,0x1bc7f,  0x1bc89,0x1bc8f,  0x1bc9a,0x1bc9b,  0x1bca4,0x1cfff,  0x1d0f6,0x1d0ff,  0x1d127,0x1d128,  0x1d1de,0x1d1ff,  0x1d246,0x1d2ff,  0x1d357,0x1d35f,  0x1d372,0x1d3ff,  0x1d455,0x1d455,  0x1d49d,0x1d49d,  0x1d4a0,0x1d4a1,  0x1d4a3,0x1d4a4,  0x1d4a7,0x1d4a8,  0x1d4ad,0x1d4ad,  0x1d4ba,0x1d4ba,  0x1d4bc,0x1d4bc,  0x1d4c4,0x1d4c4,  0x1d506,0x1d506,  0x1d50b,0x1d50c,  0x1d515,0x1d515,  0x1d51d,0x1d51d,  0x1d53a,0x1d53a,  0x1d53f,0x1d53f,  0x1d545,0x1d545,  0x1d547,0x1d549,  0x1d551,0x1d551,  0x1d6a6,0x1d6a7,  0x1d7cc,0x1d7cd,  0x1d800,0x1e7ff,  0x1e8c5,0x1e8c6,  0x1e8d7,0x1edff,  0x1ee04,0x1ee04,  0x1ee20,0x1ee20,  0x1ee23,0x1ee23,  0x1ee25,0x1ee26,  0x1ee28,0x1ee28,  0x1ee33,0x1ee33,  0x1ee38,0x1ee38,  0x1ee3a,0x1ee3a,  0x1ee3c,0x1ee41,  0x1ee43,0x1ee46,  0x1ee48,0x1ee48,  0x1ee4a,0x1ee4a,  0x1ee4c,0x1ee4c,  0x1ee50,0x1ee50,  0x1ee53,0x1ee53,  0x1ee55,0x1ee56,  0x1ee58,0x1ee58,  0x1ee5a,0x1ee5a,  0x1ee5c,0x1ee5c,  0x1ee5e,0x1ee5e,  0x1ee60,0x1ee60,  0x1ee63,0x1ee63,  0x1ee65,0x1ee66,  0x1ee6b,0x1ee6b,  0x1ee73,0x1ee73,  0x1ee78,0x1ee78,  0x1ee7d,0x1ee7d,  0x1ee7f,0x1ee7f,  0x1ee8a,0x1ee8a,  0x1ee9c,0x1eea0,  0x1eea4,0x1eea4,  0x1eeaa,0x1eeaa,  0x1eebc,0x1eeef,  0x1eef2,0x1efff,  0x1f02c,0x1f02f,  0x1f094,0x1f09f,  0x1f0af,0x1f0b0,  0x1f0c0,0x1f0c0,  0x1f0d0,0x1f0d0,  0x1f0f6,0x1f0ff,  0x1f10d,0x1f10f,  0x1f12f,0x1f12f,  0x1f16c,0x1f16f,  0x1f19b,0x1f1e5,  0x1f203,0x1f20f,  0x1f23b,0x1f23f,  0x1f249,0x1f24f,  0x1f252,0x1f2ff,  0x1f32d,0x1f32f,  0x1f37e,0x1f37f,  0x1f3cf,0x1f3d3,  0x1f3f8,0x1f3ff,  0x1f4ff,0x1f4ff,  0x1f54b,0x1f54f,  0x1f57a,0x1f57a,  0x1f5a4,0x1f5a4,  0x1f643,0x1f644,  0x1f6d0,0x1f6df,  0x1f6ed,0x1f6ef,  0x1f6f4,0x1f6ff,  0x1f774,0x1f77f,  0x1f7d5,0x1f7ff,  0x1f80c,0x1f80f,  0x1f848,0x1f84f,  0x1f85a,0x1f85f,  0x1f888,0x1f88f,  0x1f8ae,0x1ffff,  0x2a6d7,0x2a6ff,  0x2b735,0x2b73f,  0x2b81e,0x2f7ff,  0x2fa1e,0xe0000,  0xe0002,0xe001f,  0xe0080,0xe00ff,  0xe01f0,0xeffff,  0xffffe,0xfffff,  0x10fffe,0x10ffff,  0x0,0x0};
static unsigned int encode_utf16 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
	for (unsigned int i = 0; i < ranges_count; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
		{
			if (j <= re2c::utf16::MAX_1WORD_RUNE)
				*s++ = j;
			else
			{
				*s++ = re2c::utf16::lead_surr(j);
				*s++ = re2c::utf16::trail_surr(j);
			}
		}
	return s - s_start;
}

int main ()
{
	unsigned int * buffer_Cn = new unsigned int [1723152];
	YYCTYPE * s = (YYCTYPE *) buffer_Cn;
	unsigned int buffer_len = encode_utf16 (chars_Cn, sizeof (chars_Cn) / sizeof (unsigned int), buffer_Cn);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_Cn[i];
	if (!scan (s, s + buffer_len))
		printf("test 'Cn' failed\n");
	delete [] buffer_Cn;
	return 0;
}
