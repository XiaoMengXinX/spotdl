#include "main.h"

uint32 process(char a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5)
{
    unsigned int v5;       // eax
    int v6;                // eax
    unsigned int v7;       // edx
    int v8;                // edi
    int v9;                // r8d
    int v10;               // esi
    int v11;               // edi
    int v12;               // eax
    int v13;               // r8d
    int v14;               // edi
    int v15;               // eax
    int v16;               // r8d
    int v17;               // edi
    int v18;               // eax
    int v19;               // r8d
    int v20;               // r9d
    int v21;               // eax
    int v22;               // edi
    unsigned int v23;      // edx
    int v24;               // eax
    int v25;               // r8d
    int v26;               // esi
    unsigned int v27;      // edi
    int v28;               // esi
    unsigned int v29;      // edx
    int v30;               // r9d
    int v31;               // r8d
    unsigned int v32;      // r9d
    unsigned int v33;      // eax
    unsigned int v34;      // edi
    int v35;               // r8d
    int v36;               // esi
    int v37;               // edx
    int v38;               // esi
    __int64 v39;           // r9
    unsigned int v40;      // esi
    unsigned int v41;      // eax
    int v42;               // ecx
    int v43;               // esi
    int v44;               // r8d
    int v45;               // edi
    int v46;               // esi
    int v47;               // edi
    int v48;               // edx
    int v49;               // r9d
    int v50;               // esi
    int v51;               // r10d
    int v52;               // r9d
    int v54;               // edi
    int v55;               // r8d
    int v56;               // r11d
    unsigned int v57;      // eax
    unsigned int v58;      // r8d
    unsigned int v59;      // eax
    unsigned int v60;      // r11d
    int v61;               // ecx
    unsigned int v62;      // eax
    unsigned int v63;      // ebx
    int v64;               // r10d
    unsigned int v65;      // r8d
    int v66;               // ecx
    int v67;               // r10d
    int v68;               // r8d
    int v69;               // r11d
    unsigned int v70;      // edx
    unsigned int v71;      // eax
    int v72;               // ecx
    unsigned int v73;      // r8d
    unsigned int v74;      // edi
    int v75;               // r8d
    unsigned int v76;      // edx
    int v77;               // r10d
    int v78;               // ecx
    int v79;               // r8d
    int v80;               // ecx
    int v81;               // r10d
    int v82;               // eax
    unsigned int v83;      // edx
    int v84;               // r9d
    unsigned int v85;      // r8d
    unsigned int v86;      // eax
    int v87;               // edx
    int v88;               // r9d
    int v89;               // r8d
    unsigned int v90;      // eax
    int v91;               // edx
    int v92;               // r9d
    int v93;               // r10d
    int v94;               // r11d
    int v95;               // edi
    int v96;               // edx
    int v97;               // r11d
    int v98;               // r8d
    int v99;               // edi
    int v100;              // r9d
    int v101;              // edx
    int v102;              // eax
    int v103;              // edi
    int v104;              // r8d
    int v105;              // r9d
    int v106;              // edx
    int v107;              // r8d
    int v108;              // edi
    int v109;              // eax
    unsigned int v110;     // eax
    unsigned int v111;     // edx
    int v112;              // ecx
    unsigned int v113;     // r8d
    unsigned int v114;     // edi
    int v115;              // eax
    int v116;              // ecx
    int v117;              // eax
    unsigned int v118;     // r8d
    unsigned int v119;     // edi
    unsigned int v120;     // eax
    unsigned int v121;     // edx
    unsigned int v122;     // r8d
    int v123;              // r10d
    unsigned int v124;     // edi
    int v125;              // edx
    unsigned int v126;     // r8d
    int v127;              // eax
    unsigned int v128;     // edi
    unsigned int v129;     // edx
    int v130;              // r8d
    int v131;              // eax
    int v132;              // r10d
    int v133;              // eax
    int v134;              // ecx
    int v135;              // edi
    int v136;              // edx
    int v137;              // r8d
    unsigned int v138;     // ecx
    int v139;              // edi
    int v140;              // edx
    int v141;              // eax
    unsigned int v142;     // r8d
    int v143;              // eax
    int v144;              // r8d
    int v145;              // eax
    int v146;              // r10d
    int v147;              // edx
    int v148;              // edi
    int v149;              // r9d
    int v150;              // r10d
    int v151;              // r9d
    int v152;              // edx
    int v153;              // r9d
    int v154;              // r10d
    int v155;              // edx
    int v156;              // edi
    int v157;              // r9d
    int v158;              // eax
    int v159;              // r11d
    int v160;              // edx
    int v161;              // eax
    int v162;              // edi
    int v163;              // eax
    unsigned int v164;     // edx
    int v165;              // esi
    int v166;              // ecx
    int v167;              // eax
    unsigned int v168;     // edi
    int v169;              // esi
    int v170;              // edx
    int v171;              // r8d
    unsigned int v172;     // edi
    int v173;              // esi
    int v174;              // edx
    unsigned int v175;     // eax
    int v176;              // edx
    int v177;              // r8d
    int v178;              // esi
    int v179;              // r10d
    int v180;              // edx
    int v181;              // esi
    int v182;              // ebx
    int v183;              // r11d
    int v184;              // r10d
    unsigned int v185;     // edi
    int v186;              // r9d
    int v187;              // esi
    int v188;              // edx
    unsigned int v189;     // edi
    int v190;              // esi
    int v191;              // r9d
    int v192;              // eax
    int v193;              // esi
    int v194;              // eax
    int v195;              // r9d
    int v196;              // edi
    int v197;              // eax
    int v198;              // esi
    int v199;              // r10d
    int v200;              // edi
    int v201;              // eax
    int v202;              // esi
    int v203;              // edx
    int v204;              // edi
    int v205;              // edx
    int v206;              // edx
    int v207;              // eax
    int v208;              // r9d
    int v209;              // edx
    int v210;              // eax
    int v211;              // edi
    int v212;              // r9d
    int v213;              // eax
    int v214;              // r9d
    int v215;              // edi
    int v216;              // eax
    int v217;              // ecx
    int v218;              // r8d
    int v219;              // eax
    int v220;              // edi
    int v221;              // edx
    int v222;              // r8d
    int v223;              // esi
    int v224;              // r9d
    int v225;              // r8d
    int v226;              // esi
    int v227;              // edi
    int v228;              // r9d
    unsigned int v229;     // edx
    int v230;              // eax
    int v231;              // ecx
    int v232;              // r9d
    int v233;              // r8d
    int v234;              // eax
    int v235;              // ecx
    int v236;              // esi
    int v237;              // eax
    int v238;              // r10d
    int v239;              // ecx
    int v240;              // esi
    int v241;              // eax
    int v242;              // r11d
    int v243;              // esi
    int v244;              // r9d
    int v245;              // r8d
    int v246;              // eax
    int v247;              // ecx
    int v248;              // ecx
    int v249;              // esi
    int v250;              // r9d
    int v251;              // ecx
    int v252;              // esi
    int v253;              // r9d
    int v254;              // ecx
    int v255;              // esi
    int v256;              // r9d
    int v257;              // ecx
    int v258;              // r10d
    int v259;              // r9d
    int v260;              // ecx
    int v261;              // r10d
    int v262;              // eax
    int v263;              // esi
    int v264;              // eax
    unsigned int v265;     // eax
    int v266;              // esi
    int v267;              // ecx
    unsigned int v268;     // r8d
    int v269;              // eax
    int v270;              // esi
    int v271;              // ecx
    unsigned int v272;     // r8d
    int v273;              // edi
    int v274;              // esi
    int v275;              // ecx
    int v276;              // eax
    int v277;              // r8d
    int v278;              // edi
    int v279;              // r8d
    unsigned int v280;     // edx
    unsigned int v281;     // r9d
    int v282;              // r10d
    int v283;              // eax
    int v284;              // r9d
    int v285;              // esi
    int v286;              // r10d
    int v287;              // eax
    unsigned int v288;     // edx
    int v289;              // esi
    int v290;              // edi
    int v291;              // r8d
    int v292;              // edi
    int v293;              // eax
    int v294;              // esi
    int v295;              // edi
    int v296;              // eax
    int v297;              // esi
    int v298;              // r10d
    int v299;              // edx
    int v300;              // r8d
    int v301;              // eax
    int v302;              // r9d
    int v303;              // edx
    int v304;              // edi
    int v305;              // esi
    int v306;              // r8d
    int v307;              // r9d
    int v308;              // edi
    int v309;              // r8d
    int v310;              // r8d
    int v311;              // edx
    int v312;              // edi
    int v313;              // eax
    int v314;              // r8d
    int v315;              // edi
    int v316;              // ecx
    int v317;              // r8d
    int v318;              // ecx
    int v319;              // eax
    int v320;              // r8d
    int v321;              // edi
    int v322;              // esi
    int v323;              // ecx
    int v324;              // esi
    int v325;              // edi
    int v326;              // eax
    int v327;              // esi
    int v328;              // edi
    int v329;              // eax
    int v330;              // esi
    int v331;              // ecx
    int v332;              // esi
    int v333;              // ecx
    int v334;              // eax
    int v335;              // edi
    int v336;              // r8d
    int v337;              // esi
    int v338;              // r8d
    int v339;              // r9d
    int v340;              // r10d
    unsigned int v341;     // eax
    int v342;              // edi
    unsigned int v343;     // r8d
    unsigned int v344;     // edx
    int v345;              // eax
    int v346;              // r9d
    int v347;              // ecx
    int v348;              // r8d
    int v349;              // eax
    unsigned int v350;     // edx
    unsigned int v351;     // r9d
    int v352;              // ecx
    unsigned int v353;     // edx
    unsigned int v354;     // eax
    int v355;              // ecx
    int v356;              // edi
    unsigned int v357;     // edx
    int v358;              // ecx
    int v359;              // eax
    int v360;              // r8d
    int v361;              // eax
    int v362;              // edi
    int v363;              // ecx
    int v364;              // eax
    unsigned int v365;     // edi
    unsigned int v366;     // edx
    int v367;              // ecx
    int v368;              // r10d
    int v369;              // r8d
    unsigned int v370;     // edi
    int v371;              // ecx
    int v372;              // r8d
    unsigned int v373;     // r10d
    unsigned int v374;     // edi
    int v375;              // edx
    int v376;              // r9d
    int v377;              // r8d
    int v378;              // edi
    int v379;              // ecx
    int v380;              // r8d
    int v381;              // r8d
    int v382;              // r9d
    int v383;              // ecx
    int v384;              // edx
    int v385;              // edi
    int v386;              // r9d
    int v387;              // edx
    int v388;              // ecx
    int v389;              // r8d
    int v390;              // edi
    int v391;              // edx
    int v392;              // r8d
    int v393;              // edi
    unsigned int v394;     // ecx
    int v395;              // edx
    int v396;              // r8d
    int v397;              // r9d
    int v398;              // r8d
    int v399;              // r11d
    int v400;              // edi
    int v401;              // r11d
    int v402;              // r10d
    int v403;              // edi
    int v404;              // r11d
    int v405;              // r10d
    int v406;              // edi
    int v407;              // r11d
    int v408;              // r10d
    int v409;              // ecx
    int v410;              // edx
    int v411;              // edi
    int v412;              // eax
    int v413;              // ecx
    int v414;              // edi
    int v415;              // esi
    int v416;              // r8d
    int v417;              // ecx
    int v418;              // edi
    int v419;              // edx
    int v420;              // r8d
    int v421;              // ecx
    int v422;              // eax
    int v423;              // esi
    int v424;              // edi
    int v425;              // ecx
    int v426;              // eax
    int v427;              // eax
    int v428;              // eax
    int v429;              // edx
    int v430;              // ecx
    int v431;              // r8d
    int v432;              // r8d
    int v433;              // eax
    int v434;              // ecx
    int v435;              // r9d
    int v436;              // eax
    int v437;              // ecx
    int v438;              // r8d
    int v439;              // r9d
    int v440;              // ecx
    int v441;              // eax
    int v442;              // r9d
    int v443;              // ecx
    int v444;              // r8d
    int v445;              // r10d
    int v446;              // r9d
    int v447;              // r8d
    int v448;              // r10d
    int v449;              // edx
    int v450;              // r11d
    int v451;              // eax
    int v452;              // ecx
    int v453;              // r10d
    int v454;              // r9d
    int v455;              // r11d
    int v456;              // ecx
    int v457;              // edx
    int v458;              // r9d
    int v459;              // r10d
    int v460;              // r11d
    int v461;              // r8d
    int v462;              // r9d
    int v463;              // eax
    int v464;              // edx
    int v465;              // r10d
    int v466;              // r8d
    int v467;              // eax
    int v468;              // ecx
    int v469;              // r8d
    int v470;              // edx
    int v471;              // eax
    int v472;              // ecx
    int v473;              // r8d
    int v474;              // edx
    int v475;              // edx
    int v476;              // eax
    int v477;              // ecx
    int v478;              // r8d
    int v479;              // edx
    int v480;              // eax
    int v481;              // ecx
    int v482;              // r8d
    int v483;              // r9d
    int v484;              // ecx
    int v485;              // edx
    int v486;              // r8d
    int v487;              // eax
    int v488;              // ecx
    int v489;              // r9d
    int v490;              // r10d
    int v491;              // r8d
    int v492;              // ecx
    unsigned int v493;     // r9d
    int v494;              // r10d
    int v495;              // r8d
    int v496;              // r11d
    int v497;              // ebx
    int v498;              // r10d
    int v499;              // r8d
    int v500;              // eax
    int v501;              // r9d
    int v502;              // ecx
    int v503;              // et1
    int v504;              // eax
    int v505;              // edx
    int v506;              // eax
    int v507;              // r8d
    int v508;              // ecx
    int v509;              // r9d
    int v510;              // eax
    int v511;              // r10d
    int v512;              // ecx
    int v513;              // r9d
    int v514;              // edx
    int v515;              // eax
    int v516;              // r10d
    int v517;              // r8d
    int v518;              // edx
    int v519;              // ecx
    int v520;              // r9d
    int v521;              // r8d
    int v522;              // eax
    int v523;              // r10d
    int v524;              // ecx
    int v525;              // r8d
    int v526;              // edx
    int v527;              // r10d
    int v528;              // ecx
    int v529;              // r9d
    int v530;              // r11d
    int v531;              // edx
    int v532;              // eax
    int v533;              // ecx
    int v534;              // r9d
    int v535;              // r10d
    int v536;              // ecx
    int v537;              // r8d
    int v538;              // r9d
    int v539;              // ecx
    int v540;              // eax
    int v541;              // ecx
    int v542;              // eax
    unsigned int v543;     // eax
    int v544;              // edi
    unsigned int v545;     // ecx
    int v546;              // edx
    int v547;              // r10d
    unsigned int v548;     // eax
    unsigned int v549;     // ecx
    int v550;              // edx
    unsigned int v551;     // edi
    int v552;              // r8d
    unsigned int v553;     // ecx
    int v554;              // r10d
    int v555;              // edx
    int v556;              // r10d
    unsigned int v557;     // edi
    int v558;              // r8d
    unsigned int v559;     // ecx
    int v560;              // edi
    int v561;              // edx
    int v562;              // r8d
    unsigned int v563;     // eax
    int v564;              // edx
    int v565;              // edi
    int v566;              // r8d
    int v567;              // edx
    int v568;              // r10d
    int v569;              // r11d
    int v570;              // edx
    int v571;              // edi
    int v572;              // r8d
    int v573;              // r9d
    int v574;              // edi
    int v575;              // r8d
    int v576;              // r10d
    int v577;              // edx
    int v578;              // r8d
    unsigned int v579;     // ecx
    int v580;              // r9d
    int v581;              // r8d
    unsigned int v582;     // edx
    int v583;              // eax
    int v584;              // r9d
    int v585;              // ecx
    int v586;              // edx
    int v587;              // eax
    int v588;              // r9d
    int v589;              // eax
    int v590;              // r8d
    int v591;              // r9d
    int v592;              // r8d
    unsigned int v593;     // eax
    int v594;              // r9d
    unsigned int v595;     // r8d
    int v596;              // ecx
    int v597;              // r10d
    unsigned int v598;     // r8d
    int v599;              // r11d
    int v600;              // ecx
    unsigned int v601;     // r11d
    unsigned int v602;     // edx
    unsigned int v603;     // eax
    int v604;              // ecx
    int v605;              // r8d
    unsigned int v606;     // edx
    unsigned int v607;     // eax
    int v608;              // r10d
    unsigned int v609;     // r8d
    int v610;              // r11d
    int v611;              // r10d
    unsigned int v612;     // r11d
    unsigned int v613;     // eax
    int v614;              // ecx
    unsigned int v615;     // r8d
    int v616;              // edx
    int v617;              // ecx
    unsigned int v618;     // r8d
    int v619;              // r9d
    int v620;              // edx
    int v621;              // r10d
    int v622;              // r9d
    int v623;              // eax
    int v624;              // r11d
    int v625;              // ecx
    int v626;              // r8d
    int v627;              // edi
    int v628;              // r8d
    unsigned int v629;     // edx
    int v630;              // ecx
    int v631;              // r8d
    int v632;              // ecx
    int v633;              // r8d
    int v634;              // esi
    int v635;              // eax
    int v636;              // ecx
    unsigned int v637;     // edx
    int v638;              // ecx
    int v639;              // edi
    unsigned int v640;     // eax
    unsigned int v641;     // edx
    int v642;              // ecx
    unsigned int v643;     // edi
    unsigned int v644;     // eax
    int v645;              // r9d
    unsigned int v646;     // edi
    unsigned int v647;     // eax
    int v648;              // r10d
    unsigned int v649;     // r9d
    unsigned int v650;     // edi
    unsigned int v651;     // eax
    int v652;              // r10d
    int v653;              // r9d
    int v654;              // edi
    int v655;              // edx
    int v656;              // r10d
    int v657;              // r9d
    int v658;              // eax
    int v659;              // edi
    int v660;              // r10d
    int v661;              // r9d
    int v662;              // edx
    int v663;              // edi
    int v664;              // eax
    int v665;              // ecx
    int v666;              // r10d
    int v667;              // edi
    int v668;              // r10d
    int v669;              // edx
    int v670;              // eax
    int v671;              // r9d
    int v672;              // esi
    int v673;              // r10d
    int v674;              // eax
    int v675;              // r9d
    int v676;              // ecx
    int v677;              // edx
    int v678;              // eax
    int v679;              // esi
    int v680;              // eax
    int v681;              // eax
    unsigned int v682;     // edx
    int v683;              // ecx
    int v684;              // r8d
    int v685;              // edi
    int v686;              // r8d
    int v687;              // r10d
    int v688;              // eax
    int v689;              // r8d
    unsigned int v690;     // edi
    int v691;              // eax
    int v692;              // r10d
    int v693;              // r9d
    unsigned int v694;     // edi
    int v695;              // eax
    int v696;              // edx
    int v697;              // r10d
    int v698;              // r11d
    unsigned int v699;     // edi
    int v700;              // r10d
    unsigned int v701;     // edx
    int v702;              // edi
    int v703;              // r11d
    int v704;              // r9d
    unsigned int v705;     // edx
    int v706;              // eax
    int v707;              // r8d
    int v708;              // edi
    unsigned int v709;     // edx
    int v710;              // r9d
    int v711;              // r8d
    unsigned int v712;     // eax
    int v713;              // r9d
    unsigned int v714;     // edx
    int v715;              // r8d
    int v716;              // eax
    int v717;              // edi
    int v718;              // edx
    int v719;              // r8d
    int v720;              // eax
    int v721;              // r9d
    int v722;              // edi
    int v723;              // r10d
    int v724;              // eax
    int v725;              // edi
    int v726;              // eax
    unsigned int v727;     // edi
    int v728;              // r9d
    int v729;              // ecx
    int v730;              // r10d
    int v731;              // r10d
    int v732;              // eax
    int v733;              // ecx
    int v734;              // r10d
    int v735;              // edi
    int v736;              // r9d
    int v737;              // esi
    int v738;              // r10d
    int v739;              // ecx
    int v740;              // r9d
    int v741;              // esi
    int v742;              // eax
    int v743;              // ecx
    int v744;              // edi
    int v745;              // esi
    int v746;              // eax
    int v747;              // r9d
    int v748;              // ecx
    int v749;              // esi
    int v750;              // eax
    unsigned int v751;     // edi
    unsigned int v752;     // ecx
    int v753;              // esi
    int v754;              // eax
    int v755;              // r9d
    int v756;              // eax
    unsigned int v757;     // r10d
    int v758;              // ecx
    int v759;              // esi
    int v760;              // r10d
    int v761;              // esi
    int v762;              // eax
    int v763;              // ecx
    int v764;              // ebx
    int v765;              // r10d
    int v766;              // r8d
    int v767;              // eax
    unsigned int v768;     // edi
    int v769;              // esi
    unsigned int v770;     // eax
    unsigned int v771;     // r9d
    unsigned int v772;     // r10d
    int v773;              // eax
    int v774;              // eax
    unsigned int v775;     // r9d
    unsigned int v776;     // edx
    unsigned int v777;     // r9d
    int v778;              // eax
    int v779;              // r9d
    int v780;              // edx
    int v781;              // edi
    int v782;              // r8d
    int v783;              // r9d
    int v784;              // edx
    int v785;              // edi
    int v786;              // r8d
    int v787;              // ecx
    unsigned int v788;     // edx
    int v789;              // eax
    int v790;              // edi
    int v791;              // r8d
    int v792;              // eax
    int v793;              // ecx
    int v794;              // r10d
    int v795;              // eax
    int v796;              // r10d
    int v797;              // edi
    int v798;              // r10d
    int v799;              // r11d
    int v800;              // r9d
    int v801;              // edi
    int v802;              // eax
    int v803;              // r9d
    int v804;              // edi
    int v805;              // r9d
    int v806;              // r8d
    int v807;              // eax
    int v808;              // ecx
    int v809;              // edi
    int v810;              // eax
    int v811;              // ecx
    int v812;              // edi
    int v813;              // r11d
    int v814;              // eax
    int v815;              // r10d
    int v816;              // edi
    int v817;              // r11d
    int v818;              // r10d
    int v819;              // ecx
    int v820;              // edi
    int v821;              // r10d
    int v822;              // eax
    unsigned int v823;     // edx
    int v824;              // r8d
    int v825;              // ecx
    int v826;              // eax
    unsigned int v827;     // edx
    int v828;              // ecx
    int v829;              // r9d
    unsigned int v830;     // eax
    int v831;              // esi
    int v832;              // ecx
    int v833;              // r9d
    int v834;              // r9d
    unsigned int v835;     // edx
    int v836;              // r11d
    int v837;              // ecx
    int v838;              // r11d
    int v839;              // edx
    int v840;              // ecx
    int v841;              // r8d
    int v842;              // edx
    int v843;              // r8d
    int v844;              // ecx
    int v845;              // r8d
    int v846;              // edx
    int v847;              // eax
    int v848;              // r9d
    int v849;              // ecx
    int v850;              // eax
    int v851;              // r9d
    int v852;              // edx
    int v853;              // esi
    unsigned int v854;     // r8d
    int v855;              // ecx
    unsigned int v856;     // eax
    int v857;              // esi
    unsigned int v858;     // edx
    int v859;              // ecx
    int v860;              // edi
    int v861;              // esi
    int v862;              // r8d
    int v863;              // edi
    int v864;              // edx
    int v865;              // esi
    int v866;              // r8d
    int v867;              // edi
    int v868;              // edx
    int v869;              // eax
    int v870;              // r8d
    int v871;              // edi
    int v872;              // edx
    int v873;              // eax
    int v874;              // r8d
    unsigned int v875;     // eax
    int v876;              // ecx
    int v877;              // r8d
    int v878;              // esi
    unsigned int v879;     // ecx
    unsigned int v880;     // r8d
    unsigned int v881;     // ecx
    unsigned int v882;     // edi
    int v883;              // r9d
    int v884;              // edi
    int v885;              // r8d
    int v886;              // r8d
    int v887;              // edx
    int v888;              // edi
    int v889;              // r8d
    int v890;              // ecx
    int v891;              // r8d
    int v892;              // r10d
    int v893;              // r11d
    int v894;              // eax
    int v895;              // r10d
    int v896;              // r11d
    int v897;              // r10d
    int v898;              // eax
    int v899;              // edi
    int v900;              // r10d
    int v901;              // r8d
    int v902;              // ecx
    int v903;              // edi
    int v904;              // r8d
    int v905;              // ecx
    int v906;              // r8d
    int v907;              // ecx
    int v908;              // edi
    int v909;              // eax
    int v910;              // r8d
    int v911;              // edi
    int v912;              // ecx
    int v913;              // eax
    int v914;              // r9d
    int v915;              // r8d
    int v916;              // r9d
    unsigned int v917;     // eax
    unsigned int v918;     // edx
    unsigned __int8 v919;  // di
    int v920;              // ecx
    unsigned int v921;     // edx
    int v922;              // r8d
    int v923;              // eax
    int v924;              // r11d
    int v925;              // r8d
    int v926;              // ecx
    int v927;              // r10d
    int v928;              // eax
    int v929;              // edx
    int v930;              // r10d
    int v931;              // ecx
    int v932;              // eax
    int v933;              // edi
    unsigned int v934;     // ecx
    int v935;              // edx
    int v936;              // eax
    int v937;              // r8d
    int v938;              // edx
    int v939;              // r9d
    int v940;              // eax
    int v941;              // edi
    int v942;              // r9d
    int v943;              // edx
    int v944;              // edi
    int v945;              // r9d
    int v946;              // r10d
    int v947;              // edi
    int v948;              // edx
    int v949;              // r10d
    int v950;              // r9d
    int v951;              // edx
    int v952;              // edx
    unsigned int v953;     // ecx
    int v954;              // edi
    unsigned int v955;     // eax
    int v956;              // r9d
    unsigned int v957;     // edi
    int v958;              // r9d
    unsigned int v959;     // r9d
    int v960;              // r11d
    unsigned int v961;     // edx
    unsigned int v962;     // r10d
    int v963;              // ecx
    unsigned int v964;     // r10d
    int v965;              // ecx
    unsigned int v966;     // edx
    unsigned int v967;     // r8d
    int v968;              // eax
    unsigned int v969;     // r9d
    unsigned int v970;     // eax
    unsigned int v971;     // r10d
    int v972;              // edx
    int v973;              // ecx
    unsigned int v974;     // r10d
    int v975;              // r9d
    int v976;              // r8d
    int v977;              // ecx
    int v978;              // eax
    int v979;              // edx
    int v980;              // r8d
    int v981;              // ecx
    int v982;              // edx
    int v983;              // eax
    int v984;              // eax
    int v985;              // r10d
    int v986;              // r9d
    int v987;              // edi
    int v988;              // eax
    int v989;              // edx
    int v990;              // edi
    int v991;              // r9d
    int v992;              // edi
    int v993;              // eax
    int v994;              // r9d
    int v995;              // eax
    int v996;              // r8d
    int v997;              // eax
    int v998;              // edi
    int v999;              // r8d
    int v1000;             // edx
    int v1001;             // eax
    int v1002;             // r9d
    int v1003;             // r8d
    int v1004;             // edi
    int v1005;             // ecx
    int v1006;             // r8d
    int v1007;             // eax
    int v1008;             // ecx
    int v1009;             // r9d
    int v1010;             // r10d
    int v1011;             // ecx
    int v1012;             // edx
    int v1013;             // r8d
    int v1014;             // r9d
    int v1015;             // ecx
    int v1016;             // edi
    __int64 v1017;         // r9
    int v1018;             // edi
    int v1019;             // r8d
    unsigned int v1020;    // eax
    int v1021;             // ecx
    int v1022;             // r9d
    unsigned int v1023;    // r10d
    int v1024;             // ecx
    unsigned int v1025;    // eax
    int v1026;             // r10d
    int v1027;             // ecx
    int v1028;             // r10d
    unsigned int v1029;    // r8d
    int v1030;             // r8d
    unsigned int v1031;    // edx
    int v1032;             // edi
    unsigned int v1033;    // r8d
    unsigned int v1034;    // edx
    int v1035;             // edi
    int v1036;             // ecx
    unsigned int v1037;    // edx
    unsigned int v1038;    // r9d
    int v1039;             // edi
    unsigned int v1040;    // r9d
    int v1041;             // edi
    int v1042;             // edi
    int v1043;             // r8d
    unsigned int v1044;    // eax
    int v1045;             // ecx
    unsigned int v1046;    // r8d
    unsigned int v1047;    // eax
    int v1048;             // ecx
    int v1049;             // r11d
    int v1050;             // r10d
    int v1051;             // ecx
    int v1052;             // eax
    int v1053;             // r10d
    int v1054;             // ecx
    int v1055;             // r10d
    int v1056;             // r11d
    int v1057;             // r8d
    int v1058;             // ecx
    int v1059;             // r8d
    int v1060;             // edi
    int v1061;             // r9d
    int v1062;             // ecx
    int v1063;             // r8d
    int v1064;             // edx
    int v1065;             // r9d
    int v1066;             // eax
    int v1067;             // r8d
    int v1068;             // edx
    int v1069;             // r10d
    int v1070;             // eax
    int v1071;             // r8d
    int v1072;             // edi
    int v1073;             // ecx
    int v1074;             // eax
    int v1075;             // edx
    int v1076;             // edi
    int v1077;             // ecx
    int v1078;             // esi
    int v1079;             // edx
    int v1080;             // r8d
    int v1081;             // eax
    int v1082;             // ecx
    int v1083;             // eax
    int v1084;             // esi
    int v1085;             // r8d
    int v1086;             // eax
    int v1087;             // ecx
    int v1088;             // esi
    int v1089;             // r8d
    int v1090;             // eax
    int v1091;             // ecx
    int v1092;             // edi
    int v1093;             // esi
    int v1094;             // r8d
    int v1095;             // edi
    int v1096;             // ecx
    int v1097;             // esi
    int v1098;             // edi
    int v1099;             // esi
    int v1100;             // r8d
    int v1101;             // ecx
    unsigned int v1102;    // esi
    int v1103;             // edx
    unsigned int v1104;    // eax
    int v1105;             // r11d
    int v1106;             // r8d
    int v1107;             // edi
    int v1108;             // esi
    int v1109;             // ecx
    int v1110;             // edx
    int v1111;             // esi
    __int64 v1112;         // rax
    int v1113;             // edi
    int v1114;             // r8d
    int v1115;             // ecx
    int v1116;             // esi
    int v1117;             // edi
    int v1118;             // r8d
    int v1119;             // r8d
    int v1120;             // esi
    int v1121;             // edi
    int v1122;             // r8d
    int v1123;             // edi
    int v1124;             // esi
    int v1125;             // r8d
    int v1126;             // esi
    int v1127;             // edi
    int v1128;             // eax
    int v1129;             // esi
    int v1130;             // edx
    int v1131;             // r9d
    int v1132;             // r8d
    int v1133;             // edi
    int v1134;             // r9d
    int v1135;             // r8d
    int v1137;             // esi
    int v1138;             // r8d
    unsigned int v1139;    // eax
    int v1140;             // edi
    int v1141;             // r8d
    unsigned int v1142;    // edi
    int v1143;             // r8d
    int v1144;             // edx
    int v1145;             // ecx
    int v1146;             // r10d
    int v1147;             // edx
    int v1148;             // ecx
    int v1149;             // r8d
    int v1150;             // edx
    int v1151;             // ecx
    int v1152;             // r8d
    unsigned int v1153;    // eax
    unsigned int v1154;    // edx
    int v1155;             // ecx
    unsigned int v1156;    // r8d
    int v1157;             // r10d
    unsigned int v1158;    // edx
    unsigned int v1159;    // ecx
    unsigned int v1160;    // r8d
    int v1161;             // edi
    unsigned int v1162;    // edx
    int v1163;             // r10d
    unsigned int v1164;    // ecx
    unsigned int v1165;    // eax
    int v1166;             // edi
    unsigned int v1167;    // ebx
    unsigned int v1168;    // ecx
    int v1169;             // r8d
    unsigned int v1170;    // edi
    int v1171;             // edx
    unsigned int v1172;    // ecx
    unsigned int v1173;    // r8d
    unsigned int v1174;    // edi
    unsigned int v1175;    // edx
    int v1176;             // eax
    unsigned int v1177;    // ecx
    int v1178;             // edi
    int v1179;             // edx
    unsigned int v1180;    // r8d
    int v1181;             // eax
    int v1182;             // edi
    int v1183;             // ecx
    int v1184;             // r10d
    int v1185;             // eax
    int v1186;             // ecx
    int v1187;             // r9d
    int v1188;             // r11d
    int v1189;             // r9d
    int v1190;             // ecx
    int v1191;             // eax
    int v1192;             // r10d
    int v1193;             // ecx
    int v1194;             // r9d
    int v1195;             // eax
    int v1196;             // edi
    int v1197;             // ebx
    int v1198;             // r8d
    int v1199;             // esi
    int v1200;             // edi
    int v1201;             // r8d
    int v1202;             // edi
    int v1203;             // r8d
    unsigned int v1204;    // esi
    int v1205;             // ecx
    int v1206;             // edi
    unsigned int v1207;    // esi
    int v1208;             // r8d
    int v1209;             // ecx
    int v1210;             // edx
    int v1211;             // esi
    int v1212;             // ecx
    int v1213;             // esi
    int v1214;             // edi
    int v1215;             // r10d
    int v1216;             // r8d
    unsigned int v1217;    // eax
    unsigned int v1218;    // r10d
    int v1219;             // ecx
    unsigned int v1220;    // edx
    int v1221;             // eax
    int v1222;             // edi
    int v1223;             // r8d
    int v1224;             // r10d
    int v1225;             // ebx
    unsigned int v1226;    // edi
    int v1227;             // ecx
    int v1228;             // r10d
    int v1229;             // eax
    int v1230;             // edi
    int v1231;             // edx
    int v1232;             // r10d
    int v1233;             // ecx
    int v1234;             // eax
    int v1235;             // edi
    int v1236;             // ecx
    int v1237;             // r10d
    int v1238;             // eax
    int v1239;             // eax
    int v1240;             // edi
    int v1241;             // edx
    int v1242;             // eax
    int v1243;             // edx
    int v1244;             // edi
    int v1245;             // edx
    int v1246;             // r11d
    int v1247;             // ebx
    int v1248;             // r10d
    int v1249;             // r8d
    int v1250;             // edx
    int v1251;             // r10d
    int v1252;             // esi
    int v1253;             // edx
    int v1255;             // eax
    unsigned int v1256;    // edx
    int v1257;             // ecx
    int v1258;             // r10d
    int v1259;             // edi
    int v1260;             // eax
    unsigned int v1261;    // edx
    int v1262;             // ecx
    int v1263;             // edi
    unsigned int v1264;    // eax
    int v1265;             // r8d
    int v1266;             // ecx
    int v1267;             // edi
    int v1268;             // edi
    int v1269;             // edx
    int v1270;             // ecx
    int v1271;             // eax
    int v1272;             // edx
    unsigned int v1273;    // r8d
    int v1274;             // r10d
    int v1275;             // r9d
    int v1276;             // edi
    int v1277;             // eax
    int v1278;             // edx
    int v1279;             // r10d
    unsigned int v1280;    // ecx
    int v1281;             // r9d
    int v1282;             // eax
    int v1283;             // edx
    unsigned int v1284;    // edi
    int v1285;             // r9d
    int v1286;             // eax
    int v1287;             // edi
    int v1288;             // r8d
    int v1289;             // edi
    int v1290;             // eax
    int v1291;             // edx
    int v1292;             // r11d
    int v1293;             // r10d
    int v1294;             // eax
    int v1295;             // edi
    int v1296;             // r8d
    int v1297;             // ecx
    unsigned int v1298;    // r8d
    int v1299;             // edx
    int v1300;             // edi
    int v1301;             // r10d
    int v1302;             // edi
    int v1303;             // ecx
    int v1304;             // eax
    int v1305;             // edi
    int v1306;             // ecx
    int v1307;             // eax
    int v1308;             // edi
    int v1309;             // ecx
    int v1310;             // eax
    int v1311;             // r11d
    int v1312;             // edx
    int v1313;             // edi
    int v1314;             // r11d
    int v1315;             // edi
    int v1316;             // eax
    int v1317;             // r11d
    int v1318;             // ebx
    int v1319;             // edi
    int v1320;             // r8d
    unsigned int v1321;    // r10d
    int v1322;             // ecx
    int v1323;             // r11d
    unsigned int v1324;    // eax
    int v1325;             // r10d
    unsigned int v1326;    // r9d
    int v1327;             // edx
    int v1328;             // eax
    unsigned int v1329;    // r10d
    int v1330;             // ecx
    unsigned int v1331;    // edx
    int v1332;             // edi
    int v1333;             // r8d
    unsigned int v1334;    // edx
    int v1335;             // ecx
    int v1336;             // edi
    int v1337;             // eax
    unsigned int v1338;    // edx
    int v1339;             // ecx
    int v1340;             // edi
    int v1341;             // eax
    int v1342;             // edx
    int v1343;             // edx
    int v1344;             // ecx
    int v1345;             // r8d
    int v1346;             // edx
    int v1347;             // ecx
    int v1348;             // r8d
    int v1349;             // edx
    int v1350;             // ecx
    int v1351;             // r8d
    int v1352;             // edx
    int v1353;             // edx
    int v1354;             // r8d
    int v1355;             // eax
    int v1356;             // edx
    int v1357;             // r8d
    int v1358;             // eax
    int v1359;             // r9d
    int v1360;             // edx
    int v1361;             // eax
    int v1362;             // edi
    int v1363;             // eax
    int v1364;             // ecx
    unsigned int v1365;    // edx
    int v1366;             // r8d
    int v1367;             // edi
    int v1368;             // r8d
    int v1369;             // eax
    int v1370;             // ecx
    int v1371;             // r8d
    int v1372;             // edi
    unsigned int v1373;    // edx
    int v1374;             // r10d
    int v1375;             // ecx
    unsigned int v1376;    // edx
    int v1377;             // r9d
    int v1378;             // eax
    int v1379;             // ecx
    int v1380;             // edi
    int v1381;             // r9d
    int v1382;             // eax
    int v1383;             // edi
    int v1384;             // r9d
    int v1385;             // edx
    int v1386;             // ecx
    int v1387;             // edi
    int v1388;             // r9d
    int v1389;             // r9d
    int v1390;             // ecx
    int v1391;             // eax
    int v1392;             // r8d
    int v1393;             // eax
    int v1394;             // r9d
    int v1395;             // edx
    int v1396;             // edi
    int v1397;             // eax
    int v1398;             // edx
    int v1399;             // edi
    int v1400;             // eax
    int v1401;             // r8d
    int v1402;             // r10d
    int v1403;             // edi
    int v1404;             // r10d
    int v1405;             // ecx
    int v1406;             // r9d
    int v1407;             // eax
    unsigned int v1408;    // eax
    unsigned int v1409;    // edi
    unsigned int v1410;    // r9d
    unsigned int v1411;    // r8d
    unsigned __int8 v1412; // dl
    int v1413;             // esi
    int v1414;             // r10d
    int v1415;             // r8d
    int v1416;             // r9d
    int v1417;             // esi
    int v1418;             // eax
    int v1419;             // edi
    int v1420;             // esi
    int v1421;             // r9d
    int v1422;             // eax
    int v1423;             // r8d
    int v1424;             // edi
    int v1425;             // esi
    int v1426;             // eax
    int v1427;             // edi
    int v1428;             // r9d
    int v1429;             // esi
    int v1430;             // r8d
    int v1431;             // edi
    int v1432;             // esi
    int v1433;             // r8d
    int v1434;             // r9d
    int v1435;             // edi
    int v1436;             // esi
    int v1437;             // eax
    int v1438;             // r8d
    int v1439;             // r11d
    int v1440;             // r9d
    int v1441;             // edi
    int v1442;             // r8d
    int v1443;             // eax
    int v1444;             // edi
    int v1445;             // esi
    int v1446;             // r9d
    int v1447;             // r10d
    int v1448;             // r9d
    int v1449;             // edi
    int v1450;             // r10d
    int v1451;             // esi
    int v1452;             // eax
    int v1453;             // edi
    int v1454;             // r8d
    int v1455;             // esi
    int v1456;             // eax
    int v1457;             // r9d
    int v1458;             // r8d
    int v1459;             // r10d
    int v1460;             // edi
    int v1461;             // r8d
    unsigned int v1462;    // eax
    int v1463;             // r10d
    int v1464;             // r8d
    int v1465;             // r11d
    int v1466;             // r10d
    int v1467;             // eax
    int v1468;             // r11d
    int v1469;             // r10d
    int v1470;             // r8d
    int v1471;             // eax
    int v1472;             // r11d
    int v1473;             // r10d
    int v1474;             // ecx
    int v1475;             // r8d
    int v1476;             // r10d
    unsigned int v1477;    // edi
    int v1478;             // r8d
    int v1479;             // r9d
    unsigned int v1480;    // edx
    int v1481;             // r9d
    int v1482;             // r8d
    unsigned int v1483;    // eax
    unsigned int v1484;    // r10d
    int v1485;             // ecx
    unsigned int v1486;    // r8d
    unsigned int v1487;    // eax
    int v1488;             // r10d
    int v1489;             // ecx
    unsigned int v1490;    // r9d
    unsigned int v1491;    // eax
    int v1492;             // edi
    unsigned int v1493;    // ecx
    int v1494;             // r8d
    int v1495;             // r9d
    int v1496;             // edi
    int v1497;             // r11d
    unsigned int v1498;    // ecx
    unsigned int v1499;    // edi
    int v1500;             // r8d
    int v1501;             // eax
    int v1502;             // r11d
    int v1503;             // r8d
    int v1504;             // r8d
    int v1505;             // edi
    int v1506;             // ecx
    int v1507;             // esi
    int v1508;             // eax
    int v1509;             // edi
    int v1510;             // ecx
    int v1511;             // r8d
    int v1512;             // esi
    int v1513;             // ecx
    int v1514;             // edi
    int v1515;             // esi
    int v1516;             // ecx
    int v1517;             // edi
    int v1518;             // esi
    int v1519;             // r8d
    int v1520;             // r9d
    unsigned int v1521;    // edx
    unsigned int v1522;    // eax
    int v1523;             // r9d
    unsigned int v1524;    // r8d
    int v1525;             // edx
    unsigned int v1526;    // r9d
    int v1527;             // eax
    unsigned int v1528;    // r9d
    int v1529;             // r10d
    int v1530;             // edi
    int v1531;             // ebx
    unsigned int v1532;    // eax
    int v1533;             // r9d
    int v1534;             // edx
    int v1535;             // edi
    int v1536;             // r8d
    int v1537;             // eax
    int v1538;             // r8d
    int v1539;             // r9d
    int v1540;             // r11d
    int v1541;             // r10d
    int v1542;             // r8d
    int v1543;             // edi
    int v1544;             // r10d
    int v1545;             // r8d
    int v1546;             // edi
    int v1547;             // r9d
    int v1548;             // r10d
    int v1549;             // r11d
    int v1550;             // edi
    int v1551;             // r8d
    int v1552;             // ebx
    int v1553;             // r10d
    int v1554;             // r8d
    int v1555;             // edi
    int v1556;             // r8d
    int v1557;             // r10d
    int v1559;             // r8d
    unsigned int v1560;    // eax
    int v1561;             // esi
    unsigned int v1562;    // r8d
    unsigned int v1563;    // eax
    int v1564;             // ecx
    int v1565;             // esi
    unsigned int v1566;    // eax
    unsigned int v1567;    // edi
    int v1568;             // ecx
    int v1569;             // r8d
    unsigned int v1570;    // edx
    int v1571;             // esi
    unsigned int v1572;    // ecx
    int v1573;             // edi
    unsigned int v1574;    // r8d
    unsigned int v1575;    // edx
    int v1576;             // r8d
    unsigned int v1577;    // esi
    int v1578;             // ecx
    int v1579;             // r8d
    unsigned int v1580;    // eax
    int v1581;             // ecx
    unsigned int v1582;    // r8d
    int v1583;             // r9d
    unsigned int v1584;    // eax
    unsigned int v1585;    // r8d
    int v1586;             // r10d
    int v1587;             // r9d
    unsigned int v1588;    // r11d
    int v1589;             // ebx
    unsigned int v1590;    // r9d
    unsigned int v1591;    // eax
    int v1592;             // ebx
    unsigned int v1593;    // r9d
    int v1594;             // r8d
    int v1595;             // esi
    int v1596;             // r8d
    unsigned int v1597;    // edx
    int v1598;             // ecx
    int v1599;             // r10d
    int v1600;             // r11d
    unsigned int v1601;    // ecx
    int v1602;             // r11d
    int v1603;             // r10d
    int v1604;             // edx
    int v1605;             // ecx
    int v1606;             // r8d
    int v1607;             // r10d
    int v1608;             // edx
    int v1609;             // r8d
    int v1610;             // r10d
    int v1611;             // r11d
    int v1612;             // r10d
    unsigned int v1613;    // eax
    unsigned int v1614;    // edx
    int v1615;             // ecx
    int v1616;             // r9d
    int v1617;             // r10d
    unsigned int v1618;    // edx
    int v1619;             // ecx
    int v1620;             // r10d
    unsigned int v1621;    // r8d
    int v1622;             // eax
    int v1623;             // edx
    int v1624;             // r9d
    int v1625;             // ecx
    unsigned int v1626;    // eax
    int v1627;             // r8d
    int v1628;             // r10d
    int v1629;             // r11d
    unsigned int v1630;    // eax
    int v1631;             // r8d
    unsigned int v1632;    // r10d
    int v1633;             // ecx
    unsigned int v1634;    // r11d
    unsigned int v1635;    // eax
    int v1636;             // ecx
    int v1637;             // edx
    unsigned int v1638;    // r9d
    unsigned int v1639;    // eax
    int v1640;             // ecx
    unsigned int v1641;    // r8d
    unsigned int v1642;    // eax
    int v1643;             // r9d
    int v1644;             // edx
    int v1645;             // r8d
    int v1646;             // r11d
    unsigned int v1647;    // eax
    int v1648;             // edx
    int v1649;             // r9d
    int v1650;             // r10d
    int v1651;             // ecx
    int v1652;             // r8d
    int v1653;             // eax
    int v1654;             // ecx
    int v1655;             // r9d
    int v1656;             // r8d
    int v1657;             // r11d
    int v1658;             // ecx
    int v1659;             // edx
    int v1660;             // eax
    int v1661;             // ecx
    int v1662;             // r8d
    int v1663;             // eax
    int v1664;             // edx
    int v1665;             // ecx
    int v1666;             // r8d
    int v1667;             // eax
    int v1668;             // edx
    int v1669;             // ecx
    int v1670;             // r9d
    int v1671;             // r8d
    int v1672;             // r10d
    int v1673;             // edx
    int v1674;             // r11d
    int v1675;             // eax
    int v1676;             // ecx
    int v1677;             // edx
    int v1678;             // r8d
    int v1679;             // edi
    int v1680;             // eax
    unsigned int v1681;    // eax
    unsigned int v1682;    // edx
    unsigned int v1683;    // r9d
    int v1684;             // ecx
    unsigned int v1685;    // r8d
    unsigned int v1686;    // eax
    unsigned int v1687;    // r8d
    int v1688;             // ecx
    unsigned int v1689;    // r9d
    unsigned int v1690;    // eax
    int v1691;             // r8d
    int v1692;             // ecx
    unsigned int v1693;    // r9d
    int v1694;             // eax
    int v1695;             // r8d
    int v1696;             // ecx
    unsigned int v1697;    // r10d
    int v1698;             // eax
    int v1699;             // edx
    int v1700;             // r8d
    int v1701;             // ecx
    int v1702;             // eax
    int v1703;             // edx
    int v1704;             // ecx
    int v1705;             // r8d
    int v1706;             // eax
    int v1707;             // edx
    int v1708;             // r9d
    int v1709;             // r8d
    int v1710;             // ecx
    int v1711;             // eax
    int v1712;             // edx
    int v1713;             // r9d
    unsigned int v1714;    // r8d
    int v1715;             // ecx
    int v1716;             // eax
    unsigned int v1717;    // edx
    int v1718;             // edx
    unsigned int v1719;    // r8d
    unsigned int v1720;    // eax
    int v1721;             // r10d
    int v1722;             // r9d
    unsigned int v1723;    // eax
    int v1724;             // r10d
    int v1725;             // edx
    unsigned int v1726;    // r11d
    int v1727;             // eax
    int v1728;             // edi
    int v1729;             // edx
    int v1730;             // ecx
    int v1731;             // r9d
    int v1732;             // edx
    int v1733;             // r11d
    int v1734;             // r10d
    int v1735;             // edx
    int v1736;             // ecx
    int v1737;             // eax
    int v1738;             // edx
    int v1739;             // r9d
    int v1740;             // edx
    int v1741;             // r10d
    int v1742;             // eax
    int v1743;             // r9d
    int v1744;             // edx
    unsigned int v1745;    // eax
    unsigned int v1746;    // edx
    int v1747;             // ecx
    int v1748;             // r8d
    int v1749;             // eax
    unsigned int v1750;    // edx
    int v1751;             // r9d
    int v1752;             // r10d
    int v1753;             // r8d
    int v1754;             // ecx
    int v1755;             // r9d
    int v1756;             // r10d
    int v1757;             // r8d
    int v1758;             // edx
    int v1759;             // r10d
    int v1760;             // ecx
    int v1761;             // r11d
    int v1762;             // r8d
    int v1763;             // r11d
    int v1764;             // edx
    int v1765;             // eax
    int v1766;             // ecx
    int v1767;             // edx
    int v1768;             // r9d
    int v1769;             // ecx
    int v1770;             // r8d
    int v1771;             // eax
    int v1772;             // r9d
    int v1773;             // ecx
    int v1774;             // edx
    int v1775;             // eax
    int v1776;             // r10d
    int v1777;             // r9d
    int v1778;             // r8d
    int v1779;             // ecx
    int v1780;             // edx
    int v1781;             // r10d
    int v1782;             // eax
    int v1783;             // ecx
    int v1784;             // r8d
    int v1785;             // edx
    int v1786;             // edx
    int v1787;             // eax
    int v1788;             // r9d
    int v1789;             // edx
    int v1790;             // r9d
    int v1791;             // eax
    int v1792;             // r9d
    int v1793;             // edx
    int v1794;             // eax
    int v1795;             // r8d
    int v1796;             // edx
    int v1797;             // r9d
    int v1798;             // r8d
    int v1799;             // eax
    int v1800;             // edx
    int v1801;             // r8d
    int v1802;             // edx
    int v1803;             // eax
    int v1804;             // eax
    unsigned int v1805;    // edx
    int v1806;             // ecx
    int v1807;             // r8d
    int v1808;             // r8d
    int v1809;             // edi
    int v1810;             // ecx
    int v1811;             // r8d
    int v1812;             // ecx
    int v1813;             // edi
    int v1814;             // r9d
    int v1815;             // eax
    int v1816;             // ecx
    int v1817;             // edx
    int v1818;             // r10d
    int v1819;             // ecx
    int v1820;             // edx
    int v1821;             // r9d
    int v1822;             // r10d
    int v1823;             // ecx
    int v1824;             // edx
    int v1825;             // r9d
    int v1826;             // r8d
    int v1827;             // ecx
    int v1828;             // edx
    int v1829;             // edx
    int v1830;             // r9d
    int v1831;             // eax
    int v1832;             // edx
    int v1833;             // r8d
    int v1834;             // r9d
    int v1835;             // ecx
    int v1836;             // edx
    int v1837;             // r8d
    int v1838;             // eax
    int v1839;             // ecx
    int v1840;             // edx
    int v1841;             // r8d
    int v1842;             // eax
    int v1843;             // ecx
    int v1844;             // r10d
    int v1845;             // edx
    int v1846;             // eax
    int v1847;             // edi
    int v1848;             // r8d
    int v1849;             // r9d
    int v1850;             // ecx
    unsigned int v1851;    // r9d
    int v1852;             // r11d
    int v1853;             // r9d
    int v1854;             // eax
    int v1855;             // r11d
    int v1856;             // r9d
    int v1857;             // r11d
    int v1858;             // r9d
    int v1859;             // eax
    int v1860;             // r11d
    int v1861;             // r9d
    int v1862;             // ecx
    int v1863;             // r11d
    int v1864;             // ebx
    unsigned int v1865;    // edx
    int v1866;             // r9d
    int v1867;             // edi
    int v1868;             // r10d
    unsigned int v1869;    // r8d
    unsigned int v1870;    // edx
    unsigned int v1871;    // eax
    int v1872;             // edi
    int v1873;             // r8d
    int v1874;             // r10d
    int v1875;             // edi
    int v1876;             // r10d
    unsigned int v1877;    // eax
    int v1878;             // edi
    int v1879;             // r8d
    int v1880;             // edx
    unsigned int v1881;    // r10d
    int v1882;             // r8d
    int v1883;             // edx
    int v1884;             // edi
    int v1885;             // r8d
    int v1886;             // edx
    int v1887;             // eax
    int v1888;             // edi
    int v1889;             // r9d
    int v1890;             // edx
    int v1891;             // r8d
    int v1892;             // r9d
    int v1893;             // eax
    int v1894;             // edi
    int v1895;             // edx
    int v1896;             // r8d
    int v1897;             // esi
    int v1898;             // eax
    int v1899;             // ecx
    int v1900;             // esi
    int v1901;             // r8d
    int v1902;             // ecx
    int v1903;             // esi
    int v1904;             // edi
    int v1905;             // r8d
    int v1906;             // esi
    int v1907;             // edi
    int v1908;             // r8d
    int v1909;             // esi
    int v1910;             // edi
    int v1911;             // esi
    int v1912;             // r8d
    unsigned int v1913;    // r9d
    int v1914;             // edi
    int v1915;             // edx
    int v1916;             // r9d
    int v1917;             // edi
    unsigned int v1918;    // edx
    int v1919;             // eax
    int v1920;             // ecx
    int v1921;             // r9d
    int v1922;             // edx
    int v1923;             // r10d
    int v1924;             // edi
    int v1925;             // eax
    int v1926;             // ecx
    int v1927;             // edx
    int v1928;             // edi
    int v1929;             // r9d
    int v1930;             // eax
    int v1931;             // ecx
    int v1932;             // edx
    int v1933;             // eax
    int v1934;             // edi
    int v1935;             // ecx
    int v1936;             // edi
    int v1937;             // eax
    int v1938;             // edx
    int v1939;             // eax
    int v1940;             // r8d
    int v1941;             // r9d
    int v1942;             // esi
    int v1943;             // r9d
    int v1944;             // ecx
    int v1945;             // esi
    int v1946;             // r9d
    int v1947;             // ecx
    int v1948;             // eax
    int v1949;             // esi
    int v1950;             // eax
    int v1951;             // ecx
    int v1952;             // eax
    int v1953;             // esi
    int v1954;             // r8d
    int v1955;             // edx
    unsigned int v1956;    // eax
    int v1957;             // ecx
    int v1958;             // r9d
    int v1959;             // r8d
    unsigned int v1960;    // eax
    int v1961;             // ecx
    int v1962;             // edx
    int v1963;             // r11d
    int v1964;             // r10d
    int v1965;             // r9d
    int v1966;             // r8d
    int v1967;             // ecx
    int v1968;             // r10d
    int v1969;             // eax
    int v1970;             // r8d
    int v1971;             // r9d
    int v1972;             // edx
    int v1973;             // eax
    int v1974;             // r8d
    int v1975;             // edx
    int v1976;             // ecx
    int v1977;             // eax
    int v1978;             // r10d
    int v1979;             // r9d
    int v1980;             // edx
    int v1981;             // ecx
    int v1982;             // r9d
    int v1983;             // esi
    int v1984;             // r9d
    int v1985;             // eax
    unsigned int v1986;    // edi
    unsigned int v1987;    // r10d
    int v1988;             // ecx
    int v1989;             // r9d
    unsigned int v1990;    // edi
    unsigned int v1991;    // eax
    unsigned int v1992;    // r9d
    unsigned int v1993;    // edi
    int v1994;             // r10d
    int v1995;             // edx
    int v1996;             // esi
    int v1997;             // eax
    int v1998;             // r8d
    int v1999;             // edx
    int v2000;             // edx
    int v2001;             // edi
    int v2002;             // esi
    int v2003;             // edx
    int v2004;             // edi
    int v2005;             // r8d
    int v2006;             // edx
    int v2007;             // edi
    int v2008;             // r10d
    int v2009;             // r8d
    int v2010;             // edi
    int v2011;             // r10d
    int v2012;             // edi
    int v2013;             // esi
    int v2014;             // edx
    int v2015;             // eax
    int v2016;             // edi
    int v2017;             // esi
    int v2018;             // edx
    int v2019;             // r8d
    int v2020;             // eax
    int v2021;             // edi
    int v2022;             // r9d
    int v2023;             // r10d
    int v2024;             // r8d
    int v2025;             // edi
    int v2026;             // edx
    int v2027;             // esi
    int v2028;             // r8d
    int v2029;             // edi
    int v2030;             // esi
    int v2031;             // edx
    int v2032;             // eax
    int v2033;             // edi
    int v2034;             // ecx
    int v2035;             // edx
    int v2036;             // r8d
    int v2037;             // eax
    int v2038;             // esi
    int v2039;             // edx
    int v2040;             // eax
    int v2041;             // r8d
    int v2042;             // esi
    int v2043;             // eax
    int v2044;             // edi
    int v2045;             // r8d
    int v2046;             // ecx
    int v2047;             // eax
    int v2048;             // ecx
    int v2049;             // edi
    unsigned int v2050;    // edx
    int v2051;             // esi
    int v2052;             // r8d
    unsigned int v2053;    // eax
    unsigned int v2054;    // edx
    int v2055;             // esi
    int v2056;             // ecx
    int v2057;             // edx
    int v2058;             // edi
    int v2059;             // esi
    int v2060;             // eax
    int v2061;             // r9d
    int v2062;             // r8d
    int v2063;             // eax
    int v2064;             // esi
    int v2065;             // r9d
    int v2066;             // ecx
    int v2067;             // eax
    int v2068;             // ecx
    int v2069;             // edx
    int v2070;             // esi
    int v2071;             // r8d
    int v2072;             // esi
    int v2073;             // edx
    int v2074;             // r9d
    int v2075;             // esi
    int v2076;             // r8d
    int v2077;             // r9d
    int v2078;             // eax
    int v2079;             // r8d
    int v2080;             // edx
    int v2081;             // r8d
    int v2082;             // edx
    int v2083;             // eax
    int v2084;             // r8d
    int v2085;             // eax
    int v2086;             // edx
    int v2087;             // r8d
    int v2088;             // esi
    int v2089;             // edx
    int v2090;             // r8d
    unsigned int v2091;    // eax
    unsigned int v2092;    // edx
    int v2093;             // ecx
    int v2094;             // r8d
    unsigned int v2095;    // edi
    int v2096;             // eax
    int v2097;             // esi
    unsigned int v2098;    // r9d
    int v2099;             // r8d
    int v2100;             // edi
    int v2101;             // esi
    int v2102;             // edi
    int v2103;             // eax
    unsigned int v2104;    // r9d
    int v2105;             // edi
    int v2106;             // esi
    int v2107;             // eax
    unsigned int v2108;    // r9d
    int v2109;             // edi
    unsigned int v2110;    // esi
    unsigned int v2111;    // eax
    int v2112;             // r9d
    unsigned int v2113;    // r10d
    unsigned int v2114;    // ebx
    unsigned int v2115;    // r11d
    unsigned int v2116;    // eax
    int v2117;             // r11d
    int v2118;             // r9d
    int v2119;             // eax
    int v2120;             // r8d
    unsigned int v2121;    // r11d
    int v2122;             // r9d
    unsigned int v2123;    // eax
    int v2124;             // r8d
    int v2125;             // esi
    int v2126;             // edi
    int v2127;             // r9d
    int v2128;             // r8d
    int v2129;             // edi
    int v2130;             // r9d
    int v2131;             // esi
    int v2132;             // r8d
    int v2133;             // edi
    int v2134;             // esi
    int v2135;             // eax
    int v2136;             // r9d
    int v2137;             // esi
    int v2138;             // edi
    int v2139;             // r8d
    int v2140;             // eax
    int v2141;             // r11d
    int v2142;             // r10d
    int v2143;             // edi
    unsigned int v2144;    // eax
    int v2145;             // esi
    int v2146;             // ecx
    int v2147;             // r8d
    int v2148;             // eax
    int v2149;             // edx
    int v2150;             // ecx
    int v2151;             // r9d
    int v2152;             // esi
    int v2153;             // eax
    int v2154;             // ecx
    int v2155;             // edi
    int v2156;             // r9d
    int v2157;             // esi
    int v2158;             // r8d
    int v2159;             // edx
    int v2160;             // ecx
    int v2161;             // r8d
    int v2162;             // edi
    int v2163;             // edx
    int v2164;             // esi
    int v2165;             // ecx
    int v2166;             // edx
    int v2167;             // edx
    int v2168;             // edi
    int v2169;             // esi
    int v2170;             // edx
    int v2171;             // r8d
    int v2172;             // edi
    int v2173;             // edx
    int v2174;             // r9d
    int v2175;             // r10d
    int v2176;             // esi
    int v2177;             // edx
    int v2178;             // r10d
    int v2179;             // ecx
    int v2180;             // r9d
    int v2181;             // r8d
    int v2182;             // esi
    int v2183;             // ecx
    int v2184;             // esi
    int v2185;             // r8d
    int v2186;             // r9d
    int v2187;             // edi
    int v2188;             // ecx
    int v2189;             // r8d
    int v2190;             // r9d
    int v2191;             // edi
    int v2192;             // ecx
    int v2193;             // edx
    int v2194;             // esi
    int v2195;             // r8d
    int v2196;             // ecx
    int v2197;             // edx
    int v2198;             // esi
    int v2199;             // eax
    int v2200;             // ecx
    int v2201;             // edi
    int v2202;             // eax
    int v2203;             // r8d
    unsigned int v2204;    // eax
    unsigned int v2205;    // edx
    int v2206;             // esi
    int v2207;             // r8d
    int v2208;             // eax
    unsigned int v2209;    // edx
    int v2210;             // esi
    int v2211;             // r8d
    int v2212;             // edi
    int v2213;             // r8d
    int v2214;             // eax
    int v2215;             // esi
    int v2216;             // r8d
    int v2217;             // r9d
    int v2218;             // r10d
    int v2219;             // ebx
    int v2220;             // edx
    int v2221;             // eax
    int v2222;             // esi
    int v2223;             // edx
    int v2224;             // edi
    int v2225;             // r10d
    int v2226;             // r11d
    int v2227;             // esi
    int v2228;             // eax
    int v2229;             // edi
    int v2230;             // edx
    int v2231;             // eax
    int v2232;             // edi
    int v2233;             // esi
    int v2234;             // edx
    unsigned int v2235;    // r8d
    int v2236;             // edx
    int v2237;             // r9d
    int v2238;             // eax
    int v2239;             // edx
    int v2240;             // eax
    int v2241;             // r9d
    int v2242;             // r10d
    int v2243;             // r10d
    int v2244;             // eax
    int v2245;             // esi
    int v2246;             // r10d
    int v2247;             // edx
    int v2248;             // r10d
    int v2249;             // r9d
    int v2250;             // esi
    int v2251;             // edx
    int v2252;             // r11d
    int v2253;             // ebx
    int v2254;             // edx
    int v2255;             // edi
    int v2256;             // eax
    int v2257;             // esi
    int v2258;             // eax
    int v2259;             // r10d
    int v2260;             // ebx
    int v2261;             // r9d
    int v2262;             // r10d
    int v2263;             // edi
    int v2264;             // eax
    unsigned int v2265;    // esi
    int v2266;             // r10d
    int v2267;             // edx
    int v2268;             // edi
    int v2269;             // r10d
    int v2270;             // ecx
    int v2271;             // edx
    int v2272;             // eax
    int v2273;             // r10d
    int v2274;             // ecx
    int v2275;             // edx
    int v2276;             // eax
    int v2277;             // r10d
    int v2278;             // esi
    int v2279;             // edx
    int v2280;             // ecx
    int v2281;             // r10d
    int v2282;             // r8d
    int v2283;             // edi
    int v2284;             // edx
    int v2285;             // r8d
    int v2286;             // r10d
    int v2287;             // ecx
    int v2288;             // et1
    int v2289;             // esi
    int v2290;             // edi
    int v2291;             // r8d
    unsigned int v2292;    // edx
    int v2293;             // esi
    int v2294;             // r10d
    int v2295;             // r8d
    int v2296;             // esi
    int v2297;             // edi
    int v2298;             // r10d
    int v2299;             // esi
    int v2300;             // r10d
    int v2301;             // r11d
    int v2302;             // esi
    int v2303;             // ecx
    int v2304;             // r9d
    int v2305;             // edi
    int v2306;             // esi
    int v2307;             // r8d
    int v2308;             // ecx
    int v2309;             // r8d
    int v2310;             // edi
    int v2311;             // esi
    int v2312;             // ecx
    int v2313;             // r10d
    int v2314;             // edx
    int v2315;             // ecx
    int v2316;             // edi
    int v2317;             // esi
    int v2318;             // eax
    int v2319;             // eax
    unsigned int v2320;    // edx
    int v2321;             // ecx
    int v2322;             // edi
    int v2323;             // esi
    int v2324;             // r8d
    unsigned int v2325;    // edi
    int v2326;             // ecx
    int v2327;             // esi
    int v2328;             // eax
    int v2329;             // esi
    int v2330;             // edx
    int v2331;             // ecx
    int v2332;             // r8d
    int v2333;             // esi
    int v2334;             // eax
    int v2335;             // ecx
    int v2336;             // r8d
    int v2337;             // esi
    int v2338;             // r10d
    int v2339;             // edi
    int v2340;             // r8d
    int v2341;             // esi
    int v2342;             // r10d
    int v2343;             // r8d
    int v2344;             // edi
    int v2345;             // r9d
    int v2346;             // esi
    int v2347;             // r8d
    int v2348;             // eax
    int v2349;             // edi
    int v2350;             // edi
    int v2351;             // esi
    int v2352;             // r10d
    int v2353;             // edi
    int v2354;             // eax
    int v2355;             // r10d
    int v2356;             // r9d
    int v2357;             // eax
    int v2358;             // esi
    int v2359;             // edi
    int v2360;             // r10d
    int v2361;             // eax
    int v2362;             // esi
    int v2363;             // r8d
    int v2364;             // edi
    int v2365;             // eax
    int v2366;             // esi
    int v2367;             // r8d
    int v2368;             // r10d
    int v2369;             // esi
    int v2370;             // r11d
    int v2371;             // r9d
    int v2372;             // edi
    int v2373;             // eax
    int v2374;             // esi
    int v2375;             // r8d
    int v2376;             // eax
    int v2377;             // r8d
    int v2378;             // edi
    unsigned int v2379;    // eax
    unsigned int v2380;    // r8d
    int v2381;             // esi
    int v2382;             // edx
    unsigned int v2383;    // eax
    int v2384;             // r9d
    int v2385;             // r8d
    int v2386;             // esi
    int v2387;             // ecx
    int v2388;             // edx
    int v2389;             // edi
    int v2390;             // esi
    int v2391;             // ecx
    int v2392;             // esi
    int v2393;             // r8d
    int v2394;             // edi
    int v2395;             // r10d
    int v2396;             // r8d
    int v2397;             // edx
    int v2398;             // edi
    int v2399;             // r10d
    int v2400;             // eax
    int v2401;             // r8d
    int v2402;             // edi
    int v2403;             // esi
    int v2404;             // edx
    int v2405;             // edi
    int v2406;             // eax
    int v2407;             // eax
    int v2408;             // esi
    int v2409;             // edx
    int v2410;             // r8d
    __int64 v2411;         // rsi
    int v2412;             // edi
    int v2413;             // esi
    int v2414;             // eax
    int v2415;             // r8d
    int v2416;             // esi
    int v2417;             // edi
    int v2418;             // r8d
    int v2419;             // eax
    int v2420;             // r10d
    int v2421;             // edx
    int v2422;             // eax
    int v2423;             // eax
    unsigned int v2424;    // edx
    int v2425;             // r9d
    int v2426;             // r8d
    int v2427;             // ecx
    int v2428;             // eax
    int v2429;             // r10d
    int v2430;             // r9d
    int v2431;             // r8d
    unsigned int v2432;    // edx
    int v2433;             // ecx
    int v2434;             // eax
    int v2435;             // r9d
    int v2436;             // r8d
    int v2437;             // edx
    int v2438;             // r10d
    int v2439;             // r9d
    int v2440;             // eax
    int v2441;             // r10d
    int v2442;             // edx
    int v2443;             // r8d
    int v2444;             // ecx
    int v2445;             // eax
    int v2446;             // r9d
    int v2447;             // r8d
    int v2448;             // ecx
    int v2449;             // r10d
    int v2450;             // edx
    int v2451;             // ecx
    int v2452;             // r9d
    int v2453;             // edx
    int v2454;             // r10d
    int v2455;             // r9d
    int v2456;             // ecx
    int v2457;             // r8d
    int v2458;             // edx
    int v2459;             // eax
    unsigned int v2460;    // ecx
    int v2461;             // edx
    int v2462;             // r8d
    int v2463;             // eax
    int v2464;             // eax
    unsigned int v2465;    // ecx
    int v2466;             // edi
    int v2467;             // r8d
    int v2468;             // edi
    int v2469;             // edi
    int v2470;             // edx
    int v2471;             // eax
    int v2472;             // r8d
    int v2473;             // edx
    int v2474;             // eax
    int v2475;             // r9d
    int v2476;             // eax
    unsigned int v2477;    // esi
    int v2478;             // edi
    int v2479;             // edx
    int v2480;             // r9d
    int v2481;             // r8d
    int v2482;             // r10d
    unsigned int v2483;    // esi
    unsigned int v2484;    // edx
    int v2485;             // r8d
    int v2486;             // edi
    int v2487;             // esi
    int v2488;             // r10d
    int v2489;             // r8d
    int v2490;             // r9d
    int v2491;             // edi
    int v2492;             // edx
    int v2493;             // r8d
    int v2494;             // r9d
    int v2495;             // edi
    int v2496;             // r11d
    int v2497;             // esi
    int v2498;             // r9d
    int v2499;             // edx
    int v2500;             // r8d
    int v2501;             // edi
    int v2502;             // r8d
    int v2503;             // esi
    int v2504;             // r9d
    int v2505;             // r10d
    int v2506;             // r9d
    int v2507;             // r10d
    int v2508;             // r9d
    int v2509;             // esi
    int v2510;             // r10d
    int v2511;             // r9d
    int v2512;             // edi
    int v2513;             // esi
    int v2514;             // r9d
    int v2515;             // edi
    int v2516;             // r9d
    int v2517;             // esi
    int v2518;             // edi
    int v2519;             // r8d
    unsigned int v2520;    // r9d
    int v2521;             // r10d
    unsigned int v2522;    // r8d
    unsigned int v2523;    // r9d
    int v2524;             // eax
    int v2525;             // r8d
    int v2526;             // eax
    int v2527;             // r8d
    int v2528;             // r10d
    int v2529;             // r8d
    int v2530;             // r9d
    unsigned int v2531;    // eax
    int v2532;             // ecx
    int v2533;             // r10d
    unsigned int v2534;    // r8d
    int v2535;             // r9d
    int v2536;             // edi
    int v2537;             // r11d
    int v2538;             // ecx
    int v2539;             // r9d
    int v2540;             // edi
    int v2541;             // eax
    int v2542;             // r10d
    int v2543;             // edi
    int v2544;             // eax
    int v2545;             // edi
    int v2546;             // ecx
    int v2547;             // r9d
    int v2548;             // r10d
    int v2549;             // edi
    int v2550;             // r9d
    int v2551;             // ecx
    int v2552;             // eax
    int v2553;             // r8d
    int v2554;             // edi
    int v2555;             // r9d
    int v2556;             // r8d
    int v2557;             // r10d
    int v2558;             // edi
    int v2559;             // ecx
    int v2560;             // eax
    int v2561;             // edi
    int v2562;             // ecx
    int v2563;             // eax
    int v2564;             // edi
    int v2565;             // ecx
    int v2566;             // edx
    int v2567;             // esi
    int v2568;             // eax
    int v2569;             // eax
    int v2570;             // ecx
    unsigned int v2571;    // esi
    int v2572;             // eax
    unsigned int v2573;    // r9d
    unsigned int v2574;    // edi
    unsigned int v2575;    // ecx
    int v2576;             // eax
    int v2577;             // r8d
    int v2578;             // r10d
    int v2579;             // edi
    unsigned int v2580;    // r9d
    int v2581;             // eax
    int v2582;             // r8d
    int v2583;             // esi
    int v2584;             // r9d
    int v2585;             // eax
    int v2586;             // esi
    int v2587;             // r11d
    int v2588;             // esi
    int v2589;             // edi
    int v2590;             // r11d
    int v2591;             // r10d
    int v2592;             // eax
    int v2593;             // esi
    int v2594;             // edi
    int v2595;             // r8d
    int v2596;             // r10d
    int v2597;             // esi
    int v2598;             // edi
    int v2599;             // r8d
    int v2600;             // eax
    int v2601;             // r9d
    int v2602;             // r10d
    int v2603;             // r11d
    int v2604;             // r10d
    int v2605;             // r11d
    int v2606;             // r9d
    int v2607;             // edx
    int v2608;             // r10d
    int v2609;             // esi
    int v2610;             // eax
    int v2611;             // edi
    int v2612;             // edx
    int v2613;             // esi
    int v2614;             // eax
    unsigned int v2615;    // r8d
    int v2616;             // eax
    int v2617;             // r10d
    int v2618;             // eax
    int v2619;             // r9d
    int v2620;             // esi
    int v2621;             // r9d
    int v2622;             // r10d
    int v2623;             // edx
    int v2624;             // r9d
    int v2625;             // edx
    int v2626;             // r9d
    int v2627;             // r10d
    int v2628;             // eax
    int v2629;             // r9d
    int v2630;             // r10d
    int v2631;             // r10d
    unsigned int v2632;    // r11d
    int v2633;             // ecx
    int v2634;             // edx
    int v2635;             // r10d
    int v2636;             // eax
    int v2637;             // r10d
    int v2638;             // edx
    unsigned int v2639;    // ecx
    int v2640;             // r9d
    int v2641;             // edx
    unsigned int v2642;    // ecx
    int v2643;             // r9d
    int v2644;             // r8d
    int v2645;             // edx
    int v2646;             // eax
    int v2647;             // r9d
    int v2648;             // r8d
    int v2649;             // edx
    int v2650;             // ecx
    int v2651;             // r9d
    int v2652;             // edx
    int v2653;             // r8d
    int v2654;             // eax
    int v2655;             // r10d
    int v2656;             // r8d
    int v2657;             // edx
    int v2658;             // eax
    int v2659;             // r10d
    int v2660;             // ecx
    int v2661;             // edx
    int v2662;             // eax
    int v2663;             // r10d
    int v2664;             // r8d
    int v2665;             // r11d
    int v2666;             // eax
    int v2667;             // ecx
    int v2668;             // r9d
    int v2669;             // edx
    int v2670;             // r8d
    int v2671;             // eax
    int v2672;             // ecx
    int v2673;             // ebx
    int v2674;             // edx
    int v2675;             // eax
    int v2676;             // ecx
    int v2677;             // r8d
    int v2678;             // r9d
    int v2679;             // edx
    int v2680;             // ecx
    int v2681;             // r9d
    int v2682;             // eax
    int v2683;             // ecx
    int v2684;             // r11d
    int v2685;             // r8d
    int v2686;             // r10d
    int v2687;             // edx
    int v2688;             // eax
    int v2689;             // ecx
    int v2690;             // esi
    int v2691;             // eax
    int v2692;             // r8d
    int v2693;             // r10d
    unsigned int v2694;    // edx
    int v2695;             // esi
    int v2696;             // r8d
    unsigned int v2697;    // r10d
    unsigned int v2698;    // edi
    int v2699;             // esi
    unsigned int v2700;    // r9d
    int v2701;             // r8d
    int v2702;             // edi
    unsigned int v2703;    // esi
    int v2704;             // r8d
    unsigned int v2705;    // r9d
    int v2706;             // edi
    unsigned int v2707;    // esi
    int v2708;             // r10d
    int v2709;             // edx
    unsigned int v2710;    // r9d
    int v2711;             // edi
    int v2712;             // r8d
    int v2713;             // ebx
    int v2714;             // r10d
    int v2715;             // esi
    int v2716;             // edx
    int v2717;             // edi
    int v2718;             // r9d
    int v2719;             // r10d
    int v2720;             // edx
    int v2721;             // r9d
    int v2722;             // esi
    int v2723;             // r8d
    int v2724;             // r11d
    int v2725;             // esi
    int v2726;             // edi
    int v2727;             // edx
    int v2728;             // r8d
    int v2729;             // r9d
    int v2730;             // edx
    int v2731;             // r8d
    int v2732;             // edx
    int v2733;             // esi
    int v2734;             // r8d
    int v2735;             // edi
    int v2736;             // r10d
    int v2737;             // edi
    int v2738;             // r8d
    int v2739;             // edx
    int v2740;             // esi
    int v2741;             // r9d
    int v2742;             // r8d
    int v2743;             // edx
    int v2744;             // esi
    int v2745;             // edi
    int v2746;             // r8d
    int v2747;             // edx
    int v2748;             // ecx
    int v2749;             // edi
    int v2750;             // eax
    int v2751;             // r8d
    int v2752;             // eax
    int v2753;             // esi
    int v2754;             // ecx
    int v2755;             // r8d
    int v2756;             // eax
    int v2757;             // esi
    int v2758;             // edx
    int v2759;             // r8d
    int v2760;             // r8d
    int v2761;             // ecx
    int v2762;             // edx
    int v2763;             // r8d
    int v2764;             // ecx
    int v2765;             // edx
    int v2766;             // edi
    int v2767;             // ecx
    int v2768;             // r8d
    int v2769;             // esi
    int v2770;             // edi
    int v2771;             // edx
    int v2772;             // ecx
    int v2773;             // edx
    int v2774;             // r8d
    int v2775;             // eax
    int v2776;             // r10d
    int v2777;             // eax
    int v2778;             // r8d
    int v2779;             // r10d
    int v2780;             // eax
    int v2781;             // r9d
    int v2782;             // r11d
    int v2783;             // r8d
    int v2784;             // ecx
    int v2785;             // r8d
    int v2786;             // r10d
    int v2787;             // edx
    int v2788;             // r9d
    int v2789;             // r8d
    int v2790;             // edx
    int v2791;             // r9d
    int v2792;             // esi
    int v2793;             // edx
    int v2794;             // r8d
    int v2795;             // r9d
    int v2796;             // esi
    int v2797;             // r10d
    int v2798;             // edx
    int v2799;             // r9d
    unsigned int v2800;    // eax
    int v2801;             // r8d
    int v2802;             // esi
    int v2803;             // edi
    int v2804;             // r8d
    int v2805;             // esi
    unsigned int v2806;    // edx
    unsigned int v2807;    // eax
    int v2808;             // ecx
    unsigned int v2809;    // r8d
    unsigned int v2810;    // r10d
    unsigned int v2811;    // r9d
    unsigned int v2812;    // r8d
    unsigned int v2813;    // ecx
    unsigned int v2814;    // r10d
    unsigned int v2815;    // r9d
    unsigned int v2816;    // edx
    unsigned int v2817;    // r10d
    unsigned int v2818;    // r9d
    unsigned int v2819;    // r11d
    unsigned int v2820;    // edx
    unsigned int v2821;    // r10d
    unsigned int v2822;    // edi
    unsigned int v2823;    // eax
    unsigned int v2824;    // r11d
    int v2825;             // edx
    unsigned int v2826;    // eax
    int v2827;             // r9d
    unsigned int v2828;    // edi
    unsigned int v2829;    // edx
    int v2830;             // eax
    int v2831;             // edi
    int v2832;             // r9d
    int v2833;             // edx
    int v2834;             // eax
    int v2835;             // edi
    int v2836;             // r8d
    int v2837;             // edx
    int v2838;             // eax
    int v2839;             // r8d
    int v2840;             // edx
    int v2841;             // eax
    int v2842;             // eax
    unsigned int v2843;    // edx
    int v2844;             // esi
    int v2845;             // ecx
    unsigned int v2846;    // r8d
    int v2847;             // edx
    int v2848;             // ecx
    int v2849;             // esi
    int v2850;             // edx
    int v2851;             // r10d
    int v2852;             // eax
    int v2853;             // esi
    int v2854;             // r10d
    int v2855;             // edx
    int v2856;             // esi
    int v2857;             // r9d
    int v2858;             // r9d
    int v2859;             // eax
    int v2860;             // edx
    int v2861;             // esi
    int v2862;             // r8d
    int v2863;             // r9d
    int v2864;             // edx
    int v2865;             // esi
    int v2866;             // r10d
    int v2867;             // edx
    int v2868;             // esi
    int v2869;             // r8d
    int v2870;             // r9d
    int v2871;             // edx
    int v2872;             // esi
    int v2873;             // r8d
    int v2874;             // r9d
    int v2875;             // r10d
    int v2876;             // esi
    int v2877;             // eax
    int v2878;             // edx
    int v2879;             // esi
    int v2880;             // r8d
    int v2881;             // r8d
    int v2882;             // r9d
    int v2883;             // esi
    int v2884;             // r8d
    int v2885;             // r9d
    int v2886;             // esi
    int v2887;             // r8d
    int v2888;             // r9d
    int v2889;             // r8d
    unsigned int v2890;    // eax
    int v2891;             // esi
    int v2892;             // eax
    int v2893;             // r8d
    int v2894;             // esi
    int v2895;             // edi
    int v2896;             // r8d
    int v2897;             // esi
    int v2898;             // edi
    int v2899;             // r8d
    int v2900;             // esi
    int v2901;             // edi
    int v2902;             // ecx
    int v2903;             // r8d
    unsigned int v2904;    // edi
    int v2905;             // esi
    int v2906;             // r8d
    unsigned int v2907;    // eax
    unsigned int v2908;    // edx
    int v2909;             // ecx
    unsigned int v2910;    // r8d
    int v2911;             // eax
    int v2912;             // r9d
    unsigned int v2913;    // r8d
    int v2914;             // eax
    int v2915;             // edx
    unsigned int v2916;    // r9d
    int v2917;             // ecx
    int v2918;             // eax
    int v2919;             // edx
    unsigned int v2920;    // r9d
    int v2921;             // ecx
    int v2922;             // eax
    int v2923;             // edx
    unsigned int v2924;    // r9d
    int v2925;             // ecx
    int v2926;             // eax
    unsigned int v2927;    // edx
    int v2928;             // r8d
    int v2929;             // r9d
    int v2930;             // eax
    unsigned int v2931;    // r10d
    int v2932;             // ecx
    int v2933;             // r8d
    int v2934;             // ecx
    unsigned int v2935;    // eax
    int v2936;             // r10d
    int v2937;             // r8d
    int v2938;             // ecx
    int v2939;             // edi
    int v2940;             // ecx
    int v2941;             // eax
    int v2942;             // edi
    unsigned int v2943;    // r8d
    unsigned int v2944;    // ecx
    unsigned int v2945;    // r8d
    unsigned int v2946;    // esi
    int v2947;             // eax
    int v2948;             // edx
    int v2949;             // edi
    unsigned int v2950;    // eax
    unsigned int v2951;    // esi
    int v2952;             // edx
    unsigned int v2953;    // edi
    unsigned int v2954;    // ecx
    unsigned int v2955;    // r9d
    int v2956;             // r10d
    int v2957;             // edx
    int v2958;             // eax
    unsigned int v2959;    // ecx
    unsigned int v2960;    // edi
    int v2961;             // edx
    int v2962;             // eax
    int v2963;             // r8d
    int v2964;             // eax
    unsigned int v2965;    // r8d
    int v2966;             // eax
    unsigned int v2967;    // edi
    int v2968;             // edx
    int v2969;             // eax
    unsigned int v2970;    // edi
    int v2971;             // r10d
    int v2972;             // edx
    int v2973;             // eax
    int v2974;             // edi
    int v2975;             // eax
    int v2976;             // r10d
    int v2977;             // r11d
    int v2978;             // r10d
    int v2979;             // esi
    int v2980;             // ecx
    int v2981;             // edi
    int v2982;             // r9d
    int v2983;             // esi
    int v2984;             // ecx
    int v2985;             // eax
    int v2986;             // edi
    int v2987;             // eax
    int v2988;             // r11d
    unsigned int v2989;    // ecx
    int v2990;             // eax
    int v2991;             // r8d
    unsigned int v2992;    // ecx
    int v2993;             // r8d
    int v2994;             // r11d
    int v2995;             // r10d
    int v2996;             // r11d
    int v2997;             // ecx
    int v2998;             // r10d
    unsigned int v2999;    // edx
    int v3000;             // ecx
    int v3001;             // eax
    unsigned int v3002;    // r11d
    int v3003;             // eax
    int v3004;             // r9d
    int v3005;             // r8d
    unsigned int v3006;    // r9d
    int v3007;             // edi
    int v3008;             // ecx
    int v3009;             // r8d
    int v3010;             // edx
    int v3011;             // ecx
    int v3012;             // eax
    unsigned int v3013;    // ecx
    int v3014;             // edi
    int v3015;             // edx
    int v3016;             // edi
    int v3017;             // r8d
    int v3018;             // edi
    int v3019;             // eax
    int v3020;             // r10d
    int v3021;             // edi
    int v3022;             // eax
    int v3023;             // r10d
    int v3024;             // r11d
    int v3025;             // edx
    int v3026;             // eax
    int v3027;             // r10d
    int v3028;             // edi
    int v3029;             // edx
    int v3030;             // r10d
    unsigned int v3031;    // esi
    unsigned int v3032;    // edx
    int v3033;             // ecx
    unsigned int v3034;    // eax
    unsigned int v3035;    // r8d
    unsigned int v3036;    // edx
    unsigned int v3037;    // ecx
    unsigned int v3038;    // r8d
    int v3039;             // eax
    int v3040;             // r9d
    unsigned int v3041;    // ecx
    int v3042;             // r8d
    int v3043;             // edx
    int v3044;             // eax
    int v3045;             // r9d
    unsigned int v3046;    // r11d
    int v3047;             // edx
    int v3048;             // eax
    int v3049;             // r8d
    int v3050;             // r9d
    int v3051;             // r8d
    int v3052;             // edx
    unsigned int v3053;    // eax
    int v3054;             // r8d
    int v3055;             // edi
    int v3056;             // ecx
    int v3057;             // edi
    int v3058;             // edx
    int v3059;             // r10d
    int v3060;             // r11d
    int v3061;             // edx
    int v3062;             // r11d
    int v3063;             // r9d
    int v3064;             // r8d
    unsigned int v3065;    // eax
    int v3066;             // ecx
    int v3067;             // r9d
    int v3068;             // r8d
    unsigned int v3069;    // edx
    int v3070;             // ecx
    int v3071;             // r9d
    unsigned int v3072;    // eax
    unsigned int v3073;    // edi
    unsigned int v3074;    // edx
    int v3075;             // eax
    int v3076;             // ecx
    unsigned int v3077;    // edi
    unsigned int v3078;    // edx
    int v3079;             // esi
    int v3080;             // ecx
    unsigned int v3081;    // edi
    int v3082;             // r8d
    int v3083;             // ecx
    unsigned int v3084;    // esi
    int v3085;             // eax
    int v3086;             // r8d
    int v3087;             // r8d
    unsigned int v3088;    // eax
    int v3089;             // esi
    unsigned int v3090;    // r8d
    int v3091;             // eax
    unsigned int v3092;    // esi
    int v3093;             // ecx
    int v3094;             // edi
    unsigned int v3095;    // esi
    int v3096;             // r9d
    int v3097;             // ecx
    int v3098;             // r10d
    int v3099;             // esi
    int v3100;             // ecx
    int v3101;             // edi
    int v3102;             // eax
    int v3103;             // r9d
    int v3104;             // esi
    unsigned int v3105;    // edi
    int v3106;             // et1
    int v3107;             // ecx
    int v3108;             // eax
    int v3109;             // esi
    unsigned int v3110;    // r9d
    int v3111;             // eax
    int v3112;             // r11d
    int v3113;             // r10d
    int v3114;             // esi
    int v3115;             // r10d
    int v3116;             // eax
    int v3117;             // r11d
    int v3118;             // r10d
    int v3119;             // r11d
    int v3120;             // eax
    int v3121;             // r10d
    int v3122;             // edi
    int v3123;             // ebx
    int v3124;             // r8d
    int v3125;             // eax
    int v3126;             // ecx
    int v3127;             // esi
    int v3128;             // eax
    int v3129;             // ecx
    int v3130;             // r10d
    int v3131;             // esi
    int v3132;             // r9d
    int v3133;             // ecx
    int v3134;             // eax
    int v3135;             // esi
    int v3136;             // eax
    int v3137;             // eax
    unsigned int v3138;    // edx
    int v3139;             // edi
    int v3140;             // r8d
    unsigned int v3141;    // eax
    int v3142;             // ecx
    int v3143;             // esi
    int v3144;             // r8d
    unsigned int v3145;    // r9d
    int v3146;             // ecx
    int v3147;             // esi
    int v3148;             // edi
    unsigned int v3149;    // r9d
    int v3150;             // eax
    int v3151;             // esi
    unsigned int v3152;    // edi
    int v3153;             // r8d
    int v3154;             // esi
    unsigned int v3155;    // eax
    unsigned int v3156;    // edi
    int v3157;             // r9d
    unsigned int v3158;    // r10d
    unsigned int v3159;    // eax
    int v3160;             // r11d
    int v3161;             // r9d
    int v3162;             // edi
    unsigned int v3163;    // eax
    int v3164;             // r8d
    int v3165;             // esi
    unsigned int v3166;    // edi
    unsigned int v3167;    // eax
    int v3168;             // r8d
    int v3169;             // esi
    int v3170;             // edi
    int v3171;             // eax
    int v3172;             // r8d
    int v3173;             // edi
    int v3174;             // esi
    int v3175;             // r9d
    int v3176;             // eax
    int v3177;             // esi
    int v3178;             // edi
    int v3179;             // eax
    int v3180;             // r9d
    int v3181;             // r10d
    int v3182;             // esi
    int v3183;             // r8d
    int v3184;             // edi
    int v3185;             // eax
    int v3186;             // r9d
    int v3187;             // esi
    int v3188;             // r8d
    int v3189;             // eax
    int v3190;             // edi
    int v3191;             // r11d
    int v3192;             // esi
    int v3193;             // eax
    int v3194;             // edi
    int v3195;             // r8d
    int v3196;             // eax
    int v3197;             // esi
    int v3198;             // esi
    int v3199;             // r8d
    unsigned int v3200;    // edi
    int v3201;             // ecx
    int v3202;             // r8d
    unsigned int v3203;    // eax
    int v3204;             // ecx
    int v3205;             // edi
    int v3206;             // r8d
    unsigned int v3207;    // edx
    int v3208;             // esi
    unsigned int v3209;    // r8d
    int v3210;             // ecx
    int v3211;             // edi
    unsigned int v3212;    // r8d
    int v3213;             // esi
    unsigned int v3214;    // ecx
    unsigned int v3215;    // r8d
    int v3216;             // r8d
    unsigned int v3217;    // eax
    int v3218;             // edi
    unsigned int v3219;    // r8d
    unsigned int v3220;    // eax
    unsigned int v3221;    // edi
    unsigned int v3222;    // r8d
    int v3223;             // r9d
    int v3224;             // edi
    int v3225;             // ecx
    int v3226;             // r8d
    unsigned int v3227;    // eax
    unsigned int v3228;    // r9d
    unsigned int v3229;    // eax
    int v3230;             // edi
    int v3231;             // r10d
    unsigned int v3232;    // r9d
    unsigned int v3233;    // eax
    unsigned int v3234;    // ecx
    int v3235;             // r11d
    int v3236;             // edi
    int v3237;             // edi
    unsigned int v3238;    // r9d
    int v3239;             // ecx
    int v3240;             // edi
    unsigned int v3241;    // ecx
    int v3242;             // r10d
    int v3243;             // r9d
    unsigned int v3244;    // r9d
    unsigned int v3245;    // eax
    unsigned int v3246;    // r8d
    int v3247;             // ecx
    unsigned int v3248;    // r9d
    int v3249;             // edx
    unsigned int v3250;    // ecx
    unsigned int v3251;    // eax
    unsigned int v3252;    // r8d
    int v3253;             // r10d
    int v3254;             // ecx
    int v3255;             // r8d
    unsigned int v3256;    // edx
    unsigned int v3257;    // r8d
    int v3258;             // eax
    unsigned int v3259;    // edx
    int v3260;             // r10d
    int v3261;             // ecx
    int v3262;             // r10d
    int v3263;             // r8d
    unsigned int v3264;    // edx
    int v3265;             // r8d
    int v3266;             // eax
    int v3267;             // r10d
    int v3268;             // edx
    int v3269;             // eax
    int v3270;             // r8d
    int v3271;             // r9d
    int v3272;             // edx
    int v3273;             // eax
    int v3274;             // edx
    unsigned int v3275;    // ecx
    int v3276;             // r9d
    int v3277;             // r8d
    int v3278;             // edi
    int v3279;             // r9d
    int v3280;             // edx
    int v3281;             // eax
    int v3282;             // r8d
    int v3283;             // r9d
    int v3284;             // r11d
    int v3285;             // r10d
    int v3286;             // edx
    int v3287;             // r11d
    int v3288;             // r9d
    int v3289;             // edx
    int v3290;             // r10d
    int v3291;             // r9d
    int v3292;             // eax
    int v3293;             // r8d
    int v3294;             // eax
    int v3295;             // edi
    int v3296;             // r8d
    int v3297;             // esi
    int v3298;             // ecx
    int v3299;             // r10d
    int v3300;             // esi
    int v3301;             // eax
    int v3302;             // r8d
    int v3303;             // r9d
    int v3304;             // eax
    int v3305;             // edi
    int v3306;             // r8d
    int v3307;             // r9d
    int v3308;             // esi
    int v3309;             // eax
    int v3310;             // r9d
    int v3311;             // edi
    int v3312;             // r9d
    unsigned int v3313;    // esi
    int v3314;             // r8d
    int v3315;             // eax
    int v3316;             // r9d
    int v3317;             // edi
    int v3318;             // r10d
    int v3319;             // eax
    int v3320;             // r9d
    int v3321;             // r10d
    int v3322;             // edi
    int v3323;             // r9d
    int v3324;             // eax
    int v3325;             // r10d
    int v3326;             // edi
    int v3327;             // r10d
    int v3328;             // ebx
    int v3329;             // eax
    int v3330;             // edi

    v5 = a2;
    switch (a1 & 0x3F)
    {
    case 0:
        v6 = a3 + a2;
        v7 = __ROL4__(a5, 20) + a4 + a3;
        v8 = a5 ^ v6;
        v9 = a4 + __ROL4__(a5, 6);
        v10 = ((v7 >> 11) & 7) + 1;
        do
        {
            v11 = v7 ^ v8;
            v12 = playIntentKey[(unsigned __int8)v9 + 8] + v6;
            v13 = v9 - v11;
            v14 = v11 - v12;
            v15 = v13 + v12;
            v16 = v14 ^ v13;
            v17 = v14 - ((__ROL4__(v15, 17) + 29168) ^ (v16 - 2994));
            v18 = v15 - v16;
            v19 = v16 - v17;
            v20 = v17 + __ROL4__(v18, 10);
            v21 = __ROL4__(v19, 27) ^ v18;
            v22 = v20 ^ v21;
            v9 = (v20 ^ v21) + v19 - (__ROL4__(v20, 16) + __ROL4__(v21, 5));
            v6 = v9 ^ v21;
            v8 = v22 - v6 - 440023774;
            --v10;
        } while (v10);
        v23 = v7 - __ROL4__(v6, 2);
        v24 = v6 - v9;
        v25 = v9 - __ROL4__(v8, 5);
        v26 = __ROL4__(v23, 26) + v8 + __ROL4__(v24, 18);
        v27 = ((unsigned int)~v24 >> 4) | 0xFFFFFFF8;
        do
        {
            v28 = v24 ^ v26;
            v29 = v25 + v23;
            v30 = v25 + __ROL4__(v28, 17);
            v31 = __ROL4__(v30, 5);
            v32 = v29 + v30;
            v23 = v31 + v29;
            v25 = v28 + v31;
            v26 = v28 - (v23 + v32);
            ++v27;
        } while (v27);
        v33 = v24 - v23;
        v34 = __ROL4__(v26, 14) + v23 + __ROL4__(v25, 3);
        v35 = v25 - v26 - 983297614;
        v36 = v33 + v26;
        v37 = ((v34 >> 6) & 7) + 1;
        do
        {
            v38 = v34 ^ v36;
            v39 = (unsigned __int8)v38;
            v40 = v33 + v38;
            v41 = v33 - v35;
            LODWORD(v39) = playIntentKey[v39 + 263];
            v35 += v39 + v40 + v39;
            v33 = v35 ^ v41;
            v36 = v39 + v40 + 1818063277 * v33;
            --v37;
        } while (v37);
        v42 = ((v33 >> 17) & 7) + 1;
        do
        {
            v43 = v33 ^ v36;
            v44 = v43 + v35;
            v45 = v44 ^ v34;
            v46 = v43 - v45;
            v47 = v45 - v44;
            v48 = v44 + __ROL4__(v46, 13);
            v49 = v46 ^ (__ROL4__(v47, 2) + __ROL4__(v48, 13));
            v50 = v49 + v48;
            v51 = v47 - (__ROL4__(v48, 19) + __ROL4__(v49, 5));
            v52 = v51 ^ v49;
            v34 = v51 ^ __ROL4__(v50, 21);
            v35 = v50 ^ (v52 + v34);
            v36 = v52 + v34 - 373885513;
            --v42;
        } while (v42);
        return (v33 ^ v34) + (v35 ^ v36);
    case 1:
        v110 = a2 - __ROL4__(a3, 16);
        v111 = playIntentKey[(unsigned __int8)a4 + 50] + a3;
        v112 = a4 - a5;
        v113 = v110 + a5;
        v114 = v110 + 751919749 * v111;
        v115 = 1323751270 * v112;
        v116 = v112 - playIntentKey[(unsigned __int8)v113 + 399];
        v117 = v111 ^ v115;
        v118 = v113 - ((__ROL4__(v114, 27) - 18696) ^ (v117 + 19834));
        v119 = v114 - v117;
        v120 = v118 + v116 + v117;
        v121 = v116 - v118;
        v122 = v118 - v119;
        v123 = v119 ^ v120;
        v124 = v120 + v119 - v116;
        v125 = v122 ^ v121;
        v126 = v122 - v123;
        v127 = v123 ^ (-1952961102 * v124);
        v128 = v124 - v125;
        v129 = v125 - v126;
        v130 = v127 ^ v126;
        v131 = v127 - ((__ROL4__(v128, 9) + 9747) ^ (v129 + 7038));
        v132 = __ROL4__(v131, 10);
        v133 = (v128 ^ v129) + v131;
        v134 = v132 + __ROR4__(v128 ^ v129, 1);
        v135 = (v130 + v134 + 28060) ^ v128 ^ v129 ^ (__ROL4__(v129 - v130, 6) - 2344);
        v136 = v134 + v129;
        v137 = v134 + v133 + v130;
        v138 = v133 ^ (v135 - 416466712);
        v139 = v135 - v136;
        v140 = playIntentKey[(unsigned __int8)v137 + 447] ^ v136;
        v141 = v137 ^ (-1084747201 * v138);
        v142 = ((unsigned int)~v139 >> 22) | 0xFFFFFFF8;
        do
        {
            v143 = v139 ^ v141;
            v138 ^= v143 + v140;
            v140 -= v143;
            v141 = v138 ^ v143;
            ++v142;
        } while (v142);
        v144 = ((v138 >> 4) & 7) + 1;
        do
        {
            v145 = v138 ^ v141;
            v146 = v139 + ((__ROL4__(v140, 29) - 29764) ^ (v145 + 2809));
            v147 = v140 - v145;
            v148 = v146 + v147;
            v149 = __ROL4__(v146, 9);
            v150 = v147 + v146 + 972643555;
            v151 = v145 + v149;
            v152 = v147 - playIntentKey[(unsigned __int8)v151 + 214];
            v153 = v148 ^ v151;
            v154 = v150 - v152;
            v155 = v153 + v152;
            v156 = v153 ^ (v153 + v148 + 972643555);
            v157 = v154 ^ (v155 + v156);
            v158 = v155 + ((__ROL4__(v156, 7) + 1714) ^ (v157 - 20116));
            v159 = v158 + v157;
            v160 = v158 ^ (__ROL4__(v156 - v157, 19) + 19909) ^ (v157 + v158 + 5111);
            v161 = v156 + v158;
            v139 = v159 ^ (-578422297 * v160);
            v140 = v160 - v161 - 1655005351;
            v141 = v161 - v139;
            --v144;
        } while (v144);
        v162 = v138 ^ v139;
        goto LABEL_101;
    case 2:
        v163 = a3 ^ a2;
        v164 = a3 - __ROL4__(a4, 8);
        v165 = a4 ^ __ROL4__(a5, 22);
        v166 = a5 ^ (1627315946 * v163);
        v167 = v165 + v164 + v163;
        v168 = v164 - 1823440051 * v165;
        v169 = v165 - v166;
        v170 = v166 ^ __ROL4__(v167, 17);
        v171 = v167 ^ (-4895601 * v168);
        v172 = v168 - playIntentKey[(unsigned __int8)v169 + 185];
        v173 = v170 ^ v169;
        v174 = v170 - __ROR4__(v171, 1);
        v175 = (~v172 >> 9) | 0xFFFFFFF8;
        do
        {
            v176 = v172 ^ v174;
            v177 = v171 - v173;
            v178 = playIntentKey[(unsigned __int8)v176 + 500] ^ v173;
            v179 = (v178 - 15036) ^ v176 ^ (__ROR4__(v177, 1) + 4594);
            v180 = v177 ^ (-468755818 * v178);
            v181 = v179 ^ v178;
            v182 = v180 + __ROL4__(v181, 1);
            v183 = v179 - __ROL4__(v180, 27) + v181;
            v184 = -(v182 + v181 + v182);
            v171 = -v183;
            v173 = v182 + v183 + v182 + v181 + v182;
            v174 = playIntentKey[(unsigned __int8)-(char)v183 + 361] + v184;
            ++v175;
        } while (v175);
        v185 = v183 + v172;
        v186 = v173 ^ v174;
        v187 = __ROL4__(v174, 23) + __ROL4__(v173, 19) - v183;
        v188 = v174 - __ROL4__(v185, 19);
        v189 = v185 - (__ROL4__(v187, 15) + __ROL4__(v186, 23));
        v190 = v186 ^ v187;
        v191 = playIntentKey[(unsigned __int8)v188 + 165] ^ v186;
        v192 = __ROL4__(v190, 24);
        v193 = playIntentKey[(unsigned __int8)v191 + 70] + v190;
        v194 = v189 + v192;
        v195 = v191 - (v188 ^ v189);
        v196 = v188 ^ v189 ^ (v193 + v194);
        v197 = v194 - v193;
        v198 = v193 - v195;
        v199 = v195 ^ (-1313877852 * v196);
        v200 = v196 - v197;
        v201 = v197 - v198 + 1117753748;
        v202 = v198 - v199;
        v203 = v200 ^ (__ROL4__(v201, 17) + 17835);
        v204 = v199 + __ROL4__(v200, 15);
        v205 = (v202 - 21330) ^ v203;
        if ((v202 & 4) != 0)
        {
            v206 = v202 ^ v205;
            v207 = v201 - __ROL4__(v204, 19);
            v208 = __ROL4__(v206, 10) + v204 + __ROL4__(v207, 24);
            v209 = v206 - v207;
            v210 = v208 + v207;
            v211 = v209 + v210 - 409329226;
            v212 = playIntentKey[(unsigned __int8)v209 + 36] ^ v208;
            v213 = playIntentKey[(unsigned __int8)v212] + v210;
            v214 = v212 - v211;
            v215 = v211 - v213;
            v216 = v213 - v214;
            v217 = v214 + __ROL4__(v215, 11);
            v218 = v215 ^ (v216 + __ROL4__(v217, 18));
            v219 = v216 - v217;
            v220 = (__ROL4__(v219, 20) - 15069) ^ (v217 - v218 - 29045);
            v221 = v220 + v218;
            v201 = v219 - ((__ROL4__(v217 - v218, 29) - 29798) ^ (v220 + v218 + 10938));
            v204 = v217 + v220;
            v205 = v201 ^ v221;
        }
        v162 = v205 ^ v204;
        goto LABEL_40;
    case 3:
        if ((a3 & 0x40000) != 0)
        {
            v222 = a3 ^ a5;
            v223 = a2 ^ (a4 + 278306313);
            v224 = a4 ^ (__ROL4__(v222, 23) + __ROL4__(v5 ^ (a4 + 278306313), 11));
            v225 = v223 ^ v222;
            v226 = v224 ^ v223;
            v227 = v225 ^ (298669076 * v226);
            v228 = v224 - __ROR4__(v225, 1);
            v5 = v226 - 689695237 * v228;
            a4 = v227 ^ v228;
            a5 = v227 - playIntentKey[(unsigned __int8)v5 + 331];
        }
        v229 = a3 - v5 - a4;
        v230 = a4 ^ v5;
        v231 = a4 - v229 - a5;
        v232 = (__ROL4__(v229, 23) + 5487) ^ a5 ^ (v230 - 26710);
        v233 = v229 ^ __ROL4__(v230, 5);
        v234 = v230 - v231 - v232;
        v235 = v232 ^ v231;
        v236 = v233 ^ v234;
        v237 = v234 - playIntentKey[(unsigned __int8)v235 + 407];
        v238 = v236 + v232 - playIntentKey[(unsigned __int8)v233 + 422];
        v239 = v238 ^ v235;
        v240 = v236 - playIntentKey[(unsigned __int8)v237 + 371];
        v241 = v237 + v238 - 232189993 + v239;
        v242 = __ROL4__(v240, 27) + 6359;
        v243 = playIntentKey[(unsigned __int8)v241 + 322] + v240;
        v244 = v238 - 232189993 - (v242 ^ (v241 + 587));
        v245 = v244 + v239 - playIntentKey[(unsigned __int8)(v238 - 41) + 336];
        v246 = v245 ^ v241;
        v247 = v244 + __ROL4__(v243, 25);
        if ((v246 & 0x200000) != 0)
        {
            v248 = v246 ^ v247;
            v249 = v245 ^ v243;
            v250 = v245 ^ __ROR4__(v248, 1);
            v251 = v248 - v249 - v250;
            v252 = playIntentKey[(unsigned __int8)v250 + 371] + v249;
            v253 = v250 - v251;
            v254 = v252 ^ v251;
            v255 = v253 ^ v252;
            v256 = v253 - v255 - v254;
            v257 = v254 - v255;
            v258 = v255 + 1078876813 * v256;
            v259 = v257 + v256;
            v260 = v257 - playIntentKey[(unsigned __int8)v258 + 391];
            v261 = v258 - playIntentKey[(unsigned __int8)v259 + 377];
            v245 = v259 + ((__ROL4__(v260, 27) + 4515) ^ (v261 - 16414));
            v243 = v261;
            v247 = v260 ^ (v261 + 877296507);
        }
        v262 = v243 + v246;
        v263 = v262 ^ v245 ^ v243;
        v264 = (v245 - playIntentKey[(unsigned __int8)v247 + 185]) ^ v247 ^ v262;
        return (unsigned int)(v263 + v264);
    case 4:
        v265 = a2 - a3 - a4;
        v266 = a3 ^ (a4 - 1441301183);
        v267 = a5 + a4;
        v268 = v265 + a5;
        v269 = v265 - v267 - v266;
        v270 = v267 ^ v266;
        v271 = v268 ^ v267;
        v272 = v269 + v268;
        v273 = v269 ^ (-574989076 * v270);
        v274 = v270 - v271;
        v275 = v271 - ((__ROL4__(v272, 1) + 1295) ^ (v273 - 6218));
        v276 = (unsigned __int8)v273;
        v277 = playIntentKey[(unsigned __int8)v273 + 172] ^ v272;
        if ((v274 & 0x40000000) != 0)
        {
            v3293 = v274 ^ v277;
            v3294 = v273 ^ __ROL4__(v275, 4);
            v3295 = v275 + 69472889 * v3293;
            v3296 = v3294 + v3293;
            v275 = v3295 ^ __ROL4__(v3296, 29);
            v276 = v3294 - __ROL4__(v3295, 15);
            v278 = v276 + v275;
            v277 = v3296 - (v276 + v275);
            v276 = (unsigned __int8)v276;
        }
        else
        {
            v278 = v275 + v273;
        }
        v3297 = playIntentKey[v276 + 396] ^ v274;
        v3298 = v277 + v275;
        v3299 = v277 ^ (v3297 + v278);
        v3300 = v3297 - __ROL4__(v278, 9);
        v3301 = v3299 + v3298 + v278;
        v3302 = playIntentKey[(unsigned __int8)v3300 + 339];
        v3303 = 1968573835 * v3301 + v3300;
        v3304 = playIntentKey[(unsigned __int8)(v3298 ^ (v3299 + 41)) + 437] ^ v3301;
        v3305 = (v3298 ^ (v3299 + 825007401)) - ((v3299 - v3302 + 30673) ^ (v3303 + 31252));
        v3306 = (v3299 - v3302) ^ (1300358882 * v3303);
        v3307 = v3304 + v3303;
        v3308 = v3304 ^ (1691319508 * v3305);
        v3309 = v3306 + ((v3307 + v3305 - 6738) ^ (v3308 + 32163));
        v3310 = v3305 + v3307;
        v3311 = v3305 - __ROL4__(v3306, 29);
        v3312 = v3308 ^ v3310;
        v3313 = v3311 ^ v3308;
        v2263 = v3309 + v3312 + v3311;
        v2264 = v3309 - __ROL4__(v3312, 23);
        v3314 = (v3313 >> 31) + 1;
        do
        {
            v3315 = v3313 ^ v2264;
            v3316 = v2263 ^ v3312;
            v3317 = v3315 ^ v2263;
            v3318 = v3315 ^ (v3317 + v3316);
            v3319 = v3317 ^ (-1699033626 * v3318);
            v3320 = v3316 - playIntentKey[(unsigned __int8)v3317 + 401];
            v3321 = v3320 ^ v3318;
            v3322 = v3321 + v3320;
            v3323 = v3320 - v3319;
            v3324 = v3321 ^ __ROL4__(v3323, 5);
            v3325 = __ROL4__(v3322, 16);
            v3326 = v3322 - v3324;
            v3327 = __ROL4__(v3324, 22) + v3323 + v3325;
            v3328 = v3327 + __ROL4__(v3326, 25);
            v3329 = v3328 + v3324 - playIntentKey[(unsigned __int8)v3327 + 101];
            v3330 = v3329 + v3326;
            v3312 = v3328 ^ (v3330 + v3329);
            v2263 = v3329 ^ v3330;
            v2264 = playIntentKey[(unsigned __int8)v3312 + 98] + v3329;
            --v3314;
        } while (v3314);
        v1406 = v3313 ^ v3312;
        goto LABEL_334;
    case 5:
        if ((a3 & 0x20000) != 0)
        {
            v279 = a3 ^ a5;
            v5 = a4 + a2;
            a4 ^= v279;
            a5 = v279 - (__ROL4__(v5, 5) + __ROL4__(a4, 30));
        }
        v280 = a3 - v5;
        v281 = __ROL4__(a4, 5) + v5;
        v282 = (__ROL4__(v280, 20) + 10672) ^ a5 ^ (v281 + 6946);
        v283 = v280 + v281 - 1579331330;
        v284 = (a5 + a4) ^ v281;
        v285 = a5 + a4 - playIntentKey[(unsigned __int8)v282 + 469];
        v286 = v282 - v283;
        v287 = v284 ^ v283;
        v288 = v284 ^ (v286 + v285 - 761027432);
        v289 = (v286 - 761027432) ^ v285;
        v290 = v287 ^ (v286 - 761027432);
        v291 = ((v288 >> 18) & 7) + 1;
        do
        {
            v292 = v288 ^ v290;
            v293 = playIntentKey[(unsigned __int8)v289 + 217] + v287;
            v294 = v293 + v292 + v289;
            v295 = v292 - v293;
            v296 = v294 + v293;
            v297 = v295 ^ v294;
            v298 = v295 - (v297 + v296 + 1514660149);
            v287 = ((__ROL4__(v297, 15) + 32548) ^ (v298 + 19020)) + v296 + 1514660149;
            v289 = v297 - v298;
            v290 = v287 ^ v298;
            --v291;
        } while (v291);
        v299 = playIntentKey[(unsigned __int8)v287 + 313] ^ v288;
        v300 = v287 - 1660222228 * v289;
        v301 = v289 ^ __ROL4__(v290, 22);
        v302 = v290 ^ (-1395468949 * v299);
        v303 = v300 ^ v299;
        v304 = v301 + 1071162695 * v302;
        v305 = v300 ^ __ROL4__(v301, 18);
        v306 = v302 ^ __ROL4__(v303, 17);
        v307 = v305 + v304;
        v201 = v303 - (v305 + v304);
        v202 = v304 ^ v305;
        v308 = v304 - ((__ROL4__(v306, 4) + 16551) ^ (v303 - v307 - 2707));
        v309 = v306 - v202 - v201;
        if ((v202 & 0x1000) != 0)
        {
            v310 = v202 ^ v309;
            v311 = v201 - 1928229814 * v308;
            v312 = v310 + v308;
            v313 = v310 ^ __ROL4__(v311, 13);
            v314 = v311 ^ __ROL4__(v312, 30);
            v315 = v312 - playIntentKey[(unsigned __int8)v313 + 193];
            v201 = v313 - v314;
            v316 = v315 ^ __ROL4__(v201, 23);
            v317 = v201 - (v316 + v314 + v315);
            v318 = v316 - v317;
            v309 = v201 + v317;
            v308 = v318;
        }
        v162 = v309 ^ v308;
    LABEL_40:
        v319 = v202 ^ v201;
        return (unsigned int)(v162 + v319);
    case 6:
        if ((a3 & 0x10000000) != 0)
        {
            v320 = a3 ^ a5;
            v321 = v320 + a4;
            v322 = (__ROL4__(a4, 28) + 23279) ^ a2 ^ (v320 + 9273);
            v323 = v320 + __ROL4__(v322, 17);
            v324 = v321 ^ v322;
            v325 = v321 - (__ROL4__(v323, 14) + __ROL4__(v324, 19));
            v326 = v325 + v324;
            v327 = v323 + __ROL4__(v324, 15);
            v328 = playIntentKey[(unsigned __int8)v327 + 5] ^ v325;
            v329 = v328 + v326;
            v330 = v329 ^ v327;
            v331 = v328 ^ (91479844 * v330);
            v332 = playIntentKey[(unsigned __int8)(v328 ^ (36 * v330)) + 173] ^ (v329 + v330);
            v333 = v329 + v331 - v332;
            v334 = v332 ^ -v329;
            v335 = __ROL4__(v333, 15);
            a4 = v333 - v334;
            v336 = v334 + __ROL4__(a4, 29);
            v5 = v335 + v332 + __ROL4__(v334, 27);
            a5 = __ROL4__(v5, 13) + v336;
        }
        v337 = ((v5 >> 27) & 7) + 1;
        do
        {
            v338 = v5 ^ a5;
            v339 = a4 + __ROL4__(v338, 11);
            v340 = v338 ^ ((a4 ^ a3) + __ROL4__(v339, 19));
            a3 ^= a4 ^ (v340 + v339);
            a4 = v339 - 1190864991 * v340;
            a5 = a3 + v340;
            --v337;
        } while (v337);
        v341 = a3 + v5;
        v342 = a4 + 1818224826 * a5;
        v343 = a5 - v341;
        v344 = v342 + a3 - playIntentKey[(unsigned __int8)a4 + 58];
        v345 = v344 ^ v341;
        v346 = v342 ^ (v345 + v343);
        v347 = v343 ^ (__ROL4__(v345, 19) + __ROL4__(v344, 9));
        v348 = v346 ^ v347;
        v349 = v345 - __ROL4__(v344, 4);
        v350 = v344 - ((__ROL4__(v346, 16) - 2430) ^ (v347 - 15136));
        v351 = v350 + v349;
        v352 = v347 - __ROL4__(v349, 28);
        v353 = v348 + v350;
        v354 = v351 + v352;
        v355 = v348 ^ __ROL4__(v352, 24);
        v356 = v351 + v353 + v355;
        v357 = v355 ^ v353;
        v358 = v355 - v354;
        v359 = v356 + v357 + v354;
        v360 = (v357 >> 29) + 1;
        do
        {
            v361 = v357 ^ v359;
            v362 = playIntentKey[(unsigned __int8)v358 + 31] ^ v356;
            v363 = v358 - ((__ROL4__(v361, 2) - 23610) ^ (v362 + 32184));
            v364 = v362 ^ v361;
            v356 = v363 ^ v362;
            v358 = v363 - __ROR4__(v364, 1);
            v359 = (__ROL4__(v356, 29) - 10681) ^ (v358 - 15293) ^ v364;
            --v360;
        } while (v360);
        v162 = v357 ^ v356;
        goto LABEL_127;
    case 7:
        v365 = a2 + __ROL4__(a3, 18);
        v366 = playIntentKey[(unsigned __int8)a4 + 317] + a3;
        v367 = a4 - a5;
        v368 = v365 ^ (__ROL4__(v366, 24) + __ROL4__(v367, 6));
        v369 = playIntentKey[(unsigned __int8)v365 + 444] + a5;
        v370 = v366 + __ROL4__(v367, 2);
        v371 = playIntentKey[(unsigned __int8)v369 + 100] ^ v367;
        v372 = v368 + v370 + v369;
        v373 = v368 - v370;
        v374 = playIntentKey[(unsigned __int8)v371 + 322] + v370;
        v375 = v371 + 528742505 * v372;
        v376 = v373 - 137716343 * v374;
        v377 = playIntentKey[(unsigned __int8)v373 + 449] + v372;
        v378 = v375 ^ v374;
        v379 = v375 ^ (-2091987869 * v377);
        v380 = v377 - v376;
        if ((v378 & 0x20000) != 0)
        {
            v381 = v378 ^ v380;
            v382 = v379 + v376 + 766897819;
            v383 = v381 + v379;
            v384 = v381 ^ (v383 + v382);
            v376 = v382 - v383 - v384;
            v379 = v384 ^ v383;
            v380 = v384 - v376;
        }
        v385 = v378 - v376;
        v386 = v379 + v376;
        v387 = v379 ^ (__ROL4__(v380, 24) + __ROL4__(v385, 3));
        v388 = v387 + v386;
        v389 = v385 + v380;
        v390 = v385 - ((__ROL4__(v386, 11) - 8805) ^ (v387 - 27525));
        v391 = v389 ^ v387;
        v392 = v389 - (__ROL4__(v390, 21) + __ROL4__(v388, 7));
        v393 = v388 + v390;
        v394 = v391 + v388;
        v395 = v392 + v391;
        v396 = playIntentKey[(unsigned __int8)v393 + 300] ^ v392;
        v397 = ((v394 >> 9) & 7) + 1;
        do
        {
            v398 = v394 ^ v396;
            v399 = v395 + v393 - 24257;
            v400 = v395 + v393;
            v401 = (__ROL4__(v398, 15) - 8067) ^ v395 ^ v399;
            v402 = __ROL4__(v401, 4) + v398 + __ROL4__(v400, 15);
            v403 = v400 - v401 + 806837711;
            v404 = v402 + v401;
            v405 = playIntentKey[(unsigned __int8)v403 + 264] ^ v402;
            v406 = v403 - playIntentKey[(unsigned __int8)v404 + 250];
            v407 = v406 + v405 + v404;
            v408 = v405 - v406;
            v393 = v407 + v406;
            v395 = v408 ^ v407;
            v396 = v408 - ((__ROL4__(v393, 25) + 24435) ^ ((v408 ^ v407) + 18354));
            --v397;
        } while (v397);
        v409 = playIntentKey[(unsigned __int8)v393 + 12] ^ v394;
        v410 = v396 + v395;
        v411 = v410 ^ v393;
        v412 = v396 ^ (v409 + v411);
        v413 = v409 - v411;
        v414 = v411 - v410;
        v415 = v410 ^ (v412 + v413);
        v416 = v412 ^ (__ROL4__(v413, 23) + __ROL4__(v414, 2));
        v417 = v414 ^ v413;
        v418 = v415 ^ v414;
        v419 = v416 ^ (-1722426014 * v417);
        v420 = v415 ^ __ROL4__(v416, 13);
        v421 = v417 - __ROR4__(v418, 1);
        v422 = v418 ^ (-1331465388 * v420);
        v423 = v420 + 744205631 * v419;
        v424 = v419 ^ __ROL4__(v421, 8);
        v425 = v421 - v423 - v422;
        v426 = v423 ^ v422;
        v108 = (v423 - __ROL4__(v424, 10)) ^ (v424 - v425 - v426);
        v427 = v425 ^ v426;
        return (unsigned int)(v108 + v427);
    case 8:
        v428 = a3 + a2;
        v429 = playIntentKey[(unsigned __int8)a4 + 138] ^ a3;
        v430 = a4 - v428 - a5;
        v431 = v428 ^ a5;
        if ((v429 & 0x4000000) != 0)
        {
            v432 = v429 ^ v431;
            v433 = playIntentKey[(unsigned __int8)v430 + 110] + v428;
            v434 = v430 - v432 - 2026254533;
            v435 = v432 + __ROL4__(v433, 26);
            v436 = v434 ^ v433;
            v437 = v434 - v435;
            v438 = v435 ^ (v437 + v436);
            v439 = v436 ^ (v438 + v437);
            v440 = v438 ^ v437;
            v441 = v438 ^ __ROL4__(v439, 15);
            v442 = v439 - v440 - v441;
            v443 = playIntentKey[(unsigned __int8)v441 + 504] ^ v440;
            v444 = v441 ^ (v442 + v443);
            v445 = v444 + v443;
            v446 = v442 - (__ROL4__(v443, 11) + __ROL4__(v444, 17));
            v447 = playIntentKey[(unsigned __int8)v446 + 320] ^ v444;
            v428 = __ROL4__(v447, 4) + v446 + __ROL4__(v445, 23);
            v448 = v447 ^ v445;
            v431 = v428 + v447;
            v430 = v448;
        }
        v449 = playIntentKey[(unsigned __int8)v428 + 423] + v429;
        v450 = v428 + 757873156 * v430;
        v451 = __ROL4__(v450, 6);
        v452 = v430 - v431;
        v453 = __ROL4__(v452, 22);
        v454 = v431 + __ROL4__(v449, 30);
        v455 = v452 ^ v450;
        v456 = playIntentKey[(unsigned __int8)v454 + 398] + v452;
        v457 = v455 + v449 - (v451 + v453);
        v458 = v457 + v454;
        v459 = v455 ^ (__ROL4__(v456, 1) + __ROL4__(v458, 24));
        v460 = v456 - v458;
        v461 = __ROL4__(v457, 1);
        v462 = v461 + v458;
        v463 = v457 ^ __ROL4__(v459, 24);
        v464 = v462 - 472947302 * v463;
        v465 = v459 - (__ROL4__(v460, 13) + __ROL4__(v462, 11));
        v466 = v463 + v456 + v461;
        v467 = v463 - v465;
        v468 = v465 + __ROL4__(v466, 5);
        v469 = v466 - ((__ROL4__(v464, 7) - 6150) ^ (v467 + 29605));
        v470 = v467 + v464;
        v471 = v467 - v468 - v469;
        v472 = v468 - v469;
        v473 = v470 + v469;
        v474 = v472 + v470 - 1768522089;
        v472 -= 1768522089;
        v475 = v471 + v474;
        v476 = v471 - v472;
        v477 = playIntentKey[(unsigned __int8)v473 + 365] + v472;
        v478 = v473 - v475;
        v479 = v476 + v475;
        v480 = v476 - v477 - v478;
        v481 = v478 ^ v477;
        v482 = playIntentKey[(unsigned __int8)v479 + 182] ^ v478;
        v483 = v481 + 1716050796 * v482;
        v484 = v480 + __ROL4__(v481, 23);
        v485 = v479 - __ROL4__(v480, 3);
        v486 = v485 ^ v482;
        v487 = v485 ^ __ROL4__(v484, 15);
        v488 = v483 ^ v484;
        v489 = v486 ^ v483;
        v490 = v487 ^ (v489 + v488);
        v491 = v486 - ((__ROL4__(v487, 2) - 28253) ^ (v488 + 24872));
        v492 = playIntentKey[(unsigned __int8)v489 + 232] ^ v488;
        return ((v490 + v491 - 1359587306) ^ (v490 - v492 - (v489 ^ (v491 + v490)))) + (v492 ^ v489 ^ (unsigned int)(v491 + v490));
    case 9:
        v493 = a5 + a2 + 833007381 - a3;
        v494 = playIntentKey[(unsigned __int8)a5 + 491];
        v495 = v494 + a2 + 833007381;
        v496 = (a3 - a4) ^ (v494 + a4 - 125810741);
        v497 = v493 ^ (v494 + a2 + 971884383);
        v498 = a4 + v494 - playIntentKey[(unsigned __int8)v493 + 501];
        v499 = v495 - v496;
        v500 = v496 ^ __ROL4__(v498, 22);
        v501 = (__ROL4__(v500, 10) - 15904) ^ (v497 + v498 + 26150);
        v502 = v499 - v501 + v499 + v497;
        v503 = ((__ROL4__(v499 + v497, 2) + 13400) ^ (v499 - v501 + 30913)) + v497 + v498;
        v504 = v500 - __ROR4__(v497 + v498, 1);
        v505 = (v503 - 17122) ^ (v499 - v501) ^ (__ROL4__(v504, 19) + 28336);
        v506 = v503 + v504;
        v507 = v502 + v503;
        v508 = v505 ^ v502;
        v509 = v505 - __ROL4__(v506, 3);
        v510 = v508 + v507 + v506;
        v511 = v507 + ((__ROL4__(v508, 19) - 22355) ^ (v509 - 32049));
        v512 = v508 - v509;
        v513 = v510 + v509;
        v514 = v511 ^ (2012323165 * v512);
        v515 = v510 - __ROL4__(v511, 8);
        v516 = v512 + __ROL4__(v513, 3);
        v517 = (__ROL4__(v515, 28) - 21815) ^ v513 ^ (v514 - 19096);
        v518 = v516 + v514;
        v519 = v518 ^ v515;
        v520 = v516 ^ (v517 + (v518 ^ v515));
        if (((v518 ^ v515) & 0x80u) != 0)
        {
            v521 = __ROL4__(v519 ^ v520, 17) + __ROL4__(v518, 6) + v517;
            v522 = v520 ^ v515;
            v523 = playIntentKey[(unsigned __int8)v521 + 407] + (v519 ^ v520);
            v517 = v522 + v521;
            v518 = v522 ^ (v523 + v517);
            v520 = v523 ^ (243751114 * v517);
        }
        v524 = v517 ^ v519;
        v525 = v518 ^ v517;
        v526 = playIntentKey[(unsigned __int8)v520 + 206] + v518;
        v527 = v520 ^ (871045413 * v524);
        v528 = playIntentKey[(unsigned __int8)v525 + 150] ^ v524;
        v529 = -1262071574 * v526;
        v530 = -1262071574 * v526 + v525;
        v531 = v527 + v526;
        v532 = v528 ^ v530;
        v533 = (v529 + v525 + 4531) ^ v527 ^ (__ROL4__(v528, 30) + 3076);
        v534 = v530 ^ __ROL4__(v531, 15);
        v535 = v531 ^ (__ROL4__(v533, 16) + __ROL4__(v532, 3));
        v536 = v532 + v533;
        LOBYTE(v531) = v535 + v534;
        v537 = v532 ^ (__ROL4__(v534, 1) + __ROL4__(v535, 27));
        v538 = v537 + v536;
        v539 = v535 ^ __ROL4__(v536, 24);
        v540 = v538 + v539;
        v541 = v537 ^ v539;
        v542 = v538 ^ playIntentKey[(unsigned __int8)(v537 ^ v531) + 292] ^ v540;
        return (unsigned int)(v541 + v542);
    case 0xA:
        v543 = a2 - playIntentKey[(unsigned __int8)a3 + 504];
        v544 = a3 ^ (a4 + 1937188940);
        v545 = v543 + a5 + a4;
        v546 = a5 ^ (177753936 * v543);
        v547 = v544 + v545 + 373943576;
        v548 = playIntentKey[(unsigned __int8)v544 + 195] + v543;
        v549 = v546 + v545;
        v550 = v548 ^ v546;
        v551 = v549 + v547;
        v552 = __ROR4__(v549, 1);
        v553 = playIntentKey[(unsigned __int8)v550 + 204] + v549;
        v554 = v552 + v548 + __ROL4__(v547, 23);
        v555 = v550 - v554;
        v556 = v554 - (__ROL4__(v551, 3) + __ROL4__(v553, 19));
        v557 = v553 + v551;
        v558 = (v556 + 6502) ^ v553 ^ (__ROL4__(v555, 24) - 12594);
        v559 = v558 + v557;
        v560 = v556 + __ROL4__(v557, 9);
        v561 = v560 + playIntentKey[(unsigned __int8)v556 + 387] + v555;
        v562 = v561 ^ v558;
        v563 = (~v559 >> 23) | 0xFFFFFFF8;
        do
        {
            v564 = v559 ^ v561;
            v565 = v562 + v560;
            v566 = v564 ^ v562;
            v567 = v564 - __ROL4__(v565, 9);
            v568 = v565 + __ROL4__(v566, 27);
            v569 = v566 ^ (__ROL4__(v567, 18) + __ROL4__(v568, 1));
            v570 = v567 - v568;
            v571 = v568 ^ __ROL4__(v569, 6);
            v572 = __ROL4__(v571, 17);
            v573 = v569 + ((__ROL4__(v570, 6) - 27822) ^ (v571 - 3958));
            v574 = playIntentKey[(unsigned __int8)v573 + 39] ^ v571;
            v575 = __ROL4__(v573, 28) + v570 + v572;
            v576 = v574 + v575;
            v577 = v574 ^ __ROL4__(v575 + v573, 5);
            v578 = v573 + v575 - 709396614;
            v560 = v577 + v578 - v576;
            v562 = v578 - v577;
            v561 = (__ROL4__(v560, 28) + 7275) ^ (v576 - v577) ^ (v562 + 19135);
            ++v563;
        } while (v563);
        v579 = v559 - v560;
        v580 = v560 ^ (__ROL4__(v562, 25) + __ROL4__(v561, 25));
        v581 = v562 - v561;
        v582 = v561 - v579;
        v583 = __ROL4__(v580, 21) + v579 + __ROL4__(v581, 24);
        v584 = v580 - v581;
        v585 = v581 + __ROL4__(v582, 14);
        v586 = playIntentKey[(unsigned __int8)v583 + 186] + v582;
        v587 = v584 + v583;
        v588 = v587 ^ (playIntentKey[(unsigned __int8)v585 + 171] + v584);
        v589 = (v585 - v586 + 108637438) ^ v586 ^ v587;
        return (unsigned int)(v588 + v589);
    case 0xB:
        if ((a3 & 0x800) != 0)
        {
            v590 = a3 ^ a5;
            v591 = a4 + 867406684 * v590;
            v592 = a4 ^ a2 ^ v590;
            v593 = (a4 ^ a2) - v591;
            v594 = playIntentKey[(unsigned __int8)v592 + 36] + v591;
            v595 = v592 - v593;
            v596 = v593 ^ __ROL4__(v594, 3);
            v597 = __ROL4__(v596, 29) + v594 + __ROL4__(v595, 24);
            v598 = v595 - __ROL4__(v596, 2);
            v599 = v596 + __ROL4__(v597, 15);
            v600 = v597 ^ (__ROL4__(v598, 4) + __ROL4__(v599, 16));
            v5 = v600 + v599;
            v601 = v598 + __ROL4__(v599, 14);
            a4 = v600 - v601;
            a5 = playIntentKey[(unsigned __int8)v5 + 431] + v601;
        }
        v602 = a4 + v5 + a3;
        v603 = v5 - a4;
        v604 = a5 + a4;
        v605 = playIntentKey[(unsigned __int8)v602 + 319] ^ a5;
        v606 = v602 - v603;
        v607 = v603 - __ROL4__(v604, 5);
        v608 = (__ROL4__(v605, 7) + 26415) ^ (v606 - 30423);
        v609 = v605 - v606;
        v610 = v608 + v604 - 12922;
        v611 = v604 + v608;
        v612 = v606 + ((__ROL4__(v607, 25) - 25209) ^ v610);
        v613 = v609 + v607;
        v614 = v611 ^ (v609 - 1356088549);
        v615 = v609 - v612;
        v616 = v611 + v613 - v614;
        v617 = playIntentKey[(unsigned __int8)v615 + 483] + v614;
        v618 = playIntentKey[(unsigned __int8)(v612 ^ (v613 + v611 + 12)) + 16] + v615;
        v619 = (v612 ^ (v613 + v611 - 965127924)) - v616 - 1766528472;
        v620 = v617 ^ v616;
        v621 = __ROL4__(v619, 4);
        v622 = v619 - v620;
        v623 = v620 ^ __ROL4__(v617 - v618, 14);
        v624 = v621 + __ROL4__(v620, 13);
        v625 = v624 + v617;
        v626 = v624 + v622 + v618;
        a3 = v622 ^ (v623 - 60513762);
        v5 = v625 ^ v623;
        a4 = v625 - playIntentKey[(unsigned __int8)v626 + 286];
        a5 = a3 ^ v626;
        v627 = ((unsigned __int8)v5 >> 5) + 1;
        do
        {
            v628 = v5 ^ a5;
            v629 = playIntentKey[(unsigned __int8)a4 + 238] + a3;
            v630 = a4 - v628;
            v631 = v628 - ((__ROL4__(v629, 6) - 10766) ^ (v630 + 996537410));
            a3 = v631 + v630 + v629 + 996530363;
            a4 = v631 ^ (v630 + 996530363);
            a5 = v631 - __ROL4__(a3, 4);
            --v627;
        } while (v627);
        return (v5 ^ a3) + (a4 ^ a5);
    case 0xC:
        v632 = a5 + a4;
        v633 = (a2 - a3) ^ a5;
        v634 = a2 - a3 - 461240187 * (v632 + a3);
        v635 = v634 + __ROL4__(a3, 16);
        v636 = v632 - __ROL4__(v633, 6);
        v637 = playIntentKey[(unsigned __int8)v636 + 252] + a3;
        v638 = v636 - v635 - (v633 ^ v634);
        v639 = playIntentKey[(unsigned __int8)v635 + 276] ^ v633 ^ v634;
        v640 = v635 - v637;
        v641 = v637 - __ROL4__(v638, 16);
        v642 = v638 - v639;
        v643 = v639 - v640;
        v644 = v640 - v641;
        v645 = v642 + __ROL4__(v643, 5);
        v646 = v643 - __ROL4__(v644, 16);
        v647 = v644 - playIntentKey[(unsigned __int8)(v641 - -5 * v642) + 137];
        v648 = playIntentKey[(unsigned __int8)v645 + 14] + v641 - 1906659067 * v642;
        v649 = v645 - v646;
        v650 = v646 - __ROL4__(v647, 3);
        v651 = v647 - v648;
        v652 = v648 - __ROL4__(v649, 2);
        v653 = v650 ^ v649;
        v654 = v651 ^ v650;
        v655 = (__ROL4__(v652, 22) + 4610) ^ (v653 + 15191);
        v656 = v652 - v653;
        v657 = v653 - __ROL4__(v654, 11);
        v658 = v655 + v656 + v651;
        v659 = v658 + v654;
        v660 = v656 - playIntentKey[(unsigned __int8)v657 + 19];
        v661 = v657 - v658 - v659;
        v662 = v660 ^ v661;
        v663 = v658 ^ v659;
        v664 = v658 - ((__ROL4__(v660, 17) + 13095) ^ (v661 - 25507));
        v665 = v661 - __ROL4__(v663, 29);
        v666 = v663 + __ROL4__(v660 ^ v661, 19);
        v667 = __ROL4__(v662, 14);
        v668 = __ROL4__(v664, 18) + v666;
        v669 = playIntentKey[(unsigned __int8)v665 + 17] + v662;
        v670 = v664 - v667;
        v671 = v665 + 856399768 - v668;
        v672 = 1414107772 * v670;
        v673 = 1414107772 * v670 + v668;
        v674 = v670 - v669 - v671;
        v675 = v669 ^ (v671 + 1610231876);
        v676 = v674 + v672 + v665 + 856399768;
        v677 = v673 ^ (-149203128 * v674);
        v678 = v676 + v675 + v674;
        v679 = v678 ^ (v675 + v676 + 46986512);
        v680 = (v676 - v677) ^ v677 ^ v678;
        return (unsigned int)(v679 + v680);
    case 0xD:
        v681 = a3 ^ a2;
        v682 = a4 ^ a3;
        v683 = a4 - (v681 + __ROL4__(a5, 10));
        v684 = a5 - v681;
        v685 = ((v682 >> 21) & 7) + 1;
        do
        {
            v686 = v682 ^ v684;
            v687 = v683 ^ v686;
            v688 = v681 + __ROL4__(v683, 26) + __ROL4__(v686, 18);
            v689 = v686 - playIntentKey[(unsigned __int8)v688 + 367];
            v681 = v688 - v687;
            v683 = v687 - v689;
            v684 = playIntentKey[(unsigned __int8)v681 + 59] + v689;
            --v685;
        } while (v685);
        v690 = v682 + ((__ROL4__(v681, 30) + 21948) ^ (v683 - 27436));
        v691 = v681 - ((__ROL4__(v683, 9) + 13988) ^ (v684 + 28355));
        v692 = v683 + v684 - 325862487;
        v693 = v684 ^ __ROL4__(v690, 30);
        v694 = v690 - v692 - v691;
        v695 = v692 ^ v691;
        v696 = v693 ^ (1913796553 * v694);
        v697 = v692 - playIntentKey[(unsigned __int8)v693 + 372];
        v698 = v695 ^ v697;
        v699 = playIntentKey[(unsigned __int8)v695 + 358] + v694;
        v700 = v696 ^ v697;
        v701 = v696 - v698 - v699;
        v702 = v698 ^ v699;
        v703 = v698 - __ROR4__(v700, 1);
        v704 = __ROL4__(v701, 20) + v700 + __ROL4__(v702, 29);
        v705 = v702 + v701;
        v706 = v704 + v703;
        v707 = v702 ^ (__ROL4__(v703, 5) + __ROL4__(v704, 21));
        v708 = __ROL4__(v705, 26);
        v709 = v705 - playIntentKey[(unsigned __int8)v707 + 37];
        v710 = v704 - v708;
        v711 = v707 - v706;
        v712 = v706 - v710 - v709;
        v713 = v709 ^ v710;
        v714 = v711 + v709;
        v715 = v712 ^ v711;
        v716 = playIntentKey[(unsigned __int8)v713 + 343] ^ v712;
        v717 = v713 - 378399316 * v714;
        v718 = v715 ^ v714;
        v719 = v715 - playIntentKey[(unsigned __int8)v716 + 206];
        v720 = v716 - v717;
        v721 = v717 + __ROL4__(v718, 23);
        v722 = v719 ^ v720;
        v723 = __ROL4__(v719, 14) + __ROR4__(v720, 1);
        v724 = v720 - playIntentKey[(unsigned __int8)v721 + 296];
        v588 = v723 ^ v718 ^ v721;
        v725 = v722 - v724;
        v726 = v588 + v724;
        goto LABEL_275;
    case 0xE:
        v727 = a4 + a3;
        v728 = (__ROL4__(a3, 1) - 16207) ^ a2 ^ (a4 + 9951);
        v729 = a4 - ((a5 - 8205) ^ (v728 + 20254));
        v730 = __ROL4__(v728, 2) + a5 + __ROL4__(v727, 29);
        if ((v727 & 0x80000) != 0)
        {
            v731 = v727 ^ v730;
            v732 = v729 + v731 + 1109842896;
            v733 = v728 ^ __ROL4__(v729, 6);
            v734 = v733 ^ v731;
            v728 = v733 - playIntentKey[(unsigned __int8)v732 + 71];
            v729 = v732 ^ (v734 - 453468004);
            v730 = v734 - __ROL4__(v728, 17);
        }
        v735 = v728 ^ v727;
        v736 = v728 - playIntentKey[(unsigned __int8)v729 + 159];
        v737 = v729 ^ (v730 + 173826294);
        v738 = v735 + v730;
        v739 = v735 ^ __ROL4__(v736, 30);
        v740 = v736 - v737 - v738;
        v741 = v738 ^ v737;
        v742 = v738 ^ __ROL4__(v739, 21);
        v743 = v739 - playIntentKey[(unsigned __int8)v740 + 74];
        v744 = v740 ^ (1040138401 * v741);
        v745 = v741 - v742;
        v746 = v743 + v742;
        v747 = v744 ^ v745;
        v748 = v743 - playIntentKey[(unsigned __int8)v744 + 427];
        v749 = v746 ^ v745;
        v750 = v747 + v748 + v746;
        v751 = v747 ^ (v750 + v749);
        v752 = playIntentKey[(unsigned __int8)v747 + 27] + v748;
        v753 = v749 - v750 - 713389896;
        v754 = v750 - v752 - 1433066358;
        v755 = ((v751 >> 10) & 7) + 1;
        do
        {
            v756 = v751 ^ v754;
            v757 = v752 + 1419912623 * v753;
            v758 = v756 ^ (1684665902 * v757);
            v759 = playIntentKey[(unsigned __int8)v756 + 473] ^ v753;
            v760 = v759 ^ v757;
            v761 = playIntentKey[(unsigned __int8)v758 + 165] + v759;
            v762 = v758 ^ __ROL4__(v760, 18);
            v763 = v760 ^ __ROL4__(v761, 3);
            v764 = v762 ^ (v763 + 1812840580);
            v765 = __ROL4__(v763, 23) + v761 + __ROL4__(v762, 24);
            v752 = v763 - v765;
            v754 = v764 ^ v752;
            v753 = v765 ^ (__ROL4__(v764, 4) + __ROL4__(v752, 10));
            --v755;
        } while (v755);
        v766 = ((v752 >> 20) & 7) + 1;
        do
        {
            v767 = v752 ^ v754;
            v768 = v753 + v751;
            v769 = playIntentKey[(unsigned __int8)v767 + 321] ^ v753;
            v770 = v768 + v767;
            v771 = v769 - v770;
            v772 = v770 + __ROL4__(v769 - v770, 24);
            v773 = __ROL4__(v769, 20) + v768 + __ROL4__(v770, 22);
            v753 = __ROL4__(v773, 19) + v772;
            v774 = v773 - ((__ROL4__(v771, 9) + 16199) ^ (v753 - 11249));
            v751 = v774 - (v753 ^ v771);
            v754 = (v753 - v774) ^ (-988520311 * v751);
            --v766;
        } while (v766);
        v108 = v752 ^ v751;
        goto LABEL_218;
    case 0xF:
        v775 = a3;
        v776 = playIntentKey[(unsigned __int8)a4 + 419] + a3;
        v777 = a2 + __ROL4__(v775, 23);
        v778 = a5 ^ __ROL4__(v777, 15);
        v779 = v776 ^ v777;
        v780 = v776 - v778 - (a5 + a4);
        v781 = a5 + a4 - v778;
        v782 = v778 ^ (v779 + v780);
        v783 = v780 ^ v779;
        v784 = playIntentKey[(unsigned __int8)v781 + 424] ^ v780;
        v785 = v782 + v781 - 1978238979;
        v786 = playIntentKey[(unsigned __int8)v783 + 39] ^ v782;
        v787 = v783 ^ (v784 - 1782114875);
        v788 = v785 ^ v784;
        v789 = v786 ^ (__ROL4__(v787, 26) + __ROL4__(v788, 13));
        v790 = v785 - __ROL4__(v786, 8);
        v791 = ((v788 >> 18) & 7) + 1;
        do
        {
            v792 = v788 ^ v789;
            v793 = v790 + v787 - 682664192;
            v794 = playIntentKey[(unsigned __int8)v793 + 3] ^ v792;
            v787 = (v792 + v790) ^ v793;
            v790 = (v792 + v790) ^ __ROL4__(v794, 22);
            v789 = v794 ^ (__ROL4__(v787, 22) + __ROL4__(v790, 12));
            --v791;
        } while (v791);
        if ((v787 & 0x100) != 0)
        {
            v795 = v787 ^ v789;
            v796 = v795 + v790;
            v797 = playIntentKey[(unsigned __int8)v795 + 189] ^ v790;
            v798 = v788 ^ v796;
            v799 = v798 ^ (811007750 * v797);
            v800 = v795 ^ (__ROL4__(v798, 29) + __ROL4__(v797, 4));
            v801 = v800 ^ v797;
            v802 = v799 ^ v801;
            v803 = v800 - __ROL4__(v799, 6);
            v804 = v803 ^ v801;
            v788 = v802 ^ (v804 + 939182427);
            v805 = v803 - playIntentKey[(unsigned __int8)v802 + 359];
            v790 = v804 - __ROL4__(v805, 16);
            v789 = playIntentKey[(unsigned __int8)v788 + 50] + v805;
        }
        v806 = ((v788 >> 1) & 7) + 1;
        do
        {
            v807 = v788 ^ v789;
            v808 = v787 - v790;
            v809 = v790 - __ROL4__(v807, 4);
            v810 = playIntentKey[(unsigned __int8)v808 + 162] + v807;
            v811 = v808 - playIntentKey[(unsigned __int8)v809 + 106];
            v812 = v809 - v810 - v811;
            v813 = v810 ^ __ROR4__(v811, 1);
            v814 = v811 + ((__ROL4__(v812, 22) + 25052) ^ (v813 - 13178));
            v815 = v814 + v813 + v812;
            v816 = v813 + 2058995873 * v814;
            v817 = v814 ^ (-2039847318 * v815);
            v818 = v816 ^ v815;
            v819 = v817 - __ROL4__(v818, 29);
            v820 = v817 - v816 + 2 * v818;
            v821 = v819 + v818;
            v787 = v820 ^ v819;
            v789 = v821 ^ v787;
            v790 = v820 - playIntentKey[(unsigned __int8)v821 + 233];
            --v806;
        } while (v806);
        v541 = v788 ^ v787;
        v542 = v790 ^ v789;
        return (unsigned int)(v541 + v542);
    case 0x10:
        v822 = a3 ^ a2;
        v823 = a3 - ((__ROL4__(a4, 16) + 24227) ^ (a5 - 26133));
        v824 = v822 + a5;
        v825 = v824 + a4;
        v826 = playIntentKey[(unsigned __int8)v823 + 204] ^ v822;
        v827 = v825 + v823;
        v828 = v825 - playIntentKey[(unsigned __int8)v824 + 169];
        v829 = v824 + 755890903 * v826;
        v830 = v826 - playIntentKey[(unsigned __int8)v827 + 154];
        v831 = v827 ^ (v828 - 2105844497);
        v832 = v829 + v828;
        v833 = v830 + v829;
        if ((v831 & 0x40000) != 0)
        {
            v834 = v831 ^ v833;
            v835 = v830 + v832;
            v836 = v830 + v832 - 179927041;
            v837 = 179927041 - (v834 + v830);
            v838 = v834 ^ v836;
            v839 = 1288586231 * v837 + v835 - 179927041;
            v840 = v838 + v837;
            v841 = v839 + v840;
            v842 = playIntentKey[(unsigned __int8)v840 + 209] ^ v839;
            v843 = v838 ^ v841;
            v844 = v840 - (v842 + __ROL4__(v843, 9));
            v845 = v842 + v843;
            v846 = v842 - v844;
            v847 = v844 ^ (__ROL4__(v845, 29) + 22801) ^ (v846 + 8763);
            v848 = v845 ^ (__ROL4__(v846, 8) + __ROL4__(v847, 28));
            v849 = v847 ^ v848;
            v850 = __ROL4__(v848, 19) + v846 + __ROL4__(v847, 17);
            v851 = v848 - playIntentKey[(unsigned __int8)v850 + 422];
            v830 = v849 + v850;
            v832 = playIntentKey[(unsigned __int8)v851 + 133] ^ v849;
            v833 = v830 ^ v851;
        }
        v852 = (v830 >> 31) + 1;
        do
        {
            v853 = playIntentKey[(unsigned __int8)v832 + 12] + v831;
            v854 = v853 + (v830 ^ v833);
            v855 = v854 ^ v832;
            v831 = v855 + v853;
            v833 = v854 ^ v831;
            v832 = v855 - __ROL4__(v854, 12);
            --v852;
        } while (v852);
        v856 = v830 - (__ROL4__(v831, 12) + __ROL4__(v832, 24));
        v857 = v831 - v832;
        v858 = v856 + __ROL4__(v857, 18);
        v859 = v833 + v832;
        v860 = v833 ^ (__ROL4__(v856, 21) + __ROL4__(v857, 1));
        v861 = v857 - (__ROL4__(v859, 7) + __ROL4__(v860, 25));
        v862 = v859 + 1488974828 * v860;
        v863 = v858 ^ v860;
        v864 = v861 + v862 + v858;
        v865 = v861 - v862;
        v866 = v863 ^ v862;
        v867 = v864 ^ v863;
        v868 = v864 - v865 - v866;
        v869 = v865 ^ (v866 - 780425069);
        v870 = v866 - __ROL4__(v867, 8);
        v871 = v867 - v868 - v869;
        v872 = v868 - v869;
        v873 = v869 - __ROL4__(v870, 8);
        v108 = (v870 - ((__ROL4__(v871, 28) + 14768) ^ (v872 - 18391))) ^ (v872 + v871);
        goto LABEL_259;
    case 0x11:
        if ((a3 & 0x1000000) != 0)
        {
            v874 = a3 ^ a5;
            v875 = a4 + a2;
            v876 = v874 + a4;
            v877 = playIntentKey[(unsigned __int8)v875 + 81] ^ v874;
            v878 = v876 ^ (-1612381389 * v877);
            v879 = v875 + __ROL4__(v876, 2);
            v880 = v879 + v877;
            v881 = v878 + v879;
            v882 = -2084472237 * v881 + v880;
            v883 = v878 ^ __ROL4__(v880, 27);
            v5 = v881 + ((__ROL4__(v883, 13) - 29346) ^ (v880 - 2084472237 * v881 + 23865));
            a4 = v883 - 382159407 * v882;
            a5 = v5 + v882;
        }
        v140 = v5 + a3;
        v141 = playIntentKey[(unsigned __int8)a4 + 269] ^ v5;
        v884 = a4 + 985021554 * a5;
        v885 = v140 + a5;
        if ((v141 & 0x20000000) != 0)
        {
            v886 = v141 ^ v885;
            v887 = playIntentKey[(unsigned __int8)v884 + 346] ^ v140;
            v888 = playIntentKey[(unsigned __int8)v886 + 325] + v884;
            v889 = playIntentKey[(unsigned __int8)v887 + 242] + v886;
            v140 = playIntentKey[(unsigned __int8)v888 + 228] + v887;
            v884 = __ROL4__(v889, 19) ^ v888;
            v885 = playIntentKey[(unsigned __int8)v140 + 446] ^ v889;
        }
        v890 = ((unsigned __int8)v140 >> 5) + 1;
        do
        {
            v891 = v140 ^ v885;
            v892 = (__ROL4__(v884, 2) + 4235) ^ v141 ^ (v891 - 18417);
            v893 = v884 ^ (__ROL4__(v891, 13) + __ROL4__(v892, 21));
            v894 = v893 + v892;
            v895 = v891 + __ROL4__(v892, 23);
            v896 = v895 + v893;
            v897 = playIntentKey[(unsigned __int8)v894 + 248] + v895;
            v898 = v896 ^ v894;
            v899 = v896 + 1477411134 * v897;
            v900 = v897 - playIntentKey[(unsigned __int8)v898 + 451];
            v141 = playIntentKey[(unsigned __int8)v899 + 199] ^ v898;
            v884 = v899 - v141 - v900;
            v885 = v141 + v900 + 1989771253;
            --v890;
        } while (v890);
        if (v141 < 0)
        {
            v901 = v141 ^ v885;
            v902 = v140 ^ __ROL4__(v884, 6);
            v903 = v901 + v884 - 1912942000;
            v904 = v902 + v901;
            v905 = v902 - __ROL4__(v903, 18);
            v884 = v903 - v904 - v905;
            v885 = v904 - v905 + 1205745360;
            v140 = v905;
        }
        if ((v140 & 0x40000000) != 0)
        {
            v906 = v140 ^ v885;
            v907 = v141 - 89829427 - v884;
            v908 = v906 + v884;
            v909 = v906 ^ (v906 + v141 - 89829427);
            v910 = v907 ^ __ROL4__(v908, 30);
            v911 = v908 - v909 - v910;
            v912 = v909 + 1396520236 * v910;
            v913 = v910 ^ (1787546397 * v911);
            v914 = v911 ^ __ROL4__(v912, 21);
            v915 = v912 ^ (__ROL4__(v913, 21) + __ROL4__(v914, 4));
            v141 = v913 - playIntentKey[(unsigned __int8)v914 + 43];
            v916 = v914 - v915 - v141;
            v885 = v141 ^ v915;
            v884 = v916;
        }
        v162 = v885 ^ v884;
    LABEL_101:
        v319 = v140 ^ v141;
        return (unsigned int)(v162 + v319);
    case 0x12:
        v917 = playIntentKey[(unsigned __int8)a3 + 93] + a2;
        v918 = a3 - 487692466;
        v919 = v918 - a4;
        v920 = a4 - a5;
        v921 = v918 - a5;
        v922 = playIntentKey[(unsigned __int8)v917 + 436] + a5;
        v923 = playIntentKey[v919 + 297] ^ v917;
        v924 = v920 - 963043947 * v922;
        v925 = v922 - v923;
        v926 = v921 + v924 - 1075618434;
        v927 = -1354004572 * (v921 - 1075618434) + v923;
        v928 = v924 ^ (__ROL4__(v925, 8) + 31132) ^ (v927 + 4435);
        v929 = v925 ^ (__ROL4__(v927, 20) + __ROL4__(v926, 6));
        v930 = v927 - ((__ROL4__(v926, 26) - 19469) ^ (v928 + 21936));
        v931 = v926 - (__ROL4__(v928, 5) + __ROL4__(v929, 30));
        v932 = v930 + v929 + v928;
        v933 = v931 + v930 + 1287342729;
        v934 = playIntentKey[(unsigned __int8)v932 + 179] ^ v931;
        v935 = v933 + playIntentKey[(unsigned __int8)v930 + 235] + v929;
        v936 = v935 ^ v932;
        v937 = ((v934 >> 15) & 7) + 1;
        do
        {
            v938 = v934 ^ v935;
            v939 = v933 + ((__ROL4__(v936, 5) + 32639) ^ (v938 + 18970));
            v940 = v936 - v938;
            v941 = v938 + __ROL4__(v939, 15);
            v942 = v940 + v939;
            v943 = v940 - 1981298871 * v941;
            v944 = v941 - v942;
            v945 = v943 ^ v942;
            v946 = v943 + __ROL4__(v944, 25);
            v947 = v945 + v946 + v944;
            v948 = v945 ^ (v947 + v946);
            v949 = v947 ^ v946;
            v950 = v947 ^ __ROL4__(v948, 2);
            v951 = v948 - __ROL4__(v949, 10);
            v933 = v951 ^ (v950 + v949);
            v952 = v950 ^ __ROL4__(v951, 3);
            v936 = v952 ^ (v950 + v949);
            v935 = v952 - __ROL4__(v933, 15);
            --v937;
        } while (v937);
        v953 = v934 - v933;
        v954 = playIntentKey[(unsigned __int8)v936 + 187] ^ v933;
        v955 = v936 - v953 - v935;
        v956 = __ROL4__(v954, 21);
        v957 = v954 - v955;
        v872 = v955 + __ROL4__(v935 - playIntentKey[(unsigned __int8)v953 + 83], 20);
        v958 = v957 ^ (v953 + v956);
        v873 = -1065680301 * v958;
        v108 = v958 ^ (v957 - playIntentKey[(unsigned __int8)v872 + 232]);
        goto LABEL_259;
    case 0x13:
        v959 = a2 - a3;
        v960 = playIntentKey[(unsigned __int8)a4 + 446];
        v961 = a3 - v960;
        v962 = v959 + a5 + a4;
        v963 = v962 ^ (__ROL4__(a5 - v959, 15) - 16776);
        v964 = v961 + __ROL4__(v962, 12);
        v965 = (a2 - v960 + 17756) ^ v963;
        v966 = a5 + v961;
        v967 = 365602924 * v965 + v964;
        v968 = a2 - v960 - __ROL4__(v964, 9);
        v969 = v966 + ((__ROL4__(v968, 10) - 3847) ^ (v967 - 29721));
        v970 = v967 + v968;
        v971 = v965 - v966;
        v972 = v965 - v966 + v969 + 1590907406;
        v973 = v967 ^ __ROL4__(v971, 8);
        v974 = v969 + v971;
        v975 = playIntentKey[(unsigned __int8)v970 + 56] ^ v969;
        v976 = v970 ^ (v973 + v974 + 1590907406);
        v977 = v973 - v972;
        v978 = v975 + v976 + 27325033;
        v979 = playIntentKey[(unsigned __int8)v975 + 20] + v972;
        v980 = v977 ^ v976;
        v981 = v977 - v979 - v978;
        v982 = v978 ^ v979;
        v983 = playIntentKey[(unsigned __int8)v980 + 349] ^ v978;
        if ((v981 & 2) != 0)
        {
            v984 = v981 ^ v983;
            v985 = v980 ^ (__ROL4__(v982, 18) - 24044) ^ (v984 + 17041);
            v986 = v984 ^ v985;
            v987 = v982 ^ (__ROL4__(v984, 29) + __ROL4__(v985, 30));
            v988 = v985 - v987;
            v989 = __ROL4__(v986, 3);
            v990 = v987 - v989;
            v991 = __ROL4__(v988, 24) + v990 + v986;
            v992 = v991 + v990;
            v993 = playIntentKey[(unsigned __int8)v992 + 280];
            v994 = v993 + v991;
            v995 = (v992 ^ v994) + v993 + v985 - v989 - 627592889;
            v996 = v995 ^ (__ROL4__(v992, 13) - 3267);
            v997 = v994 ^ __ROL4__(v995, 25);
            v980 = (v997 + 4617) ^ v996;
            v982 = v992 + 1256243696 * v997;
            v983 = v980 ^ v997;
        }
        v998 = v981 - 1752168220 * v980;
        v999 = v982 + v980;
        v1000 = v982 - v983;
        v1001 = v983 - v998;
        v1002 = v998 ^ __ROL4__(v999, 12);
        v1003 = v1001 + v1000 + v999 + 977314908;
        v1004 = v1003 + v1002;
        v1005 = v1000 ^ (v1001 - 1828335652);
        v1006 = v1005 + v1003;
        v1007 = v1004 + __ROL4__(v1002, 21) + v1001 + 977314908;
        v1008 = v1007 ^ v1005;
        v1009 = -1939338453 * v1008;
        v1010 = v1006 ^ (-1939338453 * v1008);
        v1011 = v1007 + v1008;
        v1012 = v1007 ^ (__ROL4__(v1004 ^ v1006, 9) + __ROL4__(v1010, 14));
        v1013 = v1012 + v1011;
        v1014 = v1004 ^ v1009;
        v1015 = v1010 ^ __ROL4__(v1011, 19);
        v872 = v1014 + v1012;
        v1016 = v1014 - 2020468676 * v1015;
        v1017 = (unsigned __int8)v1016;
        v108 = v1013 ^ v1015 ^ v1016;
        v873 = playIntentKey[v1017 + 467] ^ (v1013 + __ROL4__(v872, 17));
        goto LABEL_259;
    case 0x14:
        v1018 = ((a3 >> 25) & 7) + 1;
        do
        {
            v1019 = a3 ^ a5;
            v1020 = v5 - a4;
            v1021 = v1019 ^ a4;
            v1022 = v1019 ^ (1993270009 * v1020);
            v1023 = v1020 + ((__ROL4__(v1021, 24) - 30096) ^ (v1022 + 22672));
            v1024 = v1021 - v1022;
            v1025 = v1023 + __ROL4__(v1024, 22);
            v1026 = v1022 + __ROL4__(v1023, 4);
            v1027 = playIntentKey[(unsigned __int8)v1026 + 353] + v1024;
            v1028 = v1025 ^ v1026;
            v1029 = v1028 + v1025;
            v5 = v1025 - v1027;
            a4 = v1028 + v1027;
            a5 = v1028 ^ v1029;
            --v1018;
        } while (v1018);
        if ((v5 & 0x2000) != 0)
        {
            v1030 = v5 ^ a5;
            v1031 = a3 - a4;
            v1032 = a4 + ((__ROL4__(v1030, 19) + 6513) ^ (v1031 - 17114));
            v1033 = v1030 - v1031;
            v1034 = v1031 - ((__ROL4__(v1032, 15) + 12465) ^ (v1033 - 9358));
            v1035 = v1033 ^ v1032;
            v1036 = __ROL4__(v1034, 14);
            v1037 = playIntentKey[(unsigned __int8)v1035 + 30] + v1034;
            v1038 = v1033 + ((v1036 + 20467) ^ (v1035 + 945));
            v1039 = v1035 - v1038 - 1361711219;
            v1040 = v1038 - v1037;
            a3 = v1039 ^ v1037;
            v1041 = playIntentKey[(unsigned __int8)v1040 + 121] + v1039;
            a5 = v1040 ^ (a3 + v1041);
            a4 = v1041;
        }
        v1042 = ((a3 >> 27) & 7) + 1;
        do
        {
            v1043 = a3 ^ a5;
            v1044 = v5 - __ROL4__(a4, 8);
            v1045 = a4 - v1043;
            v1046 = v1043 - v1044;
            v1047 = v1044 - v1045;
            v1048 = playIntentKey[(unsigned __int8)v1046 + 120] ^ v1045;
            v1049 = playIntentKey[(unsigned __int8)v1048 + 85] + v1047 - 1724317775;
            v1050 = v1046 + v1047 + 264753278;
            v1051 = v1048 - v1050;
            v1052 = v1049 ^ (v1051 - 160735402);
            v1053 = playIntentKey[(unsigned __int8)v1049 + 211] + v1050;
            v1054 = -1439584136 * v1053 + v1051 - 160735402;
            v1055 = v1052 + v1053;
            v1056 = v1052 - 1027047508 * v1054;
            v1057 = v1054 + v1055 - 3789;
            v1058 = v1055 + v1054;
            v5 = v1056 ^ __ROR4__(v1058, 1);
            v1059 = v1055 + ((__ROL4__(v1056, 9) - 1636) ^ v1057);
            a4 = playIntentKey[(unsigned __int8)v1059 + 202] ^ v1058;
            a5 = v5 + v1059;
            --v1042;
        } while (v1042);
        v1060 = a3 ^ (a4 + v5);
        v1061 = v5 ^ (a4 + 1260186085);
        v1062 = a4 - a5;
        v1063 = v1060 + v1061 + a5;
        v1064 = v1060 + __ROL4__(v1061, 12);
        v1065 = v1062 + v1061;
        v1066 = v1062 ^ (v1063 + v1064);
        v1067 = v1063 - v1064;
        v1068 = v1064 - v1065;
        v1069 = v1065 ^ (-1541174806 * v1066);
        v1070 = v1066 - v1067;
        v1071 = playIntentKey[(unsigned __int8)v1068 + 193] + v1067;
        v1072 = v1068 ^ (v1069 + v1070);
        v1073 = v1069 + __ROL4__(v1070, 21);
        v1074 = playIntentKey[(unsigned __int8)v1071 + 96] + v1070;
        v1075 = v1072 + v1071 - 39587659;
        v1076 = playIntentKey[(unsigned __int8)v1073 + 448] + v1072;
        v1077 = v1073 - v1074;
        v1078 = v1074 + __ROL4__(v1075, 12);
        v1079 = v1075 - v1076;
        v1080 = v1076 ^ __ROL4__(v1077, 29);
        v1081 = v1079 + v1078 + 1343148906;
        v1079 += 1343148906;
        v1082 = v1077 - v1081;
        v1083 = v1078 ^ (631887927 * v1079);
        v1084 = v1080 ^ (1022848552 * v1082);
        v108 = v1084 ^ (v1082 + 1001611204 * v1083);
        v427 = (v1084 + (v1080 ^ v1079)) ^ (v1083 - (v1084 + (v1080 ^ v1079)));
        return (unsigned int)(v108 + v427);
    case 0x15:
        if ((a3 & 0x800000) != 0)
        {
            v1085 = a3 ^ a5;
            v1086 = v1085 + a4 + a2;
            v1087 = a4 - __ROL4__(v1085, 27);
            v1088 = v1087 + v1086 + v1085;
            v1089 = v1087 + __ROL4__(v1088, 5);
            v1090 = v1086 - __ROL4__(v1087, 14);
            v1091 = __ROL4__(v1090, 12);
            v1092 = v1088 ^ (v1090 - 110522927);
            v1093 = v1090 ^ (v1091 + v1089 + 280437698);
            v1094 = v1091 + v1089 - v1092;
            v1095 = playIntentKey[(unsigned __int8)v1093 + 153] ^ v1092;
            v1096 = v1094 ^ (755789179 * v1095);
            v1097 = playIntentKey[(unsigned __int8)v1094 + 251] + v1093;
            v1098 = v1095 - v1097;
            v1099 = v1096 ^ v1097;
            v1100 = v1099 + v1098;
            v1101 = playIntentKey[(unsigned __int8)v1098 + 68] ^ v1096;
            v1102 = v1101 + v1099 + v1098 + v1099;
            a4 = v1101 - v1100;
            a5 = playIntentKey[(unsigned __int8)v1102 + 464] ^ v1100;
            v5 = v1102;
        }
        v1103 = v5 ^ a3;
        v1104 = v5 - __ROL4__(a4, 9);
        v1105 = playIntentKey[(unsigned __int8)a5 + 468];
        v1106 = v1103 ^ a5;
        v1107 = a4 - v1105;
        v1108 = (a4 - v1105 - 11287) ^ v1103 ^ (__ROL4__(v1104, 29) + 22342);
        v1109 = v1104 ^ (__ROL4__(a4 - v1105, 8) + __ROL4__(v1106, 17));
        v1110 = playIntentKey[(unsigned __int8)v1108 + 397];
        v1111 = v1108 - v1109;
        v1112 = (unsigned __int8)(v1107 - v1106);
        v1113 = v1111 + v1107 - v1110;
        v1114 = v1106 - v1110 - v1111;
        v1115 = v1113 + v1109 - playIntentKey[v1112 + 383];
        v1116 = v1115 ^ v1111;
        v1117 = v1113 - v1114;
        v1118 = v1116 + v1115 + v1114;
        if ((v1115 & 0x2000000) != 0)
        {
            v1119 = v1115 ^ v1118;
            v1120 = __ROL4__(v1117, 17) ^ v1116;
            v1121 = v1117 - playIntentKey[(unsigned __int8)v1119 + 145];
            v1122 = v1119 - v1120 - v1121;
            v1123 = v1122 + v1121;
            v1124 = v1123 ^ v1120;
            v1125 = playIntentKey[(unsigned __int8)v1124 + 474] + v1122;
            v1126 = playIntentKey[(unsigned __int8)v1123 + 418] ^ v1124;
            v1127 = v1123 - playIntentKey[(unsigned __int8)v1125 + 438];
            v1128 = __ROL4__(v1127, 12) + v1125 + __ROL4__(v1126, 13);
            v1129 = v1127 + v1126;
            v1130 = v1127 + __ROL4__(v1128, 4);
            v1131 = v1128 ^ (__ROL4__(v1129, 25) + __ROR4__(v1130, 1));
            v1132 = (v1131 - 16020) ^ v1129 ^ (__ROL4__(v1130, 24) + 239);
            v1133 = __ROL4__(v1132, 30) + v1130 + __ROL4__(v1131, 21);
            v1134 = v1131 - __ROR4__(v1132, 1);
            v1135 = v1132 - v1133;
            v1117 = v1134 ^ v1133;
            v1116 = v1135 + 1076745429;
            v1118 = v1134 + v1135 + 1076745429;
        }
        return (unsigned int)((v1118 ^ v1117) + (v1115 ^ v1116));
    case 0x16:
        v1137 = ((a3 >> 10) & 7) + 1;
        do
        {
            v1138 = a3 ^ a5;
            v1139 = v5 - a4 - v1138;
            v1140 = a4 ^ (703500073 * v1138);
            v1141 = v1138 - __ROL4__(v1139, 19);
            v5 = v1139 - v1140;
            a4 = v1141 ^ v1140;
            a5 = v1141 - v5 - (v1141 ^ v1140);
            --v1137;
        } while (v1137);
        v1142 = ~(_BYTE)v5 | 0xFFFFFFF8;
        do
        {
            v1143 = v5 ^ a5;
            v1144 = playIntentKey[(unsigned __int8)a4 + 480] ^ a3;
            v1145 = v1143 + a4 - 339719115;
            v1146 = v1143 ^ __ROL4__(v1144, 10);
            v1147 = v1144 - v1145;
            v1148 = v1146 ^ v1145;
            v1149 = v1146 + __ROL4__(v1147, 22);
            v1150 = 526592992 * v1148 + v1147;
            v1151 = v1149 ^ v1148;
            v1152 = playIntentKey[(unsigned __int8)v1150 + 183] + v1149;
            a3 = playIntentKey[(unsigned __int8)v1151 + 168] + v1150;
            a4 = v1151 - v1152;
            a5 = a3 + v1152;
            ++v1142;
        } while (v1142);
        v1153 = a3 + v5;
        v1154 = a3 - a4;
        v1155 = playIntentKey[(unsigned __int8)a5 + 498] ^ a4;
        v1156 = v1153 + a5;
        v1157 = v1153 ^ (v1154 - 29583852);
        v1158 = v1154 - playIntentKey[(unsigned __int8)v1155 + 62];
        v1159 = v1156 + v1157 + v1155;
        v1160 = v1156 - v1157;
        v1161 = v1157 ^ (__ROL4__(v1158, 3) + __ROL4__(v1159, 23));
        v1162 = v1159 + v1158;
        v1163 = __ROL4__(v1161, 12);
        v1164 = v1159 - __ROL4__(v1160, 23);
        v1165 = v1160 + __ROL4__(v1162, 1);
        v1166 = v1161 - __ROL4__(v1162, 9);
        v1167 = v1162 + ((__ROL4__(v1164, 11) + 9617) ^ (v1163 + v1165 - 2856));
        v1168 = v1164 - (v1163 + v1165);
        v1169 = v1163 + v1165 - v1166;
        v1170 = v1167 + v1166;
        v1171 = v1167 ^ __ROL4__(v1168, 8);
        v1172 = v1168 - v1169;
        v1173 = v1169 - v1171 - v1170;
        v1174 = playIntentKey[(unsigned __int8)v1171 + 22] + v1170;
        v1175 = v1171 - v1172;
        v1176 = v1173 ^ (v1175 + v1174 - 1034754154);
        v1177 = playIntentKey[(unsigned __int8)v1173 + 148] + v1172;
        v1175 -= 1034754154;
        v1178 = v1175 ^ v1174;
        v1179 = v1175 - v1177 - v1176;
        v358 = v1177 - playIntentKey[(unsigned __int8)v1176 + 30];
        v359 = v1176 - v1178;
        v1180 = ((unsigned int)~v1179 >> 1) | 0xFFFFFFF8;
        do
        {
            v1181 = v1179 ^ v359;
            v1182 = v1178 - __ROL4__(v358, 27);
            v1183 = v358 - ((__ROL4__(v1181, 6) + 18102) ^ (v1182 + 21982));
            v1184 = __ROL4__(v1183, 26);
            v1185 = v1182 ^ v1181;
            v1186 = v1183 - v1185;
            v1187 = v1184 + v1182 + __ROL4__(v1185, 24);
            v1188 = __ROL4__(v1187, 24) + v1185 + __ROL4__(v1186, 26);
            v1189 = v1186 ^ v1187;
            v1190 = playIntentKey[(unsigned __int8)v1188 + 418] + v1186;
            v1191 = v1190 + v1189;
            v1192 = v1190 ^ (v1190 + v1188);
            v1193 = v1188 + v1190 + 1662113989;
            v1194 = v1191 + __ROL4__(v1192, 13);
            v1195 = v1194 + v1193;
            v1196 = v1194 ^ (v1194 + v1193 - 23751);
            v1197 = v1192 ^ (__ROL4__(v1193, 4) + __ROL4__(v1194, 14));
            v358 = v1197 - 1766541200 * (v1194 + v1193);
            v1178 = (__ROL4__(v1197, 14) + 17175) ^ v1196;
            v359 = v1178 ^ v1195;
            ++v1180;
        } while (v1180);
        v162 = v1179 ^ v1178;
    LABEL_127:
        v319 = v358 ^ v359;
        return (unsigned int)(v162 + v319);
    case 0x17:
        if ((a3 & 0x100) != 0)
        {
            v1198 = a3 ^ a5;
            v1199 = a2 ^ __ROL4__(a4, 29);
            v1200 = a4 - ((__ROR4__(v1198, 1) + 11759) ^ (v1199 - 1044));
            v1201 = v1199 ^ v1198;
            v5 = v1199 ^ (v1200 - 467324632);
            v1202 = v1200 - v1201;
            a5 = v1201 - playIntentKey[(unsigned __int8)v5 + 42];
            a4 = v1202;
        }
        if ((v5 & 0x40000000) != 0)
        {
            v1203 = v5 ^ a5;
            v1204 = a3 + __ROL4__(a4, 25);
            v1205 = a4 - v1204 - v1203;
            v1206 = v1204 ^ __ROL4__(v1205, 2);
            v1207 = v1203 - v1204;
            v1208 = v1206 + v1207 + v1205 + 1864490090 + 26775;
            v1209 = v1206 + v1207 + v1205 + 1864490090;
            v1210 = v1206 - 1026347309 * v1209;
            v1211 = v1207 + 1864490090 - ((__ROL4__(v1206, 18) + 31046) ^ v1208);
            v1212 = v1209 - v1211;
            v1213 = v1210 ^ v1211;
            a3 = v1212 ^ v1210;
            a5 = v1213 ^ (-1470268831 * a3);
            a4 = v1212 - ((__ROL4__(v1213, 30) - 6625) ^ (a3 - 3201));
        }
        v1214 = ((a3 >> 10) & 7) + 1;
        do
        {
            v1215 = a3 ^ a5;
            v1216 = a4 ^ a3 ^ a5;
            v1217 = v5 - playIntentKey[(unsigned __int8)a4 + 193];
            v1218 = v1215 - v1217;
            v5 = v1216 + v1217;
            v1219 = v1216;
            a5 = v1218 - 370818148 * v5;
            a4 = v1219 - playIntentKey[(unsigned __int8)v1218 + 284];
            --v1214;
        } while (v1214);
        v1220 = a3 - v5 - a4;
        v1221 = a4 ^ v5;
        v1222 = playIntentKey[(unsigned __int8)a5 + 374];
        v1223 = a5 - v1220 - v1221;
        v1224 = a4 - v1222;
        v1225 = __ROL4__(a4 - v1222, 27);
        v1226 = v1220 + ((__ROL4__(v1221, 25) - 9654) ^ (a4 - v1222 - 5697));
        v1227 = v1221 ^ (v1225 + __ROL4__(v1223, 20));
        v1228 = v1224 - v1223;
        v1229 = v1223 ^ __ROL4__(v1226, 24);
        v1230 = v1227 ^ v1226;
        v1231 = __ROL4__(v1228, 1);
        v1232 = v1228 - playIntentKey[(unsigned __int8)v1229 + 460];
        v1233 = v1227 - v1231;
        v1234 = v1230 ^ v1229;
        v1235 = playIntentKey[(unsigned __int8)v1233 + 446] + v1230;
        v1236 = v1232 + v1234 + v1233;
        v1237 = playIntentKey[(unsigned __int8)v1234 + 410] + v1232;
        v1238 = v1234 - v1235 - v1236;
        if (v1236 < 0)
        {
            v1239 = v1236 ^ v1238;
            v1240 = v1235 - v1237;
            v1241 = __ROL4__(v1239, 28);
            v1242 = playIntentKey[(unsigned __int8)v1240 + 263] ^ v1239;
            v1243 = v1237 ^ v1241;
            v1244 = v1240 - ((__ROL4__(v1243, 16) - 32629) ^ (v1242 + 27809));
            v1245 = v1243 - v1242;
            v1246 = playIntentKey[(unsigned __int8)v1245 + 158];
            v1247 = v1242 ^ __ROL4__(v1244, 5);
            v1248 = v1247 ^ (v1246 + v1244 + 414597342);
            LOBYTE(v1242) = 49 - (v1247 + v1245);
            v1249 = v1246 + v1247 + v1244 + v1245 - v1248;
            v1250 = v1246 + v1244 - 805623503 - v1248;
            v1251 = playIntentKey[(unsigned __int8)v1242 + 465] + v1248;
            v1252 = v1249 ^ (__ROL4__(v1251, 26) + __ROL4__(v1250, 4));
            v1235 = v1252 + v1250;
            v1253 = __ROL4__(v1252, 12) + v1251 + __ROL4__(v1250, 5);
            v1237 = v1252 + __ROL4__(v1253, 28);
            v1238 = v1253 ^ (__ROL4__(v1235, 17) + __ROR4__(v1237, 1));
        }
        return (unsigned int)((v1238 ^ v1237) + (v1236 ^ v1235));
    case 0x18:
        v1255 = a3 ^ a2;
        v1256 = a4 + a3;
        v1257 = playIntentKey[(unsigned __int8)a5 + 67] ^ a4;
        v1258 = v1255 + a5;
        v1259 = v1255 + a5 + 1911911063;
        v1260 = playIntentKey[(unsigned __int8)v1256 + 52] ^ v1255;
        v1261 = v1256 - (v1257 + v1258 + 1911911063);
        v1262 = v1259 ^ v1257;
        v1263 = playIntentKey[(unsigned __int8)v1260 + 395] ^ v1259;
        v1264 = v1260 - v1261;
        v1265 = v1261 ^ (v1262 - 2009263273);
        v1266 = v1263 + v1262;
        v1267 = v1264 + v1263;
        if ((v1265 & 0x40000000) != 0)
        {
            v1268 = v1265 ^ v1267;
            v1269 = v1264 ^ (v1266 - 1629423515);
            v1270 = v1266 - playIntentKey[(unsigned __int8)v1268 + 143];
            v1271 = v1268 ^ (v1269 - 1364735772);
            v1272 = v1269 - v1270 - 1556819054;
            v1266 = v1271 + v1270;
            v1267 = v1271 ^ __ROL4__(v1272, 8);
            v1264 = v1272;
        }
        v1273 = v1265 - v1264;
        v1274 = v1266 ^ v1267;
        v1275 = (__ROL4__(v1266, 23) - 11201) ^ v1264 ^ (v1267 - 8096);
        v1276 = v1273 ^ v1267;
        v1277 = v1273 ^ (-135817110 * v1275);
        v1278 = (v1277 + 9964) ^ v1274 ^ (__ROL4__(v1276, 18) + 2753);
        v1279 = v1275 - v1274;
        v1280 = v1279 ^ (v1278 + 534365174);
        v1281 = v1276 ^ (__ROL4__(v1277, 29) + __ROL4__(v1279, 11));
        v1282 = v1277 - ((__ROR4__(v1279, 1) + 13970) ^ (v1278 + 24888));
        v1283 = v1278 - __ROL4__(v1281, 11);
        v1284 = v1282 + v1280 + v1281;
        v1285 = ((v1280 >> 22) & 7) + 1;
        do
        {
            v1286 = v1282 - playIntentKey[(unsigned __int8)v1283 + 110];
            v1287 = v1280 ^ v1284;
            v1288 = (v1286 + 25410) ^ v1283 ^ (__ROL4__(v1287, 14) + 32384);
            v1289 = v1286 + v1287;
            v1290 = v1288 ^ v1286;
            v1291 = v1289 ^ (v1290 + 1161659473);
            v1292 = v1288 - __ROL4__(v1289, 7);
            v1293 = v1290 ^ (v1292 + 1552620098);
            v1294 = v1291 + v1292 - 666676179;
            v1295 = v1291 ^ __ROL4__(v1293, 2);
            v1296 = 2027971579 * v1295;
            v1283 = v1294 ^ (2027971579 * v1295);
            v1282 = v1293 ^ v1294;
            v1284 = v1295 - v1282;
            --v1285;
        } while (v1285);
        v1297 = v1280 - playIntentKey[(unsigned __int8)v1282 + 470];
        v1298 = v1293 ^ v1296;
        v1299 = v1283 - playIntentKey[(unsigned __int8)v1284 + 84];
        v1300 = playIntentKey[(unsigned __int8)v1297 + 63] ^ v1284;
        v1301 = (HIBYTE(v1298) & 7) + 1;
        do
        {
            v1302 = v1298 ^ v1300;
            v1303 = v1297 - v1299 - v1302;
            v1304 = v1299 - 1259927196 * v1302;
            v1305 = v1302 - v1303 - v1304;
            v1306 = playIntentKey[(unsigned __int8)v1304 + 475] + v1303;
            v1307 = v1304 - v1305 - 1471794736;
            v1308 = v1306 + v1305;
            v1309 = v1307 ^ v1306;
            v1310 = v1307 - v1308;
            v1311 = __ROL4__(v1310, 6) + v1308 + __ROL4__(v1309, 13);
            v1312 = v1310 + __ROL4__(v1311, 4);
            v1313 = v1309 ^ (__ROL4__(v1310, 27) + __ROL4__(v1311, 23));
            v1314 = v1311 - __ROL4__(v1313, 15);
            v1315 = v1313 - __ROL4__(v1312, 1);
            v1316 = __ROL4__(v1314, 21) + v1312 + __ROL4__(v1315, 24);
            v1317 = v1315 ^ v1314;
            v1297 = v1315 - v1316 - 195436972;
            v1299 = v1317 ^ v1316;
            v1318 = playIntentKey[(unsigned __int8)(v1315 - v1316 + 84) + 172];
            v1300 = v1318 ^ v1317;
            --v1301;
        } while (v1301);
        v541 = v1298 ^ v1297;
        v542 = v1318 ^ v1316;
        return (unsigned int)(v541 + v542);
    case 0x19:
        v1319 = ((a3 >> 6) & 7) + 1;
        do
        {
            v1320 = a3 ^ a5;
            v1321 = a4 + v5;
            v1322 = v1320 ^ a4;
            v5 = v1322 + v1321;
            v1323 = playIntentKey[(unsigned __int8)v1321 + 185] ^ v1320;
            a5 = v1323 + 1970723348 * (v1322 + v1321);
            a4 = playIntentKey[(unsigned __int8)v1323 + 364] ^ v1322;
            --v1319;
        } while (v1319);
        v1324 = a4 + v5;
        v1325 = a4 + a5 + 1665547210;
        v1326 = a5 + a3 - v1324;
        v1327 = a5 + a4 + a3 + 1665547210;
        v1328 = v1325 ^ v1324;
        v1329 = v1326 + v1325;
        v1330 = 1383333757 * v1328 + v1327;
        v1331 = v1326 + __ROL4__(v1327, 9);
        v1332 = v1328 ^ __ROL4__(v1329, 12);
        v1333 = (__ROL4__(v1331, 24) + 20381) ^ v1329 ^ (v1330 + 23285);
        v1334 = v1330 + v1331;
        v1335 = v1330 - ((v1332 + 4628) ^ (v1333 - 2268));
        v1336 = v1333 ^ v1332;
        v1337 = v1333 ^ __ROL4__(v1334, 21);
        v1338 = v1334 - (__ROL4__(v1335, 10) + __ROL4__(v1336, 1));
        v1339 = v1337 + v1336 + v1335;
        v1340 = v1336 - v1337 - v1338;
        v1341 = v1338 + v1337 - 990405801;
        v1342 = v1339 ^ v1338;
        if ((v1340 & 0x100000) != 0)
        {
            v1343 = v1340 ^ v1342;
            v1344 = v1341 ^ v1339;
            v1345 = (__ROL4__(v1343, 4) + 5366) ^ v1341 ^ (v1344 + 1000);
            v1346 = v1343 - __ROL4__(v1344, 19);
            v1347 = v1344 - v1346 - v1345;
            v1348 = v1346 ^ v1345;
            v1349 = playIntentKey[(unsigned __int8)v1347 + 349] ^ v1346;
            v1350 = playIntentKey[(unsigned __int8)v1348 + 291] + v1347;
            v1351 = v1348 - v1349 + 166921862;
            v1352 = v1349 - v1350;
            v1339 = v1351 ^ v1350;
            v1341 = v1351 - v1339 - v1352;
            v1342 = v1352 - (__ROL4__(v1339, 28) + __ROL4__(v1341, 13));
        }
        if ((v1339 & 0x20000000) != 0)
        {
            v1353 = v1339 ^ v1342;
            v1354 = v1340 ^ __ROL4__(v1341, 12);
            v1355 = v1353 + v1341 + 932463285;
            v1356 = v1354 + v1353;
            v1357 = v1354 - v1355;
            v1358 = v1355 - __ROL4__(v1356, 20);
            v1359 = v1357 + 1798775392 * v1358;
            v1360 = playIntentKey[(unsigned __int8)v1357 + 107] ^ v1356;
            v1361 = v1360 + v1358;
            v1362 = playIntentKey[(unsigned __int8)v1361 + 296];
            v1341 = v1362 + v1360 + v1361;
            v1340 = v1359 + v1362;
            v1342 = v1360 - (__ROL4__(v1341, 14) + v1359 + __ROL4__(v1340, 20));
        }
        return (unsigned int)((v1342 ^ v1341) + (v1339 ^ v1340));
    case 0x1A:
        v1363 = playIntentKey[(unsigned __int8)a3 + 194] + a2;
        v1364 = a5 + a4;
        v1365 = v1364 ^ a3;
        v1366 = v1363 + a5;
        v1367 = ((v1365 >> 27) & 7) + 1;
        do
        {
            v1368 = v1365 ^ v1366;
            v1369 = v1364 + v1363;
            v1370 = v1364 - v1368;
            v1371 = playIntentKey[(unsigned __int8)v1369 + 214] + v1368;
            v1363 = v1370 ^ v1369;
            v1364 = v1370 - ((__ROL4__(v1371, 10) - 7375) ^ (v1363 - 4394));
            v1366 = v1363 ^ v1371;
            --v1367;
        } while (v1367);
        v1372 = v1363 ^ v1364;
        v1373 = v1365 - ((__ROL4__(v1363, 6) + 22256) ^ (v1364 + 11053));
        v1374 = v1364 + __ROL4__(v1366, 14);
        v1375 = __ROL4__(v1373, 2);
        v1376 = v1372 + v1373;
        v1377 = v1366 ^ (v1375 + __ROL4__(v1372, 1));
        v1378 = (v1377 + 29112) ^ v1372 ^ (__ROL4__(v1374, 1) - 30350);
        v1379 = v1376 ^ v1378;
        v1380 = v1374 ^ __ROL4__(v1377, 25);
        v1381 = v1377 - (__ROL4__(v1376, 16) + __ROL4__(v1378, 12));
        v1382 = v1378 - playIntentKey[(unsigned __int8)v1380 + 79];
        v1383 = playIntentKey[(unsigned __int8)v1381 + 58] ^ v1380;
        v1384 = v1379 + v1381;
        v1385 = v1383 + v1382 + 1975914625;
        v1386 = playIntentKey[(unsigned __int8)v1382 + 44] ^ v1379;
        v1387 = v1384 + v1383;
        v1388 = playIntentKey[(unsigned __int8)v1386 + 387] ^ v1384;
        if ((v1385 & 0x100000) != 0)
        {
            v1389 = v1385 ^ v1388;
            v1390 = v1387 ^ v1386;
            v1391 = v1387 ^ __ROL4__(v1389, 21);
            v1392 = v1390 + v1390 - v1389;
            v1388 = v1390 - v1391;
            v1393 = (v1390 - v1391) ^ v1391;
            v1386 = v1392;
            v1387 = v1393;
        }
        if ((v1386 & 0x400) != 0)
        {
            v1394 = v1386 ^ v1388;
            v1395 = v1387 + v1385;
            v1396 = playIntentKey[(unsigned __int8)v1394 + 450] + v1387;
            v1397 = v1394 ^ (v1396 + v1395);
            v1398 = v1395 - v1396 - v1397;
            v1399 = v1397 ^ v1396;
            v1400 = v1397 - ((__ROL4__(v1398, 18) - 14048) ^ (v1399 - 1594));
            v1401 = v1400 ^ v1399 ^ v1398;
            v1402 = (__ROL4__(v1400, 14) - 8097) ^ ((v1399 ^ v1398) + 6162);
            v1403 = v1402 ^ v1399;
            v1404 = v1398 ^ v1402;
            v1388 = v1401 ^ (-198086431 * v1404);
            v1387 = v1403 - __ROL4__(v1401, 10);
            v1385 = v1404;
        }
        v1405 = v1386 - playIntentKey[(unsigned __int8)v1385 + 321];
        v1406 = (v1387 - v1388) ^ (v1405 + v1388);
        v1407 = v1405 ^ (v1385 - 1830020671 * v1387);
        return (unsigned int)(v1406 + v1407);
    case 0x1B:
        v1408 = a2 - a3;
        v1409 = a3 + __ROL4__(a4, 29);
        v1410 = ((__ROL4__(a5, 8) - 8922) ^ (a2 - a3 - 6793)) + a4;
        v1411 = a5 - (a2 - a3);
        v1412 = v1409 ^ v1410;
        v1413 = (__ROL4__(v1409, 26) + 6014) ^ v1408 ^ (v1410 + 10709);
        v1414 = v1411 ^ v1413;
        v1415 = (v1413 + 18435) ^ v1410 ^ (__ROL4__(v1411, 20) + 9273);
        v1416 = (v1409 ^ v1410) - 1815099398 * v1415;
        v1417 = playIntentKey[v1412 + 421] ^ v1413;
        v1418 = v1414 + v1415 + 1704721832;
        v1419 = v1414 ^ __ROL4__(v1417, 29);
        v1420 = v1416 ^ v1417;
        v1421 = v1418 ^ v1416;
        v1422 = v1418 - v1420 - v1419;
        v1423 = v1422 + v1421;
        v1424 = v1419 - v1420 - 141073923;
        v1425 = v1420 - (__ROL4__(v1421, 4) + __ROL4__(v1422, 30));
        v1426 = playIntentKey[(unsigned __int8)v1424 + 122] ^ v1422;
        v1427 = v1424 - v1423 - v1425;
        v1428 = v1426 ^ v1427;
        v1429 = v1423 ^ v1425;
        v1430 = v1423 - ((__ROL4__(v1426, 16) - 9849) ^ (v1427 + 13010));
        v1431 = v1429 ^ v1427;
        v1432 = v1429 - v1428 - v1430;
        v1433 = v1428 ^ v1430;
        v1434 = v1428 - v1431;
        v1435 = v1431 - __ROL4__(v1432, 23);
        v1436 = v1433 + v1432;
        v1437 = v1436 + v1435 - 1962951166;
        v1438 = v1434 + v1433;
        v1439 = v1434 ^ __ROL4__(v1435, 25);
        v1440 = v1439 + v1436 + v1435 - 1962951166;
        v1441 = v1436 ^ __ROL4__(v1438, 28);
        v1442 = v1438 - (__ROL4__(v1439, 17) + __ROL4__(v1437, 20));
        v1443 = playIntentKey[(unsigned __int8)v1441 + 6] ^ v1437;
        v1444 = v1441 - v1442;
        v1445 = __ROL4__(v1440, 26);
        v1446 = v1440 - v1443;
        v1447 = v1446 + (v1442 ^ (v1445 + __ROL4__(v1443, 4)));
        v1448 = playIntentKey[(unsigned __int8)(v1444 + v1443) + 433] ^ v1446;
        v1449 = playIntentKey[(unsigned __int8)v1447 + 377] + v1444 - v1447;
        v1450 = playIntentKey[(unsigned __int8)v1448 + 397] + v1447;
        v1451 = v1448 - 1997286884 * v1443;
        v1452 = v1449 + v1443;
        v1453 = v1449 - v1450;
        v1454 = v1450 ^ __ROL4__(v1451, 27);
        v1455 = v1451 - ((__ROL4__(v1452, 29) - 28585) ^ (v1453 - 20801));
        v1456 = v1453 ^ v1452;
        v1457 = v1454 ^ (v1455 + v1456);
        v1458 = __ROL4__(v1454, 15) - 13649;
        v1459 = v1453 + (v1458 ^ (v1455 - 3300));
        v725 = v1456 - playIntentKey[(unsigned __int8)(v1453 + (v1458 ^ (v1455 + 28))) + 56];
        v588 = v1459 ^ v1457;
        v726 = v1455 ^ v1456;
        goto LABEL_275;
    case 0x1C:
        v1460 = ((a3 >> 17) & 7) + 1;
        do
        {
            v1461 = a3 ^ a5;
            v1462 = a4 + v5;
            v1463 = __ROL4__(v1461, 20) + a4 + __ROL4__(v1462, 8);
            v1464 = v1461 - __ROL4__(v1462, 30);
            v1465 = v1462 ^ (v1463 + v1464);
            v1466 = v1463 - v1464;
            v1467 = v1464 ^ __ROL4__(v1465, 10);
            v1468 = v1466 ^ v1465;
            v1469 = v1466 - v1467;
            v1470 = v1467 ^ (v1469 + v1468);
            v1471 = v1469 + v1470 + 376074961;
            v1472 = playIntentKey[(unsigned __int8)v1469 + 124] ^ v1468;
            v1473 = v1472 + v1470;
            v1474 = v1471 ^ (v1472 + v1470 - 1187235939);
            v1475 = v1472 - playIntentKey[(unsigned __int8)v1471 + 328];
            v1476 = v1475 + v1473;
            v5 = v1475 + 1242387068 * v1474;
            a4 = v1476 ^ v1474;
            a5 = (__ROL4__(v5, 17) + 20709) ^ v1476 ^ (a4 - 21145);
            --v1460;
        } while (v1460);
        v1477 = (~v5 >> 16) | 0xFFFFFFF8;
        do
        {
            v1478 = v5 ^ a5;
            v1479 = a4 + a3 - 16436;
            v1480 = a4 + a3;
            v1481 = (__ROL4__(v1478, 25) - 31949) ^ a4 ^ v1479;
            v1482 = -1148928165 * v1480 + v1478;
            a3 = playIntentKey[(unsigned __int8)v1481 + 439] + v1480;
            a5 = a3 + v1482;
            a4 = a5 ^ v1481;
            ++v1477;
        } while (v1477);
        v1483 = a3 + v5;
        v1484 = a3 + __ROL4__(a4, 29);
        v1485 = a4 - a5 - 2102819943;
        v1486 = a5 - v1483;
        v1487 = v1484 + v1483;
        v1488 = playIntentKey[(unsigned __int8)v1485 + 222] ^ v1484;
        v1489 = playIntentKey[(unsigned __int8)v1486 + 201] + v1485;
        v1490 = v1486 + 1716795872 * v1487;
        v1491 = v1488 + v1487;
        v1492 = v1488 + 1325835246 * v1489;
        v1493 = v1490 + v1489;
        v1494 = v1491 ^ v1492;
        v1495 = playIntentKey[(unsigned __int8)v1491 + 233] ^ v1490;
        v1496 = v1492 - playIntentKey[(unsigned __int8)v1493 + 218];
        v1497 = v1495 + __ROL4__(v1494, 18);
        v1498 = v1493 - (__ROL4__(v1495, 26) + __ROL4__(v1494, 13));
        v1499 = v1498 + v1496;
        v1500 = v1499 ^ v1494;
        v1501 = v1497 ^ (v1500 + v1499);
        v1502 = v1498 ^ __ROL4__(v1497, 19);
        v1503 = v1500 - __ROL4__(v1499, 5);
        v162 = v1503 ^ (v1499 - playIntentKey[(unsigned __int8)v1502 + 304]);
        v319 = v1502 ^ (v1501 - 1669751417) ^ (v1503 + v1501);
        return (unsigned int)(v162 + v319);
    case 0x1D:
        if ((a3 & 0x8000u) != 0)
        {
            v1504 = a3 ^ a5;
            v1505 = a2 ^ (v1504 + a4);
            v1506 = a4 - (__ROL4__(v1504, 1) + __ROL4__(v1505, 30));
            v1507 = v1504 + v1506;
            v1508 = __ROL4__(v1505 + v1504, 11) + __ROL4__(v1505 - v1506, 14);
            v1509 = v1508 + v1505;
            v1510 = v1508 + v1504 + v1506 + v1506;
            v1511 = v1510 + v1509;
            v1512 = playIntentKey[(unsigned __int8)v1509 + 1] ^ v1507;
            v1513 = playIntentKey[(unsigned __int8)v1512 + 477] + v1510;
            v1514 = __ROL4__(v1513, 30);
            v1515 = v1511 + v1512;
            v1516 = playIntentKey[(unsigned __int8)v1515 + 169] ^ v1513;
            v1517 = v1511 ^ v1514;
            v1518 = v1517 + v1515;
            v5 = v1517 + __ROL4__(v1516, 8);
            v1519 = __ROL4__(v5, 7);
            v1520 = v1516 ^ (v1519 + __ROL4__(v1518, 29));
            a5 = v1518 + v1519;
            a4 = v1520;
        }
        v1521 = a3 - v5;
        v1522 = a4 + v5;
        v1523 = (__ROL4__(a5, 17) - 31056) ^ a4 ^ (v1521 - 28110);
        v1524 = a5 - v1521;
        v1525 = playIntentKey[(unsigned __int8)v1522 + 261] ^ v1521;
        v1526 = v1524 + v1523;
        v1527 = v1526 ^ v1522;
        v1528 = v1525 + v1526;
        v1529 = v1527 + v1525;
        v1530 = v1525 - v1524 + v1528 + 66412997;
        v1531 = v1527 ^ playIntentKey[(unsigned __int8)v1528 + 443];
        v1532 = v1524 + v1527;
        v1533 = v1529 ^ (v1531 + v1525 - v1524 + v1528 + 66412997);
        v1534 = v1531 ^ __ROL4__(v1530, 25);
        v1535 = v1530 - v1532;
        v1536 = v1532 + ((__ROL4__(v1533, 4) + 30087) ^ (v1534 - 7981));
        v1537 = ((unsigned __int8)v1534 >> 5) + 1;
        do
        {
            v1538 = v1534 ^ v1536;
            v1539 = v1538 + v1535 + v1533;
            v1540 = v1535 - v1538;
            v1541 = playIntentKey[(unsigned __int8)v1539 + 371];
            v1542 = v1538 - v1541;
            v1543 = v1539 ^ (v1535 - v1541);
            v1544 = v1540 + __ROL4__(v1542, 20);
            v1545 = playIntentKey[(unsigned __int8)v1543 + 63] + v1542;
            v1546 = v1543 - v1544;
            v1547 = v1545 - 1249524554 * v1546;
            v1548 = v1544 - __ROL4__(v1545, 30);
            v1549 = v1546 + 1640550715 * v1548;
            v1550 = __ROL4__(v1547, 10);
            v1551 = v1550 + v1548 + 32693;
            v1552 = v1548 + v1550;
            v1553 = v1549 ^ (77239815 * (v1548 + v1550));
            v1554 = (__ROL4__(v1549, 12) + 12377) ^ v1547 ^ v1551;
            v1555 = v1552 ^ (v1554 + v1553);
            v1556 = v1554 - v1553 - 1377699231;
            v1533 = v1553 + v1555 + 1768725393;
            v1557 = v1555 + v1553;
            v1535 = v1556 ^ v1555;
            v1536 = v1556 - (v1535 + v1557 + 1768725393);
            --v1537;
        } while (v1537);
        return (unsigned int)((v1534 ^ v1533) + (v1535 ^ v1536));
    case 0x1E:
        if ((a3 & 0x8000u) != 0)
        {
            v1559 = a3 ^ a5;
            v1560 = a4 + a2;
            v1561 = a4 + __ROL4__(v1559, 14);
            v1562 = v1559 - v1560;
            v1563 = v1561 + v1560;
            v1564 = v1561 ^ __ROL4__(v1562, 23);
            v1565 = __ROL4__(v1563, 12);
            v1566 = playIntentKey[(unsigned __int8)v1564 + 267] + v1563;
            v1567 = v1566 + v1565 + v1562 + __ROL4__(v1564, 11);
            v1568 = v1567 ^ v1564;
            v5 = v1568 + v1566;
            a4 = v5 + v1567 + v1568;
            a5 = v1567 - v5;
        }
        if ((v5 & 0x4000) != 0)
        {
            v1569 = v5 ^ a5;
            v1570 = a3 - playIntentKey[(unsigned __int8)a4 + 70];
            v1571 = a4 - v1569;
            v1572 = a4 - v1570;
            v1573 = v1569 ^ (v1569 - v1570);
            v1574 = v1570 - (v1572 + v1571);
            v1575 = v1574 + 1117740004;
            v1576 = v1572 + v1574 + 1117740004;
            v1577 = v1572 - v1573;
            v1578 = v1575 + v1572 - v1573 - 20213;
            a3 = v1577 + v1575;
            a4 = (__ROL4__(v1576, 18) + 31962) ^ v1577 ^ v1578;
            a5 = a3 + v1576;
        }
        if ((a3 & 8) != 0)
        {
            v1579 = a3 ^ a5;
            v1580 = playIntentKey[(unsigned __int8)a4 + 66] + v5;
            v1581 = a4 - v1579 - 813050007;
            v1582 = v1579 - v1580;
            v1583 = v1581 ^ (v1582 - 295609184);
            v1584 = playIntentKey[(unsigned __int8)v1581 + 32] + v1580;
            v1585 = v1582 - v1584;
            v1586 = v1584 ^ (__ROL4__(v1583, 1) + __ROL4__(v1585, 1));
            v1587 = v1585 ^ v1583;
            v1588 = v1585 - __ROL4__(v1586, 22);
            v1589 = v1586 + ((__ROL4__(v1587, 22) - 943) ^ (v1588 - 27928));
            v1590 = v1587 - v1588;
            v1591 = v1588 + __ROL4__(v1589, 2);
            v1592 = v1590 ^ v1589;
            v1593 = v1590 - v1592 - v1591;
            v1594 = v1591 ^ (v1592 + 1877453549);
            v5 = v1592 ^ (v1593 + v1594);
            a4 = v1594 + v1593 + 49117897;
            a5 = playIntentKey[(unsigned __int8)(v1592 ^ (v1593 + v1594)) + 243] ^ v1594;
        }
        v1595 = (HIWORD(v5) & 7) + 1;
        do
        {
            v1596 = v5 ^ a5;
            v1597 = a3 - a4;
            v1598 = a4 - v1596;
            v1599 = v1597 ^ v1598;
            v1600 = v1596 + ((__ROL4__(v1597, 8) + 11520) ^ (v1598 + 30375));
            v1601 = v1598 - ((__ROL4__(v1600, 5) + 17472) ^ ((v1597 ^ v1598) - 27405));
            v1602 = v1600 - v1599;
            v1603 = playIntentKey[(unsigned __int8)v1601 + 37] ^ v1599;
            v1604 = (v1603 - 2178) ^ v1601 ^ (__ROL4__(v1602, 16) - 28845);
            v1605 = v1602 + v1603;
            v1606 = v1602 + v1603 - 1318063064;
            v1607 = 1318063064 - (v1604 + v1602);
            v1608 = v1604 - v1606;
            v1609 = v1607 + v1608 - 1148568580;
            v1610 = v1605 + __ROL4__(v1607, 25) - 1318063064;
            v1611 = v1608 + v1610 - 1148568580;
            a3 = v1609 ^ (v1610 + v1608 - 1563310900);
            v1612 = playIntentKey[(unsigned __int8)v1609 + 250] ^ v1610;
            a4 = v1612 + v1611 - 414742320;
            a5 = (v1612 + v1611 - 414767423) ^ v1612 ^ (__ROL4__(a3, 27) + 2633);
            --v1595;
        } while (v1595);
        return (v5 ^ a3) + (a4 ^ a5);
    case 0x1F:
        v1613 = a3 + a4 + a2;
        v1614 = a3 - playIntentKey[(unsigned __int8)a4 + 327];
        v1615 = a4 - v1613 - a5;
        v1616 = v1613 ^ (__ROL4__(v1614, 26) + __ROL4__(v1615, 30));
        v1617 = a5 ^ __ROL4__(v1613, 28);
        v1618 = v1615 + v1614;
        v1619 = playIntentKey[(unsigned __int8)v1617 + 144] + v1615;
        v1620 = v1617 - playIntentKey[(unsigned __int8)v1616 + 122];
        v1621 = v1618 - v1619;
        v1622 = v1619 ^ (-155478589 * v1620);
        v1623 = v1620 + v1618 - v1616;
        v1624 = v1616 - v1619;
        v1625 = v1622 + 1718789489 * v1623;
        v1626 = v1621 + __ROL4__(v1622, 26);
        v1627 = v1623 ^ (356881530 * v1624);
        v1628 = v1624 + __ROL4__(v1626, 30);
        v1629 = v1625 ^ (749135573 * v1627);
        v1630 = v1626 - playIntentKey[(unsigned __int8)v1625 + 382];
        v1631 = v1628 ^ v1627;
        v1632 = v1630 + v1629 + v1628;
        v1633 = v1629 - v1631;
        v1634 = v1629 - v1630;
        v1635 = v1630 - v1631;
        v1636 = (v1631 - v1632) ^ v1633;
        v1637 = v1631 - v1632 - (v1635 + v1632 + v1634 + 423214702);
        v1638 = v1634 + v1632 + 423214702 - v1635;
        v1639 = v1635 - v1636;
        v1640 = playIntentKey[(unsigned __int8)v1637 + 500] + v1636;
        v1641 = v1638 - v1639;
        v1642 = v1639 - v1640;
        v1643 = v1640 + v1638 - v1637;
        v1644 = v1637 - v1640;
        v1645 = v1642 ^ v1641;
        v1646 = ((__ROL4__(v1644, 6) - 24196) ^ (v1645 - 7049)) + v1643;
        v1647 = v1642 - playIntentKey[(unsigned __int8)v1643 + 385];
        v1648 = v1645 ^ v1644;
        v1649 = v1646 + __ROL4__(v1648, 12);
        v1650 = v1647 ^ (__ROL4__(v1646, 2) + __ROL4__(v1648, 30));
        v1651 = (__ROL4__(v1647, 23) - 9261) ^ v1645 ^ (v1646 + 10452);
        v1652 = (__ROL4__(v1651, 14) - 30919) ^ v1648 ^ (v1650 - 28619);
        v1653 = v1649 ^ v1652;
        v1654 = v1651 - __ROL4__(v1650, 12);
        v1655 = __ROL4__(v1652, 14) + v1650 + __ROL4__(v1649, 3);
        v1656 = v1652 - v1654;
        v1657 = __ROL4__(v1653, 20) + __ROL4__(v1656, 2) + v1655;
        v1658 = v1654 - __ROR4__(v1655, 1);
        v1659 = v1656 - ((__ROL4__(v1658, 9) - 23458) ^ (v1657 - 3781));
        v1660 = v1653 - __ROL4__(v1656, 30);
        v1661 = v1657 + v1658;
        v1662 = (v1659 - 29334) ^ v1657 ^ (__ROL4__(v1660, 18) + 27349);
        v1663 = v1660 - v1659;
        v1664 = v1659 - __ROL4__(v1661, 21);
        v1665 = v1661 - v1662;
        v1666 = v1663 + v1662;
        v1667 = playIntentKey[(unsigned __int8)v1664 + 308] + v1663;
        v1668 = v1664 - v1665;
        v1669 = playIntentKey[(unsigned __int8)v1666 + 252] ^ v1665;
        v1670 = v1668 + v1667 - 1452133257;
        v1671 = v1670 ^ v1666;
        v1672 = v1671 + v1668 - 1452133257;
        v1673 = v1668 - 1452133257 - v1669;
        v1674 = playIntentKey[(unsigned __int8)v1670 + 476] + v1671;
        v1675 = -1780397828 * v1674 + v1671 + v1669 + 16022;
        v1676 = -1780397828 * v1674 + v1671 + v1669;
        v1677 = v1670 + v1673;
        v1678 = v1676 ^ (v1677 + v1674);
        v1679 = v1672 + ((__ROL4__(v1676, 28) - 32346) ^ (v1674 + v1677 + 6277));
        v1680 = (__ROL4__(v1672, 17) - 24385) ^ v1675;
        goto LABEL_255;
    case 0x20:
        v1681 = a3 + a2;
        v1682 = a4 + a3;
        v1683 = v1681 + a5;
        v1684 = playIntentKey[(unsigned __int8)a5 + 168] ^ a4;
        v1685 = v1681 + a5 + v1682;
        v1686 = playIntentKey[(unsigned __int8)v1682 + 112] + v1681;
        v1687 = v1684 + v1685;
        v1688 = v1684 - __ROL4__(v1683, 5);
        v1689 = v1683 - playIntentKey[(unsigned __int8)v1686 + 497];
        v1690 = v1686 - v1687;
        v1691 = v1688 ^ v1687;
        v1692 = v1688 - ((__ROL4__(v1689, 25) + 25097) ^ (v1690 - 7393));
        v1693 = v1689 - v1690;
        v1694 = v1691 ^ v1690;
        v1695 = v1691 - __ROL4__(v1692, 1);
        v1696 = v1694 + v1693 + v1692;
        v1697 = v1693 - 775635402 * v1694;
        v1698 = v1694 - v1695;
        v1699 = v1695 ^ (1691333251 * v1696);
        v1700 = v1697 ^ (1956020994 * v1698);
        v1701 = v1696 - __ROL4__(v1697, 13);
        v1702 = playIntentKey[(unsigned __int8)v1699 + 118] + v1698;
        v1703 = v1700 + v1701 + v1699;
        v1704 = v1701 - v1700;
        v1705 = v1702 ^ v1700;
        v1706 = v1702 - playIntentKey[(unsigned __int8)v1703];
        v1707 = v1704 ^ v1703;
        v1708 = v1704 + __ROL4__(v1705, 9);
        v1709 = v1705 - v1706 - v1707;
        v1710 = v1708 + v1707;
        v1711 = playIntentKey[(unsigned __int8)v1707 + 203] + v1706;
        v1712 = v1709 ^ (v1708 + v1707 + v1711);
        v1713 = playIntentKey[(unsigned __int8)v1709 + 330] ^ v1708;
        v1714 = v1711 ^ (414975487 * v1710);
        v1715 = v1713 + v1710;
        v1716 = v1713 + ((__ROL4__(v1712, 20) + 4019) ^ (v1714 - 12126));
        v1717 = v1712 - v1714;
        if ((v1715 & 0x200000) != 0)
        {
            v1718 = v1715 ^ v1717;
            v1719 = v1714 - v1716;
            v1720 = v1716 - v1718 - v1719;
            v1721 = v1718 ^ (-1976339746 * v1719);
            v1722 = v1719 ^ (-1585379120 * v1720);
            v1723 = v1721 + v1720;
            v1724 = v1722 ^ v1721;
            v1725 = playIntentKey[(unsigned __int8)v1724 + 88];
            v1726 = v1725 + v1723;
            v1727 = v1724 + v1723 - v1722;
            v1714 = v1725 + v1722;
            v1717 = v1727 - playIntentKey[(unsigned __int8)(v1725 + v1722) + 17];
            v1716 = v1726 ^ (__ROL4__(v1727, 25) + __ROL4__(v1714, 3));
        }
        v1728 = ((v1714 >> 14) & 7) + 1;
        do
        {
            v1729 = v1714 ^ v1717;
            v1730 = v1716 ^ v1715;
            v1731 = v1716 ^ __ROL4__(v1729, 1);
            v1732 = v1730 + v1729;
            v1733 = v1731 + __ROL4__(v1732, 12);
            v1734 = v1730 ^ (__ROL4__(v1731, 30) + __ROL4__(v1732, 23));
            v1735 = v1732 - v1734;
            v1736 = v1735 + v1733;
            v1737 = v1734 ^ (__ROL4__(v1733, 21) + __ROL4__(v1735, 3));
            v1738 = v1735 - v1737;
            v1739 = playIntentKey[(unsigned __int8)v1738 + 93];
            v1740 = v1738 - v1737;
            v1741 = v1740 + v1737 + v1736 - 123486386;
            v1742 = v1739 + v1737;
            v1743 = v1739 - (v1740 - 123486386);
            v1744 = v1741 + __ROL4__(v1742, 23);
            v1715 = v1742 + __ROL4__(v1743, 8);
            v1716 = v1743 ^ (__ROL4__(v1744, 29) + __ROL4__(v1715, 1));
            v1717 = v1715 + v1744;
            --v1728;
        } while (v1728);
        return (v1714 ^ v1715) + (v1716 ^ v1717);
    case 0x21:
        v1745 = playIntentKey[(unsigned __int8)a3 + 374] + a2;
        v1746 = a3 - a4;
        v1747 = a4 - a5;
        v1748 = a5 - playIntentKey[(unsigned __int8)v1745 + 480];
        v1749 = v1746 ^ v1745;
        v1750 = v1746 - playIntentKey[(unsigned __int8)v1747 + 465];
        v1751 = 874747474 * v1748;
        v1752 = 874747474 * v1748 + v1747;
        v1753 = v1749 ^ v1748;
        v1754 = (__ROL4__(v1750, 8) + 26973) ^ (v1751 + v1747 - 19625);
        v1755 = v1752 + ((__ROL4__(v1753, 11) - 4615) ^ (v1754 + v1749 + 31155));
        v1756 = __ROL4__(v1752, 19) + v1750 + __ROL4__(v1753, 7);
        v1757 = v1753 - (v1756 + __ROL4__(v1749 + v1754, 11));
        v1758 = v1749 + v1754 - v1756 - v1755;
        v1759 = v1755 ^ v1756;
        v1760 = v1755 - v1757;
        v1761 = (__ROL4__(v1758, 26) + 13799) ^ (v1759 + 31678);
        v1762 = v1757 - v1761;
        v1763 = v1759 + v1761 - v1755;
        v1764 = playIntentKey[(unsigned __int8)v1759 + 380] + v1758;
        v1765 = v1764 + 1462137064 * v1763;
        v1766 = v1762 ^ v1760;
        v1767 = v1762 ^ __ROL4__(v1764, 14);
        v1768 = v1763 ^ __ROL4__(v1766, 18);
        v1769 = v1766 - v1767 - v1765;
        v1770 = v1767 + 793856575 * v1765;
        v1771 = v1769 + v1768 + v1765;
        v1772 = v1768 - v1769;
        v1773 = v1769 - v1770;
        v1774 = v1770 + __ROL4__(v1771, 10);
        v1775 = v1772 ^ v1771;
        v1776 = v1773 ^ v1774;
        v1777 = v1772 - playIntentKey[(unsigned __int8)v1773 + 319];
        v1778 = v1774 ^ __ROL4__(v1775, 20);
        v1779 = __ROL4__(v1773 ^ v1774, 28);
        v1780 = v1778 - 1345899999 * (v1775 - v1777);
        v1781 = playIntentKey[(unsigned __int8)v1778 + 135] + v1776;
        v1782 = v1779 + v1775;
        v1783 = v1780 + v1781 + v1777 + v1779;
        v1784 = v1781 ^ (-482435653 * v1780);
        v1785 = v1780 - v1782;
        if ((v1783 & 2) != 0)
        {
            v1786 = v1783 ^ v1785;
            v1787 = v1784 ^ v1782;
            v1788 = __ROL4__(v1786, 14);
            v1789 = v1786 - playIntentKey[(unsigned __int8)v1787 + 203];
            v1790 = v1784 + v1788;
            v1791 = v1787 - (__ROL4__(v1790, 13) + __ROL4__(v1789, 3));
            v1792 = v1790 - v1789;
            v1793 = v1789 - playIntentKey[(unsigned __int8)v1791 + 451];
            v1794 = playIntentKey[(unsigned __int8)v1792 + 395] + v1791;
            v1795 = v1792 ^ (v1794 + v1793);
            v1796 = v1793 - v1794;
            v1797 = v1794 ^ (813139134 * v1795);
            v1798 = v1796 ^ v1795;
            v1799 = v1797 + 750171766 * v1798;
            v1800 = v1796 - playIntentKey[(unsigned __int8)v1797 + 447];
            v1801 = v1798 - v1800;
            v1802 = playIntentKey[(unsigned __int8)v1799 + 138] + v1800;
            v1782 = v1799 - v1801;
            v1784 = v1801 - __ROL4__(v1802, 9);
            v1785 = playIntentKey[(unsigned __int8)v1782 + 491] + v1802;
        }
        v1678 = v1785 ^ v1784;
        v1803 = v1783 ^ v1782;
        return (unsigned int)(v1678 + v1803);
    case 0x22:
        v1804 = a2 - __ROL4__(a3, 12);
        v1805 = a3 - a4 - a5;
        v1806 = a5 ^ a4;
        v1807 = a5 - playIntentKey[(unsigned __int8)v1804 + 342];
        if ((v1805 & 0x400) != 0)
        {
            v1808 = v1805 ^ v1807;
            v1809 = v1806 ^ __ROL4__(v1808, 17);
            v1810 = v1804 ^ __ROL4__(v1806, 3);
            v1811 = v1808 - (__ROL4__(v1810, 6) + __ROL4__(v1809, 9));
            v1812 = v1810 - v1809;
            v1813 = v1809 - __ROL4__(v1811, 29);
            v1807 = v1812 ^ v1811;
            v1804 = v1812;
            v1806 = v1813;
        }
        v1814 = v1805 ^ (1961825845 * v1804);
        v1815 = v1806 ^ v1804;
        v1816 = v1807 + v1806;
        v1817 = (__ROL4__(v1814, 21) - 18213) ^ v1807 ^ (v1815 + 12289);
        v1818 = playIntentKey[(unsigned __int8)v1816 + 489];
        v1819 = v1816 - (v1815 ^ v1814) - v1817;
        v1820 = v1817 - (v1815 ^ v1814);
        v1821 = v1818 ^ v1814;
        v1822 = (v1818 ^ v1815) + __ROL4__(v1819, 2);
        v1823 = playIntentKey[(unsigned __int8)v1820 + 160] ^ v1819;
        v1824 = v1821 + v1820;
        v1825 = v1821 - playIntentKey[(unsigned __int8)v1822 + 145];
        v1826 = v1823 + v1824 + v1822;
        v1827 = v1823 - v1824;
        v1828 = v1824 - __ROL4__(v1825, 11);
        if ((v1826 & 0x1000) != 0)
        {
            v1829 = v1826 ^ v1828;
            v1830 = v1829 + v1827 + v1825;
            v1831 = v1827 ^ (v1829 - 14296038);
            v1832 = v1829 - __ROL4__(v1830, 15);
            v1825 = v1830 - playIntentKey[(unsigned __int8)v1831 + 419];
            v1827 = v1831 - v1832 - v1825;
            v1828 = v1832 ^ __ROL4__(v1825, 24);
        }
        v1833 = v1825 ^ v1826;
        v1834 = v1825 - playIntentKey[(unsigned __int8)v1827 + 510];
        v1835 = v1827 - playIntentKey[(unsigned __int8)v1828 + 471];
        v1836 = v1833 ^ v1828;
        v1837 = v1833 - playIntentKey[(unsigned __int8)v1834 + 456];
        v1838 = v1834 ^ (1479310367 * v1835);
        v1839 = v1835 - v1836;
        v1840 = playIntentKey[(unsigned __int8)v1837 + 50] ^ v1836;
        v1841 = v1837 - playIntentKey[(unsigned __int8)v1838 + 425];
        v1842 = v1838 - v1840 - v1839;
        v1843 = v1840 ^ v1839;
        v1844 = v1841 + ((__ROL4__(v1842, 21) + 10447) ^ (v1843 - 27504));
        v1845 = (playIntentKey[(unsigned __int8)(v1840 - v1841 - v1842) + 116] + v1843) ^ (v1844 + v1840 - v1841 - v1842 + 585844742);
        v1846 = v1844 ^ (v1842 - v1843);
        return (unsigned int)(v1845 + v1846);
    case 0x23:
        v1847 = ((a3 >> 28) & 7) + 1;
        do
        {
            v1848 = a3 ^ a5;
            v1849 = -137702599 * a4;
            v1850 = playIntentKey[(unsigned __int8)v1848 + 354] ^ a4;
            v1851 = v5 + v1849;
            v1852 = v1848 ^ (v1850 + v1851);
            v1853 = v1851 - v1850 - v1852;
            v1854 = v1852 ^ v1853;
            v1855 = v1850 ^ v1852;
            v1856 = v1855 ^ v1853;
            v1857 = v1855 - (__ROL4__(v1854, 2) + __ROL4__(v1856, 13));
            v1858 = v1857 ^ v1856;
            v1859 = v1858 + v1857;
            v1860 = v1857 - v1850;
            v1861 = v1858 - v1860;
            v1862 = v1859 - 2082340853 * v1861;
            v1863 = v1860 - playIntentKey[(unsigned __int8)v1859 + 436];
            v5 = v1861 - v1863;
            a5 = v1862 - 649381079 * (v1861 - v1863);
            v1864 = playIntentKey[(unsigned __int8)v1862 + 130];
            a4 = v1864 + v1863;
            --v1847;
        } while (v1847);
        v1865 = a3 - v5;
        v1866 = v1864 + v1861;
        v1867 = (__ROL4__(a5, 28) + 1372) ^ a4 ^ (v1865 + 24920);
        v1868 = v1866 ^ v1867;
        v1869 = v1865 + a5;
        v1870 = v1865 - (__ROL4__(v1866, 30) + __ROL4__(v1867, 12));
        v1871 = v1870 + v1869;
        v1872 = playIntentKey[(unsigned __int8)v1869 + 19] ^ v1867;
        v1873 = v1870 ^ __ROL4__(v1868, 2);
        v1874 = v1872 + v1868;
        v1875 = v1871 ^ v1872;
        v1876 = v1875 + v1874;
        v1877 = v1871 + __ROL4__(v1873, 11);
        v1878 = v1875 - playIntentKey[(unsigned __int8)v1877 + 289];
        v1879 = v1876 + (v1876 ^ v1873);
        v1880 = v1876;
        v1881 = v1877 + v1876;
        LOBYTE(v1877) = v1877 - v1879;
        v1882 = v1878 + v1879;
        v1883 = v1880 - v1878;
        v1884 = playIntentKey[(unsigned __int8)v1877 + 493] + v1878;
        v1885 = v1883 ^ v1882;
        v1886 = v1883 - __ROL4__(v1884, 12);
        v1887 = v1881 ^ v1885;
        v1888 = v1884 - ((__ROL4__(v1881, 23) - 19707) ^ (v1885 + 20186));
        v1889 = v1886 + __ROL4__(v1881 ^ v1885, 7);
        v1890 = v1885 - ((__ROL4__(v1886, 8) - 5795) ^ (v1888 - 27849));
        v1891 = v1888 + ((__ROL4__(v1881 ^ v1885, 3) - 1511) ^ (v1890 - 20123));
        v1892 = __ROL4__(v1888, 11) + v1889;
        v1893 = v1887 - v1890;
        v1894 = v1890 ^ (v1891 + v1892);
        v1895 = v1893 - playIntentKey[(unsigned __int8)(v1890 ^ (v1891 + v1892)) + 416];
        v1406 = v1894 ^ v1891 ^ v1892;
        v1407 = v1895 ^ v1891 ^ v1893;
        return (unsigned int)(v1406 + v1407);
    case 0x24:
        if ((a3 & 0x4000) != 0)
        {
            v1896 = a3 ^ a5;
            v1897 = a2 ^ (v1896 + a4);
            v1898 = __ROL4__(v5 ^ (v1896 + a4), 4);
            v1899 = a4 - v1896;
            v1900 = v1899 + v1897;
            v1901 = v1898 + v1900 + v1896;
            v1902 = v1901 ^ v1899;
            v1903 = v1902 ^ v1900;
            v1904 = v1902 + __ROL4__(v1901, 14);
            v1905 = playIntentKey[(unsigned __int8)v1903 + 240] ^ v1901;
            v1906 = playIntentKey[(unsigned __int8)v1904 + 226] ^ v1903;
            v1907 = v1905 ^ v1904;
            v1908 = v1905 - __ROL4__(v1906, 14);
            v1909 = v1906 - __ROR4__(v1907, 1);
            v1910 = playIntentKey[(unsigned __int8)v1908 + 155] ^ v1907;
            v5 = v1909 ^ (-207109407 * v1910);
            a4 = 598135568 * v1909 + v1910 - v1908;
            a5 = v5 + v1910;
        }
        v1911 = ((v5 >> 8) & 7) + 1;
        do
        {
            v1912 = v5 ^ a5;
            v1913 = a3 + 644218650 * a4;
            v1914 = a4 ^ __ROL4__(v1912, 14);
            v1915 = v1913 ^ (__ROL4__(v1914, 20) - 18049);
            v1916 = v1912 - (__ROL4__(v1913, 3) + __ROL4__(v1914, 11));
            a3 = (v1916 - 30585) ^ v1915;
            a5 = a3 + v1916;
            a4 = v1914 ^ (__ROR4__(v1916, 1) + __ROL4__(a3, 10));
            --v1911;
        } while (v1911);
        v1917 = ((a3 >> 21) & 7) + 1;
        do
        {
            v5 += a4;
            a4 += playIntentKey[(unsigned __int8)(a3 ^ a5) + 120];
            a5 ^= a3 ^ (__ROL4__(v5, 26) + __ROL4__(a4, 11));
            --v1917;
        } while (v1917);
        v1918 = v5 + a3;
        v1919 = v5 - a4 + 1870783095;
        v1920 = a4 - a5;
        v1921 = v1918 ^ a5;
        v1922 = v1919 ^ v1918;
        v1923 = v1919 ^ v1920;
        v1924 = v1920 - (v1922 + v1921);
        v1925 = a5 ^ v1919;
        v1926 = v1923 ^ (v1924 + 768556674);
        v1927 = v1922 - playIntentKey[(unsigned __int8)v1923 + 46];
        v1928 = v1925 ^ v1924;
        v1929 = v1925 + __ROL4__(v1927, 3);
        v1930 = v1927 - 1096787615 * v1926;
        v1931 = v1928 + v1926;
        v1932 = v1930 ^ (1634868781 * v1931);
        v1933 = v1929 ^ __ROL4__(v1930, 15);
        v1934 = v1929 + v1928;
        v1935 = v1934 ^ v1932 ^ v1931;
        v1936 = v1934 - ((__ROL4__(v1933, 2) - 7148) ^ (v1932 - 29244));
        v1937 = playIntentKey[(unsigned __int8)v1932 + 495] ^ v1933;
        v1938 = playIntentKey[(unsigned __int8)v1936 + 481] ^ v1932;
        v1939 = v1936 ^ v1937 ^ v1935 ^ (v1937 - 703859658);
        return (unsigned int)(v1938 + v1939);
    case 0x25:
        if ((a3 & 0x8000000) != 0)
        {
            v1940 = a3 ^ a5;
            v1941 = a2 ^ __ROL4__(a4, 18);
            v1942 = v1940 - v1941;
            v1943 = 1162784793 * v1940 + v1941 - a4;
            v1944 = v1943 + v1942;
            v1945 = v1940 + __ROL4__(v1942, 13);
            v1946 = v1943 - v1945;
            v1947 = playIntentKey[(unsigned __int8)v1946 + 103] ^ v1944;
            v1948 = v1945;
            v1949 = playIntentKey[(unsigned __int8)v1947 + 67] ^ v1945;
            v1950 = v1946 ^ __ROL4__(v1948, 24);
            v1951 = v1947 - v1950;
            v1952 = v1949 ^ v1950;
            v1953 = playIntentKey[(unsigned __int8)(v1951 + 102) + 488] + v1949;
            v1954 = v1952 + v1951 + v1953 + 1052114790;
            v5 = v1952 - playIntentKey[(unsigned __int8)v1953 + 452];
            a4 = v1953 ^ (-1926716903 * v1954);
            a5 = v5 ^ v1954;
        }
        v1955 = playIntentKey[(unsigned __int8)v5 + 250] ^ a3;
        v1956 = a4 + v5;
        v1957 = playIntentKey[(unsigned __int8)a5 + 377] ^ a4;
        v1958 = a5 ^ (v1955 + v1956);
        v1959 = v1955 ^ __ROL4__(v1956, 23);
        v1960 = playIntentKey[(unsigned __int8)v1957 + 341] + v1956;
        v1961 = v1957 - v1958;
        v1962 = v1960 ^ __ROL4__(v1961, 18);
        v1963 = __ROL4__(v1960, 8) + __ROR4__(v1961, 1);
        v1964 = v1961 ^ (v1958 - v1959);
        v1965 = v1958 - v1963;
        v1966 = v1964 + v1962 + v1959 - v1963;
        v1967 = v1962 - 827266220 * v1964;
        v1968 = v1965 + v1964;
        v1969 = v1965 ^ __ROL4__(v1966, 23);
        v1970 = v1967 ^ v1966;
        v1971 = v1968 - 1104586083 * v1969;
        v1972 = v1967 ^ __ROL4__(v1968, 8);
        v1973 = v1970 ^ v1969;
        v1974 = v1970 - __ROL4__(v1972, 9);
        v1975 = v1972 - v1971;
        v1976 = v1971 ^ __ROL4__(v1973, 1);
        v1977 = v1973 - v1974 - v1975;
        v1978 = __ROL4__(v1975, 4);
        v1979 = __ROL4__(v1976, 4);
        v1980 = v1976 + v1975;
        v1981 = playIntentKey[(unsigned __int8)v1977 + 432] ^ v1976;
        v1982 = v1978 + v1974 + v1979;
        v1983 = v1977 ^ (v1982 + v1980);
        v1984 = v1980 ^ v1982;
        v1985 = v1980 + 1363610452 * v1981;
        v679 = (v1981 - v1983) ^ (v1983 - v1984 - v1985);
        v680 = v1984 ^ v1985;
        return (unsigned int)(v679 + v680);
    case 0x26:
        v1986 = a3 + __ROL4__(a4, 19);
        v1987 = a3 + a2 + a4;
        v1988 = a4 - a5;
        v1989 = (a3 + a2) ^ (__ROL4__(v1986, 28) + __ROL4__(v1988, 12));
        v1990 = v1986 - __ROL4__(v1988, 29);
        v1991 = a5 + a3 + a2 - v1989;
        v1992 = v1990 + v1989;
        v1993 = v1990 - v1987;
        v1994 = v1991 + v1987 + 471230250;
        v1995 = v1991 + 471230250 - playIntentKey[(unsigned __int8)v1992 + 415];
        v1996 = v1992 ^ (v1993 + 80269624);
        v1997 = v1993 + v1994 + 80269624;
        v1998 = v1994 ^ (v1995 + v1996);
        v1999 = v1995 - (__ROL4__(v1996, 18) + __ROL4__(v1997, 19));
        if ((((_BYTE)v1993 + (_BYTE)v1994 + 56) & 0x40) != 0)
        {
            v2000 = v1997 ^ v1999;
            v2001 = v1996 + __ROL4__(v1998, 16);
            v2002 = v1998 ^ (v2001 + v2000);
            v2003 = v2000 - v2001;
            v2004 = v2002 + v2001;
            v2005 = v2002 ^ __ROL4__(v2003, 24);
            v2006 = v2003 - v2005 - v2004;
            v2007 = playIntentKey[(unsigned __int8)v2005 + 126] ^ v2004;
            v2008 = (v2007 + 20774) ^ v2005 ^ (__ROL4__(v2006, 12) - 24696);
            v2009 = v2007 ^ v2008;
            v2010 = v2006 + __ROL4__(v2007, 4);
            v2011 = v2008 - v2010 - v2009;
            v2012 = v2009 ^ v2010;
            v2013 = (__ROL4__(v2011, 20) - 549) ^ v2009 ^ (v2012 - 11779);
            v2014 = (__ROL4__(v2013, 19) + 6429) ^ v2012 ^ (v2012 + v2011 - 1475);
            v1996 = v2013 - playIntentKey[(unsigned __int8)(v2012 + v2011) + 162];
            v1998 = v2014 ^ (v2012 + v2011);
            v1999 = v2014 - __ROL4__(v1996, 14);
        }
        v2015 = v1997 - (__ROL4__(v1996, 17) + __ROL4__(v1998, 25));
        v2016 = v1996 ^ (v1999 + v1998);
        v2017 = v1998 - v1999;
        v2018 = v2015 + v1999;
        v2019 = v2015 + v1998;
        v2020 = v2016 + v2015;
        v2021 = v2016 - v2019;
        v2022 = v2017 - 161094987 * v2018;
        v2023 = v2018 ^ __ROR4__(v2020, 1);
        v2024 = v2020 + 1134479801 * v2021;
        v2025 = v2022 + v2021;
        v2026 = v2022 ^ (v2023 + v2024);
        v2027 = v2023 + 466199312 * v2024;
        v2028 = playIntentKey[(unsigned __int8)v2025 + 447] + v2024;
        v2029 = v2027 + v2026 + v2025;
        v2030 = v2028 + v2027;
        v2031 = v2030 ^ v2026;
        v2032 = v2028 ^ (v2029 + v2031);
        v2033 = playIntentKey[(unsigned __int8)v2031 + 56] ^ v2029;
        v2034 = v2030 ^ v2032;
        v2035 = v2031 - (__ROL4__(v2030, 27) + __ROL4__(v2032, 10));
        v2036 = v2035 + __ROL4__(v2030 ^ v2032, 1);
        v2037 = v2035 + v2033 + v2032 - (__ROL4__(v2033, 12) + __ROL4__(v2035, 2));
        v2038 = v2035 + v2033 - v2036;
        v2039 = v2036 ^ (-810092916 * (v2034 ^ v2037));
        v2040 = v2037 - v2038;
        v679 = v2040 ^ (v2039 + v2038);
        v680 = v2039 ^ (v2040 + v2034) ^ v2034 ^ v2040;
        return (unsigned int)(v679 + v680);
    case 0x27:
        if ((a3 & 0x2000000) != 0)
        {
            v2041 = a3 ^ a5;
            v2042 = __ROL4__(v2041, 13) + a2 + __ROL4__(a4, 20);
            v2043 = a4 - v2041;
            v2044 = playIntentKey[(unsigned __int8)v2042 + 41];
            v2045 = v2041 - v2044;
            v2046 = v2042 ^ (a4 - v2044);
            v2047 = v2046 - (v2043 + __ROL4__(v2045, 10));
            v2048 = v2047 + v2046;
            v2049 = v2045 - v2048 + 1799877120;
            v5 = v2045 + v2047 - 1408850959;
            a4 = v2045 + v2045 - v2048 + 1799877120;
            a5 = v2049 - v5 - a4;
        }
        v2050 = v5 + a3;
        v2051 = a4 ^ (a5 - 700426437);
        v2052 = v2050 ^ a5;
        v2053 = v2051 + v5 - a4;
        v2054 = v2053 + v2050;
        v2055 = v2052 + v2051;
        v2056 = v2052 + 977680765 * v2054;
        v2057 = v2053 ^ v2054;
        v2058 = v2055 ^ v2056;
        v2059 = __ROL4__(v2056, 27) + v2053 + __ROL4__(v2055, 5);
        v2060 = v2059 ^ __ROL4__(v2058, 14);
        v2061 = v2058 ^ (__ROL4__(v2056 - v2057, 25) + 24057) ^ (v2057 + v2059 + 11846);
        v2062 = v2059 + v2057 - ((__ROL4__(v2060, 1) + 8304) ^ (v2061 - 13707));
        v2063 = v2060 - v2061;
        v2064 = v2062 + v2056 + v2059;
        v2065 = v2064 ^ v2061;
        v2066 = __ROL4__(v2063, 24);
        v2067 = playIntentKey[(unsigned __int8)v2065 + 4] ^ v2063;
        v2068 = v2062 ^ v2066;
        v2069 = v2065 + v2064 - 178030501;
        v2070 = v2068 ^ v2064;
        if ((v2067 & 0x40000) != 0)
        {
            v2071 = v2068 + __ROL4__(v2069, 29);
            v2072 = v2071 + (v2067 ^ v2070);
            v2073 = v2072 ^ v2069;
            v2068 = v2071 ^ (528492225 * v2073);
            v2074 = v2073 + v2072 - 6370;
            v2069 = v2072 + v2073;
            v2070 = (__ROL4__(v2068, 11) + 2877) ^ v2072 ^ v2074;
        }
        if ((v2068 & 0x4000000) != 0)
        {
            v2075 = v2068 ^ v2070;
            v2076 = v2067 + __ROL4__(v2069, 5);
            v2077 = v2069 + 390291174 * v2075;
            v2078 = v2077 + v2076;
            v2079 = v2075 + __ROL4__(v2076, 4);
            v2080 = v2077 ^ (v2078 + v2079);
            v2081 = playIntentKey[(unsigned __int8)v2078 + 165] + v2079;
            v2082 = v2081 + v2080;
            v2083 = v2082 ^ v2078;
            v2084 = playIntentKey[(unsigned __int8)v2083 + 368] ^ v2081;
            v2085 = playIntentKey[(unsigned __int8)v2082 + 354] ^ v2083;
            v2086 = v2082 - v2084 - v2085;
            v2087 = v2084 - v2085;
            v2088 = v2085 - 1666583403 * v2086;
            v2089 = v2087 ^ v2086;
            v2090 = v2088 ^ v2087;
            v2067 = v2088 ^ (1065072993 * v2089);
            v2069 = v2089 - v2090;
            v2070 = v2090 - __ROL4__(v2067, 4);
        }
        v1938 = v2070 ^ v2069;
        v1939 = v2068 ^ v2067;
        return (unsigned int)(v1938 + v1939);
    case 0x28:
        v2091 = a2 - ((__ROL4__(a3, 10) + 7520) ^ (a4 + 1384));
        v2092 = a3 - a4 - a5;
        v2093 = a5 ^ a4;
        v2094 = v2091 ^ a5;
        v2095 = v2091 + ((__ROL4__(v2092, 22) + 25715) ^ (v2093 + 26611));
        v2096 = __ROL4__(v2094, 30) + v2092 + __ROL4__(v2093, 1);
        v2097 = v2093 + 1761000186 * v2094;
        v2098 = v2095 - 1369974025 * v2096;
        v2099 = playIntentKey[(unsigned __int8)v2095 + 303] + v2094;
        v2100 = 705631458 * v2097;
        v2101 = v2097 - playIntentKey[(unsigned __int8)v2099 + 268];
        v2102 = v2096 ^ v2100;
        v2103 = v2099 - 970384737 * v2098;
        v2104 = playIntentKey[(unsigned __int8)v2102 + 253] + v2098;
        v2105 = v2102 - v2101;
        v2106 = playIntentKey[(unsigned __int8)v2103 + 472] ^ v2101;
        v2107 = v2103 - (__ROL4__(v2104, 15) + __ROL4__(v2105, 20));
        v2108 = v2104 - v2105;
        v2109 = v2105 - v2106;
        v2110 = v2107 + v2108 + v2106 + 465425399;
        v2111 = v2107 - (v2108 + v2109 + 465425399);
        v2112 = playIntentKey[(unsigned __int8)v2109 + 15] + v2108 + 465425399;
        v2113 = v2110 + v2111 + v2109;
        v2114 = v2110 + v2113 + v2112;
        v2115 = v2110 - v2111;
        v2116 = v2113 + v2112 + v2111;
        v2117 = v2113 ^ __ROL4__(v2115, 20);
        v2118 = playIntentKey[(unsigned __int8)v2113 + 219] ^ v2112;
        v2119 = v2118 ^ v2116;
        v2120 = v2118 + ((__ROL4__(v2117, 5) - 13559) ^ (v2114 - 3350));
        v2121 = v2117 - v2114;
        v2122 = v2119 ^ (__ROL4__(v2120, 6) + __ROL4__(v2121, 21));
        v2123 = v2114 + __ROL4__(v2119, 15);
        v2124 = v2121 + v2120;
        v2125 = v2123 ^ __ROL4__(v2122, 29);
        v2126 = v2121 ^ (__ROL4__(v2123, 23) + __ROL4__(v2122, 13));
        v2127 = v2124 + v2122;
        v2128 = v2124 - v2126;
        v2129 = v2125 + v2126;
        v2130 = v2128 + v2127 + 1034520987;
        v2131 = v2130 ^ v2125;
        v2132 = v2128 + 1034520987 - v2129;
        v2133 = v2131 + v2129;
        v2134 = v2131 - v2130;
        v2135 = v2134 - 869131076;
        v2136 = v2130 - v2132;
        v2137 = (__ROL4__(v2133, 3) - 31119) ^ v2132 ^ (v2134 - 869106624);
        v2138 = v2133 - v2135;
        v2139 = __ROL4__(v2137, 1);
        v753 = v2138 + v2137;
        v2140 = v2135 - v2136;
        v2141 = v2138 + __ROL4__(v2140, 11);
        v2142 = v2139 + v2136 + __ROL4__(v2138, 26);
        v754 = v2140 - v2142;
        v2143 = v2142 + __ROL4__(v753, 10);
        v108 = (v754 + playIntentKey[(unsigned __int8)v2143 + 119]) ^ (v2143 - (v753 ^ v2141));
    LABEL_218:
        v427 = v753 ^ v754;
        return (unsigned int)(v108 + v427);
    case 0x29:
        v2144 = a2 - __ROL4__(a3, 14);
        v2145 = a3 ^ (a5 + a4);
        v2146 = a5 ^ a4;
        v2147 = a5 - v2144 - v2145;
        v2148 = v2145 ^ v2144;
        v2149 = v2145 - v2146;
        v2150 = v2147 + v2148 + v2146;
        v2151 = v2147 ^ (1009196135 * v2148);
        v2152 = v2148 ^ (v2147 + v2148 + v2145);
        v2153 = v2149 - 1400222296 * v2150;
        v2154 = v2150 - v2151;
        v2155 = v2153 + v2152;
        v2156 = v2151 - __ROL4__(v2152, 13);
        v2157 = v2153 - 96726585 * v2154;
        v2158 = v2154 ^ (v2156 + v2155);
        v2159 = v2156 + __ROL4__(v2155, 27);
        v2160 = v2157 ^ (-1990196374 * v2158);
        v2161 = playIntentKey[(unsigned __int8)v2159 + 404] + v2158;
        v2162 = v2160 + v2155 - playIntentKey[(unsigned __int8)v2157 + 277];
        v2163 = v2162 + v2159;
        v2164 = v2161 ^ (741188549 * v2163);
        v2165 = v2160 - playIntentKey[(unsigned __int8)v2161 + 368];
        v2166 = playIntentKey[(unsigned __int8)v2162 + 75] + v2163;
        if ((v2165 & 0x10000) != 0)
        {
            v2167 = v2165 ^ v2166;
            v2168 = v2162 - v2167 - v2164;
            v2169 = v2164 - v2167;
            v2170 = v2167 - ((__ROL4__(v2168, 28) - 11157) ^ (v2169 + 2058));
            v2171 = __ROL4__(v2170, 16);
            v2172 = v2169 + v2168;
            v2173 = v2172 + v2170;
            v2174 = v2169 ^ (v2171 + __ROL4__(v2172, 13));
            v2175 = __ROL4__(v2174, 12) + v2172 + __ROL4__(v2173, 13);
            v2176 = __ROL4__(v2175, 11) + __ROL4__(v2174 - v2173, 15);
            v2177 = v2176 + v2173;
            v2164 = v2174 + v2176;
            v2178 = v2164 ^ v2175;
            v2166 = v2178 + v2177;
            v2162 = v2178;
        }
        v2179 = v2165 - v2162;
        v2180 = v2166 ^ v2179;
        v2181 = v2162 + __ROL4__(v2164, 19);
        v2182 = v2164 - ((__ROL4__(v2166, 19) + 32428) ^ (v2179 - 29972));
        v2183 = v2179 - __ROL4__(v2181, 16);
        v2184 = v2180 + v2182;
        v2185 = v2184 + v2181;
        v2186 = v2180 - v2183;
        v2187 = v2186 - 800952150;
        v2188 = v2185 + v2183;
        v2189 = v2185 - (v2186 + v2184 - 800952150);
        v2190 = v2184 ^ (v2186 - 1828335652);
        v2191 = v2188 ^ v2187;
        v2192 = v2188 - v2189 + 636357340;
        v2193 = v2189 + v2190;
        v2194 = playIntentKey[(unsigned __int8)v2191 + 507] ^ v2190;
        v2195 = (__ROL4__(v2192, 9) + 3014) ^ v2191 ^ (v2190 + v2189 - 6879);
        v2196 = v2192 - __ROL4__(v2193, 11);
        v2197 = v2194 ^ v2193;
        v2198 = v2194 - v2195;
        v2199 = __ROL4__(v2196, 29);
        v2200 = v2197 + v2196;
        v2201 = v2195 + v2199;
        v2202 = v2198 ^ (v2200 + v2195 + v2199);
        v2203 = __ROL4__(v2201, 6) + __ROL4__(v2200, 24);
        v541 = __ROL4__(v2198, 6) ^ v2197 ^ v2200;
        v542 = v2203 ^ v2202;
        return (unsigned int)(v541 + v542);
    case 0x2A:
        v2204 = a2 - __ROL4__(a3, 18);
        v2205 = a3 - a4 - a5;
        v2206 = a4 ^ (a5 - 730774124);
        v2207 = a5 - __ROL4__(v2204, 9);
        v2208 = v2204 - v2205 - v2206;
        v2209 = v2206 ^ v2205;
        v2210 = v2207 ^ v2206;
        v2211 = v2207 - ((__ROL4__(v2208, 29) + 4132) ^ (v2209 - 5067));
        v2212 = ((v2209 >> 22) & 7) + 1;
        do
        {
            v2213 = v2209 ^ v2211;
            v2214 = v2210 ^ v2208;
            v2215 = __ROL4__(v2213, 23) ^ v2210;
            v2216 = (780065483 * v2214) ^ v2213;
            v2217 = v2214 - 976189588 * v2215;
            v2218 = playIntentKey[(unsigned __int8)(v2215 - v2216) + 459];
            v2208 = v2218 + v2217;
            v2210 = v2218 + v2215;
            v2211 = v2216 - (v2218 + v2217 + v2217);
            --v2212;
        } while (v2212);
        v2219 = v2211 + v2210;
        v2220 = v2209 - v2208 - 512329371;
        v2221 = v2208 - (__ROL4__(v2210, 8) + __ROL4__(v2211, 14));
        v2222 = playIntentKey[(unsigned __int8)v2220 + 93];
        v2223 = v2220 - v2221;
        v2224 = v2221 + ((__ROL4__(v2219, 5) + 4672) ^ (v2211 - v2222 + 7886));
        v2225 = v2211 - v2222 + v2223 + v2219;
        v2226 = v2211 - v2222 - v2223;
        v2227 = v2225 ^ __ROL4__(v2226, 23);
        v2228 = v2223 ^ (__ROL4__(v2224, 25) + __ROL4__(v2225, 2));
        v2229 = v2224 - (v2225 + v2226);
        v2230 = v2226 ^ (-1351113123 * v2228);
        v2231 = playIntentKey[(unsigned __int8)v2229 + 464] + v2228;
        v2232 = v2230 + v2227 + v2229;
        v2233 = v2227 - v2230;
        v2234 = v2232 + v2231 + v2230;
        v2235 = ((unsigned int)~v2232 >> 24) | 0xFFFFFFF8;
        do
        {
            v2236 = v2232 ^ v2234;
            v2237 = v2233 ^ v2236;
            v2238 = v2231 + __ROL4__(v2233, 20) + __ROL4__(v2236, 7);
            v2239 = v2236 - v2238;
            v2240 = v2237 ^ v2238;
            v2241 = v2239 + v2240 + v2237;
            v2242 = v2239 ^ (-988506567 * v2240);
            v2234 = v2240 + 2 * v2242;
            v2231 = v2240 - v2241;
            v2233 = v2242 + v2241;
            ++v2235;
        } while (v2235);
        v2243 = v2231 + 307068220;
        v2244 = v2231 - v2233;
        v2245 = v2233 - playIntentKey[(unsigned __int8)v2234 + 60];
        v2246 = v2232 ^ v2243;
        v2247 = v2246 ^ v2234;
        v2248 = playIntentKey[(unsigned __int8)v2244 + 5] ^ v2246;
        v2249 = v2244 - 29813893 * v2245;
        v2250 = v2247 + v2245;
        v2251 = v2247 - v2248;
        v2252 = v2248 ^ (__ROL4__(v2249, 24) + __ROL4__(v2250, 4));
        v2253 = __ROL4__(v2251, 30);
        v2254 = v2251 - v2252;
        v2255 = v2252 + v2249 - v2250;
        v2256 = v2253 + __ROL4__(v2252, 24);
        v2257 = v2256 + v2250;
        v2258 = v2249 + v2256;
        v2259 = v2257 ^ (__ROL4__(v2254, 25) - 21037) ^ (v2255 - 16523);
        v2260 = playIntentKey[(unsigned __int8)v2259 + 440];
        v2261 = __ROL4__(v2258, 26) + v2255 - v2258 + v2254 + __ROL4__(v2255, 25);
        v2262 = v2261 ^ v2259;
        v2263 = v2260 + v2255;
        v1406 = (v2262 - v2261 - v2263) ^ (v2261 - v2263);
        v2264 = playIntentKey[(unsigned __int8)v2262 + 132] ^ (v2260 + v2258);
    LABEL_334:
        v1407 = v2263 ^ v2264;
        return (unsigned int)(v1406 + v1407);
    case 0x2B:
        v2265 = a3 + a2;
        v2266 = a3 + v5 - 1587264610;
        v2267 = a4 ^ a3;
        v2268 = a4 - (v2265 + a5);
        v2269 = a5 ^ v2266;
        v2270 = a4 - a5 + v2267;
        v2271 = v2267 - (v2268 + 1587264610);
        v2272 = v2269 + v2268 + 1587264610;
        v2273 = v2270 + v2269;
        v2274 = v2270 - v2271;
        v2275 = v2272 ^ v2271;
        v2276 = v2272 - ((__ROL4__(v2273, 1) + 28446) ^ (v2274 + 25598));
        v2277 = v2274 ^ v2273;
        v2278 = v2274 ^ (-93592669 * v2275);
        v2279 = v2275 - v2276;
        v2280 = v2276 ^ (171095074 * v2277);
        v2281 = v2277 - v2278;
        v2282 = __ROL4__(v2279, 14);
        v2283 = v2280 ^ (v2281 + 1667744131);
        v2284 = v2279 - playIntentKey[(unsigned __int8)v2280 + 300];
        v2285 = v2278 + v2282;
        v2286 = v2285 ^ v2281;
        v2287 = v2284 - __ROL4__(v2283, 9);
        v2288 = v2283 + v2285 + v2284;
        v2289 = v2286 ^ (v2288 + 1390424268);
        v2290 = playIntentKey[(unsigned __int8)v2286 + 75] + v2283;
        v2291 = v2288;
        v2292 = ((unsigned int)~v2287 >> 13) | 0xFFFFFFF8;
        do
        {
            v2293 = v2287 ^ v2289;
            v2294 = v2290 ^ (533701630 * v2293);
            v2295 = playIntentKey[(unsigned __int8)v2290 + 382] + v2291;
            v2296 = v2293 - v2295;
            v2297 = v2294 ^ v2296;
            v2298 = v2295 - playIntentKey[(unsigned __int8)v2294 + 264];
            v2299 = v2296 - playIntentKey[(unsigned __int8)v2298 + 391];
            v2300 = v2298 - __ROL4__(v2297, 5);
            v2301 = v2297 ^ (v2300 + v2299);
            v2291 = v2300 ^ v2301;
            v2302 = playIntentKey[(unsigned __int8)v2300 + 82] + v2299;
            v2290 = v2301 - playIntentKey[(unsigned __int8)v2302 + 305];
            v2289 = v2302 - ((__ROL4__(v2300 ^ v2301, 28) + 6343) ^ (v2290 + 20865));
            ++v2292;
        } while (v2292);
        v2303 = v2291 ^ v2287;
        v2304 = v2290 + v2289;
        v2305 = v2289 ^ v2290;
        v2306 = v2289 - playIntentKey[(unsigned __int8)v2303 + 481];
        v2307 = v2291 - v2304;
        v2308 = v2303 - __ROL4__(v2307, 12);
        v2309 = v2306 + v2305 + v2307;
        v2310 = v2305 - v2308 - v2306;
        v2311 = v2308 ^ v2306;
        v2312 = v2308 - (v2310 + v2309);
        v2313 = v2309 ^ (1977813858 * v2310);
        v2314 = v2311 + ((__ROL4__(v2312, 23) - 21560) ^ (v2313 - 18922));
        v2315 = v2313 + v2312;
        v2316 = v2314 + v2310 - playIntentKey[(unsigned __int8)v2311 + 396];
        v2317 = v2316 + v2315;
        v2318 = __ROL4__(v2315, 14);
        v541 = v2316 ^ v2313 ^ v2315;
        v2319 = v2314 ^ v2318;
        goto LABEL_292;
    case 0x2C:
        v2320 = a4 + a3;
        v2321 = a5 + a4;
        v2322 = a5 ^ (v2320 + (a2 ^ v2320));
        v2323 = v2320 ^ __ROL4__(v2321, 12);
        v2324 = __ROL4__(a5 ^ (v2320 + (v5 ^ v2320)), 1) + v2321 + __ROL4__(v5, 20);
        v2325 = v2322 - v5;
        v2326 = v2323 ^ v2324;
        v2327 = __ROL4__(v2324, 16) + v5 + __ROL4__(v2323, 5);
        v2328 = (__ROL4__(v2327, 5) - 30829) ^ v2325 ^ (v2326 - 28669);
        v2329 = v2327 - ((__ROL4__(v2326, 25) + 9025) ^ (v2325 + v2324 - 29906));
        v2330 = (v2324 + v2325) ^ v2328;
        v2331 = v2326 - (__ROL4__(v2324 + v2325, 4) + __ROL4__(v2328, 12));
        v2332 = v2328 - v2329;
        v2333 = v2329 - v2331;
        v2334 = v2328 - v2331;
        v2335 = v2331 - v2330;
        v2336 = v2330 ^ (v2332 - 1932697863);
        v2334 += 142973156;
        v2337 = v2335 ^ v2333;
        v2338 = v2336 + v2335 + 533933782;
        v2339 = v2334 ^ (v2337 - 1420337744);
        v2340 = v2336 - playIntentKey[(unsigned __int8)v2334 + 347];
        v2341 = v2338 ^ v2337;
        v2342 = v2338 - __ROL4__(v2340, 1);
        v2343 = v2340 - playIntentKey[(unsigned __int8)v2339 + 141];
        v2344 = v2341 ^ v2339;
        v2345 = v2343 + v2342 + 1438547944;
        v2346 = playIntentKey[(unsigned __int8)v2342 + 85] + v2341;
        v2347 = v2344 + v2343;
        v2348 = (unsigned __int8)v2346;
        v2349 = playIntentKey[(unsigned __int8)v2346 + 232] ^ v2344;
        if ((v2345 & 0x2000000) != 0)
        {
            v2350 = v2345 ^ v2349;
            v2351 = v2347 + v2346;
            v2352 = v2347 ^ __ROL4__(v2350, 24);
            v2353 = playIntentKey[(unsigned __int8)v2351 + 196] ^ v2350;
            v2354 = v2351 ^ (-1345308272 * v2352);
            v2355 = v2352 - v2353;
            v2346 = v2354 ^ v2355;
            v2349 = (v2354 ^ v2355) + v2353 - __ROL4__(v2354, 18);
            v2348 = (unsigned __int8)(v2354 ^ v2355);
            v2347 = v2349 + v2355;
        }
        v2356 = v2345 - playIntentKey[v2348 + 406];
        v2357 = v2346 + 717948438 * v2347;
        v2358 = v2347 - 1552493566 * v2349;
        v2359 = v2356 + v2349;
        v2360 = v2356 ^ (1748683207 * v2357);
        v2361 = v2358 ^ v2357;
        v2362 = v2358 - ((__ROL4__(v2359, 28) + 1730) ^ (v2360 + 11744));
        v2363 = v2359 ^ (1080402718 * v2360);
        v2364 = v2360 ^ (__ROL4__(v2361, 21) + __ROL4__(v2362, 6));
        v2365 = v2361 - v2362;
        v2366 = v2363 + v2362;
        v2367 = v2363 - playIntentKey[(unsigned __int8)v2364 + 85];
        v2368 = playIntentKey[(unsigned __int8)v2366 + 70];
        v2369 = v2367 + v2366;
        v2370 = v2367 - (v2364 - v2365);
        v2371 = v2369 + v2364 - v2365;
        v2372 = v2371 + v2364 - v2368;
        v2373 = v2365 - v2368 - v2371;
        v2374 = v2367 + v2369;
        v2375 = v2370 ^ (-1678070188 * v2372);
        v1679 = v2372 - playIntentKey[(unsigned __int8)v2373 + 497];
        v2376 = v2375 + v2374 + v2373;
        v1678 = (v2374 - v2375) ^ (v1679 + v2376 + v2375);
        goto LABEL_256;
    case 0x2D:
        if ((a3 & 0x200) != 0)
        {
            v2377 = a3 ^ a5;
            v2378 = a4 ^ (1682686028 * v2377);
            v2379 = a2 - playIntentKey[(unsigned __int8)a4 + 503];
            v2380 = v2377 - v2379;
            a4 = v2378 ^ v2380;
            v5 = v2379 - (__ROL4__(v2378, 11) + __ROL4__(v2380, 12));
            a5 = v2380 - playIntentKey[(unsigned __int8)v5 + 471];
        }
        v2381 = a3 ^ __ROL4__(v5, 17);
        v2382 = a4 ^ a5;
        v2383 = v5 - (__ROL4__(a4, 6) + __ROL4__(a5, 14));
        v2384 = __ROL4__(v2383, 9);
        v2385 = v2381 + a5;
        v2386 = v2381 - __ROL4__(v2383, 29);
        v2387 = (v2384 + v2385 + 1474) ^ v2383 ^ (__ROL4__(v2382, 26) - 25954);
        v2388 = v2382 - v2386 - (v2384 + v2385);
        v2389 = v2386 ^ (v2384 + v2385);
        v2390 = v2386 - v2388 - v2387;
        v2391 = v2388 ^ v2387;
        v2392 = v2391 + v2390;
        v2393 = v2388 - v2389;
        v2394 = v2389 - v2392;
        v2395 = v2391 + v2392 - v2388;
        v2396 = v2394 ^ v2393;
        v2397 = v2392 ^ v2395;
        v2398 = playIntentKey[(unsigned __int8)v2392 + 188] ^ v2394;
        v2399 = v2395 - v2396;
        v2400 = v2398 ^ v2397;
        v2401 = v2396 - playIntentKey[(unsigned __int8)v2398 + 50];
        v2402 = __ROL4__(v2398 ^ v2397, 22);
        v2403 = v2397 ^ (__ROL4__(v2399, 13) + __ROL4__(v2401, 15));
        v2404 = v2401 ^ v2400;
        v2405 = __ROL4__(v2401, 24) + v2399 + v2402;
        v2406 = v2400 - playIntentKey[(unsigned __int8)v2403 + 141];
        if ((v2405 & 0x800) != 0)
        {
            v2407 = v2405 ^ v2406;
            v2408 = v2403 - v2407 - v2404;
            v2409 = v2407 + v2404 + 1477424878;
            v2410 = v2408 ^ v2409;
            v2411 = (unsigned __int8)(v2407 ^ v2408);
            v2406 = v2409 ^ v2407;
            v2404 = v2409 - playIntentKey[v2411 + 438];
            v2403 = v2410;
        }
        v2412 = v2403 + v2404 + v2405;
        v2413 = v2403 - v2404 - 276383525;
        v2414 = v2412 + v2406;
        v2415 = v2412 ^ __ROL4__(v2413, 28);
        v2416 = v2413 - (__ROL4__(v2404 ^ v2414, 19) + __ROL4__(v2414, 27));
        v2417 = v2414 ^ __ROL4__(v2415, 19);
        v2418 = v2415 - v2416;
        v2419 = v2416 + __ROL4__(v2404, 28);
        v2420 = v2418 ^ (-420549733 * v2419);
        v2421 = v2404 - (__ROL4__(v2417, 14) + __ROL4__(v2418, 29));
        v2422 = v2421 ^ v2419;
        v679 = (playIntentKey[(unsigned __int8)(v2418 + v2417) + 327] + v2421) ^ (v2422 + v2420 + v2418 + v2417);
        v680 = v2420 ^ v2422;
        return (unsigned int)(v679 + v680);
    case 0x2E:
        v2423 = a3 ^ a2;
        v2424 = a3 - playIntentKey[(unsigned __int8)a4 + 303];
        v2425 = a4 + 1704058288 * a5;
        v2426 = v2423 ^ a5;
        v2427 = v2423 ^ __ROL4__(v2424, 14);
        v2428 = __ROL4__(v2425, 3);
        v2429 = __ROL4__(v2426, 9);
        v2430 = v2426 + v2425;
        v2431 = playIntentKey[(unsigned __int8)v2427 + 312] ^ v2426;
        v2432 = v2424 - (v2428 + v2429);
        v2433 = v2427 - __ROL4__(v2432, 26);
        v2434 = v2431 + v2430;
        v2435 = v2431 ^ v2430;
        v2436 = v2431 - playIntentKey[(unsigned __int8)v2433 + 4];
        v2437 = v2435 + v2432 - v2434;
        v2438 = v2435 ^ __ROL4__(v2436, 3);
        v2439 = v2436 - 1509403336 * (v2433 - v2437);
        v2440 = v2438 ^ v2439;
        v2441 = v2437 + __ROL4__(v2438, 18);
        v2442 = v2441 ^ __ROL4__(v2440, 30);
        v2443 = v2433 ^ v2441;
        v2444 = v2439 ^ __ROL4__(v2433, 12);
        v2445 = v2444 + v2440;
        v2446 = v2444 ^ (v2442 + v2443);
        v2447 = playIntentKey[(unsigned __int8)v2442 + 486] ^ v2443;
        v2448 = v2442 ^ (v2446 + v2445);
        v2449 = v2445 - 1146796780 * v2446;
        v2450 = v2449 + v2448;
        v2451 = v2447 ^ v2448;
        v2452 = playIntentKey[(unsigned __int8)v2447 + 317] ^ v2446;
        v2453 = v2452 + v2450;
        v2454 = v2452 ^ v2449;
        v2455 = v2451 + v2452;
        v2456 = playIntentKey[(unsigned __int8)v2453 + 60] ^ v2451;
        v2457 = v2454 ^ __ROL4__(v2455, 8);
        v2458 = v2453 - (__ROL4__(v2454, 30) + __ROL4__(v2455, 18));
        v2459 = __ROL4__(v2456, 29) + v2455 + __ROL4__(v2458, 20);
        v2460 = v2456 - v2458;
        v2461 = playIntentKey[(unsigned __int8)v2457 + 348] + v2458;
        v2462 = v2457 - v2459;
        v2463 = playIntentKey[(unsigned __int8)v2460 + 369] ^ v2459;
        if ((v2461 & 0x20000000) != 0)
        {
            v2464 = v2461 ^ v2463;
            v2465 = v2460 - ((__ROL4__(v2462, 4) + 12531) ^ (v2464 + 14992));
            v2466 = v2462 ^ (v2465 + v2464);
            v2467 = v2464 + 47346097 * v2465;
            v2460 = v2466 + v2465 + 148778007;
            v2468 = v2467 + v2466;
            v2463 = v2467 ^ (v2460 + v2468);
            v2462 = v2468;
        }
        v2469 = ((v2460 >> 22) & 7) + 1;
        do
        {
            v2470 = v2461 - playIntentKey[(unsigned __int8)v2462 + 27];
            v2471 = v2460 ^ v2463;
            v2472 = v2471 ^ v2462;
            v2473 = v2472 + v2470;
            v2474 = v2471 - v2473;
            v2475 = v2472 ^ __ROL4__(v2474, 20);
            v2476 = (__ROL4__(v2473, 20) + __ROL4__(v2475, 25)) ^ v2474;
            v2462 = v2475 ^ v2476;
            v2461 = v2473 - (__ROL4__(v2475, 6) + __ROL4__(v2476, 17));
            v2463 = v2476 - __ROL4__(v2461, 29);
            --v2469;
        } while (v2469);
        v1845 = v2460 ^ v2461;
        v1846 = v2462 ^ v2463;
        return (unsigned int)(v1845 + v1846);
    case 0x2F:
        v2477 = a4 + a3;
        v2478 = v5 ^ (__ROL4__(a3, 26) + __ROL4__(a4, 14));
        v2479 = (v2478 - 2854) ^ a4 ^ (__ROL4__(a5, 6) - 17623);
        v2480 = __ROL4__(v2477, 5);
        v2481 = playIntentKey[(unsigned __int8)v2478 + 62] ^ a5;
        v2482 = v2481 + v2479;
        v2483 = v2477 - playIntentKey[(unsigned __int8)v2479 + 7];
        v2484 = v2483 + (v2478 ^ v2480);
        v2485 = v2484 ^ v2481;
        v2486 = v2485 + v2482 + 1045593701;
        v2487 = playIntentKey[(unsigned __int8)v2482 + 16] ^ v2483;
        v2488 = v2485 + v2484 + 780905958;
        v2489 = v2487 ^ v2486;
        v2490 = v2484 + 780905958 - playIntentKey[(unsigned __int8)v2487 + 433];
        v2491 = v2488 + v2486;
        v2492 = 1911905808 * v2491 + v2489;
        v2493 = v2490 ^ __ROL4__(v2489, 27);
        v2494 = v2488 + __ROL4__(v2490, 4);
        v2495 = v2494 + v2491;
        v2496 = (__ROL4__(v2493, 5) - 3821) ^ v2494 ^ (v2492 - 23034);
        v2497 = v2493 - v2492;
        v2498 = playIntentKey[(unsigned __int8)v2495 + 216];
        v2499 = v2498 + v2492;
        v2500 = v2496 ^ (v2498 + v2493);
        v2501 = playIntentKey[(unsigned __int8)v2496 + 134] + v2495;
        if ((v2499 & 0x10000) != 0)
        {
            v2502 = v2499 ^ v2500;
            v2503 = v2497 - v2501;
            v2504 = v2501 + __ROL4__(v2502, 22);
            v2505 = v2502 ^ (v2503 + v2504 - 1880356641);
            v2506 = v2505 + v2504;
            v2507 = v2506 ^ (v2503 - 1880356641) ^ v2505;
            v2508 = v2507 + v2506;
            v2509 = v2508 + v2503 - 1880356641;
            v2510 = v2509 ^ v2507;
            v2511 = v2510 ^ v2508;
            v2512 = v2510 - 1755767190 * v2509;
            v2513 = playIntentKey[(unsigned __int8)v2511 + 393] + v2509;
            v2514 = playIntentKey[(unsigned __int8)v2512 + 372] ^ v2511;
            v2515 = v2513 + v2512;
            v2497 = v2514 ^ v2513;
            v2500 = v2515 ^ (v2497 - 1627526976);
            v2501 = v2514 - __ROL4__(v2515, 18);
        }
        v2516 = v2499 + 187654941 * v2497;
        v2517 = playIntentKey[(unsigned __int8)v2501 + 327] ^ v2497;
        v1845 = v2501 + 452342684 * v2500;
        v1846 = (playIntentKey[(unsigned __int8)v2517 + 291] + v2516) ^ (v2517 + 1375992968 * v1845);
        return (unsigned int)(v1845 + v1846);
    case 0x30:
        v2518 = ((a3 >> 7) & 7) + 1;
        do
        {
            v2519 = a3 ^ a5;
            v2520 = v5 + __ROL4__(a4, 29);
            v2521 = a4 ^ (__ROL4__(v2519, 18) + __ROL4__(v2520, 11));
            v2522 = v2519 - v2520;
            v2523 = v2520 - v2521;
            v2524 = v2522 + v2523 + 1256225135;
            v2525 = v2523 + v2522 - 307085765;
            v2526 = v2521 - v2524 + v2525 - 1647185761;
            v2527 = playIntentKey[(unsigned __int8)(v2526 ^ (v2523 + 111)) + 369] + v2525;
            v2528 = v2523 + v2527 + 1256225135;
            v2529 = v2526 ^ __ROL4__(v2527, 18);
            v5 = v2529 + v2523 + 1256225135;
            a4 = v2529 + __ROL4__(v2528, 28);
            a5 = v2528 ^ (__ROL4__(v5, 17) + __ROL4__(a4, 21));
            --v2518;
        } while (v2518);
        v2530 = a3 + v5 - 1914921873;
        v2531 = a4 + v5;
        v2532 = playIntentKey[(unsigned __int8)a5 + 131] + a4;
        v2533 = a5 + v2531 + v2530;
        v2534 = v2531 + __ROL4__(v2532, 14);
        v2535 = playIntentKey[(unsigned __int8)v2531 + 117] + v2530;
        v2536 = v2535 + v2533;
        v2537 = v2532 ^ (__ROL4__(v2533, 5) + __ROL4__(v2535, 2));
        v2538 = v2535 ^ (__ROL4__(v2534, 22) + __ROL4__(v2537, 26));
        v2539 = v2537 + ((__ROL4__(v2535 + v2533, 25) - 1421) ^ (v2538 - 20173));
        v2540 = v2536 - v2538;
        v2541 = v2539 + (v2534 ^ v2537);
        v2542 = v2539 + __ROL4__(v2540, 23);
        v2543 = playIntentKey[(unsigned __int8)(v2538 ^ v2541) + 249] ^ v2540;
        v2544 = v2541 - __ROL4__(v2542, 24);
        v2545 = v2538 + v2543;
        v2546 = v2544 ^ v2538;
        v2547 = v2544 ^ (v2542 + v2545);
        v2548 = v2542 - v2546;
        v2549 = v2546 ^ v2545;
        v2550 = v2548 + v2547;
        v2551 = v2550 ^ v2546;
        v2552 = v2549 + 1072428291 * v2551;
        v2553 = v2548 + __ROL4__(v2549, 8);
        v2554 = v2551 - 421315468 * v2550;
        v2555 = v2550 - v2553;
        v2556 = v2553 - v2552;
        v2557 = (__ROL4__(v2554, 20) - 30348) ^ (v2555 + 5577);
        v2558 = v2555 ^ v2554;
        v2559 = v2555 + __ROL4__(v2556, 19);
        v2560 = v2557 + v2558 + v2552;
        v2561 = v2558 - playIntentKey[(unsigned __int8)v2559 + 198];
        LOBYTE(v2555) = v2559 - v2556 + v2560 - 89;
        v2562 = v2559 - v2556 + v2560;
        v2563 = v2560 - v2561 - 2047217971;
        v2564 = v2561 - playIntentKey[(unsigned __int8)v2555 + 165];
        v2565 = v2556 + v2562 - 1563310900;
        v2566 = v2556 ^ (-272712492 * v2563);
        v2567 = v2564 ^ (118248134 * v2565);
        v2568 = v2563 - __ROL4__(v2564, 30);
        v2569 = v2566 ^ (v2568 - 1836360401 * v2567) ^ __ROL4__(v2568, 27);
        v2570 = v2567 ^ (v2565 - __ROL4__(v2566, 16));
        return (unsigned int)(v2570 + v2569);
    case 0x31:
        v2571 = a2 + __ROL4__(a3, 19);
        v2572 = (__ROL4__(a4, 21) + 14810) ^ a3 ^ (a5 + 16295);
        v2573 = v2571 + a5 + a4;
        v2574 = v2572 + v2571;
        v2575 = v2572 + v2573;
        v2576 = v2573 ^ (a5 + v2572);
        v2577 = a5 - (v2574 + v2571);
        v2578 = v2576 + v2575 - 244176235;
        v2579 = playIntentKey[(unsigned __int8)v2575 + 64] ^ v2574;
        v2580 = v2576 + v2575;
        v2581 = v2576 - v2577;
        v2582 = v2577 - __ROL4__(v2579, 21);
        v2583 = __ROL4__(v2581, 21);
        v2584 = v2581 + v2580 - 244176235;
        v2585 = playIntentKey[(unsigned __int8)v2582 + 72] + v2581;
        v2586 = v2579 ^ (__ROL4__(v2578, 19) + v2583);
        v2587 = __ROL4__(v2586, 1);
        v2588 = v2586 - (__ROR4__(v2584, 1) + __ROL4__(v2585, 8));
        v2589 = v2584 ^ __ROL4__(v2585, 9);
        v2590 = v2582 + v2587;
        v2591 = v2590 ^ (__ROL4__(v2588, 9) + __ROL4__(v2589, 18));
        v2592 = v2585 - __ROL4__(v2590, 29);
        v2593 = v2589 ^ v2588;
        v2594 = v2589 - v2592 - v2591;
        v2595 = v2592 - 1716592568 * v2591;
        v2596 = v2593 ^ v2591;
        v2597 = playIntentKey[(unsigned __int8)v2594 + 379] + v2593;
        v2598 = v2594 - v2595;
        v2599 = v2596 + v2595;
        v2600 = __ROL4__(v2598 - 855274448, 14);
        v2601 = v2596 ^ (v2598 + v2597 - 855274448);
        v2602 = v2597 + __ROL4__(v2599, 26);
        v2603 = v2600 + v2602 + 18207;
        v2604 = v2600 + v2602;
        v2605 = (__ROL4__(v2601, 26) - 10763) ^ v2603;
        v2606 = v2601 - v2604;
        v2607 = v2604 ^ __ROL4__(v2598 - 855274448 - v2599, 23);
        v2608 = v2605 + v2598 - 855274448;
        v2609 = (v2605 + v2599) ^ (__ROL4__(v2606, 6) + 7432) ^ (v2607 - 22101);
        v2610 = v2606 ^ (__ROL4__(v2607, 18) + __ROL4__(v2608, 19));
        v2611 = v2608 + ((__ROL4__(v2609, 3) + 13384) ^ (v2610 - 14345));
        v2612 = v2607 - ((__ROL4__(v2608, 24) + 22368) ^ (v2609 - 4600));
        v2613 = v2609 - v2610 + 812043942;
        v2614 = v2610 - v2612;
        v2615 = ((unsigned int)~v2611 >> 27) | 0xFFFFFFF8;
        do
        {
            v2616 = v2611 ^ v2614;
            v2617 = __ROL4__(v2616, 9);
            v2618 = v2616 - (v2612 - v2613);
            v2619 = v2617 + __ROL4__(v2612 - v2613, 28);
            v2620 = v2619 + v2613;
            v2621 = v2612 + v2619;
            v2622 = v2618 ^ v2621;
            v2623 = (v2618 ^ v2621) + v2621;
            v2624 = v2620 ^ (__ROL4__(v2618, 21) + __ROL4__(v2621, 15));
            v2625 = v2624 + v2623;
            v2626 = v2624 - v2622;
            v2627 = playIntentKey[(unsigned __int8)v2625 + 350] ^ v2622;
            v2628 = v2625 ^ __ROL4__(v2626, 28);
            v2629 = v2626 - v2628 - v2627;
            v2612 = v2629 + v2628;
            v2630 = v2627 - __ROL4__(v2628, 23);
            v2613 = v2630 ^ v2629;
            v2614 = v2630 - (v2630 ^ v2629) - (v2629 + v2628);
            ++v2615;
        } while (v2615);
        v1938 = v2611 ^ v2612;
        v1939 = v2613 ^ v2614;
        return (unsigned int)(v1938 + v1939);
    case 0x32:
        v2631 = __ROL4__(a4, 11);
        v2632 = a5 + a2 - a3;
        v2633 = playIntentKey[(unsigned __int8)a5 + 249] + a4;
        v2634 = v2631 + a3;
        v2635 = a2 + v2631;
        v2636 = v2633 + v2635;
        v2637 = v2634 + v2635;
        v2638 = v2634 - v2633;
        v2639 = v2633 - v2632;
        v2640 = v2632 ^ (514040151 * v2636);
        v2641 = playIntentKey[(unsigned __int8)v2639 + 417] + v2638;
        v2642 = v2639 - v2640;
        v2643 = v2637 + v2640;
        v2644 = v2637 + ((__ROL4__(v2641, 9) - 32568) ^ (v2642 - 1715));
        v2645 = v2641 - v2642;
        v2646 = playIntentKey[(unsigned __int8)v2643 + 301];
        v2647 = v2643 - v2644;
        v2648 = v2644 - ((__ROL4__(v2645, 21) - 13349) ^ (v2642 + v2646 + 23512));
        v2649 = v2645 - (v2646 + v2642);
        v2650 = (v2646 + v2642) ^ __ROL4__(v2647, 10);
        v2651 = playIntentKey[(unsigned __int8)v2648 + 117] ^ v2647;
        v2652 = v2650 + v2649;
        v2653 = v2652 ^ v2648;
        v2654 = v2650 ^ (v2653 + v2651);
        v2655 = v2651 + 858767232 * v2653;
        v2656 = v2653 - v2652;
        v2657 = playIntentKey[(unsigned __int8)v2654 + 179] + v2652;
        v2658 = v2654 - v2655;
        v2659 = v2655 - v2656;
        v2660 = v2657 + v2656;
        LOBYTE(v2656) = v2657 + v2656 - 7;
        v2661 = v2657 - v2658;
        v2662 = v2659 ^ v2658;
        v2663 = v2659 - playIntentKey[(unsigned __int8)v2656 + 188];
        v2664 = v2660 + __ROL4__(v2661, 29) - 473306887;
        v2665 = v2661 ^ (__ROL4__(v2662, 18) + __ROL4__(v2663, 10));
        v2666 = v2662 - v2663;
        v2667 = v2665 + v2664;
        v2668 = v2663 + ((__ROL4__(v2664, 7) - 27546) ^ (v2665 + 9279));
        v2669 = v2665 ^ __ROL4__(v2666, 6);
        v2670 = v2668 ^ (1958152379 * (v2665 + v2664));
        v2671 = v2666 - (__ROL4__(v2668, 27) + __ROL4__(v2667, 7));
        v2672 = v2669 ^ v2667;
        v2673 = v2670 - __ROL4__(v2672, 16);
        v2674 = v2669 - ((__ROR4__(v2671, 1) + 12526) ^ (v2670 - 16663));
        v2675 = v2671 - (__ROL4__(v2670, 10) + __ROL4__(v2672, 25));
        v2676 = v2672 - v2674;
        v2677 = v2676 + v2673;
        v2678 = v2674 + ((__ROL4__(v2675, 11) + 30722) ^ (v2673 + 8564));
        v2679 = v2675 ^ (__ROL4__(v2673, 22) + __ROL4__(v2676, 12));
        v2680 = v2676 - (__ROR4__(v2678, 1) + __ROL4__(v2679, 3));
        v2681 = v2678 - v2677 - v2679;
        v2682 = playIntentKey[(unsigned __int8)v2680 + 193];
        v2683 = v2681 + v2680;
        v2684 = v2679 + v2682;
        v2685 = playIntentKey[(unsigned __int8)v2683 + 397] ^ (v2682 + v2677);
        v2686 = v2681 ^ (v2682 + v2679 + 1974142825);
        v2687 = v2686 + v2683;
        v2688 = v2686 + v2683 + 1148474196;
        v2689 = v2686 + v2684 - 1563310900;
        v2690 = v2685 + v2684 - 1563310900;
        v1677 = v2685 ^ (__ROL4__(v2689, 3) + v2687 + 1148474196);
        v2691 = v2689 + v2688;
        v1679 = v1677 + v2690;
        v2692 = v2691 ^ v2689 ^ (v1677 + 19301);
        v1680 = __ROL4__(v2691, 9);
        v1678 = (__ROR4__(v2690, 1) - 17037) ^ v2692;
    LABEL_255:
        v2376 = v1677 ^ v1680;
    LABEL_256:
        v1803 = v1679 ^ v2376;
        return (unsigned int)(v1678 + v1803);
    case 0x33:
        v2693 = __ROL4__(a4, 14) + a2 + __ROL4__(a3, 12);
        v2694 = a5 + a4 + a3;
        v2695 = v2693 + a5 + a4;
        v2696 = a5 - v2693;
        v2697 = v2694 + v2693;
        v2698 = v2694 - 749041190 * v2695;
        v2699 = v2696 ^ v2695;
        v2700 = v2697 + 20156221 * v2698;
        v2701 = v2696 - __ROL4__(v2697, 24);
        v2702 = v2699 ^ v2698;
        v2703 = v2699 - v2701 - v2700;
        v2704 = v2700 ^ v2701;
        v2705 = v2700 - __ROL4__(v2702, 8);
        v2706 = playIntentKey[(unsigned __int8)v2703 + 394] + v2702;
        v2707 = v2704 + v2703;
        v2708 = v2704 ^ (__ROL4__(v2705, 23) + __ROL4__(v2706, 8));
        v2709 = v2707 ^ v2708;
        v2710 = v2705 - v2706;
        v2711 = v2706 - __ROR4__(v2707, 1);
        v2712 = (v2707 ^ v2708) + v2711;
        v2713 = v2710 ^ (__ROL4__(v2711, 7) + __ROL4__(v2707 ^ v2708, 24));
        v2714 = v2708 - __ROL4__(v2710, 29);
        v2715 = v2714 ^ (v2713 + v2712);
        v2716 = playIntentKey[(unsigned __int8)v2714 + 435] ^ v2709;
        v2717 = v2713 ^ (__ROL4__(v2712, 25) + __ROL4__(v2716, 12));
        v2718 = v2712 + ((__ROL4__(v2716, 17) - 17186) ^ (v2715 + 21885));
        v2719 = v2716 - (__ROL4__(v2715, 17) + __ROL4__(v2717, 5));
        v2720 = v2717 - ((__ROL4__(v2718, 13) - 11235) ^ (v2719 + 29641));
        v2721 = v2719 ^ v2718;
        v2722 = v2717 ^ v2715;
        v2723 = v2722 ^ (__ROL4__(v2720, 14) + __ROL4__(v2721, 9));
        v2724 = v2719 + ((__ROL4__(v2722, 12) - 3233) ^ (v2720 - 25592));
        v2725 = v2721 ^ (v2724 + v2723);
        v2726 = v2724 + 1279617523 * v2723;
        v2727 = v2721 + v2720 - v2725;
        v2728 = v2723 - v2725;
        v2729 = v2726 + v2725 + (v2726 ^ v2728);
        v2730 = v2729 ^ v2727;
        v2731 = v2728 - __ROL4__(v2730, 13);
        v2732 = v2730 - v2729;
        v2733 = v2731 + __ROL4__(v2732, 24);
        v2734 = v2726 ^ (__ROL4__(v2731, 10) + __ROL4__(v2732, 23));
        v2735 = v2729 + __ROL4__(v2726, 21);
        v2736 = v2735 + ((__ROL4__(v2734, 8) + 26399) ^ (v2733 - 10145));
        v2737 = v2732 + __ROL4__(v2735, 29);
        v2738 = v2734 - v2733;
        v2739 = v2738 + 375003361;
        v2740 = v2737 + v2733;
        v2741 = v2737 ^ (v2738 + v2736 + 375003361);
        v2742 = v2736 ^ (v2738 - 1828335651);
        v2743 = v2739 - v2740;
        v2744 = v2740 - v2741;
        v2745 = v2741 ^ (v2742 + v2743);
        v2746 = v2742 - v2743;
        v2747 = playIntentKey[(unsigned __int8)v2744 + 497] + v2743;
        v2748 = v2745 + v2746 - 528317384;
        v2749 = v2744 + __ROL4__(v2745, 10);
        v2750 = v2746 - 528317384;
        v2751 = v2747 + __ROL4__(v2749, 5) + __ROL4__(v2748, 28);
        v872 = __ROL4__(v2747, 19);
        v873 = v2748 ^ v2750;
        v108 = v2751 ^ (v2749 - v2748);
    LABEL_259:
        v427 = v872 ^ v873;
        return (unsigned int)(v108 + v427);
    case 0x34:
        v2752 = a3 ^ a2;
        v2753 = a3 ^ (-498409922 * a4);
        v2754 = a5 ^ a4;
        v2755 = a5 - ((__ROL4__(v2752, 19) + 18196) ^ (v2753 + 4040));
        v2756 = v2752 - v2753;
        v2757 = v2755 + v2754 + v2753;
        v2758 = __ROL4__(v2755, 7) + v2754 + __ROL4__(v2756, 22);
        v2759 = v2755 - (__ROL4__(v2756, 17) + __ROL4__(v2757, 29));
        if ((v2757 & 0x8000u) != 0)
        {
            v2760 = v2757 ^ v2759;
            v2761 = v2756 ^ (519845002 * v2758);
            v2762 = v2760 ^ v2758;
            v2763 = v2761 ^ v2760;
            v2764 = v2762 ^ v2761;
            v2765 = v2762 - v2763;
            v2766 = v2763 ^ (v2764 + 257059055);
            v2767 = v2765 + v2764;
            v2758 = __ROL4__(v2766, 12) ^ v2765;
            v2756 = v2767;
            v2759 = playIntentKey[(unsigned __int8)v2767 + 245] ^ v2766;
        }
        if ((v2756 & 0x1000000) != 0)
        {
            v2768 = v2756 ^ v2759;
            v2769 = v2758 ^ v2757;
            v2770 = v2768 - playIntentKey[(unsigned __int8)v2769 + 242];
            v2771 = v2758 - __ROL4__(v2768, 7);
            v2772 = v2769 ^ (__ROL4__(v2771, 27) - 1358) ^ (v2770 + 27712);
            v2773 = v2770 ^ v2771;
            v2757 = v2772 - 1964022766 * v2773;
            v2759 = v2757 + v2773;
            v2758 = v2772 + v2773 - v2770;
        }
        if ((v2757 & 0x20000) != 0)
        {
            v2774 = v2757 ^ v2759;
            v2775 = v2758 ^ v2756;
            v2776 = playIntentKey[(unsigned __int8)v2775 + 44];
            v2777 = playIntentKey[(unsigned __int8)(v2758 - v2774) + 500] + v2775;
            v2778 = playIntentKey[(unsigned __int8)v2777 + 248] + v2774 - v2776;
            v2779 = v2777 + v2776 - v2758;
            v2780 = v2778 + v2777;
            v2781 = __ROL4__(v2780, 24) + v2778 + __ROL4__(v2779, 11);
            v2782 = v2779 ^ (__ROL4__(v2780, 19) + __ROL4__(v2781, 15));
            v2783 = playIntentKey[(unsigned __int8)v2782 + 201] + v2781;
            v2784 = v2782 + ((__ROL4__(v2780 - v2781, 8) - 2784) ^ (v2783 - 2928));
            v2758 = v2783 ^ (v2780 - v2781);
            v2759 = v2783 - v2784;
            v2756 = v2784;
        }
        if ((v2756 & 0x10000) != 0)
        {
            v2785 = v2756 ^ v2759;
            v2786 = playIntentKey[(unsigned __int8)v2758 + 507] + v2757;
            v2787 = v2758 - v2785 - 2127456848;
            v2788 = v2785 ^ (v2786 - 91839429);
            v2789 = v2786 + __ROL4__(v2787, 15) + __ROL4__(v2788, 20);
            v2790 = v2787 - v2788;
            v2791 = v2788 - v2789;
            v2792 = v2789 ^ __ROL4__(v2790, 23);
            v2793 = v2790 - (__ROL4__(v2791, 14) + __ROL4__(v2792, 17));
            v2794 = v2791 - (__ROL4__(v2792, 2) + __ROL4__(v2793, 25));
            v2795 = v2792 + v2794;
            v2796 = v2792 - v2793;
            v2797 = (__ROL4__(v2794, 3) - 31710) ^ (v2796 + 22822);
            v2798 = v2797 + v2793;
            v2757 = v2796 - playIntentKey[(unsigned __int8)v2798 + 36];
            v2799 = v2797 + v2795;
            v2758 = v2799 + v2798 - 81803612;
            v2759 = v2799 - v2757;
        }
        return (unsigned int)((v2759 ^ v2758) + (v2756 ^ v2757));
    case 0x35:
        if ((a3 & 2) != 0)
        {
            v2800 = playIntentKey[(unsigned __int8)a4 + 52] + a2;
            v2801 = a3 ^ a5;
            v2802 = a4 ^ __ROL4__(v2801, 10);
            v2803 = v2801 - (__ROR4__(v2800, 1) + __ROL4__(v2802, 22));
            a4 = v2802 ^ v2803;
            v5 = v2800 - ((__ROL4__(v2802, 30) + 26022) ^ (v2803 - 436));
            a5 = v2803 - ((__ROL4__(v5, 29) - 32536) ^ ((v2802 ^ v2803) + 9867));
        }
        if ((v5 & 0x8000u) != 0)
        {
            v2804 = v5 ^ a5;
            v2805 = a3 ^ __ROL4__(a4, 22);
            a4 -= (__ROL4__(v2804, 25) - 2904) ^ (v2805 + 25313);
            a5 = v2804 - v2805;
            a3 = v2805;
        }
        v2806 = a4 + a3;
        v2807 = v5 - v2806;
        v2808 = a5 ^ a4;
        v2809 = a5 - v2807;
        v2810 = v2809 + -27862867 - v2806;
        v2811 = v2807 + -27862867 - v2806;
        v2812 = v2808 + v2809;
        v2813 = v2808 - v2810;
        v2814 = v2811 + v2810;
        v2815 = v2811 - __ROL4__(v2812, 26);
        v2816 = v2813 + ((__ROL4__(v2814, 10) - 9258) ^ (v2815 - 13083));
        v2817 = v2814 - v2815;
        v2818 = playIntentKey[(unsigned __int8)(v2812 ^ v2813) + 454] + v2815;
        v2819 = (v2812 ^ v2813) - v2816;
        v2820 = v2817 + v2816;
        v2821 = v2817 - __ROL4__(v2818, 18);
        v2822 = v2818 - v2819;
        v2823 = v2820 + v2821;
        v2824 = v2819 - (v2820 + v2821);
        v2825 = v2821 ^ v2820;
        v2826 = v2821 + v2823 - v2818;
        v2827 = v2824 ^ (1521534808 * v2825);
        v2828 = playIntentKey[(unsigned __int8)v2824 + 216] + v2822;
        v2829 = v2825 - v2826;
        v2830 = v2828 + v2827 + v2826;
        v2831 = v2828 - v2827;
        v2832 = v2829 ^ v2827;
        v2833 = v2829 - playIntentKey[(unsigned __int8)v2830 + 225];
        v2834 = v2831 + v2832 + v2830;
        v2835 = v2831 - v2832;
        v2836 = __ROL4__(v2833, 21) + v2832 + __ROL4__(v2834, 13);
        v2837 = v2833 - __ROL4__(v2834, 30);
        v2838 = v2834 - v2835;
        v588 = v2835 + __ROL4__(v2836, 12);
        v2839 = v2836 - v2837 - v2838;
        v2840 = v2838 ^ v2837;
        v2841 = v2838 - v588;
        v725 = playIntentKey[(unsigned __int8)v2841 + 427] ^ (v2840 + v2839 + (v588 ^ (v2840 + v2839)));
        v726 = v2840 ^ v2841;
    LABEL_275:
        v589 = v725 ^ v726;
        return (unsigned int)(v588 + v589);
    case 0x36:
        v2842 = a3 ^ a2;
        v2843 = a3 - __ROL4__(a4, 23);
        v2844 = v2842 + a5;
        v2845 = a4 - ((__ROL4__(a5, 3) - 14907) ^ (v2842 + 23188));
        v2846 = v2845 + v2843;
        v2847 = v2842 ^ __ROL4__(v2843, 20);
        v2848 = v2844 + v2845;
        v2849 = playIntentKey[(unsigned __int8)v2847 + 414] ^ v2844;
        v2850 = v2846 + v2847;
        v2851 = v2849 + 795287761 * v2850;
        v2852 = v2846 ^ __ROL4__(v2848, 14);
        v2853 = __ROL4__(v2849, 3) + v2848 + __ROL4__(v2850, 12);
        if ((v2852 & 0x400000) != 0)
        {
            v2854 = v2852 ^ v2851;
            v2855 = v2853 + v2850;
            v2856 = (v2855 + v2854) ^ v2853;
            v2857 = v2856 - 1300718467;
            v2853 = v2856 - playIntentKey[(unsigned __int8)(v2854 + v2855 - 117) + 166];
            v2858 = v2855 ^ v2857;
            v2851 = v2853 + v2858 + v2855 + v2854 - 1691744629;
            v2850 = v2858;
        }
        v2859 = v2852 - playIntentKey[(unsigned __int8)v2850 + 130];
        v2860 = v2853 + v2851 + v2850;
        v2861 = v2851 ^ v2853;
        v2862 = v2859 + v2851;
        v2863 = v2860 ^ v2859;
        v2864 = v2860 - ((__ROL4__(v2861, 14) + 14032) ^ (v2851 + v2859 + 17583));
        v2865 = v2861 - (__ROL4__(v2859 + v2851, 26) + __ROL4__(v2863, 26));
        v2866 = 192887938 * v2864;
        v2867 = v2864 - v2865;
        v2868 = v2865 - __ROL4__(v2863 ^ v2862, 5);
        v2869 = v2866 ^ v2862;
        v2870 = v2866 ^ v2867 ^ v2863;
        v2871 = v2868 ^ v2867;
        v2872 = v2868 - v2869;
        v2873 = v2869 - __ROL4__(v2870, 27);
        v2874 = v2871 + v2870;
        v2875 = v2871 + __ROL4__(v2872, 13);
        v2876 = v2872 - v2873;
        v2877 = playIntentKey[(unsigned __int8)v2875 + 437] + v2874;
        v2878 = v2875 + ((v2876 - 585825325) ^ (v2873 + v2874 - 17105));
        v2879 = v2876 - (v2873 + v2874) - 585815894;
        v2880 = v2873 + v2874 + __ROL4__(v2877, 12);
        if ((v2878 & 0x4000) != 0)
        {
            v2881 = v2878 ^ v2880;
            v2882 = v2877 + 1292338621 * v2879;
            v2883 = v2881 ^ v2879;
            v2884 = v2881 - playIntentKey[(unsigned __int8)v2882 + 148];
            v2885 = v2882 - __ROL4__(v2883, 8);
            v2886 = playIntentKey[(unsigned __int8)v2884 + 10] + v2883;
            v2887 = v2884 - v2885 - v2886;
            v2888 = v2886 ^ v2885;
            v2879 = v2886 - __ROR4__(v2887, 1);
            v2880 = v2887 - v2888 - v2879;
            v2877 = v2888;
        }
        v263 = v2880 ^ v2879;
        v264 = v2878 ^ v2877;
        return (unsigned int)(v263 + v264);
    case 0x37:
        if ((a3 & 0x80000) != 0)
        {
            v2889 = a3 ^ a5;
            v2890 = a2 - (__ROL4__(a4, 24) + __ROL4__(v2889, 27));
            v2891 = v2889 ^ __ROL4__(v2890, 25);
            v2892 = (v2889 + a4) ^ v2890;
            v2893 = v2889 + a4 + __ROL4__(v2891, 21);
            v2894 = v2891 - v2892;
            v2895 = v2892 - 705664690 * v2893;
            v2896 = v2894 ^ v2893;
            v2897 = v2894 - v2896 - v2895;
            v2898 = playIntentKey[(unsigned __int8)v2896 + 23] + v2895;
            v2899 = v2896 - v2897;
            v2900 = v2898 ^ v2897;
            v2901 = v2899 ^ v2898;
            v2902 = v2899 - playIntentKey[(unsigned __int8)v2900 + 114];
            v2903 = v2900 + ((__ROL4__(v2901, 22) + 32399) ^ (v2902 + 6090));
            v2904 = v2901 - v2902;
            a4 = v2903 + v2902;
            v5 = v2904;
            a5 = v2903 - __ROL4__(v2904, 11);
        }
        v2905 = ((v5 >> 12) & 7) + 1;
        do
        {
            v2906 = v5 ^ a5;
            a3 ^= __ROL4__(a4, 15) + __ROL4__(v2906, 28);
            a4 -= v2906;
            a5 = a3 + v2906;
            --v2905;
        } while (v2905);
        v2907 = v5 - a3;
        v2908 = a3 - playIntentKey[(unsigned __int8)a4 + 429];
        v2909 = playIntentKey[(unsigned __int8)a5 + 407] + a4;
        v2910 = a5 - v2907;
        v2911 = playIntentKey[(unsigned __int8)v2908 + 393] ^ v2907;
        v2912 = v2910 ^ v2909;
        v2913 = v2910 - ((__ROL4__(v2911, 12) + 11958) ^ (v2908 + v2909 + 1469468996));
        v2914 = v2911 - __ROL4__(v2908 + v2909 + 1469477854, 23);
        v2915 = __ROL4__(v2913, 14) + __ROL4__(v2912, 12) + v2909 + v2908 + 1469477854;
        v2916 = v2912 - v2913;
        v2917 = v2913 ^ __ROL4__(v2914, 1);
        v2918 = v2914 - (__ROL4__(v2915, 8) + __ROL4__(v2916, 14));
        v2919 = v2916 ^ v2915;
        v2920 = v2916 - ((__ROL4__(v2917, 20) - 29432) ^ (v2918 + 24125));
        v2921 = v2917 - v2919 - v2918;
        v2922 = v2919 ^ v2918;
        v2923 = v2920 ^ v2919;
        v2924 = v2920 - (__ROL4__(v2921, 27) + __ROL4__(v2922, 28));
        v2925 = v2921 - ((__ROL4__(v2922, 19) - 26898) ^ (v2923 - 24329));
        v2926 = v2922 - v2923;
        v2927 = v2924 + v2923;
        v2928 = (__ROL4__(v2925, 15) - 20947) ^ v2924 ^ (v2926 - 16573);
        v2929 = __ROL4__(v2926, 18);
        v2930 = v2927 ^ v2926;
        v2931 = v2927 - 427268875 * v2928;
        v2932 = v2925 - (v2929 + __ROL4__(v2927, 23));
        v2933 = v2932 + v2928;
        v2934 = v2930 ^ v2932;
        v2935 = v2930 - v2933 - v2931;
        v2936 = v2933 ^ v2931;
        v2937 = playIntentKey[(unsigned __int8)v2934 + 363] + v2933;
        v2938 = v2934 - v2935 - 1528904446;
        return (((v2938 ^ v2937) - 1940630379 * (v2938 ^ (v2935 - (v2936 + v2937) - 34340918))) ^ ((v2938 ^ (v2935 - (v2936 + v2937) - 34340918)) - (v2935 - (v2936 + v2937) - (v2936 + v2937 - 299094197)))) + ((v2935 - (v2936 + v2937) - (v2936 + v2937 - 299094197)) ^ (unsigned int)(__ROL4__(v2938 ^ v2937, 22) + v2936 + v2937 - 299094197));
    case 0x38:
        v2939 = a3 ^ (a5 + a4);
        v2940 = a4 - a5 - 1198219525;
        v2941 = v2939 ^ (a3 + a2);
        v2942 = v2939 - __ROL4__(v2940, 2);
        v2943 = v2941 + a3 + a2 + a5;
        v2944 = v2940 - v2943;
        v2945 = v2942 + v2943;
        v2946 = v2944 + v2942;
        v2947 = (v2944 + v2942) ^ v2941;
        v2948 = (__ROL4__(v2947, 27) - 8003) ^ (v2944 + v2942 - 11780);
        v2949 = v2945 ^ v2948;
        v2950 = v2947 - v2946;
        v2951 = v2946 - ((__ROL4__(v2944 ^ v2945, 13) + 6933) ^ ((v2945 ^ v2948) + 5722));
        v2952 = v2944 ^ v2948;
        v2953 = v2949 - v2950;
        v2954 = 697073363 * v2951 + v2950;
        v2955 = v2952 + v2951;
        v2956 = v2952 + v2951 - 78072704;
        v2957 = playIntentKey[(unsigned __int8)v2953 + 262] ^ v2952;
        v2958 = v2953 ^ (v2954 - 2032344229);
        v2959 = v2954 - __ROL4__(v2956, 2);
        v2960 = v2957 + v2958 + v2955 - 78072704;
        v2961 = v2957 - v2958;
        v2962 = v2960 + v2959 + v2958;
        v2963 = (v2960 >> 30) + 1;
        do
        {
            v2959 -= playIntentKey[(unsigned __int8)v2961 + 209];
            v2964 = v2960 ^ v2962;
            v2961 ^= v2964;
            v2962 = v2959 + v2964;
            --v2963;
        } while (v2963);
        v2965 = (~v2959 >> 7) | 0xFFFFFFF8;
        do
        {
            v2966 = v2959 ^ v2962;
            v2967 = v2960 - v2961 - v2966;
            v2968 = v2966 ^ v2961;
            v2969 = v2966 - playIntentKey[(unsigned __int8)v2967 + 229];
            v2970 = v2968 + v2967;
            v2971 = v2968 ^ __ROL4__(v2969, 3);
            v2972 = v2970 ^ v2971;
            v2973 = v2969 - (__ROL4__(v2970, 24) + __ROL4__(v2971, 24));
            v2974 = __ROL4__(v2973, 15);
            v2975 = v2973 - playIntentKey[(unsigned __int8)v2972 + 314];
            v2976 = v2971 - v2974;
            v2977 = v2972 ^ (__ROL4__(v2976, 22) + __ROL4__(v2975, 3));
            v2978 = v2975 + v2976;
            v2960 = v2977 ^ (232062560 * v2978);
            v2961 = v2975 - 158963602 * v2977 + v2960 + v2978;
            v2962 = v2960 ^ (v2975 - 158963602 * v2977);
            ++v2965;
        } while (v2965);
        v2979 = (v2961 + 11504) ^ v2959 ^ (__ROL4__(v2960, 18) + 28269);
        v2980 = v2960 ^ __ROL4__(v2961, 10);
        v2981 = v2962 ^ v2979;
        v2982 = v2961 - (__ROR4__(v2962, 1) + __ROL4__(v2979, 16));
        v2983 = v2979 - ((__ROL4__(v2980, 30) - 19072) ^ (v2982 - 28805));
        v2984 = v2982 ^ v2980;
        v2985 = v2984 - 28247;
        v541 = v2983 ^ v2984;
        v2317 = __ROL4__(v2983, 7) - 20054;
        v2319 = v2982 ^ v2981 ^ __ROL4__(v2981, 19) ^ v2985;
    LABEL_292:
        v542 = v2317 ^ v2319;
        return (unsigned int)(v541 + v542);
    case 0x39:
        v2986 = ((a3 >> 17) & 7) + 1;
        do
        {
            v2987 = a4 ^ v5;
            v2988 = v2987 + a4;
            v2989 = a4 - (a3 ^ a5);
            v2990 = playIntentKey[(unsigned __int8)v2989 + 473] + v2987;
            v2991 = __ROL4__(v2988 + v2989 - 130361810, 8);
            v2992 = v2988 + v2989;
            v2993 = v2990 ^ v2991;
            v2994 = playIntentKey[(unsigned __int8)v2990 + 88] ^ v2988;
            v2995 = v2994 - 344924135 * v2993;
            v2996 = v2992 + ((__ROL4__(v2994, 5) - 21323) ^ (v2993 - 6864)) - 130361810;
            v2997 = v2996 ^ __ROL4__(v2995, 3);
            v2998 = v2995 - ((__ROL4__(v2993 + 735950297 * v2996, 5) + 7826) ^ (v2997 - 5952));
            v5 = v2993 + 735950297 * v2996 - ((__ROL4__(v2997, 22) + 21737) ^ (v2998 + 11549));
            a5 = v2998 ^ __ROL4__(v5, 28);
            a4 = v2997 - __ROL4__(v2998, 14);
            --v2986;
        } while (v2986);
        v2999 = v5 + a3;
        v3000 = a5 + a4;
        v3001 = v3000 ^ v5;
        v3002 = -1640498923 * v3001 + v2999;
        v3003 = v3000 + v3001;
        v3004 = a5 - __ROL4__(v2999, 12);
        v3005 = (v3002 + 18886) ^ v3000 ^ (v3004 + 16311);
        v3006 = v3002 + v3004;
        v3007 = v3002 ^ __ROR4__(v3003, 1);
        v3008 = 1363244596 * v3005;
        v3009 = v3006 ^ v3005;
        v3010 = v3008 + v3003 - 2684;
        v3011 = v3003 + v3008;
        v3012 = v3007 + v3011 + 1768739137;
        v3013 = playIntentKey[(unsigned __int8)v3009 + 362] ^ v3011;
        v3014 = v3010 ^ v3006 ^ (__ROL4__(v3007, 9) + 8564);
        v3015 = v3009 + v3014 + 2033426879;
        v3016 = v3012 ^ v3014;
        v3017 = ((v3013 >> 19) & 7) + 1;
        do
        {
            v3018 = v3013 ^ v3016;
            v3019 = playIntentKey[(unsigned __int8)v3015 + 238] ^ v3012;
            v3020 = v3015 + 1832272017 * v3018;
            v3021 = v3019 + v3018;
            v3022 = v3020 + v3019;
            v3023 = playIntentKey[(unsigned __int8)v3021 + 55] ^ v3020;
            v3024 = v3023 + v3022 + v3021;
            v3025 = v3024 + v3023;
            v3026 = v3022 - (__ROL4__(v3023, 16) + __ROL4__(v3024, 27));
            v3027 = v3024 ^ __ROL4__(v3026, 16);
            v3028 = __ROL4__(v3025, 2);
            v3029 = playIntentKey[(unsigned __int8)v3027 + 100] + v3025;
            v3030 = v3027 - (v3026 - v3028);
            v3012 = v3026 - v3028 - 1032621754 * v3029;
            v3015 = v3030 ^ v3029;
            v3016 = v3030 - 767934011 * v3012;
            --v3017;
        } while (v3017);
        v3031 = ((unsigned int)~v3012 >> 18) | 0xFFFFFFF8;
        do
        {
            v3013 += __ROL4__(v3015, 14) + __ROL4__(v3012 ^ v3016, 3);
            v3015 -= v3012 ^ v3016;
            v3016 = (v3012 ^ v3016) + __ROL4__(v3013, 11);
            ++v3031;
        } while (v3031);
        return (v3012 ^ v3013) + (v3015 ^ v3016);
    case 0x3A:
        v3032 = a4 + a3;
        v3033 = playIntentKey[(unsigned __int8)a5 + 350] + a4;
        v3034 = v3032 + (v3032 ^ a2);
        v3035 = v3034 + a5;
        v3036 = v3032 - v3033;
        v3037 = v3035 + v3033;
        v3038 = v3036 + v3034 + v3035;
        v3039 = v3036 ^ v3034;
        v3040 = v3036 ^ __ROL4__(v3037, 9);
        v3041 = v3037 - (__ROL4__(v3038, 30) + __ROL4__(v3039, 21));
        v3042 = v3039 ^ v3038;
        v3043 = v3039 ^ (__ROL4__(v3040, 15) - 5494) ^ (v3041 - 1037);
        v3044 = v3040 ^ (__ROL4__(v3041, 26) + __ROL4__(v3042, 20));
        v3045 = (__ROL4__(v3043, 6) - 27153) ^ v3042 ^ (v3044 + 25428);
        v3046 = v3041 + v3042;
        v3047 = v3043 - ((__ROL4__(v3044, 26) + 12701) ^ (v3042 + v3041 + 24191));
        v3048 = v3045 + v3041 + v3042 + v3044;
        v3049 = v3045 + 972853130;
        v3050 = v3045 - playIntentKey[(unsigned __int8)v3047 + 436];
        v3051 = v3046 ^ v3049;
        v3052 = v3047 - v3048 - v3051;
        v3053 = v3051 ^ v3048;
        v3054 = playIntentKey[(unsigned __int8)v3050 + 400] ^ v3051;
        v3055 = v3052 + v3050 - 590794779;
        v3056 = ((v3053 >> 28) & 7) + 1;
        do
        {
            v3057 = v3053 ^ v3055;
            v3058 = v3052 - v3054;
            v3059 = -1944063600 * v3058 + v3057;
            v3060 = v3054 + __ROL4__(v3057, 27);
            v3061 = v3058 - ((__ROL4__(v3060, 14) + 18186) ^ (v3059 + 6654));
            v3062 = v3059 ^ v3060;
            v3063 = v3059 + __ROL4__(v3061, 22);
            v3064 = v3061;
            v3052 = v3062 + v3061;
            v3054 = (__ROL4__(v3063, 9) + 31115) ^ v3062 ^ (v3062 + v3064 + 24713);
            v3055 = v3063 ^ (__ROL4__(v3052, 21) + __ROL4__(v3054, 22));
            --v3056;
        } while (v3056);
        v3065 = v3053 - v3052;
        v3066 = v3052 + __ROL4__(v3054, 18);
        v3067 = v3054 - 743087783 * v3055;
        v3068 = -1134048408 * v3066;
        v3069 = -1134048408 * v3066 + v3065;
        v3070 = v3067 ^ v3066;
        v3071 = v3067 - (v3055 + v3068);
        v3072 = v3069 + v3055 - v3065;
        v3073 = v3072 - 1595369184;
        v3074 = v3069 - playIntentKey[(unsigned __int8)v3070 + 146];
        v3075 = v3071 + v3072 - 1595369184;
        v3076 = v3075 ^ v3070;
        v3077 = playIntentKey[(unsigned __int8)v3074 + 294] + v3073;
        v3078 = v3076 + v3074;
        v3079 = v3075 ^ __ROL4__(v3077, 8);
        v3080 = v3076 - __ROL4__(v3075, 26);
        v3081 = v3078 + v3077;
        v3082 = v3078 ^ (-532932973 * v3080);
        v3083 = v3079 + v3080;
        v3084 = v3081 + v3079;
        v3085 = v3081 ^ (__ROL4__(v3082, 6) + __ROL4__(v3083, 4));
        v3086 = v3082 - v3083;
        v2570 = v3086 ^ (v3083 - ((__ROL4__(v3084, 5) + 10037) ^ (v3085 + 19980)));
        v2569 = v3085 ^ v3084 ^ (v3085 - __ROL4__(v3086, 14));
        return (unsigned int)(v2570 + v2569);
    case 0x3B:
        if ((a3 & 0x8000u) != 0)
        {
            v3087 = a3 ^ a5;
            v3088 = playIntentKey[(unsigned __int8)a4 + 319] + a2;
            v3089 = a4 ^ (862790079 * v3087);
            v3090 = v3088 + v3087;
            v3091 = v3089 ^ v3088;
            v3092 = v3089 - v3091 - v3090;
            v3093 = v3090 ^ (1375150198 * v3091);
            v5 = v3091 ^ (__ROL4__(v3092, 21) + 12134) ^ (v3093 + 12285);
            a5 = v3093 ^ __ROL4__(v5, 1);
            a4 = v3093 + v3092;
        }
        v3094 = v5 ^ a4;
        v3095 = a3 + ((__ROL4__(v5, 7) - 10070) ^ (a4 - 5932));
        v3096 = v3095 ^ __ROL4__(v5 ^ a4, 4);
        v3097 = a4 - __ROL4__(a5, 28);
        v3098 = a5 ^ (__ROL4__(v3095, 17) + __ROL4__(v3094, 23));
        v3099 = v3098 + v3097;
        v3100 = (v3098 - 27502) ^ v3094 ^ (__ROL4__(v3097, 16) - 16793);
        v3101 = v3096 + 1212853387 * v3100;
        v3102 = __ROL4__(v3099, 4);
        v3103 = v3101 + ((v3100 - 17199) ^ v3098 ^ (__ROL4__(v3096, 14) - 9815));
        v3104 = v3103 ^ v3099;
        v3105 = playIntentKey[(unsigned __int8)(v3100 + v3102) + 410] ^ v3101;
        v3106 = v3104 + v3100 + v3102;
        v3107 = v3106 + 743656943;
        v3108 = v3103 ^ (v3105 + v3106 + 743656943);
        v3109 = playIntentKey[(unsigned __int8)v3103 + 25] ^ v3104;
        v3110 = (((unsigned int)(v3106 + 743656943) >> 8) & 7) + 1;
        do
        {
            v3111 = v3107 ^ v3108;
            v3112 = v3109 + __ROL4__(v3111, 8);
            v3113 = v3105 ^ (__ROL4__(v3109, 30) + __ROL4__(v3111, 14));
            v3114 = __ROL4__(v3113, 19);
            v3115 = playIntentKey[(unsigned __int8)v3112 + 172] ^ v3113;
            v3116 = v3115 + v3111 - v3114;
            v3117 = v3116 ^ v3112;
            v3118 = v3117 + v3115;
            v3119 = playIntentKey[(unsigned __int8)v3116 + 501] ^ v3117;
            v3120 = v3119 + v3118 + v3116;
            v3121 = v3118 - v3119 - v3120;
            v3122 = v3119 ^ (__ROL4__(v3120, 8) + __ROL4__(v3121, 4));
            v3123 = (v3122 - 362) ^ v3120 ^ (__ROL4__(v3121, 1) - 24170);
            v3109 = v3122 ^ (-2057638412 * v3123);
            v3105 = v3121 ^ __ROR4__(v3122, 1);
            v3108 = v3123 - v3105;
            --v3110;
        } while (v3110);
        v3124 = (HIWORD(v3105) & 7) + 1;
        do
        {
            v3125 = v3105 ^ v3108;
            v3126 = v3109 + v3107;
            v3127 = playIntentKey[(unsigned __int8)v3125 + 304] + v3109;
            v3128 = v3125 - v3126;
            v3129 = v3127 ^ v3126;
            v3130 = v3127 ^ (v3128 - 1828335652);
            v3131 = v3130 + 958253265 * (v3128 + 1824565371 - v3129);
            v3132 = v3130 + v3128 + 1824565371;
            v3133 = v3131 ^ (v3130 + v3129);
            v3134 = v3131 + v3132 - 32392;
            v3135 = v3132 + v3131;
            v3136 = (__ROL4__(v3133, 24) + 19414) ^ v3132 ^ v3134;
            v3107 = (v3136 - 14891) ^ (__ROL4__(v3135, 9) - 32210) ^ v3133;
            v3109 = v3135 - v3136 - v3107;
            v3108 = v3107 ^ v3136;
            --v3124;
        } while (v3124);
        v541 = v3105 ^ v3107;
        v542 = v3109 ^ v3108;
        return (unsigned int)(v541 + v542);
    case 0x3C:
        v3137 = a3 ^ a2;
        v3138 = a3 - a4 - a5;
        v3139 = a4 ^ (-661915360 * a5);
        v3140 = a5 - v3137;
        v3141 = v3138 + v3137;
        v3142 = v3138 ^ (v3139 + v3140);
        v3143 = v3139 + 1874904515 * v3140;
        v3144 = v3140 - v3141 - v3142;
        v3145 = v3141 + __ROL4__(v3142, 11);
        v3146 = v3142 - v3143;
        v3147 = v3144 + v3143;
        v3148 = v3144 + __ROL4__(v3145, 2);
        v3149 = v3146 + v3145;
        v3150 = v3148 + v3147;
        v3151 = v3146 + __ROL4__(v3147, 19);
        v3152 = v3148 - v3149;
        v3153 = v3149 ^ (v3150 + v3151);
        v3154 = v3151 - (__ROL4__(v3150, 29) + __ROL4__(v3152, 7));
        v3155 = v3150 - v3152;
        v3156 = v3152 - __ROL4__(v3153, 29);
        v3157 = __ROL4__(v3155, 5);
        v3158 = v3156 + v3154 - v3153;
        v3159 = playIntentKey[(unsigned __int8)v3156 + 337] + v3155;
        v3160 = (v3157 + v3154) ^ __ROL4__(v3159, 17);
        v3161 = v3160 + v3153 + v3157;
        v3162 = v3160 ^ (v3161 + v3159);
        v3163 = v3159 - (v3161 + v3158 + v3158);
        v3164 = v3161 + v3161 + v3158;
        v3165 = v3161 + ((__ROL4__(v3162, 20) + 6497) ^ (v3163 + 3164));
        v3166 = v3162 - v3163;
        v3167 = v3164 + v3163;
        v3168 = v3164 - v3165;
        v3169 = v3165 - v3166;
        v3170 = playIntentKey[(unsigned __int8)v3167 + 13] + v3166;
        v3171 = v3167 - v3168;
        v3172 = v3168 - v3169;
        v3173 = v3171 + v3170;
        v3174 = v3173 ^ v3169;
        v3175 = v3172 - 153754197 * v3174;
        v3176 = playIntentKey[(unsigned __int8)v3172 + 342] + v3171;
        v3177 = v3176 + v3173 + v3174;
        v3178 = v3173 - v3176;
        v3179 = v3175 + v3177 + v3176;
        v3180 = v3175 - v3177;
        v3181 = v3178 + v3179 + 1141820590;
        v3182 = playIntentKey[(unsigned __int8)v3178 + 89] ^ v3177;
        v3183 = v3179 + v3178;
        v3184 = v3180 + v3179 - 750794429;
        v3185 = v3182 ^ (v3180 - 750794429);
        v3186 = v3184 - 1617106535 * v3185;
        v3187 = v3182 - v3181;
        v3188 = __ROL4__(v3184, 19) + v3183 + 1141820590;
        v3189 = v3185 - v3187;
        v3190 = v3187 + 2008132697 * v3188;
        v3191 = v3188 + v3186;
        v3192 = v3189 + ((__ROL4__(v3190, 25) - 15564) ^ (v3188 + v3186 - 1012));
        v3193 = v3186 ^ __ROL4__(v3189, 27);
        v3194 = v3188 + v3186 + v3190;
        v3195 = v3193 + v3192 + 1745346749;
        v3196 = v3191 ^ __ROL4__(v3193, 15);
        v3197 = playIntentKey[(unsigned __int8)v3194 + 231] ^ v3192;
        v263 = (v3195 - v3197 - (v3194 ^ v3196)) ^ (v3197 - (v3194 ^ v3196) - 181698840);
        v264 = v3194 ^ v3196 ^ (v3196 - playIntentKey[(unsigned __int8)v3195 + 175]);
        return (unsigned int)(v263 + v264);
    case 0x3D:
        v3198 = ((unsigned __int16)a3 >> 13) + 1;
        do
        {
            v3199 = a3 ^ a5;
            v3200 = v5 + 426914321 * a4;
            v3201 = v3199 ^ a4;
            v3202 = v3199 - v3200 - v3201;
            v3203 = v3200 - 1018414029 * v3201;
            v3204 = v3201 - v3202;
            v3205 = v3202 + __ROL4__(v3203, 15);
            v5 = v3204 + v3203;
            a4 = v3204 - __ROL4__(v3205, 14);
            a5 = a4 + v5 + v3205;
            --v3198;
        } while (v3198);
        if ((v5 & 0x1000000) != 0)
        {
            v3206 = v5 ^ a5;
            v3207 = a4 + a3;
            v3208 = a4 + __ROL4__(v3206, 12);
            v3209 = v3206 - v3207;
            v3210 = v3208 ^ (v3209 - 957773390);
            v3211 = __ROL4__(v3208, 6) + v3207 + __ROL4__(v3209, 28);
            v3212 = v3209 - __ROL4__(v3211, 7);
            v3213 = v3211 ^ (__ROL4__(v3210, 18) + __ROL4__(v3212, 15));
            v3214 = v3210 - v3212;
            v3215 = v3213 + v3212;
            a3 = v3213 ^ (-91461284 * v3214);
            a4 = v3214 - v3215;
            a5 = v3215 ^ (173226459 * a3);
        }
        if ((a3 & 0x40) != 0)
        {
            v3216 = a3 ^ a5;
            v3217 = v5 - __ROL4__(a4, 10);
            v3218 = a4 + ((__ROL4__(v3216, 12) + 7390) ^ (v3217 - 8510));
            v3219 = v3216 - v3217;
            v3220 = v3217 - v3218;
            v3221 = v3219 + v3218;
            v3222 = v3219 - playIntentKey[(unsigned __int8)v3220 + 366];
            v5 = playIntentKey[(unsigned __int8)v3221 + 311] + v3220;
            a4 = v3221 ^ (535833015 * v3222);
            a5 = v5 + v3222;
        }
        v3223 = a3 ^ (a4 + v5);
        v3224 = a4 + a5;
        v3225 = a5 ^ a4;
        v3226 = a5 - playIntentKey[(unsigned __int8)v3223 + 457];
        v3227 = v5 - v3224;
        v3228 = v3227 + v3223;
        v3229 = playIntentKey[(unsigned __int8)v3225 + 443] + v3227;
        v3230 = v3225 + 382950384 * v3226;
        v3231 = v3226 + __ROL4__(v3228, 23);
        v3232 = v3228 - (__ROR4__(v3229, 1) + __ROL4__(v3230, 13));
        v3233 = v3229 - v3230;
        v3234 = v3232 + __ROL4__(v3233, 5);
        v3235 = v3231 ^ (__ROL4__(v3232, 9) + __ROL4__(v3233, 23));
        v3236 = v3230 - __ROL4__(v3231, 20);
        v107 = v3235 + v3236;
        v3237 = (v3235 - 13244) ^ v3233 ^ (__ROL4__(v3236, 7) - 13689);
        v3238 = v3237 + v3234;
        v3239 = (v3237 - 2941) ^ v3235 ^ (__ROL4__(v3234, 6) - 6711);
        v3240 = v107 + v3237;
        v3241 = v3238 + v3239;
        v3242 = v3240 + (v107 ^ v3241);
        v3243 = playIntentKey[(unsigned __int8)v3240 + 402] ^ v3238;
        v108 = v3243 ^ (v3242 + 416699879);
        v109 = playIntentKey[(unsigned __int8)v3241 + 17] ^ (v3243 + v3242 + 416699879);
        goto LABEL_322;
    case 0x3E:
        v3244 = a2 + ((__ROL4__(a3, 5) - 21782) ^ (a4 - 26914));
        v3245 = a3 + __ROL4__(a4, 29);
        v3246 = v3244 + a5;
        v3247 = v3246 ^ a4;
        v3248 = v3244 - __ROL4__(v3245, 25);
        v3249 = __ROL4__(v3247, 16) + v3245 + __ROL4__(v3246, 4);
        v3250 = v3247 - v3246;
        v3251 = v3250 + 1476339533;
        v3252 = v3246 - v3248;
        v3253 = playIntentKey[(unsigned __int8)v3252 + 422];
        v3254 = v3253 + v3250 + 1476339533;
        v3255 = v3249 + v3252 - v3248;
        v3256 = v3249 - v3251;
        v3257 = v3255 - v3256;
        v3258 = v3248 + v3253 + 1085378908;
        v3259 = v3256 - v3254;
        v3260 = v3257 + ((__ROL4__(v3258, 18) - 21892) ^ (v3259 + 941)) - 1085378908;
        v3261 = playIntentKey[(unsigned __int8)(v3257 - 92) + 389] + v3254;
        if ((v3259 & 0x2000000) != 0)
        {
            v3262 = v3259 ^ v3260;
            v3258 += v3262 + v3261;
            v3263 = v3258 + v3261;
            v3261 -= v3262;
            v3260 = v3263;
        }
        v3264 = v3259 - __ROL4__(v3258, 16);
        v3265 = v3261 ^ v3260;
        v3266 = v3258 - playIntentKey[(unsigned __int8)v3261 + 156];
        v3267 = v3264 ^ v3260;
        v3268 = v3266 + v3265 + v3264;
        v3269 = v3266 - v3265;
        v3270 = playIntentKey[(unsigned __int8)v3267 + 188] + v3265;
        v3271 = v3267 ^ (839397692 * v3268);
        v3272 = v3269 ^ v3268;
        v3273 = v3269 - v3270 - v3271;
        v3274 = v3272 - v3273;
        v3275 = v3273 ^ __ROL4__(v3270 - v3271, 6);
        v3276 = v3271 - v3273;
        v3277 = v3270 - v3273;
        v3278 = ((v3275 >> 27) & 7) + 1;
        do
        {
            v3279 = v3275 ^ v3276;
            v3280 = v3274 - v3277;
            v3281 = v3277 ^ (v3279 + v3280);
            v3282 = v3279 - 84323798 * v3280;
            v3283 = v3280 ^ (306702364 * v3281);
            v3284 = (__ROL4__(v3283, 3) + 17640) ^ (v3281 - v3282 + 31951);
            v3285 = v3284 + v3282;
            v3286 = (v3284 + v3282 - 16084) ^ v3283 ^ (__ROL4__(v3281 - v3282, 21) + 32576);
            v3287 = v3281 + v3284;
            v3288 = v3285 ^ __ROL4__(v3286, 1);
            v3289 = v3286 - v3287;
            v3290 = v3287 + __ROL4__(v3288, 29);
            v3291 = v3288 - v3289;
            v3274 = v3289 - v3291 - v3290;
            v3277 = v3291 ^ v3290;
            v3292 = playIntentKey[(unsigned __int8)v3274 + 279];
            v3276 = v3292 ^ v3291;
            --v3278;
        } while (v3278);
        v1938 = v3275 ^ v3274;
        v1939 = v3290 ^ v3292;
        return (unsigned int)(v1938 + v1939);
    default:
        v54 = ((a3 >> 11) & 7) + 1;
        do
        {
            v55 = a3 ^ a5;
            v56 = a4 ^ v55;
            v57 = v5 - (__ROL4__(a4, 30) + __ROL4__(v55, 29));
            v58 = v55 - v57;
            v59 = v57 - v56;
            v60 = v56 - v58;
            v61 = playIntentKey[(unsigned __int8)v59 + 447];
            v62 = v59 - playIntentKey[(unsigned __int8)v60 + 432];
            v63 = v58 - v61;
            v64 = v60 ^ (v58 - v61 - 1064006649);
            v65 = v58 - v61 - v62;
            v66 = playIntentKey[(unsigned __int8)v64 + 124];
            v67 = v64 - (v66 + v63);
            v68 = (v66 + v62) ^ v65;
            v5 = v66 + v62 + ((__ROL4__(v67, 29) - 14065) ^ (v68 - 3535));
            a4 = v67 - v68;
            v69 = (__ROL4__(v5, 28) - 7087) ^ (v67 - v68 + 6768);
            a5 = v69 + v68;
            --v54;
        } while (v54);
        v70 = a3 - playIntentKey[(unsigned __int8)v5 + 194];
        v71 = v5 - (v67 + v69);
        v72 = a5 ^ a4;
        v73 = a5 - v71 - v70;
        v74 = (~v71 >> 3) | 0xFFFFFFF8;
        do
        {
            v75 = v71 ^ v73;
            v76 = v70 - __ROL4__(v72, 7);
            v77 = v75 ^ __ROR4__(v76, 1);
            v78 = playIntentKey[(unsigned __int8)v75 + 489] + v72;
            v79 = playIntentKey[(unsigned __int8)v78 + 200];
            v80 = v78 - ((__ROL4__(v77, 19) + 31029) ^ (v76 - v79 - 18483));
            v81 = (v76 - v79) ^ v77;
            v70 = v80 + v76 - v79;
            v72 = v81 + v80;
            v73 = v70 + v81;
            ++v74;
        } while (v74);
        v82 = v70 ^ v71;
        v83 = v70 - v72;
        v84 = v72 ^ (610267040 * v73);
        v85 = v73 - v82;
        v86 = v83 + v82;
        v87 = v84 ^ v83;
        v88 = v85 ^ v84;
        v89 = v85 - v86 - v87;
        v90 = v86 - v87;
        v91 = playIntentKey[(unsigned __int8)v88 + 376] + v87;
        v92 = v88 - v89;
        v93 = v90 ^ v91;
        v94 = __ROL4__(v90, 2) + v89;
        v95 = v91 + ((__ROL4__(v92 - 543605197, 8) - 23582) ^ (v94 - 2920));
        v96 = v92 + v94 + 1099385147;
        v97 = v94 - __ROL4__(v93, 29);
        v98 = v93 - v95;
        v99 = v95 - v96;
        v100 = v96 + playIntentKey[(unsigned __int8)v97 + 465];
        v101 = v97 + v96 - v93;
        v102 = __ROL4__(v99, 2);
        v103 = v99 - playIntentKey[(unsigned __int8)v100 + 176];
        v104 = v98 - v102;
        v105 = v100 - v101;
        v106 = playIntentKey[(unsigned __int8)v104 + 394] + v101;
        v107 = v104 - v103;
        v108 = v107 ^ (playIntentKey[(unsigned __int8)v105 + 379] + v103);
        v109 = v106 ^ (v105 - 491068368 * v106);
    LABEL_322:
        v427 = v107 ^ v109;
        return (unsigned int)(v108 + v427);
    }
}