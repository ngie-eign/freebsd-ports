--- modules/yahoo2/libyahoo2/yahoo_fn.c.orig	Thu Jan 15 08:01:45 2004
+++ modules/yahoo2/libyahoo2/yahoo_fn.c	Sun Feb  8 00:33:04 2004
@@ -4093,486 +4093,486 @@
    0x0E, 0x18, 0x03, 0x1C, 0x12, 0x11, 0x0D, 0x02 };
 
 struct yahoo_fn yahoo_fntable[5][96] = 
-   {{{ IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 },
-     { IDENT, 0, 0 }},
-    {{ MULADD, 0x36056CD7, 0x4387 },
-     { LOOKUP, (int)table_0, 0 },
-     { LOOKUP, (int)table_1, 0 },
-     { BITFLD, (int)table_2, 0 },
-     { LOOKUP, (int)table_3, 0 },
-     { BITFLD, (int)table_4, 0 },
-     { MULADD, 0x4ABB534D, 0x3769 },
-     { XOR, 0x1D242DA5, 0 },
-     { MULADD, 0x3C23132D, 0x339B },
-     { XOR, 0x0191265C, 0 },
-     { XOR, 0x3DB979DB, 0 },
-     { LOOKUP, (int)table_5, 0 },
-     { XOR, 0x1A550E1E, 0 },
-     { XOR, 0x2F140A2D, 0 },
-     { MULADD, 0x7C466A4B, 0x29BF },
-     { XOR, 0x2D3F30D3, 0 },
-     { MULADD, 0x7E823B21, 0x6BB3 },
-     { BITFLD, (int)table_6, 0 },
-     { LOOKUP, (int)table_7, 0 },
-     { BITFLD, (int)table_8, 0 },
-     { LOOKUP, (int)table_9, 0 },
-     { BITFLD, (int)table_10, 0 },
-     { LOOKUP, (int)table_11, 0 },
-     { BITFLD, (int)table_12, 0 },
-     { LOOKUP, (int)table_13, 0 },
-     { BITFLD, (int)table_14, 0 },
-     { MULADD, 0x5B756AB9, 0x7E9B },
-     { LOOKUP, (int)table_15, 0 },
-     { XOR, 0x1D1C4911, 0 },
-     { LOOKUP, (int)table_16, 0 },
-     { LOOKUP, (int)table_17, 0 },
-     { XOR, 0x46BD7771, 0 },
-     { XOR, 0x51AE2B42, 0 },
-     { MULADD, 0x2417591B, 0x177B },
-     { MULADD, 0x57F27C5F, 0x2433 },
-     { LOOKUP, (int)table_18, 0 },
-     { LOOKUP, (int)table_19, 0 },
-     { XOR, 0x71422261, 0 },
-     { BITFLD, (int)table_20, 0 },
-     { MULADD, 0x58E937F9, 0x1075 },
-     { LOOKUP, (int)table_21, 0 },
-     { BITFLD, (int)table_22, 0 },
-     { LOOKUP, (int)table_23, 0 },
-     { LOOKUP, (int)table_24, 0 },
-     { MULADD, 0x0B4C3D13, 0x1597 },
-     { BITFLD, (int)table_25, 0 },
-     { XOR, 0x0FE07D38, 0 },
-     { MULADD, 0x689B4017, 0x3CFB },
-     { BITFLD, (int)table_26, 0 },
-     { LOOKUP, (int)table_27, 0 },
-     { XOR, 0x35413DF3, 0 },
-     { MULADD, 0x05B611AB, 0x570B },
-     { MULADD, 0x0DA5334F, 0x3AC7 },
-     { XOR, 0x47706008, 0 },
-     { BITFLD, (int)table_28, 0 },
-     { LOOKUP, (int)table_29, 0 },
-     { BITFLD, (int)table_30, 0 },
-     { XOR, 0x57611B36, 0 },
-     { MULADD, 0x314C2CD1, 0x2B5B },
-     { XOR, 0x1EF33946, 0 },
-     { MULADD, 0x28EA041F, 0x638F },
-     { LOOKUP, (int)table_31, 0 },
-     { LOOKUP, (int)table_32, 0 },
-     { LOOKUP, (int)table_33, 0 },
-     { MULADD, 0x511537CB, 0x7135 },
-     { MULADD, 0x1CF71007, 0x5E17 },
-     { XOR, 0x583D4BCF, 0 },
-     { LOOKUP, (int)table_34, 0 },
-     { XOR, 0x373E6856, 0 },
-     { MULADD, 0x4D595519, 0x1A7D },
-     { LOOKUP, (int)table_35, 0 },
-     { LOOKUP, (int)table_36, 0 },
-     { XOR, 0x0E2A36A7, 0 },
-     { LOOKUP, (int)table_37, 0 },
-     { LOOKUP, (int)table_38, 0 },
-     { BITFLD, (int)table_39, 0 },
-     { BITFLD, (int)table_40, 0 },
-     { XOR, 0x53F3604F, 0 },
-     { BITFLD, (int)table_41, 0 },
-     { BITFLD, (int)table_42, 0 },
-     { MULADD, 0x1EDC0BA3, 0x7531 },
-     { LOOKUP, (int)table_43, 0 },
-     { XOR, 0x10DF1038, 0 },
-     { BITFLD, (int)table_44, 0 },
-     { LOOKUP, (int)table_45, 0 },
-     { XOR, 0x4EDE0CAC, 0 },
-     { MULADD, 0x2F076EEB, 0x5BCF },
-     { XOR, 0x6D86030F, 0 },
-     { XOR, 0x3F331713, 0 },
-     { LOOKUP, (int)table_46, 0 },
-     { MULADD, 0x41CD726F, 0x3F79 },
-     { BITFLD, (int)table_47, 0 },
-     { XOR, 0x0ECE0054, 0 },
-     { MULADD, 0x19B32B03, 0x4AD1 },
-     { BITFLD, (int)table_48, 0 },
-     { BITFLD, (int)table_49, 0 }},
-    {{ MULADD, 0x39731111, 0x419B },
-     { XOR, 0x54F7757A, 0 },
-     { BITFLD, (int)table_50, 0 },
-     { BITFLD, (int)table_51, 0 },
-     { LOOKUP, (int)table_52, 0 },
-     { LOOKUP, (int)table_53, 0 },
-     { MULADD, 0x3CC0256B, 0x7CE7 },
-     { XOR, 0x79991847, 0 },
-     { MULADD, 0x228F7FB5, 0x472D },
-     { MULADD, 0x32DA290B, 0x7745 },
-     { XOR, 0x7A28180D, 0 },
-     { BITFLD, (int)table_54, 0 },
-     { BITFLD, (int)table_55, 0 },
-     { MULADD, 0x5C814F8B, 0x227F },
-     { LOOKUP, (int)table_56, 0 },
-     { MULADD, 0x0B496F6D, 0x412D },
-     { XOR, 0x6F4B62DA, 0 },
-     { LOOKUP, (int)table_57, 0 },
-     { XOR, 0x64973977, 0 },
-     { LOOKUP, (int)table_58, 0 },
-     { LOOKUP, (int)table_59, 0 },
-     { BITFLD, (int)table_60, 0 },
-     { LOOKUP, (int)table_61, 0 },
-     { LOOKUP, (int)table_62, 0 },
-     { XOR, 0x6DD14C92, 0 },
-     { LOOKUP, (int)table_63, 0 },
-     { BITFLD, (int)table_64, 0 },
-     { BITFLD, (int)table_65, 0 },
-     { BITFLD, (int)table_66, 0 },
-     { LOOKUP, (int)table_67, 0 },
-     { XOR, 0x5E6324D8, 0 },
-     { LOOKUP, (int)table_68, 0 },
-     { LOOKUP, (int)table_69, 0 },
-     { LOOKUP, (int)table_70, 0 },
-     { BITFLD, (int)table_71, 0 },
-     { XOR, 0x62745ED0, 0 },
-     { MULADD, 0x102C215B, 0x0581 },
-     { LOOKUP, (int)table_72, 0 },
-     { LOOKUP, (int)table_73, 0 },
-     { LOOKUP, (int)table_74, 0 },
-     { MULADD, 0x19511111, 0x12C1 },
-     { LOOKUP, (int)table_75, 0 },
-     { MULADD, 0x2A6E2953, 0x6977 },
-     { LOOKUP, (int)table_76, 0 },
-     { XOR, 0x55CD5445, 0 },
-     { BITFLD, (int)table_77, 0 },
-     { BITFLD, (int)table_78, 0 },
-     { MULADD, 0x646C21EB, 0x43E5 },
-     { XOR, 0x71DC4898, 0 },
-     { XOR, 0x167519CB, 0 },
-     { XOR, 0x6D3158F8, 0 },
-     { XOR, 0x7EA95BEA, 0 },
-     { BITFLD, (int)table_79, 0 },
-     { XOR, 0x47377587, 0 },
-     { XOR, 0x2D8B6E8F, 0 },
-     { MULADD, 0x5E6105DB, 0x1605 },
-     { XOR, 0x65B543C8, 0 },
-     { LOOKUP, (int)table_80, 0 },
-     { BITFLD, (int)table_81, 0 },
-     { MULADD, 0x48AF73CB, 0x0A67 },
-     { XOR, 0x4FB96154, 0 },
-     { LOOKUP, (int)table_82, 0 },
-     { BITFLD, (int)table_83, 0 },
-     { XOR, 0x622C4954, 0 },
-     { BITFLD, (int)table_84, 0 },
-     { XOR, 0x20D220F3, 0 },
-     { XOR, 0x361D4F0D, 0 },
-     { XOR, 0x2B2000D1, 0 },
-     { XOR, 0x6FB8593E, 0 },
-     { LOOKUP, (int)table_85, 0 },
-     { BITFLD, (int)table_86, 0 },
-     { XOR, 0x2B7F7DFC, 0 },
-     { MULADD, 0x5FC41A57, 0x0693 },
-     { MULADD, 0x17154387, 0x2489 },
-     { BITFLD, (int)table_87, 0 },
-     { BITFLD, (int)table_88, 0 },
-     { BITFLD, (int)table_89, 0 },
-     { LOOKUP, (int)table_90, 0 },
-     { XOR, 0x7E221470, 0 },
-     { XOR, 0x7A600061, 0 },
-     { BITFLD, (int)table_91, 0 },
-     { BITFLD, (int)table_92, 0 },
-     { LOOKUP, (int)table_93, 0 },
-     { BITFLD, (int)table_94, 0 },
-     { MULADD, 0x00E813A5, 0x2CE5 },
-     { MULADD, 0x3D707E25, 0x3827 },
-     { MULADD, 0x77A53E07, 0x6A5F },
-     { BITFLD, (int)table_95, 0 },
-     { LOOKUP, (int)table_96, 0 },
-     { LOOKUP, (int)table_97, 0 },
-     { XOR, 0x43A73788, 0 },
-     { LOOKUP, (int)table_98, 0 },
-     { BITFLD, (int)table_99, 0 },
-     { LOOKUP, (int)table_100, 0 },
-     { XOR, 0x55F4606B, 0 },
-     { BITFLD, (int)table_101, 0 }},
-    {{ BITFLD, (int)table_102, 0 },
-     { MULADD, 0x32CA58E3, 0x04F9 },
-     { XOR, 0x11756B30, 0 },
-     { MULADD, 0x218B2569, 0x5DB1 },
-     { XOR, 0x77D64B90, 0 },
-     { BITFLD, (int)table_103, 0 },
-     { LOOKUP, (int)table_104, 0 },
-     { MULADD, 0x7D1428CB, 0x89F6853D },
-     { XOR, 0x6F872C49, 0 },
-     { XOR, 0x2E484655, 0 },
-     { MULADD, 0x1E3349F7, 0x41F5 },
-     { LOOKUP, (int)table_105, 0 },
-     { BITFLD, (int)table_106, 0 },
-     { XOR, 0x61640311, 0 },
-     { BITFLD, (int)table_107, 0 },
-     { LOOKUP, (int)table_108, 0 },
-     { LOOKUP, (int)table_109, 0 },
-     { LOOKUP, (int)table_110, 0 },
-     { XOR, 0x007044D3, 0 },
-     { BITFLD, (int)table_111, 0 },
-     { MULADD, 0x5C221625, 0x576F },
-     { LOOKUP, (int)table_112, 0 },
-     { LOOKUP, (int)table_113, 0 },
-     { XOR, 0x2D406BB1, 0 },
-     { MULADD, 0x680B1F17, 0x12CD },
-     { BITFLD, (int)table_114, 0 },
-     { MULADD, 0x12564D55, 0x32B9 },
-     { MULADD, 0x21A67897, 0x6BAB },
-     { LOOKUP, (int)table_115, 0 },
-     { MULADD, 0x06405119, 0x7143 },
-     { XOR, 0x351D01ED, 0 },
-     { MULADD, 0x46356F6B, 0x0A49 },
-     { MULADD, 0x32C77969, 0x72F3 },
-     { BITFLD, (int)table_116, 0 },
-     { LOOKUP, (int)table_117, 0 },
-     { LOOKUP, (int)table_118, 0 },
-     { BITFLD, (int)table_119, 0 },
-     { LOOKUP, (int)table_120, 0 },
-     { BITFLD, (int)table_121, 0 },
-     { MULADD, 0x74D52C55, 0x5F43 },
-     { XOR, 0x26201CA8, 0 },
-     { XOR, 0x7AEB3255, 0 },
-     { LOOKUP, (int)table_122, 0 },
-     { MULADD, 0x578F1047, 0x640B },
-     { LOOKUP, (int)table_123, 0 },
-     { LOOKUP, (int)table_124, 0 },
-     { BITFLD, (int)table_125, 0 },
-     { BITFLD, (int)table_126, 0 },
-     { XOR, 0x4A1352CF, 0 },
-     { MULADD, 0x4BFB6EF3, 0x704F },
-     { MULADD, 0x1B4C7FE7, 0x5637 },
-     { MULADD, 0x04091A3B, 0x4917 },
-     { XOR, 0x270C2F52, 0 },
-     { LOOKUP, (int)table_127, 0 },
-     { BITFLD, (int)table_128, 0 },
-     { LOOKUP, (int)table_129, 0 },
-     { BITFLD, (int)table_130, 0 },
-     { MULADD, 0x127549D5, 0x579B },
-     { MULADD, 0x0AB54121, 0x7A47 },
-     { BITFLD, (int)table_131, 0 },
-     { XOR, 0x751E6E49, 0 },
-     { LOOKUP, (int)table_132, 0 },
-     { LOOKUP, (int)table_133, 0 },
-     { XOR, 0x670C3F74, 0 },
-     { MULADD, 0x6B080851, 0x7E8B },
-     { XOR, 0x71CD789E, 0 },
-     { XOR, 0x3EB20B7B, 0 },
-     { BITFLD, (int)table_134, 0 },
-     { LOOKUP, (int)table_135, 0 },
-     { MULADD, 0x58A67753, 0x272B },
-     { MULADD, 0x1AB54AD7, 0x4D33 },
-     { MULADD, 0x07D30A45, 0x0569 },
-     { MULADD, 0x737616BF, 0x70C7 },
-     { LOOKUP, (int)table_136, 0 },
-     { MULADD, 0x45C4485D, 0x2063 },
-     { BITFLD, (int)table_137, 0 },
-     { XOR, 0x2598043D, 0 },
-     { MULADD, 0x223A4FE3, 0x49A7 },
-     { XOR, 0x1EED619F, 0 },
-     { BITFLD, (int)table_138, 0 },
-     { XOR, 0x6F477561, 0 },
-     { BITFLD, (int)table_139, 0 },
-     { BITFLD, (int)table_140, 0 },
-     { LOOKUP, (int)table_141, 0 },
-     { MULADD, 0x4BC13C4F, 0x45C1 },
-     { XOR, 0x3B547BFB, 0 },
-     { LOOKUP, (int)table_142, 0 },
-     { MULADD, 0x71406AB3, 0x7A5F },
-     { XOR, 0x2F1467E9, 0 },
-     { MULADD, 0x009366D1, 0x22D1 },
-     { MULADD, 0x587D1B75, 0x2CA5 },
-     { MULADD, 0x213A4BE7, 0x4499 },
-     { MULADD, 0x62653E89, 0x2D5D },
-     { BITFLD, (int)table_143, 0 },
-     { MULADD, 0x4F5F3257, 0x444F },
-     { MULADD, 0x4C0E2B2B, 0x19D3 }},
-    {{ MULADD, 0x3F867B35, 0x7B3B },
-     { MULADD, 0x32D25CB1, 0x3D6D },
-     { BITFLD, (int)table_144, 0 },
-     { MULADD, 0x50FA1C51, 0x5F4F },
-     { LOOKUP, (int)table_145, 0 },
-     { XOR, 0x05FE7AF1, 0 },
-     { MULADD, 0x14067C29, 0x10C5 },
-     { LOOKUP, (int)table_146, 0 },
-     { MULADD, 0x4A5558C5, 0x271F },
-     { XOR, 0x3C0861B1, 0 },
-     { BITFLD, (int)table_147, 0 },
-     { LOOKUP, (int)table_148, 0 },
-     { MULADD, 0x18837C9D, 0x6335 },
-     { BITFLD, (int)table_149, 0 },
-     { XOR, 0x7DAB5033, 0 },
-     { LOOKUP, (int)table_150, 0 },
-     { MULADD, 0x03B87321, 0x7225 },
-     { XOR, 0x7F906745, 0 },
-     { LOOKUP, (int)table_151, 0 },
-     { BITFLD, (int)table_152, 0 },
-     { XOR, 0x21C46C2C, 0 },
-     { MULADD, 0x2B36757D, 0x028D },
-     { BITFLD, (int)table_153, 0 },
-     { LOOKUP, (int)table_154, 0 },
-     { XOR, 0x106B4A85, 0 },
-     { XOR, 0x17640F11, 0 },
-     { LOOKUP, (int)table_155, 0 },
-     { XOR, 0x69E60486, 0 },
-     { LOOKUP, (int)table_156, 0 },
-     { MULADD, 0x3782017D, 0x05BF },
-     { BITFLD, (int)table_157, 0 },
-     { LOOKUP, (int)table_158, 0 },
-     { XOR, 0x6BCA53B0, 0 },
-     { LOOKUP, (int)table_159, 0 },
-     { LOOKUP, (int)table_160, 0 },
-     { LOOKUP, (int)table_161, 0 },
-     { LOOKUP, (int)table_162, 0 },
-     { XOR, 0x0B8236E3, 0 },
-     { BITFLD, (int)table_163, 0 },
-     { MULADD, 0x5EE51C43, 0x4553 },
-     { BITFLD, (int)table_164, 0 },
-     { LOOKUP, (int)table_165, 0 },
-     { LOOKUP, (int)table_166, 0 },
-     { LOOKUP, (int)table_167, 0 },
-     { MULADD, 0x42B14C6F, 0x5531 },
-     { XOR, 0x4A2548E8, 0 },
-     { MULADD, 0x5C071D85, 0x2437 },
-     { LOOKUP, (int)table_168, 0 },
-     { MULADD, 0x29195861, 0x108B },
-     { XOR, 0x24012258, 0 },
-     { LOOKUP, (int)table_169, 0 },
-     { XOR, 0x63CC2377, 0 },
-     { XOR, 0x08D04B59, 0 },
-     { MULADD, 0x3FD30CF5, 0x7027 },
-     { XOR, 0x7C3E0478, 0 },
-     { MULADD, 0x457776B7, 0x24B3 },
-     { XOR, 0x086652BC, 0 },
-     { MULADD, 0x302F5B13, 0x371D },
-     { LOOKUP, (int)table_170, 0 },
-     { MULADD, 0x58692D47, 0x0671 },
-     { XOR, 0x6601178E, 0 },
-     { MULADD, 0x0F195B9B, 0x1369 },
-     { XOR, 0x07BA21D8, 0 },
-     { BITFLD, (int)table_171, 0 },
-     { BITFLD, (int)table_172, 0 },
-     { XOR, 0x13AC3D21, 0 },
-     { MULADD, 0x5BCF3275, 0x6E1B },
-     { MULADD, 0x62725C5B, 0x16B9 },
-     { MULADD, 0x5B950FDF, 0x2D35 },
-     { BITFLD, (int)table_173, 0 },
-     { BITFLD, (int)table_174, 0 },
-     { MULADD, 0x73BA5335, 0x1C13 },
-     { BITFLD, (int)table_175, 0 },
-     { BITFLD, (int)table_176, 0 },
-     { XOR, 0x3E144154, 0 },
-     { MULADD, 0x4EED7B27, 0x38AB },
-     { LOOKUP, (int)table_177, 0 },
-     { MULADD, 0x627C7E0F, 0x7F01 },
-     { MULADD, 0x5D7E1F73, 0x2C0F },
-     { LOOKUP, (int)table_178, 0 },
-     { MULADD, 0x55C9525F, 0x4659 },
-     { XOR, 0x3765334C, 0 },
-     { MULADD, 0x5DF66DDF, 0x7C25 },
-     { LOOKUP, (int)table_179, 0 },
-     { LOOKUP, (int)table_180, 0 },
-     { XOR, 0x16AE5776, 0 },
-     { LOOKUP, (int)table_181, 0 },
-     { LOOKUP, (int)table_182, 0 },
-     { BITFLD, (int)table_183, 0 },
-     { BITFLD, (int)table_184, 0 },
-     { LOOKUP, (int)table_185, 0 },
-     { MULADD, 0x4392327B, 0x7E0D },
-     { LOOKUP, (int)table_186, 0 },
-     { MULADD, 0x3D8B0CB5, 0x640D },
-     { MULADD, 0x32865601, 0x4D43 },
-     { BITFLD, (int)table_187, 0 }}};
+   {{{ IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 },
+     { IDENT, {0}, 0 }},
+    {{ MULADD, {(unsigned char *) 0x36056CD7}, 0x4387 },
+     { LOOKUP, {table_0}, 0 },
+     { LOOKUP, {table_1}, 0 },
+     { BITFLD, {table_2}, 0 },
+     { LOOKUP, {table_3}, 0 },
+     { BITFLD, {table_4}, 0 },
+     { MULADD, {(unsigned char *) 0x4ABB534D}, 0x3769 },
+     { XOR, {(unsigned char *) 0x1D242DA5}, 0 },
+     { MULADD, {(unsigned char *) 0x3C23132D}, 0x339B },
+     { XOR, {(unsigned char *) 0x0191265C}, 0 },
+     { XOR, {(unsigned char *) 0x3DB979DB}, 0 },
+     { LOOKUP, {table_5}, 0 },
+     { XOR, {(unsigned char *) 0x1A550E1E}, 0 },
+     { XOR, {(unsigned char *) 0x2F140A2D}, 0 },
+     { MULADD, {(unsigned char *) 0x7C466A4B}, 0x29BF },
+     { XOR, {(unsigned char *) 0x2D3F30D3}, 0 },
+     { MULADD, {(unsigned char *) 0x7E823B21}, 0x6BB3 },
+     { BITFLD, {table_6}, 0 },
+     { LOOKUP, {table_7}, 0 },
+     { BITFLD, {table_8}, 0 },
+     { LOOKUP, {table_9}, 0 },
+     { BITFLD, {table_10}, 0 },
+     { LOOKUP, {table_11}, 0 },
+     { BITFLD, {table_12}, 0 },
+     { LOOKUP, {table_13}, 0 },
+     { BITFLD, {table_14}, 0 },
+     { MULADD, {(unsigned char *) 0x5B756AB9}, 0x7E9B },
+     { LOOKUP, {table_15}, 0 },
+     { XOR, {(unsigned char *) 0x1D1C4911}, 0 },
+     { LOOKUP, {table_16}, 0 },
+     { LOOKUP, {table_17}, 0 },
+     { XOR, {(unsigned char *) 0x46BD7771}, 0 },
+     { XOR, {(unsigned char *) 0x51AE2B42}, 0 },
+     { MULADD, {(unsigned char *) 0x2417591B}, 0x177B },
+     { MULADD, {(unsigned char *) 0x57F27C5F}, 0x2433 },
+     { LOOKUP, {table_18}, 0 },
+     { LOOKUP, {table_19}, 0 },
+     { XOR, {(unsigned char *) 0x71422261}, 0 },
+     { BITFLD, {table_20}, 0 },
+     { MULADD, {(unsigned char *) 0x58E937F9}, 0x1075 },
+     { LOOKUP, {table_21}, 0 },
+     { BITFLD, {table_22}, 0 },
+     { LOOKUP, {table_23}, 0 },
+     { LOOKUP, {table_24}, 0 },
+     { MULADD, {(unsigned char *) 0x0B4C3D13}, 0x1597 },
+     { BITFLD, {table_25}, 0 },
+     { XOR, {(unsigned char *) 0x0FE07D38}, 0 },
+     { MULADD, {(unsigned char *) 0x689B4017}, 0x3CFB },
+     { BITFLD, {table_26}, 0 },
+     { LOOKUP, {table_27}, 0 },
+     { XOR, {(unsigned char *) 0x35413DF3}, 0 },
+     { MULADD, {(unsigned char *) 0x05B611AB}, 0x570B },
+     { MULADD, {(unsigned char *) 0x0DA5334F}, 0x3AC7 },
+     { XOR, {(unsigned char *) 0x47706008}, 0 },
+     { BITFLD, {table_28}, 0 },
+     { LOOKUP, {table_29}, 0 },
+     { BITFLD, {table_30}, 0 },
+     { XOR, {(unsigned char *) 0x57611B36}, 0 },
+     { MULADD, {(unsigned char *) 0x314C2CD1}, 0x2B5B },
+     { XOR, {(unsigned char *) 0x1EF33946}, 0 },
+     { MULADD, {(unsigned char *) 0x28EA041F}, 0x638F },
+     { LOOKUP, {table_31}, 0 },
+     { LOOKUP, {table_32}, 0 },
+     { LOOKUP, {table_33}, 0 },
+     { MULADD, {(unsigned char *) 0x511537CB}, 0x7135 },
+     { MULADD, {(unsigned char *) 0x1CF71007}, 0x5E17 },
+     { XOR, {(unsigned char *) 0x583D4BCF}, 0 },
+     { LOOKUP, {table_34}, 0 },
+     { XOR, {(unsigned char *) 0x373E6856}, 0 },
+     { MULADD, {(unsigned char *) 0x4D595519}, 0x1A7D },
+     { LOOKUP, {table_35}, 0 },
+     { LOOKUP, {table_36}, 0 },
+     { XOR, {(unsigned char *) 0x0E2A36A7}, 0 },
+     { LOOKUP, {table_37}, 0 },
+     { LOOKUP, {table_38}, 0 },
+     { BITFLD, {table_39}, 0 },
+     { BITFLD, {table_40}, 0 },
+     { XOR, {(unsigned char *) 0x53F3604F}, 0 },
+     { BITFLD, {table_41}, 0 },
+     { BITFLD, {table_42}, 0 },
+     { MULADD, {(unsigned char *) 0x1EDC0BA3}, 0x7531 },
+     { LOOKUP, {table_43}, 0 },
+     { XOR, {(unsigned char *) 0x10DF1038}, 0 },
+     { BITFLD, {table_44}, 0 },
+     { LOOKUP, {table_45}, 0 },
+     { XOR, {(unsigned char *) 0x4EDE0CAC}, 0 },
+     { MULADD, {(unsigned char *) 0x2F076EEB}, 0x5BCF },
+     { XOR, {(unsigned char *) 0x6D86030F}, 0 },
+     { XOR, {(unsigned char *) 0x3F331713}, 0 },
+     { LOOKUP, {table_46}, 0 },
+     { MULADD, {(unsigned char *) 0x41CD726F}, 0x3F79 },
+     { BITFLD, {table_47}, 0 },
+     { XOR, {(unsigned char *) 0x0ECE0054}, 0 },
+     { MULADD, {(unsigned char *) 0x19B32B03}, 0x4AD1 },
+     { BITFLD, {table_48}, 0 },
+     { BITFLD, {table_49}, 0 }},
+    {{ MULADD, {(unsigned char *) 0x39731111}, 0x419B },
+     { XOR, {(unsigned char *) 0x54F7757A}, 0 },
+     { BITFLD, {table_50}, 0 },
+     { BITFLD, {table_51}, 0 },
+     { LOOKUP, {table_52}, 0 },
+     { LOOKUP, {table_53}, 0 },
+     { MULADD, {(unsigned char *) 0x3CC0256B}, 0x7CE7 },
+     { XOR, {(unsigned char *) 0x79991847}, 0 },
+     { MULADD, {(unsigned char *) 0x228F7FB5}, 0x472D },
+     { MULADD, {(unsigned char *) 0x32DA290B}, 0x7745 },
+     { XOR, {(unsigned char *) 0x7A28180D}, 0 },
+     { BITFLD, {table_54}, 0 },
+     { BITFLD, {table_55}, 0 },
+     { MULADD, {(unsigned char *) 0x5C814F8B}, 0x227F },
+     { LOOKUP, {table_56}, 0 },
+     { MULADD, {(unsigned char *) 0x0B496F6D}, 0x412D },
+     { XOR, {(unsigned char *) 0x6F4B62DA}, 0 },
+     { LOOKUP, {table_57}, 0 },
+     { XOR, {(unsigned char *) 0x64973977}, 0 },
+     { LOOKUP, {table_58}, 0 },
+     { LOOKUP, {table_59}, 0 },
+     { BITFLD, {table_60}, 0 },
+     { LOOKUP, {table_61}, 0 },
+     { LOOKUP, {table_62}, 0 },
+     { XOR, {(unsigned char *) 0x6DD14C92}, 0 },
+     { LOOKUP, {table_63}, 0 },
+     { BITFLD, {table_64}, 0 },
+     { BITFLD, {table_65}, 0 },
+     { BITFLD, {table_66}, 0 },
+     { LOOKUP, {table_67}, 0 },
+     { XOR, {(unsigned char *) 0x5E6324D8}, 0 },
+     { LOOKUP, {table_68}, 0 },
+     { LOOKUP, {table_69}, 0 },
+     { LOOKUP, {table_70}, 0 },
+     { BITFLD, {table_71}, 0 },
+     { XOR, {(unsigned char *) 0x62745ED0}, 0 },
+     { MULADD, {(unsigned char *) 0x102C215B}, 0x0581 },
+     { LOOKUP, {table_72}, 0 },
+     { LOOKUP, {table_73}, 0 },
+     { LOOKUP, {table_74}, 0 },
+     { MULADD, {(unsigned char *) 0x19511111}, 0x12C1 },
+     { LOOKUP, {table_75}, 0 },
+     { MULADD, {(unsigned char *) 0x2A6E2953}, 0x6977 },
+     { LOOKUP, {table_76}, 0 },
+     { XOR, {(unsigned char *) 0x55CD5445}, 0 },
+     { BITFLD, {table_77}, 0 },
+     { BITFLD, {table_78}, 0 },
+     { MULADD, {(unsigned char *) 0x646C21EB}, 0x43E5 },
+     { XOR, {(unsigned char *) 0x71DC4898}, 0 },
+     { XOR, {(unsigned char *) 0x167519CB}, 0 },
+     { XOR, {(unsigned char *) 0x6D3158F8}, 0 },
+     { XOR, {(unsigned char *) 0x7EA95BEA}, 0 },
+     { BITFLD, {table_79}, 0 },
+     { XOR, {(unsigned char *) 0x47377587}, 0 },
+     { XOR, {(unsigned char *) 0x2D8B6E8F}, 0 },
+     { MULADD, {(unsigned char *) 0x5E6105DB}, 0x1605 },
+     { XOR, {(unsigned char *) 0x65B543C8}, 0 },
+     { LOOKUP, {table_80}, 0 },
+     { BITFLD, {table_81}, 0 },
+     { MULADD, {(unsigned char *) 0x48AF73CB}, 0x0A67 },
+     { XOR, {(unsigned char *) 0x4FB96154}, 0 },
+     { LOOKUP, {table_82}, 0 },
+     { BITFLD, {table_83}, 0 },
+     { XOR, {(unsigned char *) 0x622C4954}, 0 },
+     { BITFLD, {table_84}, 0 },
+     { XOR, {(unsigned char *) 0x20D220F3}, 0 },
+     { XOR, {(unsigned char *) 0x361D4F0D}, 0 },
+     { XOR, {(unsigned char *) 0x2B2000D1}, 0 },
+     { XOR, {(unsigned char *) 0x6FB8593E}, 0 },
+     { LOOKUP, {table_85}, 0 },
+     { BITFLD, {table_86}, 0 },
+     { XOR, {(unsigned char *) 0x2B7F7DFC}, 0 },
+     { MULADD, {(unsigned char *) 0x5FC41A57}, 0x0693 },
+     { MULADD, {(unsigned char *) 0x17154387}, 0x2489 },
+     { BITFLD, {table_87}, 0 },
+     { BITFLD, {table_88}, 0 },
+     { BITFLD, {table_89}, 0 },
+     { LOOKUP, {table_90}, 0 },
+     { XOR, {(unsigned char *) 0x7E221470}, 0 },
+     { XOR, {(unsigned char *) 0x7A600061}, 0 },
+     { BITFLD, {table_91}, 0 },
+     { BITFLD, {table_92}, 0 },
+     { LOOKUP, {table_93}, 0 },
+     { BITFLD, {table_94}, 0 },
+     { MULADD, {(unsigned char *) 0x00E813A5}, 0x2CE5 },
+     { MULADD, {(unsigned char *) 0x3D707E25}, 0x3827 },
+     { MULADD, {(unsigned char *) 0x77A53E07}, 0x6A5F },
+     { BITFLD, {table_95}, 0 },
+     { LOOKUP, {table_96}, 0 },
+     { LOOKUP, {table_97}, 0 },
+     { XOR, {(unsigned char *) 0x43A73788}, 0 },
+     { LOOKUP, {table_98}, 0 },
+     { BITFLD, {table_99}, 0 },
+     { LOOKUP, {table_100}, 0 },
+     { XOR, {(unsigned char *) 0x55F4606B}, 0 },
+     { BITFLD, {table_101}, 0 }},
+    {{ BITFLD, {table_102}, 0 },
+     { MULADD, {(unsigned char *) 0x32CA58E3}, 0x04F9 },
+     { XOR, {(unsigned char *) 0x11756B30}, 0 },
+     { MULADD, {(unsigned char *) 0x218B2569}, 0x5DB1 },
+     { XOR, {(unsigned char *) 0x77D64B90}, 0 },
+     { BITFLD, {table_103}, 0 },
+     { LOOKUP, {table_104}, 0 },
+     { MULADD, {(unsigned char *) 0x7D1428CB}, 0x89F6853D },
+     { XOR, {(unsigned char *) 0x6F872C49}, 0 },
+     { XOR, {(unsigned char *) 0x2E484655}, 0 },
+     { MULADD, {(unsigned char *) 0x1E3349F7}, 0x41F5 },
+     { LOOKUP, {table_105}, 0 },
+     { BITFLD, {table_106}, 0 },
+     { XOR, {(unsigned char *) 0x61640311}, 0 },
+     { BITFLD, {table_107}, 0 },
+     { LOOKUP, {table_108}, 0 },
+     { LOOKUP, {table_109}, 0 },
+     { LOOKUP, {table_110}, 0 },
+     { XOR, {(unsigned char *) 0x007044D3}, 0 },
+     { BITFLD, {table_111}, 0 },
+     { MULADD, {(unsigned char *) 0x5C221625}, 0x576F },
+     { LOOKUP, {table_112}, 0 },
+     { LOOKUP, {table_113}, 0 },
+     { XOR, {(unsigned char *) 0x2D406BB1}, 0 },
+     { MULADD, {(unsigned char *) 0x680B1F17}, 0x12CD },
+     { BITFLD, {table_114}, 0 },
+     { MULADD, {(unsigned char *) 0x12564D55}, 0x32B9 },
+     { MULADD, {(unsigned char *) 0x21A67897}, 0x6BAB },
+     { LOOKUP, {table_115}, 0 },
+     { MULADD, {(unsigned char *) 0x06405119}, 0x7143 },
+     { XOR, {(unsigned char *) 0x351D01ED}, 0 },
+     { MULADD, {(unsigned char *) 0x46356F6B}, 0x0A49 },
+     { MULADD, {(unsigned char *) 0x32C77969}, 0x72F3 },
+     { BITFLD, {table_116}, 0 },
+     { LOOKUP, {table_117}, 0 },
+     { LOOKUP, {table_118}, 0 },
+     { BITFLD, {table_119}, 0 },
+     { LOOKUP, {table_120}, 0 },
+     { BITFLD, {table_121}, 0 },
+     { MULADD, {(unsigned char *) 0x74D52C55}, 0x5F43 },
+     { XOR, {(unsigned char *) 0x26201CA8}, 0 },
+     { XOR, {(unsigned char *) 0x7AEB3255}, 0 },
+     { LOOKUP, {table_122}, 0 },
+     { MULADD, {(unsigned char *) 0x578F1047}, 0x640B },
+     { LOOKUP, {table_123}, 0 },
+     { LOOKUP, {table_124}, 0 },
+     { BITFLD, {table_125}, 0 },
+     { BITFLD, {table_126}, 0 },
+     { XOR, {(unsigned char *) 0x4A1352CF}, 0 },
+     { MULADD, {(unsigned char *) 0x4BFB6EF3}, 0x704F },
+     { MULADD, {(unsigned char *) 0x1B4C7FE7}, 0x5637 },
+     { MULADD, {(unsigned char *) 0x04091A3B}, 0x4917 },
+     { XOR, {(unsigned char *) 0x270C2F52}, 0 },
+     { LOOKUP, {table_127}, 0 },
+     { BITFLD, {table_128}, 0 },
+     { LOOKUP, {table_129}, 0 },
+     { BITFLD, {table_130}, 0 },
+     { MULADD, {(unsigned char *) 0x127549D5}, 0x579B },
+     { MULADD, {(unsigned char *) 0x0AB54121}, 0x7A47 },
+     { BITFLD, {table_131}, 0 },
+     { XOR, {(unsigned char *) 0x751E6E49}, 0 },
+     { LOOKUP, {table_132}, 0 },
+     { LOOKUP, {table_133}, 0 },
+     { XOR, {(unsigned char *) 0x670C3F74}, 0 },
+     { MULADD, {(unsigned char *) 0x6B080851}, 0x7E8B },
+     { XOR, {(unsigned char *) 0x71CD789E}, 0 },
+     { XOR, {(unsigned char *) 0x3EB20B7B}, 0 },
+     { BITFLD, {table_134}, 0 },
+     { LOOKUP, {table_135}, 0 },
+     { MULADD, {(unsigned char *) 0x58A67753}, 0x272B },
+     { MULADD, {(unsigned char *) 0x1AB54AD7}, 0x4D33 },
+     { MULADD, {(unsigned char *) 0x07D30A45}, 0x0569 },
+     { MULADD, {(unsigned char *) 0x737616BF}, 0x70C7 },
+     { LOOKUP, {table_136}, 0 },
+     { MULADD, {(unsigned char *) 0x45C4485D}, 0x2063 },
+     { BITFLD, {table_137}, 0 },
+     { XOR, {(unsigned char *) 0x2598043D}, 0 },
+     { MULADD, {(unsigned char *) 0x223A4FE3}, 0x49A7 },
+     { XOR, {(unsigned char *) 0x1EED619F}, 0 },
+     { BITFLD, {table_138}, 0 },
+     { XOR, {(unsigned char *) 0x6F477561}, 0 },
+     { BITFLD, {table_139}, 0 },
+     { BITFLD, {table_140}, 0 },
+     { LOOKUP, {table_141}, 0 },
+     { MULADD, {(unsigned char *) 0x4BC13C4F}, 0x45C1 },
+     { XOR, {(unsigned char *) 0x3B547BFB}, 0 },
+     { LOOKUP, {table_142}, 0 },
+     { MULADD, {(unsigned char *) 0x71406AB3}, 0x7A5F },
+     { XOR, {(unsigned char *) 0x2F1467E9}, 0 },
+     { MULADD, {(unsigned char *) 0x009366D1}, 0x22D1 },
+     { MULADD, {(unsigned char *) 0x587D1B75}, 0x2CA5 },
+     { MULADD, {(unsigned char *) 0x213A4BE7}, 0x4499 },
+     { MULADD, {(unsigned char *) 0x62653E89}, 0x2D5D },
+     { BITFLD, {table_143}, 0 },
+     { MULADD, {(unsigned char *) 0x4F5F3257}, 0x444F },
+     { MULADD, {(unsigned char *) 0x4C0E2B2B}, 0x19D3 }},
+    {{ MULADD, {(unsigned char *) 0x3F867B35}, 0x7B3B },
+     { MULADD, {(unsigned char *) 0x32D25CB1}, 0x3D6D },
+     { BITFLD, {table_144}, 0 },
+     { MULADD, {(unsigned char *) 0x50FA1C51}, 0x5F4F },
+     { LOOKUP, {table_145}, 0 },
+     { XOR, {(unsigned char *) 0x05FE7AF1}, 0 },
+     { MULADD, {(unsigned char *) 0x14067C29}, 0x10C5 },
+     { LOOKUP, {table_146}, 0 },
+     { MULADD, {(unsigned char *) 0x4A5558C5}, 0x271F },
+     { XOR, {(unsigned char *) 0x3C0861B1}, 0 },
+     { BITFLD, {table_147}, 0 },
+     { LOOKUP, {table_148}, 0 },
+     { MULADD, {(unsigned char *) 0x18837C9D}, 0x6335 },
+     { BITFLD, {table_149}, 0 },
+     { XOR, {(unsigned char *) 0x7DAB5033}, 0 },
+     { LOOKUP, {table_150}, 0 },
+     { MULADD, {(unsigned char *) 0x03B87321}, 0x7225 },
+     { XOR, {(unsigned char *) 0x7F906745}, 0 },
+     { LOOKUP, {table_151}, 0 },
+     { BITFLD, {table_152}, 0 },
+     { XOR, {(unsigned char *) 0x21C46C2C}, 0 },
+     { MULADD, {(unsigned char *) 0x2B36757D}, 0x028D },
+     { BITFLD, {table_153}, 0 },
+     { LOOKUP, {table_154}, 0 },
+     { XOR, {(unsigned char *) 0x106B4A85}, 0 },
+     { XOR, {(unsigned char *) 0x17640F11}, 0 },
+     { LOOKUP, {table_155}, 0 },
+     { XOR, {(unsigned char *) 0x69E60486}, 0 },
+     { LOOKUP, {table_156}, 0 },
+     { MULADD, {(unsigned char *) 0x3782017D}, 0x05BF },
+     { BITFLD, {table_157}, 0 },
+     { LOOKUP, {table_158}, 0 },
+     { XOR, {(unsigned char *) 0x6BCA53B0}, 0 },
+     { LOOKUP, {table_159}, 0 },
+     { LOOKUP, {table_160}, 0 },
+     { LOOKUP, {table_161}, 0 },
+     { LOOKUP, {table_162}, 0 },
+     { XOR, {(unsigned char *) 0x0B8236E3}, 0 },
+     { BITFLD, {table_163}, 0 },
+     { MULADD, {(unsigned char *) 0x5EE51C43}, 0x4553 },
+     { BITFLD, {table_164}, 0 },
+     { LOOKUP, {table_165}, 0 },
+     { LOOKUP, {table_166}, 0 },
+     { LOOKUP, {table_167}, 0 },
+     { MULADD, {(unsigned char *) 0x42B14C6F}, 0x5531 },
+     { XOR, {(unsigned char *) 0x4A2548E8}, 0 },
+     { MULADD, {(unsigned char *) 0x5C071D85}, 0x2437 },
+     { LOOKUP, {table_168}, 0 },
+     { MULADD, {(unsigned char *) 0x29195861}, 0x108B },
+     { XOR, {(unsigned char *) 0x24012258}, 0 },
+     { LOOKUP, {table_169}, 0 },
+     { XOR, {(unsigned char *) 0x63CC2377}, 0 },
+     { XOR, {(unsigned char *) 0x08D04B59}, 0 },
+     { MULADD, {(unsigned char *) 0x3FD30CF5}, 0x7027 },
+     { XOR, {(unsigned char *) 0x7C3E0478}, 0 },
+     { MULADD, {(unsigned char *) 0x457776B7}, 0x24B3 },
+     { XOR, {(unsigned char *) 0x086652BC}, 0 },
+     { MULADD, {(unsigned char *) 0x302F5B13}, 0x371D },
+     { LOOKUP, {table_170}, 0 },
+     { MULADD, {(unsigned char *) 0x58692D47}, 0x0671 },
+     { XOR, {(unsigned char *) 0x6601178E}, 0 },
+     { MULADD, {(unsigned char *) 0x0F195B9B}, 0x1369 },
+     { XOR, {(unsigned char *) 0x07BA21D8}, 0 },
+     { BITFLD, {table_171}, 0 },
+     { BITFLD, {table_172}, 0 },
+     { XOR, {(unsigned char *) 0x13AC3D21}, 0 },
+     { MULADD, {(unsigned char *) 0x5BCF3275}, 0x6E1B },
+     { MULADD, {(unsigned char *) 0x62725C5B}, 0x16B9 },
+     { MULADD, {(unsigned char *) 0x5B950FDF}, 0x2D35 },
+     { BITFLD, {table_173}, 0 },
+     { BITFLD, {table_174}, 0 },
+     { MULADD, {(unsigned char *) 0x73BA5335}, 0x1C13 },
+     { BITFLD, {table_175}, 0 },
+     { BITFLD, {table_176}, 0 },
+     { XOR, {(unsigned char *) 0x3E144154}, 0 },
+     { MULADD, {(unsigned char *) 0x4EED7B27}, 0x38AB },
+     { LOOKUP, {table_177}, 0 },
+     { MULADD, {(unsigned char *) 0x627C7E0F}, 0x7F01 },
+     { MULADD, {(unsigned char *) 0x5D7E1F73}, 0x2C0F },
+     { LOOKUP, {table_178}, 0 },
+     { MULADD, {(unsigned char *) 0x55C9525F}, 0x4659 },
+     { XOR, {(unsigned char *) 0x3765334C}, 0 },
+     { MULADD, {(unsigned char *) 0x5DF66DDF}, 0x7C25 },
+     { LOOKUP, {table_179}, 0 },
+     { LOOKUP, {table_180}, 0 },
+     { XOR, {(unsigned char *) 0x16AE5776}, 0 },
+     { LOOKUP, {table_181}, 0 },
+     { LOOKUP, {table_182}, 0 },
+     { BITFLD, {table_183}, 0 },
+     { BITFLD, {table_184}, 0 },
+     { LOOKUP, {table_185}, 0 },
+     { MULADD, {(unsigned char *) 0x4392327B}, 0x7E0D },
+     { LOOKUP, {table_186}, 0 },
+     { MULADD, {(unsigned char *) 0x3D8B0CB5}, 0x640D },
+     { MULADD, {(unsigned char *) 0x32865601}, 0x4D43 },
+     { BITFLD, {table_187}, 0 }}};
 
 #define A( x ) (( x ) & 0xFF )
 #define B( x ) (( x ) >> 8 & 0xFF )
@@ -4594,18 +4594,18 @@
       case IDENT:
          return seed;
       case XOR:
-         seed ^= xfrm->arg1;
+         seed ^= xfrm->arg1_u.arg1;
          break;
       case MULADD:
-         seed = seed * xfrm->arg1 + xfrm->arg2;
+         seed = seed * xfrm->arg1_u.arg1 + xfrm->arg2;
          break;
       case LOOKUP:
-         arg = (unsigned char *)xfrm->arg1;
+         arg = xfrm->arg1_u.table;
          seed = arg[A( seed )] | arg[B( seed )] << 8 | arg[C( seed )] << 16
             | arg[D( seed )] << 24;
          break;
       case BITFLD:
-         arg = (unsigned char *)xfrm->arg1;
+         arg = xfrm->arg1_u.table;
          for( j = 0, z = 0; j < 32; j++ )
             z = ((( seed >> j ) & 1 ) << arg[j] ) | ( ~( 1 << arg[j] ) & z );
          seed = z;
