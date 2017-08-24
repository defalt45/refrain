#include <stdlib.h>
#include <video.h>
#include <input.h>
#include <math.h>
#include "background.h"
#include "bullets.h"
#include "enemy.h"

// pallete information
extern PALETTE	palettes[];

extern TILEMAP	playership[];

extern TILEMAP	title0[];

extern TILEMAP	title1[];

extern TILEMAP	title2[];

extern TILEMAP	title3[];

extern TILEMAP	title4[];

extern TILEMAP	police1[];

extern TILEMAP	police2[];

extern TILEMAP	htp1[];

extern TILEMAP	htp2[];

// used to read in the joystick
DWORD i;
DWORD joy2;

int lastscore;

int	main(void)
{	
		setpalette(0, 2, (const PPALETTE)&palettes);
		clear_fix();
		clear_spr();
		_vbl_count = 0;
		do
		{
			i = poll_joystick(PORT1, READ_DIRECT);

			textoutf(6,14, 0, 0, "Version Alpha 0.0.2build43");
			textoutf(9,16, 0, 0, "Press P1 or P2 start!");
			textoutf(12, 26, 0, 0, "(c) NEO TEAM 2017");

			set_current_sprite(200);
			write_sprite_data(25, 8, 15, 255, 1, 1, (const PTILEMAP)&title0[0]);
			
			set_current_sprite(201);
			write_sprite_data(41, 8, 15, 255, 1, 1, (const PTILEMAP)&title0[1]);
			
			set_current_sprite(202);
			write_sprite_data(57, 8, 15, 255, 1, 1, (const PTILEMAP)&title0[2]);
			
			set_current_sprite(203);
			write_sprite_data(73, 8, 15, 255, 1, 1, (const PTILEMAP)&title0[3]);
			
			set_current_sprite(204);
			write_sprite_data(89, 8, 15, 255, 1, 1, (const PTILEMAP)&title0[4]);
			
			set_current_sprite(205);
			write_sprite_data(105, 8, 15, 255, 1, 1, (const PTILEMAP)&title0[5]);
			
			set_current_sprite(206);
			write_sprite_data(121, 8, 15, 255, 1, 1, (const PTILEMAP)&title0[6]);
			
			set_current_sprite(207);
			write_sprite_data(137, 8, 15, 255, 1, 1, (const PTILEMAP)&title0[7]);
			
			set_current_sprite(208);
			write_sprite_data(153, 8, 15, 255, 1, 1, (const PTILEMAP)&title0[8]);
			
			set_current_sprite(209);
			write_sprite_data(169, 8, 15, 255, 1, 1, (const PTILEMAP)&title0[9]);
			
			set_current_sprite(210);
			write_sprite_data(185, 8, 15, 255, 1, 1, (const PTILEMAP)&title0[10]);
			
			set_current_sprite(211);
			write_sprite_data(201, 8, 15, 255, 1, 1, (const PTILEMAP)&title0[11]);
			
			set_current_sprite(212);
			write_sprite_data(217, 8, 15, 255, 1, 1, (const PTILEMAP)&title0[12]);
			
			set_current_sprite(213);
			write_sprite_data(233, 8, 15, 255, 1, 1, (const PTILEMAP)&title0[13]);
			
			set_current_sprite(214);
			write_sprite_data(249, 8, 15, 255, 1, 1, (const PTILEMAP)&title0[14]);
			
			set_current_sprite(215);
			write_sprite_data(265, 8, 15, 255, 1, 1, (const PTILEMAP)&title0[15]);

			set_current_sprite(216);
			write_sprite_data(281, 8, 15, 255, 1, 1, (const PTILEMAP)&title0[16]);

//##################################################### Title: 2nd line

			set_current_sprite(217);
			write_sprite_data(25, 24, 15, 255, 1, 1, (const PTILEMAP)&title1[0]);
			
			set_current_sprite(218);
			write_sprite_data(41, 24, 15, 255, 1, 1, (const PTILEMAP)&title1[1]);
			
			set_current_sprite(219);
			write_sprite_data(57, 24, 15, 255, 1, 1, (const PTILEMAP)&title1[2]);
			
			set_current_sprite(220);
			write_sprite_data(73, 24, 15, 255, 1, 1, (const PTILEMAP)&title1[3]);
			
			set_current_sprite(221);
			write_sprite_data(89, 24, 15, 255, 1, 1, (const PTILEMAP)&title1[4]);
			
			set_current_sprite(222);
			write_sprite_data(105, 24, 15, 255, 1, 1, (const PTILEMAP)&title1[5]);
			
			set_current_sprite(223);
			write_sprite_data(121, 24, 15, 255, 1, 1, (const PTILEMAP)&title1[6]);
			
			set_current_sprite(224);
			write_sprite_data(137, 24, 15, 255, 1, 1, (const PTILEMAP)&title1[7]);
			
			set_current_sprite(225);
			write_sprite_data(153, 24, 15, 255, 1, 1, (const PTILEMAP)&title1[8]);
			
			set_current_sprite(226);
			write_sprite_data(169, 24, 15, 255, 1, 1, (const PTILEMAP)&title1[9]);
			
			set_current_sprite(227);
			write_sprite_data(185, 24, 15, 255, 1, 1, (const PTILEMAP)&title1[10]);
	
			set_current_sprite(228);
			write_sprite_data(201, 24, 15, 255, 1, 1, (const PTILEMAP)&title1[11]);
			
			set_current_sprite(229);
			write_sprite_data(217, 24, 15, 255, 1, 1, (const PTILEMAP)&title1[12]);
			
			set_current_sprite(230);
			write_sprite_data(233, 24, 15, 255, 1, 1, (const PTILEMAP)&title1[13]);
			
			set_current_sprite(231);
			write_sprite_data(249, 24, 15, 255, 1, 1, (const PTILEMAP)&title1[14]);
			
			set_current_sprite(232);
			write_sprite_data(265, 24, 15, 255, 1, 1, (const PTILEMAP)&title1[15]);

			set_current_sprite(233);
			write_sprite_data(281, 24, 15, 255, 1, 1, (const PTILEMAP)&title1[16]);

//##################################################### Title: 3rd line

			set_current_sprite(234);
			write_sprite_data(25, 40, 15, 255, 1, 1, (const PTILEMAP)&title2[0]);
			
			set_current_sprite(235);
			write_sprite_data(41, 40, 15, 255, 1, 1, (const PTILEMAP)&title2[1]);
			
			set_current_sprite(236);
			write_sprite_data(57, 40, 15, 255, 1, 1, (const PTILEMAP)&title2[2]);
			
			set_current_sprite(237);
			write_sprite_data(73, 40, 15, 255, 1, 1, (const PTILEMAP)&title2[3]);
			
			set_current_sprite(238);
			write_sprite_data(89, 40, 15, 255, 1, 1, (const PTILEMAP)&title2[4]);
			
			set_current_sprite(239);
			write_sprite_data(105, 40, 15, 255, 1, 1, (const PTILEMAP)&title2[5]);
			
			set_current_sprite(240);
			write_sprite_data(121, 40, 15, 255, 1, 1, (const PTILEMAP)&title2[6]);
			
			set_current_sprite(241);
			write_sprite_data(137, 40, 15, 255, 1, 1, (const PTILEMAP)&title2[7]);
			
			set_current_sprite(242);
			write_sprite_data(153, 40, 15, 255, 1, 1, (const PTILEMAP)&title2[8]);
			
			set_current_sprite(243);
			write_sprite_data(169, 40, 15, 255, 1, 1, (const PTILEMAP)&title2[9]);
			
			set_current_sprite(244);
			write_sprite_data(185, 40, 15, 255, 1, 1, (const PTILEMAP)&title2[10]);
	
			set_current_sprite(245);
			write_sprite_data(201, 40, 15, 255, 1, 1, (const PTILEMAP)&title2[11]);
			
			set_current_sprite(246);
			write_sprite_data(217, 40, 15, 255, 1, 1, (const PTILEMAP)&title2[12]);
			
			set_current_sprite(247);
			write_sprite_data(233, 40, 15, 255, 1, 1, (const PTILEMAP)&title2[13]);
			
			set_current_sprite(248);
			write_sprite_data(249, 40, 15, 255, 1, 1, (const PTILEMAP)&title2[14]);
			
			set_current_sprite(249);
			write_sprite_data(265, 40, 15, 255, 1, 1, (const PTILEMAP)&title2[15]);

			set_current_sprite(250);
			write_sprite_data(281, 40, 15, 255, 1, 1, (const PTILEMAP)&title2[16]);


//##################################################### Title: 4th line

			set_current_sprite(251);
			write_sprite_data(25, 56, 15, 255, 1, 1, (const PTILEMAP)&title3[0]);
			
			set_current_sprite(252);
			write_sprite_data(41, 56, 15, 255, 1, 1, (const PTILEMAP)&title3[1]);
			
			set_current_sprite(253);
			write_sprite_data(57, 56, 15, 255, 1, 1, (const PTILEMAP)&title3[2]);
			
			set_current_sprite(254);
			write_sprite_data(73, 56, 15, 255, 1, 1, (const PTILEMAP)&title3[3]);

			set_current_sprite(255);
			write_sprite_data(89, 56, 15, 255, 1, 1, (const PTILEMAP)&title3[4]);
			
			set_current_sprite(256);
			write_sprite_data(105, 56, 15, 255, 1, 1, (const PTILEMAP)&title3[5]);
			
			set_current_sprite(257);
			write_sprite_data(121, 56, 15, 255, 1, 1, (const PTILEMAP)&title3[6]);
			
			set_current_sprite(258);
			write_sprite_data(137, 56, 15, 255, 1, 1, (const PTILEMAP)&title3[7]);
			
			set_current_sprite(259);
			write_sprite_data(153, 56, 15, 255, 1, 1, (const PTILEMAP)&title3[8]);
			
			set_current_sprite(260);
			write_sprite_data(169, 56, 15, 255, 1, 1, (const PTILEMAP)&title3[9]);
			
			set_current_sprite(261);
			write_sprite_data(185, 56, 15, 255, 1, 1, (const PTILEMAP)&title3[10]);
	
			set_current_sprite(262);
			write_sprite_data(201, 56, 15, 255, 1, 1, (const PTILEMAP)&title3[11]);
			
			set_current_sprite(263);
			write_sprite_data(217, 56, 15, 255, 1, 1, (const PTILEMAP)&title3[12]);
			
			set_current_sprite(264);
			write_sprite_data(233, 56, 15, 255, 1, 1, (const PTILEMAP)&title3[13]);
			
			set_current_sprite(264);
			write_sprite_data(249, 56, 15, 255, 1, 1, (const PTILEMAP)&title3[14]);
			
			set_current_sprite(265);
			write_sprite_data(265, 56, 15, 255, 1, 1, (const PTILEMAP)&title3[15]);

			set_current_sprite(266);
			write_sprite_data(281, 56, 15, 255, 1, 1, (const PTILEMAP)&title3[16]);

//##################################################### Title: 5th line

			set_current_sprite(267);
			write_sprite_data(25, 72, 15, 255, 1, 1, (const PTILEMAP)&title4[0]);
			
			set_current_sprite(268);
			write_sprite_data(41, 72, 15, 255, 1, 1, (const PTILEMAP)&title4[1]);
			
			set_current_sprite(269);
			write_sprite_data(57, 72, 15, 255, 1, 1, (const PTILEMAP)&title4[2]);
			
			set_current_sprite(270);
			write_sprite_data(73, 72, 15, 255, 1, 1, (const PTILEMAP)&title4[3]);

			set_current_sprite(271);
			write_sprite_data(89, 72, 15, 255, 1, 1, (const PTILEMAP)&title4[4]);
			
			set_current_sprite(272);
			write_sprite_data(105, 72, 15, 255, 1, 1, (const PTILEMAP)&title4[5]);
			
			set_current_sprite(273);
			write_sprite_data(121, 72, 15, 255, 1, 1, (const PTILEMAP)&title4[6]);
			
			set_current_sprite(274);
			write_sprite_data(137, 72, 15, 255, 1, 1, (const PTILEMAP)&title4[7]);
			
			set_current_sprite(275);
			write_sprite_data(153, 72, 15, 255, 1, 1, (const PTILEMAP)&title4[8]);
			
			set_current_sprite(276);
			write_sprite_data(169, 72, 15, 255, 1, 1, (const PTILEMAP)&title4[9]);
			
			set_current_sprite(277);
			write_sprite_data(185, 72, 15, 255, 1, 1, (const PTILEMAP)&title4[10]);
	
			set_current_sprite(278);
			write_sprite_data(201, 72, 15, 255, 1, 1, (const PTILEMAP)&title4[11]);
			
			set_current_sprite(279);
			write_sprite_data(217, 72, 15, 255, 1, 1, (const PTILEMAP)&title4[12]);
			
			set_current_sprite(280);
			write_sprite_data(233, 72, 15, 255, 1, 1, (const PTILEMAP)&title4[13]);
			
			set_current_sprite(281);
			write_sprite_data(249, 72, 15, 255, 1, 1, (const PTILEMAP)&title4[14]);
			
			set_current_sprite(282);
			write_sprite_data(265, 72, 15, 255, 1, 1, (const PTILEMAP)&title4[15]);

			set_current_sprite(283);
			write_sprite_data(281, 72, 15, 255, 1, 1, (const PTILEMAP)&title4[16]);

			wait_vbl();

		}while(!(i & JOY_START));

		_vbl_count = 0;
		clear_fix();
		clear_spr();

			set_current_sprite(284);
			write_sprite_data(25, 5, 15, 255, 1, 1, (const PTILEMAP)&htp1[7]);
			
			set_current_sprite(285);
			write_sprite_data(25, 21, 15, 255, 1, 1, (const PTILEMAP)&htp2[7]);

			set_current_sprite(286);
			write_sprite_data(41, 5, 15, 255, 1, 1, (const PTILEMAP)&htp1[14]);
			
			set_current_sprite(287);
			write_sprite_data(41, 21, 15, 255, 1, 1, (const PTILEMAP)&htp2[14]);

			set_current_sprite(288);
			write_sprite_data(57, 5, 15, 255, 1, 1, (const PTILEMAP)&htp1[22]);
			
			set_current_sprite(289);
			write_sprite_data(57, 21, 15, 255, 1, 1, (const PTILEMAP)&htp2[22]);

			set_current_sprite(290);
			write_sprite_data(73, 5, 15, 255, 1, 1, (const PTILEMAP)&htp1[23]);
			
			set_current_sprite(291);
			write_sprite_data(73, 21, 15, 255, 1, 1, (const PTILEMAP)&htp2[23]);

			set_current_sprite(292);
			write_sprite_data(105, 5, 15, 255, 1, 1, (const PTILEMAP)&htp1[19]);

			set_current_sprite(293);
			write_sprite_data(105, 21, 15, 255, 1, 1, (const PTILEMAP)&htp2[19]);

			set_current_sprite(294);
			write_sprite_data(121, 5, 15, 255, 1, 1, (const PTILEMAP)&htp1[14]);
			
			set_current_sprite(295);
			write_sprite_data(121, 21, 15, 255, 1, 1, (const PTILEMAP)&htp2[14]);

			set_current_sprite(296);
			write_sprite_data(153, 5, 15, 255, 1, 1, (const PTILEMAP)&htp1[15]);
			
			set_current_sprite(297);
			write_sprite_data(153, 21, 15, 255, 1, 1, (const PTILEMAP)&htp2[15]);

			set_current_sprite(298);
			write_sprite_data(169, 5, 15, 255, 1, 1, (const PTILEMAP)&htp1[11]);
			
			set_current_sprite(299);
			write_sprite_data(169, 21, 15, 255, 1, 1, (const PTILEMAP)&htp2[11]);

			set_current_sprite(300);
			write_sprite_data(185, 5, 15, 255, 1, 1, (const PTILEMAP)&htp1[0]);
			
			set_current_sprite(301);
			write_sprite_data(185, 21, 15, 255, 1, 1, (const PTILEMAP)&htp2[0]);

			set_current_sprite(302);
			write_sprite_data(201, 5, 15, 255, 1, 1, (const PTILEMAP)&htp1[25]);
			
			set_current_sprite(303);
			write_sprite_data(201, 21, 15, 255, 1, 1, (const PTILEMAP)&htp2[25]);

			FIXED cnt;
			cnt = 0;

			textoutf(15, 15, 0, 0, "Press A to increase counter.");
			textoutf(16, 16, 0, 0, cnt);

			while(!(i = JOY_A))
				{
					cnt = cnt + 1;
				}


while(1)
	{

	}
	
	return 0;
}
