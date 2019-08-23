// cha_data.h - data size = 19848 bytes
#ifndef CHA_DATA_H
#define CHA_DATA_H

static CHA_DATA cha_magic[4] = {0x55530,0x68131,22,19848};
static CHA_DATA p00[      64] = { // _size
               256,        64,       128,      2048,      8448,      1032,      1032,      5120,
                 0,         0,        32,        32,        32,        32,        32,       128,
                 8,      1024,         0,         0,         0,       400
};
static CHA_DATA p01[      16] = { // _ivar
                32,         8,       128,         0,       256,         0,         0,       100,
                 0,         0,         0,         0,       100
};
static double   p02[      16] = { // _dvar
                  24000,    0.908230841,    0.998517215,            119,              0,
                    105,             10,            105,    0.980191946,    0.998517215,
                 0.0002,            0.3,         0.0008
};
static CHA_DATA p03[     512] = {         0};
static CHA_DATA p04[    2112] = {
        0x3CF51244,0x00000000,0xBCE91D18,0xBC6D2130,0x3C37410B,0x3CB9ACC8,0xBB6C2738,0xBC7B5C6E,
        0x3A082330,0x3C575A09,0x396C08C8,0xBC19AD9B,0xBAA645A5,0x3C0FEC75,0x3AA609BD,0xBBD8F676,
        0xBAF69FD8,0x3BD41A0C,0x3ADDF455,0xBBA4B00A,0xBB0DBD16,0x3BA4D1B7,0x3AFA24B6,0xBB822C3D,
        0xBB17AD58,0x3B840A9C,0x3B0521E8,0xBB529ABF,0xBB1D9E91,0x3B5732C0,0x3B0A2514,0xBB2C6FE8,
        0xBB216DF0,0x3B30B50C,0x3B0D7274,0xBB0DB4E8,0xBB23FE55,0x3B111300,0x3B0FB5F4,0xBAE7F9A6,
        0xBB25C69C,0x3AEC4B3E,0x3B114D3D,0xBABB8284,0xBB270980,0x3ABD0EFC,0x3B126E92,0xBA93FB8E,
        0xBB27EEAE,0x3A92872E,0x3B133AC4,0xBA5FEC90,0xBB288E68,0x3A56A310,0x3B13C616,0xBA1CC570,
        0xBB28F7B4,0x3A0CC070,0x3B141D0A,0xB9B9AF30,0xBB2933A4,0x398B6420,0x3B1446D4,0xB8F5FD40,
        0xBB294720,0x00000000,0x3EDC9920,0x00000000,0xBDBA82A0,0xBE91DF02,0xBCAC131E,0x3DAC528D,
        0x3BD1F040,0xBDABEC12,0xBC2C44C4,0x3D1964CA,0x3C272157,0xBD4A25F0,0xBC0E6F43,0x3CC5B199,
        0x3C37D258,0xBD0D3D2A,0xBC042230,0x3C8FEB9A,0x3C3EA186,0xBCD58713,0xBBFECB47,0x3C5E7389,
        0x3C420EE0,0xBCA86CD5,0xBBF9AD81,0x3C31B060,0x3C440426,0xBC881587,0xBBF69DE9,0x3C108B1B,
        0x3C453BBC,0xBC5EADD2,0xBBF4A720,0x3BED1D20,0x3C4608EC,0xBC36E7E2,0xBBF354D1,0x3BC2853E,
        0x3C46958E,0xBC15A8CA,0xBBF26989,0x3B9E5530,0x3C46F860,0xBBF1E378,0xBBF1C30D,0x3B7D4514,
        0x3C473E98,0xBBBEDDCC,0xBBF14CDF,0x3B443E2C,0x3C47701A,0xBB9063F0,0xBBF0FA7E,0x3B0FB418,
        0x3C4791E1,0xBB4A2958,0xBBF0C420,0x3ABC7310,0x3C47A704,0xBAEF6F60,0xBBF0A548,0x3A3A9D80,
        0x3C47B124,0xBA1E9800,0xBBF09B40,0x00000000,0x3EE3FDA4,0x00000000,0x3DECF08A,0xBE91DF02,
        0xBBD72B38,0xBDAC528E,0x3C953BB0,0xBDABEC13,0x3B809796,0xBD1964CF,0x3C6C4E09,0xBD4A25F0,
        0x3BBC42A0,0xBCC5B198,0x3C5B9D1D,0xBD0D3D2A,0x3BD0DCBA,0xBC8FEB98,0x3C54CDE5,0xBCD58713,
        0x3BDA55E8,0xBC5E738A,0x3C516090,0xBCA86CD7,0x3BDF73B4,0xBC31B064,0x3C4F6B45,0xBC881587,
        0x3BE28352,0xBC108B1E,0x3C4E33BE,0xBC5EADE2,0x3BE47A00,0xBBED1D20,0x3C4D666E,0xBC36E7E2,
        0x3BE5CC52,0xBBC2853B,0x3C4CD9E1,0xBC15A8D2,0x3BE6B794,0xBB9E5520,0x3C4C770C,0xBBF1E36C,
        0x3BE75E14,0xBB7D4520,0x3C4C30D5,0xBBBEDDCC,0x3BE7D446,0xBB443E20,0x3C4BFF49,0xBB9063F4,
        0x3BE826AC,0xBB0FB418,0x3C4BDD83,0xBB4A2960,0x3BE85D12,0xBABC72C0,0x3C4BC872,0xBAEF6F40,
        0x3BE87BEE,0xBA3A9D80,0x3C4BBE40,0xBA1E9800,0x3BE885E0,0x00000000,0x3D10ACA8,0x00000000,
        0x3D0822B7,0xBC6D212E,0x3C87E796,0xBCB9ACC6,0x3C095A82,0xBC7B5C6E,0x3BC220A8,0xBC575A07,
        0x3B954120,0xBC19AD9A,0x3B878ADA,0xBC0FEC74,0x3B663DF0,0xBBD8F675,0x3B66E8A6,0xBBD41A06,
        0x3B4A489C,0xBBA4B007,0x3B547B7A,0xBBA4D1B6,0x3B3C306C,0xBB822C3E,0x3B4A8B39,0xBB840A9A,
        0x3B3420E0,0xBB529ABD,0x3B449A03,0xBB5732BF,0x3B2F1DB8,0xBB2C6FE8,0x3B40CA9C,0xBB30B510,
        0x3B2BD054,0xBB0DB4E8,0x3B3E3A2F,0xBB1112FF,0x3B298CD8,0xBAE7F9A2,0x3B3C71F7,0xBAEC4B3A,
        0x3B27F590,0xBABB8286,0x3B3B2F0E,0xBABD0F06,0x3B26D43A,0xBA93FB98,0x3B3A49DE,0xBA92872E,
        0x3B260806,0xBA5FEC90,0x3B39AA23,0xBA56A328,0x3B257CB0,0xBA1CC578,0x3B3940D8,0xBA0CC070,
        0x3B2525C1,0xB9B9AF10,0x3B3904EC,0xB98B6400,0x3B24FBF0,0xB8F5FD40,0x3B38F168,0x00000000,
        0xBD932D9C,0x00000000,0x3D62282A,0x3D2D74C5,0xBC1ED974,0xBD457ADD,0xBA6F35F4,0x3CD46702,
        0x3B564473,0xBCAB34FE,0xBB2DE664,0x3C62A395,0x3B74B739,0xBC593F4C,0xBB438F30,0x3C1AA3F6,
        0x3B7B029B,0xBC1D427E,0xBB4B8702,0x3BE797FB,0x3B7D4073,0xBBF26CA7,0xBB4F5C06,0x3BB5D1B6,
        0x3B7E4C53,0xBBC15CF5,0xBB517F3A,0x3B9283BC,0x3B7EDEC4,0xBB9D282D,0xBB52CE88,0x3B6F59C4,
        0x3B7F3744,0xBB80D4A8,0xBB53A950,0x3B4462DC,0x3B7F708C,0xBB534C32,0xBB543E6A,0x3B2091F7,
        0x3B7F974B,0xBB2BF186,0xBB54A6B8,0x3B01B193,0x3B7FB21D,0xBB097ECA,0xBB54F096,0x3ACC9934,
        0x3B7FC4ED,0xBAD50B7C,0xBB5524A0,0x3A9ABCFC,0x3B7FD1DF,0xBA9BFE3C,0xBB554812,0x3A589C70,
        0x3B7FDA5F,0xBA4C8D90,0xBB555E2B,0x3A004270,0x3B7FDF26,0xB9CA8D80,0xBB5568C0,0x3929E700,
        0x3B7FE0B0,0x00000000,0x3DC26884,0x00000000,0xBE3A1C21,0xBD7F02C2,0x3A8694B8,0x3E2272E0,
        0x3BD0245C,0xBD0051B6,0xBC2CD878,0x3D7A79F8,0x3B997766,0xBC8E3153,0xBC3610B6,0x3D1E79C4,
        0x3B90EAA5,0xBC43F9DC,0xBC386B88,0x3CE5587A,0x3B8E06BE,0xBC135735,0xBC395FF4,0x3CB0C258,
        0x3B8CB1E8,0xBBE7D0BC,0xBC39DBBF,0x3C8CFBD4,0x3B8BF852,0xBBBB049D,0xBC3A2317,0x3C652B3C,
        0x3B8B884C,0xBB98DE50,0xBC3A4FC6,0x3C3BDCE4,0x3B8B3FE4,0xBB7AF940,0xBC3A6D5F,0x3C1A0F04,
        0x3B8B0EFA,0xBB4D44C2,0xBC3A81CF,0x3BFABB08,0x3B8AECD8,0xBB25D59F,0xBC3A901C,0x3BC87F7A,
        0x3B8AD4C4,0xBB02D3CC,0xBC3A9A3C,0x3B9B5532,0x3B8AC3D9,0xBAC5E990,0xBC3AA142,0x3B6378D0,
        0x3B8AB852,0xBA8A88F0,0xBC3AA5E2,0x3B152428,0x3B8AB128,0xBA241130,0xBC3AA881,0x3A93AF00,
        0x3B8AADA0,0xB9595680,0xBC3AA95C,0x00000000,0x3DF1285D,0x00000000,0x3E42BC34,0xBD7F02CA,
        0x3CC368AB,0xBE2272E0,0x3B07BC33,0xBD0051B7,0x3C492648,0xBD7A79F6,0x3B751615,0xBC8E3152,
        0x3C3FEE14,0xBD1E79C4,0x3B8317DE,0xBC43F9E2,0x3C3D9346,0xBCE55877,0x3B85FBB4,0xBC13573C,
        0x3C3C9ED4,0xBCB0C258,0x3B875086,0xBBE7D0C2,0x3C3C2313,0xBC8CFBD2,0x3B880A20,0xBBBB049C,
        0x3C3BDBC3,0xBC652B3E,0x3B887A32,0xBB98DE6C,0x3C3BAF06,0xBC3BDCE8,0x3B88C27E,0xBB7AF988,
        0x3C3B9153,0xBC1A0F06,0x3B88F37C,0xBB4D44B0,0x3C3B7CFB,0xBBFABB06,0x3B8915A2,0xBB25D594,
        0x3C3B6EAA,0xBBC87F7E,0x3B892DB6,0xBB02D3D6,0x3C3B648C,0xBB9B5534,0x3B893E98,0xBAC5E99C,
        0x3C3B5D82,0xBB6378E0,0x3B894A1E,0xBA8A88F8,0x3C3B58EA,0xBB152420,0x3B89514A,0xBA241130,
        0x3C3B564A,0xBA93AF00,0x3B8954C0,0xB9595680,0x3C3B5568,0x00000000,0xBDA33522,0x00000000,
        0xBD7D187E,0x3D2D74C6,0xBC8F8AD5,0x3D457ADC,0xBBB99BF8,0x3CD46702,0xBB955632,0x3CAB34FE,
        0xBB808F7C,0x3C62A394,0xBB861CD3,0x3C593F4C,0xBB6B7638,0x3C1AA3F7,0xBB82F724,0x3C1D427C,
        0xBB637E55,0x3BE797FA,0xBB81D837,0x3BF26CA6,0xBB5FA953,0x3BB5D1B8,0xBB81524C,0x3BC15CF5,
        0xBB5D8621,0x3B9283BC,0xBB810914,0x3B9D2833,0xBB5C36D4,0x3B6F59D8,0xBB80DCC8,0x3B80D4AC,
        0xBB5B5BFC,0x3B4462E8,0xBB80C020,0x3B534C2E,0xBB5AC6F1,0x3B2091ED,0xBB80ACCE,0x3B2BF17E,
        0xBB5A5EA9,0x3B01B191,0xBB809F61,0x3B097EC8,0xBB5A14C3,0x3ACC993E,0xBB8095FC,0x3AD50B64,
        0xBB59E0B8,0x3A9ABCF8,0xBB808F81,0x3A9BFE3C,0xBB59BD4B,0x3A589C80,0xBB808B44,0x3A4C8D80,
        0xBB59A733,0x3A004270,0xBB8088DD,0x39CA8E00,0xBB599CA0,0x3929E580,0xBB808818,0x00000000,
        0x3D86104E,0x00000000,0xBD664542,0xBD0ED7B0,0x3C9D4FB9,0x3D5E5085,0x3C1DE2BC,0xBD130B9C,
        0xBC2AC5C1,0x3C952324,0x3C0098E4,0xBC42BF2C,0xBBC3D3BA,0x3C0F91A4,0x3BA7A07E,0xBBE6EC8A,
        0xBB8DE818,0x3BBE4623,0x3B822A30,0xBBA33D07,0xBB69FD4D,0x3B8CEDF5,0x3B5E8A38,0xBB78F777,
        0xBB4F1522,0x3B5C1188,0x3B48F43A,0xBB45506C,0xBB3EFDEE,0x3B3099D2,0x3B3B8BEC,0xBB1F82A4,
        0xBB34ACF0,0x3B0F98B0,0x3B32B8AC,0xBB01FCE4,0xBB2DBBC6,0x3AEA3AD4,0x3B2CACFA,0xBAD39228,
        0xBB28E8C2,0x3ABDE1B0,0x3B286DB4,0xBAAA539A,0xBB257EA9,0x3A976E94,0x3B25698F,0xBA860940,
        0xBB23125C,0x3A6A3128,0x3B2348CD,0xBA4A68F4,0xBB216220,0x3A2B4008,0x3B21D52A,0xBA0D8340,
        0xBB204520,0x39E05CA0,0x3B20ED46,0xB9A777C0,0xBB1FA2D8,0x395E0F00,0x3B207DC0,0xB8DDC400,
        0xBB1F6E30,0x00000000,0xBDAAB1B4,0x00000000,0xBE6527BE,0x3E2FD3C6,0x3E91179A,0x3E56F5CF,
        0x3CD7B064,0xBE529832,0xBBA6DB19,0x3DA15EAD,0x3CBF5340,0xBDA94E6A,0xBC1C9B66,0x3D41EFAD,
        0x3CA958B0,0xBD5B3C4E,0xBC382C8C,0x3D0A4728,0x3CA0310B,0xBD20F3C6,0xBC44EDAD,0x3CD3C8FC,
        0x3C9B938F,0xBCFA4BE6,0xBC4BD13D,0x3CA85A57,0x3C98F0B3,0xBCC89B17,0xBC4FEFD0,0x3C888EAA,
        0x3C974D86,0xBCA34FFA,0xBC5293F2,0x3C5F9AF3,0x3C96399A,0xBC85B476,0xBC545AE0,0x3C3736DC,
        0x3C957C8F,0xBC5A50A6,0xBC559715,0x3C1500F2,0x3C94F7C3,0xBC302694,0xBC5676D3,0x3BEE3462,
        0x3C949973,0xBC0AD730,0xBC5715A2,0x3BB87DC8,0x3C9456E6,0xBBD1E6B0,0xBC578442,0x3B870F08,
        0x3C942982,0xBB92DD18,0xBC57CD3E,0x3B3113E0,0x3C940D2E,0xBB2DE200,0xBC57F6C0,0x3AAF5580,
        0x3C93FF90,0xBA665000,0xBC58043C,0x00000000,0xBD66AB15,0x00000000,0x3E84BCD6,0x3E2FD3C3,
        0x3E9EEEA4,0xBE56F5D1,0x3C15BE12,0xBE529832,0x3CB3B9D4,0xBDA15EAC,0x3C467834,0xBDA94E6A,
        0x3C8F22F2,0xBD41EFAB,0x3C726D67,0xBD5B3C50,0x3C815A5D,0xBD0A4729,0x3C825E4E,0xBD20F3C6,
        0x3C75F39C,0xBCD3C8FE,0x3C86FBC5,0xBCFA4BEC,0x3C6F1014,0xBCA85A56,0x3C899E9F,0xBCC89B16,
        0x3C6AF184,0xBC888EB6,0x3C8B41D8,0xBCA34FFE,0x3C684D4F,0xBC5F9AF5,0x3C8C55C4,0xBC85B472,
        0x3C66866C,0xBC3736F4,0x3C8D12CB,0xBC5A50A4,0x3C654A30,0xBC1500F4,0x3C8D9795,0xBC302688,
        0x3C646A76,0xBBEE3462,0x3C8DF5E8,0xBC0AD732,0x3C63CBA8,0xBBB87DCA,0x3C8E3872,0xBBD1E6B4,
        0x3C635D08,0xBB870F18,0x3C8E65D5,0xBB92DD20,0x3C631414,0xBB3113F0,0x3C8E822B,0xBB2DE200,
        0x3C62EA80,0xBAAF5580,0x3C8E8FC8,0xBA664F00,0x3C62DD14,0x00000000,0x3D8EB426,0x00000000,
        0x3D778CEF,0xBD0ED7B2,0x3CBFDF12,0xBD5E5086,0xBBB18802,0xBD130B9C,0xBBCB4E18,0xBC952323,
        0xBB6DE8B2,0xBC42BF28,0xBAE65920,0xBC0F91A3,0xBA6B1836,0xBBE6EC89,0xB8EAA960,0xBBBE4623,
        0x39813408,0xBBA33D07,0x3A29F668,0xBB8CEDF8,0x3A57C2AA,0xBB78F781,0x3A8ACB8A,0xBB5C1188,
        0x3A970D54,0xBB45506D,0x3AAAF9F8,0xBB3099E2,0x3AB1DDE8,0xBB1F8290,0x3ABF9BE0,0xBB0F98A8,
        0x3AC38478,0xBB01FCE0,0x3ACD7E38,0xBAEA3AE4,0x3ACF9BD4,0xBAD3922A,0x3AD7244A,0xBABDE1B8,
        0x3AD81A59,0xBAAA5396,0x3ADDF86C,0xBA976E9A,0x3ADE22AE,0xBA860944,0x3AE2D116,0xBA6A3138,
        0x3AE2642B,0xBA4A68F8,0x3AE63198,0xBA2B4010,0x3AE54B65,0xBA0D8360,0x3AE86B8A,0xB9E05CC0,
        0x3AE71B32,0xB9A777C0,0x3AE9B008,0xB95E0F00,0x3AE7FA40,0xB8DDC300,0x3AEA1960,0x00000000,
        0xBCF0302E,0x00000000,0x3D1DE785,0x3B708218,0xBD0F0CF3,0xBCB00DFC,0x3CCF781A,0x3CF7287A,
        0xBC0B8593,0xBD18031E,0xBBBF0820,0x3CD445EA,0x3BBE7745,0xBC90E116,0xBBCFEB3A,0x3C5A7BEC,
        0x3BAB9CB5,0xBC318FB8,0xBBB26182,0x3C13BAC2,0x3B9B7AF8,0xBBFE957E,0xBBA0C0BD,0x3BDCE459,
        0x3B91A056,0xBBC37B2E,0xBB962A2D,0x3BAD378E,0x3B8B70CB,0xBB9B5BCA,0xBB8F70E2,0x3B8B2514,
        0x3B876042,0xBB7B1D2A,0xBB8AF664,0x3B61DCB0,0x3B849A07,0xBB4BFA34,0xBB87DF79,0x3B374E24,
        0x3B82A7FE,0xBB24E594,0xBB85B14D,0x3B134A4E,0x3B814568,0xBB033FB0,0xBB8423BA,0x3AE78154,
        0x3B8048BF,0xBACAB288,0xBB830AA6,0x3AAEA29C,0x3B7F305E,0xBA9413B8,0xBB824AA2,0x3A740880,
        0x3B7E4724,0xBA41E120,0xBB81D2B8,0x3A105670,0x3B7DC230,0xB9BFD1C0,0xBB819908,0x393F18E0,
        0x3B7D96FC,0x00000000,0x3C3DCDC6,0x00000000,0x3D6B604C,0x3D9888A8,0x3E4BAC22,0xBE76014A,
        0xBEC4ADBC,0xBE262CD6,0x3B6A80BC,0x3E8C300C,0x3C67A6FA,0xBDBB4D56,0xBCD3BC51,0x3DCF3733,
        0x3C5E6F43,0xBD560F02,0xBCCD623E,0x3D8516DE,0x3C6AC2AD,0xBD17A554,0xBCC87C0F,0x3D434FC4,
        0x3C72529D,0xBCE81922,0xBCC58E86,0x3D17E475,0x3C76E908,0xBCB86DC4,0xBCC3BC58,0x3CF34A06,
        0x3C79D68B,0xBC955E48,0xBCC28B98,0x3CC5971D,0x3C7BCB2F,0xBC73C340,0xBCC1BC34,0x3CA10896,
        0x3C7D2548,0xBC468F88,0xBCC12B16,0x3C827B32,0x3C7E19AD,0xBC1FF5BC,0xBCC0C3E5,0x3C500D2C,
        0x3C7EC80B,0xBBFBE0E2,0xBCC07A70,0x3C20D746,0x3C7F4351,0xBBBE3F90,0xBCC0471B,0x3BEB3050,
        0x3C7F978C,0xBB850AD8,0xBCC02540,0x3B9A0D00,0x3C7FCC40,0xBB1D7780,0xBCC011F0,0x3B187600,
        0x3C7FE588,0xBA508900,0xBCC00BAF,0x00000000,0x3D6CF320,0x00000000,0xBCD1C001,0x3D9888AB,
        0x3E7B0C10,0x3E76014B,0x3ED4FDC8,0xBE262CD2,0x3D4C27B5,0xBE8C300C,0x3C912D1D,0xBDBB4D56,
        0x3CA74314,0xBDCF3733,0x3C95C900,0xBD560F02,0x3CAD9D29,0xBD8516DE,0x3C8F9F3E,0xBD17A555,
        0x3CB28355,0xBD434FC3,0x3C8BD746,0xBCE81920,0x3CB570E8,0xBD17E475,0x3C898C1A,0xBCB86DBA,
        0x3CB74302,0xBCF34A0C,0x3C881553,0xBC955E4B,0x3CB873CD,0xBCC5971D,0x3C871B03,0xBC73C33A,
        0x3CB9432E,0xBCA1089C,0x3C866DFE,0xBC468F7C,0x3CB9D450,0xBC827B36,0x3C85F3C0,0xBC1FF5B4,
        0x3CBA3B7D,0xBC500D24,0x3C859C9A,0xBBFBE0D8,0x3CBA84F7,0xBC20D73E,0x3C855EF8,0xBBBE3F90,
        0x3CBAB846,0xBBEB3080,0x3C8534CD,0xBB850AE0,0x3CBADA26,0xBB9A0CE0,0x3C851A80,0xBB1D7780,
        0x3CBAED74,0xBB1875C0,0x3C850DDB,0xBA508980,0x3CBAF3B9,0x00000000,0xBD1597CA,0x00000000,
        0xBD3B6738,0x3B708232,0xBD2C8CA6,0x3CB00E00,0xBD053BBE,0x3CF7287D,0xBC80C229,0x3D180320,
        0xBAB3D59A,0x3CD445EA,0xBAB6190C,0x3C90E115,0xBA6092C4,0x3C5A7BEE,0xBB00C1AB,0x3C318FB8,
        0xBAE67014,0x3C13BAC1,0xBB21052B,0x3BFE957B,0xBB167998,0x3BDCE45A,0xBB34BA6C,0x3BC37B31,
        0xBB2BA6BA,0x3BAD3788,0xBB41198A,0x3B9B5BCD,0xBB39195A,0x3B8B2513,0xBB493A98,0x3B7B1D26,
        0xBB420E4E,0x3B61DCB2,0xBB4EC706,0x3B4BFA36,0xBB483C2A,0x3B374E1C,0xBB52AB24,0x3B24E582,
        0xBB4C9880,0x3B134A44,0xBB55704F,0x3B033FAA,0xBB4FB3AE,0x3AE78148,0xBB5769A1,0x3ACAB274,
        0xBB51E5D7,0x3AAEA28C,0xBB58CAC8,0x3A9413B0,0xBB5365DB,0x3A740870,0xBB59B402,0x3A41E120,
        0xBB5455B8,0x3A105660,0xBB5A38F8,0x39BFD200,0xBB54C920,0x393F1920,0xBB5A6428,0x00000000,
        0x3B7E9BBF,0x00000000,0xBBB44FEB,0x3AEF98CF,0x3C3673D8,0xBB68998E,0xBCBF6371,0xBC2CAC44,
        0x3B095744,0x3D132B17,0x3CF4304E,0xBC763718,0xBC89898E,0xBC4408AE,0x3AF729AE,0x3C0A02B8,
        0xB90116FC,0xBB8DB003,0xBA06E48C,0x3B18CA18,0x39955B80,0xBAD502D2,0xB9EE2BC0,0x3A852C32,
        0x398749EE,0xBA52E14C,0xB9B6DC20,0x3A0E61D0,0x395CACF8,0xB9F19EE2,0xB98FE347,0x39AADB81,
        0x3935B130,0xB9974698,0xB96B1862,0x395C650E,0x391984E8,0xB9488A7C,0xB946E500,0x3914DE80,
        0x39054C5C,0xB909BCB2,0xB92D8B40,0x38CE97E0,0x38ED8200,0xB8C091E0,0xB91B9E30,0x38909840,
        0x38D8ADB7,0xB8865BC0,0xB90F0610,0x38479400,0x38CA1680,0xB835E880,0xB90676C0,0x3802B200,
        0x38C06F50,0xB7E1D800,0xB9012080,0x37943200,0x38BAEEC0,0xB7589180,0xB8FD23C0,0x36C02B00,
        0x38B924E0,0x00000000,0xBD10F44F,0x00000000,0x3CD5042F,0x3D2645A6,0xBD2DD9A7,0xBDBFDADA,
        0xBD847E54,0x3E8F03CA,0x3EE798EA,0xBE1F71B4,0xBEBBF8FC,0xBEA266F2,0x3A292870,0x3E9B0B52,
        0x3D07C6D6,0xBE15F09A,0xBD004020,0x3DEF48E4,0x3CFCFD21,0xBDB2427E,0xBD019FEC,0x3D9B73A6,
        0x3CFCFDE4,0xBD7FAF64,0xBD0157E5,0x3D65356C,0x3CFD9D8E,0xBD4497AB,0xBD010FCC,0x3D325839,
        0x3CFE1892,0xBD1C30AC,0xBD00DC4C,0x3D0E5743,0x3CFE6E76,0xBCFBCEF1,0xBD00B870,0x3CE5674E,
        0x3CFEAA86,0xBCCB7306,0xBD009F2B,0x3CB875C0,0x3CFED504,0xBCA2FA48,0xBD008D48,0x3C92471E,
        0x3CFEF34D,0xBC7F9DF0,0xBD008088,0x3C615330,0x3CFF089F,0xBC4089D8,0xBD0077AE,0x3C2450B0,
        0x3CFF1738,0xBC066400,0xBD0071D0,0x3BD6E3B0,0x3CFF2044,0xBB9EE0A0,0xBD006E7D,0x3B5477F0,
        0x3CFF24A1,0xBAD24910,0xBD006D69,0x00000000,0x3CDE1774,0x00000000,0x3D157DEE,0x3D2645A4,
        0x3CA44CBC,0x3DBFDAD9,0x3E023F28,0x3E8F03CA,0x3F03CC75,0x3E1F71AE,0x3EDBF8FC,0xBEA266F3,
        0x3D815250,0xBE9B0B53,0x3CF07274,0xBE15F09C,0x3CFF7FC8,0xBDEF48E7,0x3D018167,0xBDB2427F,
        0x3CFCC02F,0xBD9B73A8,0x3D018106,0xBD7FAF68,0x3CFD502A,0xBD65356E,0x3D013137,0xBD4497AB,
        0x3CFDE069,0xBD325838,0x3D00F3BE,0xBD1C30AE,0x3CFE476E,0xBD0E5748,0x3D00C8C4,0xBCFBCEF4,
        0x3CFE8F1D,0xBCE5674F,0x3D00AABF,0xBCCB7316,0x3CFEC18E,0xBCB875B4,0x3D00957A,0xBCA2FA40,
        0x3CFEE56F,0xBC924714,0x3D00865B,0xBC7F9DF8,0x3CFEFEEE,0xBC615328,0x3D007BB0,0xBC4089D0,
        0x3CFF10AE,0xBC2450A0,0x3D007464,0xBC066420,0x3CFF1C58,0xBBD6E410,0x3D006FDF,0xBB9EE0A0,
        0x3CFF2302,0xBB547820,0x3D006DAC,0xBAD24980,0x3CFF2524,0x00000000,0x3B7E9BB6,0x00000000,
        0x3BB44FE5,0x3AEF98C2,0x3C3673D7,0x3B689988,0x3CBF636D,0xBC2CAC41,0x3B09571C,0xBD132B14,
        0xBCF4304C,0xBC76370F,0xBC89898C,0x3C4408B2,0xBAF729AF,0x3C0A02B8,0xB9011682,0x3B8DB006,
        0x3A06E4AA,0x3B18CA14,0x39955B80,0x3AD502D6,0x39EE2B60,0x3A852C2A,0x39874A3B,0x3A52E16D,
        0x39B6DC50,0x3A0E61CC,0x395CAD48,0x39F19EC2,0x398FE35E,0x39AADB65,0x3935B168,0x399746B8,
        0x396B18D4,0x395C6566,0x391985B8,0x39488A1C,0x3946E560,0x3914DE10,0x39054C76,0x3909BC34,
        0x392D8B00,0x38CE9760,0x38ED8180,0x38C090A0,0x391B9DE8,0x38909850,0x38D8ACE4,0x38865BC0,
        0x390F0608,0x38479380,0x38CA1600,0x3835E800,0x390675C0,0x3802B300,0x38C07070,0x37E1DC00,
        0x39012180,0x37943600,0x38BAEF80,0x37589380,0x38FD2440,0x36C02980,0x38B92540,0x00000000,
        0x3B3A87DB,0x00000000,0xBB6989E1,0x3B14F462,0x3B8C74C1,0xBBA6ECB2,0xBBF8311A,0x3C07005C,
        0x3C7B375B,0xBC4DF398,0xBD01AA21,0x3AFC7B0C,0x3CA9D039,0x3C96F930,0xBC3B5169,0xBBE6A865,
        0x3CD58EFA,0x3C75A664,0xBC2F0091,0xBD0676C0,0xBB993E69,0x3CC6A24C,0x3BCD5F28,0xBC8D514E,
        0xBBE11FA5,0x3C563FED,0x3BD3419A,0xBC3280D3,0xBBD6E8F0,0x3C13E68F,0x3BCBE572,0xBC0129D3,
        0xBBCD76BE,0x3BDE0589,0x3BC5A60E,0xBBC57E9C,0xBBC6D4DC,0x3BAC8706,0x3BC11876,0xBB9A5FCE,
        0xBBC239EB,0x3B878926,0x3BBDD578,0xBB71FA6C,0xBBBEFEF3,0x3B53A260,0x3BBB80BA,0xBB3AF428,
        0xBBBCB960,0x3B214558,0x3BB9DB06,0xBB0B6326,0xBBBB2734,0x3AE98300,0x3BB8BB60,0xBAC141C0,
        0xBBBA1F82,0x3A97FA40,0x3BB807F6,0xBA638210,0xBBB989F3,0x3A15DE3C,0x3BB7B1BE,0xB9964250,
        0xBBB95978,0x00000000,0xBD4C7115,0x00000000,0x3D32397F,0x3CCCFE78,0xBD527E08,0xBD341D42,
        0x3D2210C4,0x3DBEF9BA,0xBD7F398A,0xBE09FF5A,0xBD6AAC17,0x3EB54A60,0x3ED61D89,0xBE6D5EEB,
        0xBEEE3AF2,0xBD849426,0x3EB5F1DA,0x3EB84F18,0x3CAD68E0,0xBEBDE632,0xBD2D2CEB,0x3E297C32,
        0x3D5AA1E6,0xBE211C24,0xBD249E16,0x3DCA9480,0x3D5AFC9E,0xBDD55BDD,0xBD259784,0x3D909F7D,
        0x3D59DB38,0xBD9DA53A,0xBD269FDE,0x3D5C5CC7,0x3D58F7DE,0xBD73B954,0xBD275FC4,0x3D2C9BC2,
        0x3D5856B4,0xBD3FC41E,0xBD27E71E,0x3D083EFC,0x3D57E4DE,0xBD16ED2F,0xBD2846F1,0x3CD563D4,
        0x3D579434,0xBCE9DD58,0xBD288AB4,0x3CA2EF40,0x3D575B80,0xBCAEB0A6,0xBD28B9C8,0x3C6C3BD0,
        0x3D5734F9,0xBC728140,0xBD28D8B2,0x3C19E108,0x3D571CFA,0xBC0ED9C4,0xBD28EA48,0x3B97D084,
        0x3D571173,0xBB3CC2BC,0xBD28EFF7,0x00000000,0x3D09D736,0x00000000,0x3D777E36,0x3CCCFE78,
        0x3D03CA42,0x3D341D43,0x3D83D374,0x3DBEF9B8,0x3CAE1D8D,0x3E09FF5A,0x3E2518F4,0x3EB54A60,
        0x3F007349,0x3E6D5EEC,0x3F11B8F4,0xBD849418,0x3EE0BAE4,0xBEB84F18,0x3DA9819A,0xBEBDE630,
        0x3D291B62,0xBE297C31,0x3D4F15DA,0xBE211C24,0x3D31AA36,0xBDCA9482,0x3D4EBB12,0xBDD55BDA,
        0x3D30B0C4,0xBD909F7C,0x3D4FDC87,0xBD9DA53C,0x3D2FA86C,0xBD5C5CCA,0x3D50BFD5,0xBD73B953,
        0x3D2EE886,0xBD2C9BC0,0x3D516102,0xBD3FC41B,0x3D2E612C,0xBD083F00,0x3D51D2DA,0xBD16ED32,
        0x3D2E0156,0xBCD563C8,0x3D522384,0xBCE9DD48,0x3D2DBD94,0xBCA2EF40,0x3D525C40,0xBCAEB0A8,
        0x3D2D8E8C,0xBC6C3BC8,0x3D5282C6,0xBC728140,0x3D2D6F94,0xBC19E108,0x3D529ABB,0xBC0ED9B4,
        0x3D2D5E04,0xBB97D088,0x3D52A63E,0xBB3CC2EC,0x3D2D5852,0x00000000,0x3C5580CC,0x00000000,
        0x3C61414D,0x3B14F45F,0x3C6D1934,0x3BA6ECB0,0x3C917BAF,0x3C07005C,0x3CD10B18,0x3C4DF394,
        0x3D2B61D6,0x3AFC7AEE,0x3CFD3F9C,0xBC96F92C,0x3CB11822,0xBBE6A84B,0x3D147F34,0xBC75A666,
        0x3CAAEFAE,0xBD0676BE,0x3BB47F4A,0xBCC6A24B,0x3B805E89,0xBC8D514E,0x3B593C1C,0xBC563FF0,
        0x3B74F81A,0xBC3280D0,0x3B6DA97E,0xBC13E691,0x3B81D83D,0xBC0129D4,0x3B8046ED,0xBBDE058C,
        0x3B88179B,0xBBC57E97,0x3B86E8D1,0xBBAC870A,0x3B8CA537,0xBB9A5FD1,0x3B8B83BA,0xBB878928,
        0x3B8FE833,0xBB71FA74,0x3B8EBEB4,0xBB53A268,0x3B923CEA,0xBB3AF428,0x3B910444,0xBB214556,
        0x3B93E2A2,0xBB0B6302,0x3B929680,0xBAE982E0,0x3B950254,0xBAC141C2,0x3B939E28,0xBA97FA3C,
        0x3B95B5B9,0xBA638208,0x3B9433B4,0xBA15DE40,0x3B960BEE,0xB9964268,0x3B946438,0x00000000,
        0x39C15460,0x00000000,0xBA1BB4B4,0xBA8C9F06,0x386D7900,0x3B09A446,0x3815F780,0xBB651E12,
        0xBA9B2DF4,0x3B9C6EDE,0x3B07F9D0,0xBBE7B52F,0xBBB3500C,0x3C19CAE9,0x3C52DABA,0xBC58645A,
        0xBCEB5B58,0x3AB5315A,0x3C80C479,0x3CA43AB8,0xB99A4CE0,0xBC28AD72,0x3B2EE46A,0x3B7DFEB8,
        0xBC08F806,0x3B6F9644,0x3CCC45D7,0x3C0BDD29,0xBC27B3D4,0xBCEA1508,0xBBAB8630,0x3CAA555C,
        0x3BD90A0F,0xBC6E5F76,0xBBF09678,0x3C2E7DDC,0x3BDF0721,0xBC10A76D,0xBBE56484,0x3BE835F3,
        0x3BD7C6D8,0xBBC95D1C,0xBBDB6B6D,0x3BA733AC,0x3BD19294,0xBB92A363,0xBBD482D1,0x3B75A2C8,
        0x3BCD17C0,0xBB5602AB,0xBBCFD8E9,0x3B316670,0x3BCA0120,0xBB16B4A0,0xBBCCC7DC,0x3AF10C84,
        0x3BC7FF0D,0xBAC0CFBE,0xBBCAEA83,0x3A8C30D4,0x3BC6DD62,0xBA3C5668,0xBBCA0874,0x39B823EA,
        0x3BC67FD8,0x00000000,0xBDA10E1C,0x00000000,0x3D9F1725,0x3C70E399,0xBDA071CF,0xBD0D6D0E,
        0x3DA0712A,0x3D42B862,0xBD9E0284,0xBD9FB0C6,0x3DA4C8D2,0x3DC1E32C,0xBD9573A4,0xBE1BB9E6,
        0x3DBABCF5,0x3E4D0BAE,0x3CBC6321,0xBEDDD9A4,0xBEC899A2,0x3EAC5A3E,0x3ED88900,0xBDAAA43F,
        0xBED71DB8,0xBD0DAABF,0x3EDCAA82,0x3E31BC53,0xBEA6719E,0xBEE4AD0E,0xBD590BB8,0x3EDA3241,
        0x3D95A363,0xBE5C9B08,0xBDAE3195,0x3E448FF4,0x3D9175D5,0xBE06F4E8,0xBDAE5392,0x3E022CF6,
        0x3D91F92E,0xBDBEA370,0xBDADBE18,0x3DBC4DAE,0x3D92810C,0xBD8CF988,0xBDAD49AA,0x3D8BE87D,
        0x3D92E2DA,0xBD520760,0xBDACF850,0x3D4E9370,0x3D93260B,0xBD18E956,0xBDACC130,0x3D128022,
        0x3D9352BA,0xBCD0C500,0xBDAC9DB4,0x3CBC3A7A,0x3D936E0A,0xBC737F28,0xBDAC89CB,0x3C3847FA,
        0x3D937B03,0xBBA01D66,0xBDAC8362,0x00000000,0x3DB3CDC0,0x00000000,0x3D8C0D04,0x3C70E3AB,
        0x3DB46A11,0x3D0D6D0D,0x3D8AB2F6,0x3D42B860,0x3DB6D954,0x3D9FB0C6,0x3D865B56,0x3DC1E330,
        0x3DBF6837,0x3E1BB9E4,0x3D60CE44,0x3E4D0BAC,0x3E41FA51,0x3EDDD9A4,0x3F09B158,0x3EAC5A3C,
        0x3F16DFFA,0x3DAAA43F,0x3F10F361,0xBD0DAAB9,0x3F18F0BC,0xBE31BC4E,0x3EF13AA6,0xBEE4AD10,
        0x3DE85603,0xBEDA3241,0x3D9580C8,0xBE5C9B0C,0x3DA6AA47,0xBE448FF4,0x3D99AE4E,0xBE06F4E8,
        0x3DA68847,0xBE022CF6,0x3D992AF8,0xBDBEA378,0x3DA71DBC,0xBDBC4DAC,0x3D98A318,0xBD8CF988,
        0x3DA79234,0xBD8BE879,0x3D98414C,0xBD520760,0x3DA7E38E,0xBD4E9374,0x3D97FE14,0xBD18E94C,
        0x3DA81AAB,0xBD128020,0x3D97D16E,0xBCD0C4EA,0x3DA83E28,0xBCBC3A98,0x3D97B61E,0xBC737F10,
        0x3DA8520D,0xBC3847FC,0x3D97A922,0xBBA01D92,0x3DA85876,0x00000000,0xBC20D432,0x00000000,
        0xBC1D2388,0xBA8C9EFC,0xBC25F15A,0xBB09A446,0xBC2774CC,0xBB651E16,0xBC3A4493,0xBB9C6EDA,
        0xBC48DD45,0xBBE7B52D,0xBC80436A,0xBC19CAEB,0xBCBCDCC6,0xBC586461,0xBD1F6560,0xBAB53148,
        0xBCD433DE,0x3CA43AB4,0xBC2BB144,0x3C28AD6A,0xBC5297F2,0x3B7DFEB7,0xBC97EB70,0xBB6F9656,
        0xBD0FDAA0,0x3C0BDD2F,0xBCA74955,0x3CEA1506,0xBBA23786,0x3CAA555D,0xBB696737,0x3C6E5F76,
        0xBB3A4E56,0x3C2E7DDE,0xBB5D6D08,0x3C10A769,0xBB50B258,0x3BE835F0,0xBB6BED98,0x3BC95D19,
        0xBB64A47E,0x3BA733A4,0xBB78562A,0x3B92A358,0xBB7275C4,0x3B75A2BC,0xBB80A5FC,0x3B5602AE,
        0xBB7BC994,0x3B31666C,0xBB83BC8A,0x3B16B4A4,0xBB80F5D2,0x3AF10C8C,0xBB85BE9E,0x3AC0CFDA,
        0xBB82D325,0x3A8C30CC,0xBB86E044,0x3A3C5668,0xBB83B538,0x39B82410,0xBB873DD5,0x00000000,
        0xBAA969EC,0x00000000,0x3A156336,0x399E005C,0xBAA37760,0xBA3608F0,0x39EE75B0,0x3A75F4D0,
        0xBA8F7B3E,0xBAC0D01A,0x393F8710,0x3ADDFD20,0xBA49C306,0xBB20C4E7,0xB9C4D24C,0x3B321DCA,
        0xB894F280,0xBB7F49BC,0xBAD6D9BF,0x3B8F45A7,0x3AED3DFE,0xBBD4AB24,0xBBBB4E2A,0x3C007660,
        0x3C469AEA,0xBC3B9508,0xBCE84320,0xBAE12A64,0x3C616CA0,0x3CC10FA8,0x3AFA7A57,0xBC83A210,
        0xBB5A5EAA,0x3C333518,0x3B86FEB4,0xBBE9A732,0xBB70E762,0x3BC79720,0x3B7CA0E0,0xBB8F8A31,
        0xBB69A69A,0x3B840224,0x3B6C52FC,0xBB44F267,0xBB624815,0x3B3A2898,0x3B611DF0,0xBB0C3E36,
        0xBB5CD784,0x3B04FF48,0x3B59A280,0xBAC67805,0xBB591650,0x3AB8B5EC,0x3B54C267,0xBA850E64,
        0xBB56A73D,0x3A6A39CC,0x3B51D07A,0xBA1986B0,0xBB55492C,0x39E3A8C0,0x3B506CB6,0xB948E388,
        0xBB54D846,0x00000000,0xBE948510,0x00000000,0x3E957952,0x3CA93948,0xBE948BA6,0xBD2502AB,
        0x3E956B96,0x3D8139ED,0xBE94A1C2,0xBDA97B64,0x3E954AF7,0x3DDFCA26,0xBE94D095,0xBE0569FD,
        0x3E950796,0x3E2710BD,0xBE953412,0xBE405515,0x3E946CF5,0x3E6E45C0,0xBE963A08,0xBE88983E,
        0x3E926A90,0x3EAE85B8,0xBE9B7EBC,0xBED4096A,0x3E4343B4,0x3F2B0A79,0x3E38BA6D,0xBF1C0832,
        0xBE5442A9,0x3EC620B5,0x3E59BCBD,0xBEAC881F,0xBE520523,0x3E895521,0x3E59EE87,0xBE794A6C,
        0xBE522B4C,0x3E4F4EC4,0x3E59BADC,0xBE3DAD44,0xBE525BE0,0x3E1FBF90,0x3E5990E4,0xBE11951F,
        0xBE527F20,0x3DF48C34,0x3E5973A8,0xBDDBA9FA,0xBE52972B,0x3DB55262,0x3E596006,0xBD9E0EFC,
        0xBE52A70A,0x3D7A8FA9,0x3E595374,0xBD4CFAB8,0xBE52B0AD,0x3D1333AA,0x3E594C70,0xBCC9BB0E,
        0xBE52B540,0x3C4244F0,0x3E594A35,0x00000000,0x3E92DF76,0x00000000,0x3E972227,0x3CA9395A,
        0x3E92D8DE,0x3D2502B2,0x3E972FE6,0x3D8139E7,0x3E92C2C3,0x3DA97B6B,0x3E975087,0x3DDFCA28,
        0x3E9293F3,0x3E0569FF,0x3E9793E4,0x3E2710B6,0x3E923073,0x3E405516,0x3E982E89,0x3E6E45C2,
        0x3E912A7C,0x3E88983D,0x3E9A30EC,0x3EAE85B6,0x3E8BE5C5,0x3ED40969,0x3ECAF9A6,0x3F2B0A7A,
        0x3F41E0DD,0x3F1C0832,0x3F4B5E66,0x3EC620B6,0x3F4A2171,0x3EAC8820,0x3F4ACF06,0x3E895520,
        0x3F4A2DE5,0x3E794A6E,0x3F4AD891,0x3E4F4EC8,0x3F4A20FA,0x3E3DAD42,0x3F4AE4B6,0x3E1FBF8C,
        0x3F4A167C,0x3E11951F,0x3F4AED86,0x3DF48C37,0x3F4A0F2C,0x3DDBA9F8,0x3F4AF388,0x3DB55254,
        0x3F4A0A44,0x3D9E0EFE,0x3F4AF780,0x3D7A8FA5,0x3F4A071E,0x3D4CFABA,0x3F4AF9E9,0x3D13339A,
        0x3F4A055F,0x3CC9BB14,0x3F4AFB0C,0x3C424510,0x3F4A04CF,0x00000000,0x3B86C1CA,0x00000000,
        0x3B89F502,0x399E008C,0x3B883E76,0x3A3608A8,0x3B8DBA03,0x3A75F49D,0x3B8D3D76,0x3AC0D018,
        0x3B96A52C,0x3ADDFD1C,0x3B97E3EE,0x3B20C4D0,0x3BA8EE7A,0x3B321D9E,0x3BAEC862,0x3B7F49B2,
        0x3BD257BF,0x3B8F45B3,0x3BEC6BC4,0x3BD4AB37,0x3C2BF7C6,0x3C007660,0x3C8F9484,0x3C3B950B,
        0x3D07B5BA,0xBAE12A96,0x3C9CFD60,0xBCC10FA2,0x3B3C05AA,0xBC83A20E,0x3B07D9DF,0xBC333514,
        0x3A2D1540,0xBBE9A729,0x3AE2A238,0xBBC7970A,0x3A728800,0xBB8F8A24,0x3AF123F8,0xBB84021A,
        0x3A99DF9C,0xBB44F259,0x3AFFE0F2,0xBB3A286E,0x3AB04A14,0xBB0C3E16,0x3B056140,0xBB04FF48,
        0x3ABF40D8,0xBAC67844,0x3B09223A,0xBAB8B613,0x3AC900CA,0xBA850E70,0x3B0B9155,0xBA6A39F0,
        0x3ACEE4AD,0xBA1986BD,0x3B0CEF54,0xB9E3A930,0x3AD1AC26,0xB948E3A8,0x3B0D6045
};
static CHA_DATA p05[     258] = {         0};
static CHA_DATA p06[     258] = {         0};
static CHA_DATA p07[    1280] = {         0};
// empty array ->     p08
// empty array ->     p09
static CHA_DATA p10[       8] = {
        0x4200CCCD,0x41D40000,0x41D5999A,0x41D5999A,0x41EE6666,0x42066666,0x42093333,0x4202CCCD
};
static CHA_DATA p11[       8] = {
        0x3F333333,0x3F666666,0x3F800000,0x3F8CCCCD,0x3F99999A,0x3FB33333,0x3FCCCCCD,0x3FD9999A
};
static CHA_DATA p12[       8] = {
        0xC15981D8,0xC184BA2A,0xC0730F28,0x40D3C361,0x4134E148,0x41BDBF14,0x420F6F35,0x42158DD3
};
static CHA_DATA p13[       8] = {
        0x42825852,0x428F37DC,0x42ADCDED,0x42B9AAA6,0x42C46666,0x42CE999A,0x42CBCCCD,0x42C7999A
};
static CHA_DATA p14[       8] = {         0};
static CHA_DATA p15[      32] = {         0};
static CHA_DATA p16[       2] = {         0};
static CHA_DATA p17[     256] = {         0};
// empty array ->     p18
// empty array ->     p19
// empty array ->     p20
static CHA_DATA p21[     100] = {         0};

static CHA_DATA *cha_data[NPTR+1] = {
    (CHA_DATA *)p00,(CHA_DATA *)p01,(CHA_DATA *)p02,
    p03, p04, p05, p06, p07,NULL,NULL, p10, p11, p12, p13, p14, p15, p16, p17,NULL,
   NULL,NULL, p21,
    cha_magic
};

#endif // CHA_DATA_H
