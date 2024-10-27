#include "main.h"
#include "ppdecrypt.h"

void decrypt_main(const uint8 key_basis[16], uint8 dst[16])
{
    int v3;                // ebp
    int v4;                // r15d
    int v5;                // r13d
    int v6;                // eax
    int v7;                // r13d
    int v8;                // r14d
    int v9;                // ebp
    int v10;               // eax
    int v11;               // r13d
    int v12;               // r14d
    int v13;               // ebp
    int v14;               // edx
    int v15;               // r13d
    int v16;               // r14d
    int v17;               // eax
    int v18;               // r13d
    int v19;               // r14d
    int v20;               // ecx
    int v21;               // ebx
    int v22;               // r13d
    unsigned int v23;      // r14d
    unsigned int v24;      // r15d
    int v25;               // eax
    int v26;               // r14d
    unsigned int v27;      // r15d
    unsigned int v28;      // ebp
    unsigned int v29;      // r12d
    unsigned int v30;      // r13d
    unsigned int v31;      // r15d
    unsigned int v32;      // eax
    unsigned int v33;      // ebx
    int v34;               // r12d
    int v35;               // r15d
    int v36;               // ebx
    unsigned int v37;      // r12d
    unsigned int v38;      // r15d
    unsigned int v39;      // ebp
    unsigned int v40;      // r12d
    int v41;               // eax
    int v42;               // ebp
    int v43;               // r12d
    int v44;               // r15d
    int v45;               // eax
    int v46;               // r12d
    int v47;               // r15d
    int v48;               // ebp
    int v49;               // ebp
    int v50;               // r12d
    unsigned int v51;      // r13d
    unsigned int v52;      // ecx
    int v53;               // ebp
    int v54;               // eax
    int v55;               // edx
    unsigned int v56;      // r14d
    int v57;               // ecx
    int v58;               // edx
    int v59;               // ecx
    int v60;               // eax
    int v61;               // edx
    unsigned int v62;      // r14d
    int v63;               // ebp
    int v64;               // eax
    int v65;               // r14d
    unsigned int v66;      // ebp
    __int64 v67;           // r12
    unsigned int v68;      // ebx
    int v69;               // r15d
    int v70;               // r14d
    int v71;               // ebx
    unsigned int v72;      // ebp
    int v73;               // ecx
    unsigned int v74;      // r14d
    int v75;               // eax
    int v76;               // ecx
    int v77;               // ebp
    unsigned int v78;      // r14d
    int v79;               // ebx
    int v80;               // eax
    unsigned int v81;      // r13d
    unsigned int v82;      // r15d
    unsigned int v83;      // r14d
    int v84;               // ebx
    unsigned int v85;      // r13d
    unsigned int v86;      // r15d
    int v87;               // eax
    int v88;               // r13d
    int v89;               // r15d
    int v90;               // eax
    int v91;               // r13d
    int v92;               // r15d
    int v93;               // eax
    int v94;               // r13d
    int v95;               // r15d
    int v96;               // r12d
    int v97;               // eax
    int v98;               // ecx
    int v99;               // eax
    int v100;              // esi
    int v101;              // eax
    int v102;              // edx
    int v103;              // r12d
    int v104;              // ecx
    int v105;              // edx
    int v106;              // r12d
    int v107;              // eax
    int v108;              // edx
    int v109;              // ecx
    int v110;              // r13d
    unsigned int v111;     // ebx
    unsigned int v112;     // r12d
    unsigned int v113;     // r15d
    unsigned int v114;     // r13d
    __int64 v115;          // r8
    int v116;              // r12d
    int v117;              // r15d
    int v118;              // r13d
    int v119;              // r8d
    int v120;              // esi
    int v121;              // edx
    int v122;              // r15d
    int v123;              // ecx
    int v124;              // r8d
    int v125;              // r15d
    int v126;              // ecx
    int v127;              // r8d
    int v128;              // r15d
    unsigned int v129;     // r14d
    int v130;              // r15d
    unsigned int v131;     // eax
    int v132;              // ebp
    int v133;              // r15d
    int v134;              // eax
    int v135;              // ebp
    int v136;              // r15d
    int v137;              // ecx
    int v138;              // r15d
    int v139;              // ebp
    unsigned int v140;     // ebx
    __int64 v141;          // r15
    int v142;              // eax
    int v143;              // eax
    int v144;              // r13d
    int v145;              // ecx
    int v146;              // r15d
    int v147;              // r8d
    int v148;              // r15d
    int v149;              // r13d
    int v150;              // r8d
    int v151;              // r15d
    int v152;              // eax
    int v153;              // r8d
    int v154;              // r15d
    int v155;              // r15d
    int v156;              // eax
    int v157;              // r12d
    int v158;              // r8d
    int v159;              // r15d
    int v160;              // eax
    int v161;              // edx
    int v162;              // r8d
    int v163;              // r15d
    int v164;              // eax
    int v165;              // r12d
    int v166;              // r8d
    unsigned int v167;     // r15d
    unsigned int v168;     // r13d
    int v169;              // ebx
    unsigned int v170;     // r12d
    unsigned int v171;     // ebp
    int v172;              // r14d
    unsigned int v173;     // ebx
    int v174;              // eax
    int v175;              // r12d
    unsigned int v176;     // ebx
    int v177;              // r13d
    int v178;              // r12d
    unsigned int v179;     // ebx
    unsigned int v180;     // eax
    unsigned int v181;     // r15d
    unsigned int v182;     // eax
    unsigned int v183;     // r15d
    int v184;              // r15d
    unsigned int v185;     // r13d
    unsigned int v186;     // ebp
    unsigned int v187;     // r12d
    int v188;              // eax
    int v189;              // r13d
    int v190;              // ebp
    unsigned int v191;     // r12d
    unsigned int v192;     // r15d
    int v193;              // edx
    int v194;              // eax
    int v195;              // ebp
    int v196;              // r13d
    int v197;              // r14d
    int v198;              // ebp
    int v199;              // r13d
    unsigned int v200;     // r14d
    int v201;              // ebx
    __int64 v202;          // rdi
    unsigned int v203;     // ebx
    int v204;              // r13d
    unsigned int v205;     // r14d
    int v206;              // eax
    int v207;              // edx
    int v208;              // eax
    int v209;              // ebx
    int v210;              // r12d
    int v211;              // eax
    int v212;              // ecx
    int v213;              // r12d
    int v214;              // ebp
    int v215;              // ecx
    int v216;              // ebx
    int v217;              // r12d
    int v218;              // ebp
    int v219;              // eax
    int v220;              // ebx
    int v221;              // r12d
    int v222;              // ebp
    int v223;              // eax
    int v224;              // ebx
    int v225;              // r12d
    int v226;              // ebp
    unsigned int v227;     // r14d
    unsigned int v228;     // r13d
    unsigned int v229;     // r15d
    int v230;              // eax
    int v231;              // ebx
    int v232;              // r13d
    unsigned int v233;     // r15d
    unsigned int v234;     // r14d
    int v235;              // edx
    int v236;              // eax
    unsigned int v237;     // r14d
    unsigned int v238;     // r15d
    int v239;              // ecx
    int v240;              // eax
    unsigned int v241;     // r15d
    int v242;              // edx
    int v243;              // ebp
    int v244;              // esi
    int v245;              // ecx
    int v246;              // edx
    int v247;              // eax
    int v248;              // ebp
    int v249;              // r14d
    int v250;              // edx
    int v251;              // ebp
    int v252;              // eax
    int v253;              // r14d
    int v254;              // ecx
    int v255;              // ebp
    int v256;              // ebx
    int v257;              // r14d
    unsigned int v258;     // r13d
    unsigned int v259;     // ebp
    unsigned int v260;     // ebx
    int v261;              // eax
    int v262;              // r13d
    int v263;              // edx
    int v264;              // ecx
    int v265;              // r13d
    int v266;              // eax
    int v267;              // r12d
    int v268;              // ecx
    unsigned int v269;     // edx
    int v270;              // r13d
    int v271;              // eax
    int v272;              // r12d
    int v273;              // r13d
    int v274;              // esi
    int v275;              // edi
    int v276;              // esi
    int v277;              // edi
    int v278;              // r13d
    int v279;              // r13d
    int v280;              // eax
    int v281;              // ecx
    int v282;              // r12d
    int v283;              // r13d
    int v284;              // r15d
    unsigned int v285;     // ebp
    unsigned int v286;     // r12d
    int v287;              // ebx
    int v288;              // r15d
    int v289;              // ecx
    unsigned int v290;     // eax
    int v291;              // r14d
    int v292;              // esi
    unsigned int v293;     // ecx
    int v294;              // r14d
    int v295;              // eax
    int v296;              // ecx
    int v297;              // r14d
    int v298;              // ebp
    int v299;              // r13d
    int v300;              // eax
    int v301;              // r13d
    unsigned int v302;     // ebx
    int v303;              // eax
    int v304;              // ebp
    int v305;              // ebx
    int v306;              // eax
    int v307;              // ecx
    int v308;              // ebx
    int v309;              // eax
    int v310;              // ecx
    int v311;              // ebx
    int v312;              // eax
    int v313;              // ebp
    int v314;              // r13d
    int v315;              // eax
    int v316;              // r13d
    int v317;              // r15d
    int v318;              // r12d
    unsigned int v319;     // eax
    int v320;              // ecx
    int v321;              // r15d
    int v322;              // r12d
    int v323;              // eax
    int v324;              // ecx
    int v325;              // r15d
    int v326;              // r12d
    int v327;              // ebx
    unsigned int v328;     // r15d
    unsigned int v329;     // r13d
    unsigned int v330;     // r12d
    int v331;              // eax
    int v332;              // ebx
    int v333;              // eax
    int v334;              // r15d
    unsigned int v335;     // r13d
    unsigned int v336;     // r12d
    int v337;              // r15d
    int v338;              // ebp
    int v339;              // r12d
    unsigned int v340;     // r13d
    int v341;              // eax
    int v342;              // ebp
    int v343;              // ebp
    unsigned int v344;     // r15d
    unsigned int v345;     // r13d
    unsigned int v346;     // r14d
    int v347;              // ebp
    unsigned int v348;     // r15d
    unsigned int v349;     // r13d
    unsigned int v350;     // r14d
    int v351;              // ebp
    unsigned int v352;     // eax
    unsigned int v353;     // r14d
    int v354;              // r15d
    unsigned int v355;     // eax
    int v356;              // ecx
    int v357;              // r14d
    int v358;              // edx
    unsigned int v359;     // eax
    unsigned int v360;     // ecx
    unsigned int v361;     // r14d
    int v362;              // r15d
    unsigned int v363;     // eax
    unsigned int v364;     // ebp
    unsigned int v365;     // r15d
    unsigned int v366;     // r12d
    unsigned int v367;     // ebx
    unsigned int v368;     // ebp
    int v369;              // eax
    int v370;              // r12d
    unsigned int v371;     // r15d
    int v372;              // ebp
    int v373;              // r13d
    int v374;              // r15d
    int v375;              // eax
    int v376;              // ecx
    int v377;              // r13d
    int v378;              // r12d
    unsigned int v379;     // r15d
    unsigned int v380;     // r14d
    unsigned int v381;     // r13d
    unsigned int v382;     // eax
    int v383;              // ebx
    unsigned int v384;     // r15d
    unsigned int v385;     // r14d
    unsigned int v386;     // r12d
    unsigned int v387;     // ebp
    unsigned int v388;     // ebx
    unsigned int v389;     // r14d
    unsigned int v390;     // r15d
    int v391;              // eax
    unsigned int v392;     // ebx
    unsigned int v393;     // r14d
    int v394;              // esi
    int v395;              // eax
    unsigned int v396;     // edi
    int v397;              // ecx
    int v398;              // edx
    int v399;              // eax
    unsigned int v400;     // esi
    int v401;              // ecx
    int v402;              // edx
    int v403;              // eax
    int v404;              // edi
    int v405;              // ecx
    int v406;              // r14d
    int v407;              // eax
    __int64 v408;          // rbp
    int v409;              // edi
    int v410;              // r14d
    int v411;              // r15d
    int v412;              // edi
    int v413;              // eax
    int v414;              // r15d
    int v415;              // r13d
    unsigned int v416;     // r14d
    unsigned int v417;     // r15d
    unsigned int v418;     // ebp
    int v419;              // eax
    int v420;              // r14d
    unsigned int v421;     // r15d
    int v422;              // ecx
    int v423;              // edx
    int v424;              // r13d
    int v425;              // ecx
    int v426;              // r15d
    int v427;              // r13d
    int v428;              // r13d
    int v429;              // r12d
    int v430;              // ecx
    int v431;              // eax
    int v432;              // edx
    int v433;              // eax
    unsigned int v434;     // edi
    int v435;              // r15d
    int v436;              // r12d
    unsigned int v437;     // edi
    int v438;              // eax
    int v439;              // edi
    int v440;              // r15d
    int v441;              // r12d
    int v442;              // eax
    int v443;              // r15d
    int v444;              // r12d
    int v445;              // eax
    int v446;              // r15d
    int v447;              // r12d
    unsigned int v448;     // ebx
    unsigned int v449;     // r15d
    unsigned int v450;     // r14d
    int v451;              // eax
    unsigned int v452;     // r15d
    unsigned int v453;     // r14d
    unsigned int v454;     // r15d
    int v455;              // r15d
    unsigned int v456;     // ecx
    int v457;              // ebx
    int v458;              // edx
    int v459;              // r12d
    int v460;              // r13d
    int v461;              // ebx
    unsigned int v462;     // r14d
    unsigned int v463;     // r12d
    unsigned int v464;     // r13d
    int v465;              // eax
    int v466;              // ecx
    unsigned int v467;     // r13d
    int v468;              // ebx
    int v469;              // ecx
    unsigned int v470;     // eax
    int v471;              // ebx
    int v472;              // ecx
    unsigned int v473;     // eax
    unsigned int v474;     // ebx
    int v475;              // r12d
    unsigned int v476;     // eax
    unsigned int v477;     // ebx
    unsigned int v478;     // r12d
    int v479;              // r12d
    int v480;              // r13d
    int v481;              // edx
    int v482;              // r12d
    int v483;              // ecx
    int v484;              // r15d
    int v485;              // eax
    int v486;              // r13d
    int v487;              // ecx
    int v488;              // r15d
    int v489;              // eax
    int v490;              // r12d
    unsigned int v491;     // ecx
    unsigned int v492;     // r15d
    unsigned int v493;     // ebx
    int v494;              // r14d
    int v495;              // r12d
    int v496;              // r13d
    int v497;              // r14d
    int v498;              // ecx
    int v499;              // r13d
    unsigned int v500;     // r14d
    unsigned int v501;     // r12d
    unsigned int v502;     // r13d
    int v503;              // eax
    unsigned int v504;     // eax
    int v505;              // r12d
    int v506;              // esi
    unsigned int v507;     // edx
    int v508;              // r12d
    int v509;              // r15d
    int v510;              // edx
    int v511;              // eax
    int v512;              // r15d
    int v513;              // edx
    int v514;              // esi
    int v515;              // r12d
    unsigned int v516;     // ecx
    unsigned int v517;     // r15d
    int v518;              // eax
    int v519;              // r12d
    unsigned int v520;     // ecx
    unsigned int v521;     // r15d
    unsigned int v522;     // eax
    int v523;              // esi
    unsigned int v524;     // ecx
    unsigned int v525;     // r15d
    unsigned int v526;     // eax
    int v527;              // esi
    int v528;              // r15d
    unsigned int v529;     // eax
    int v530;              // ebp
    unsigned int v531;     // ecx
    int v532;              // r15d
    int v533;              // ebx
    unsigned int v534;     // ebp
    unsigned int v535;     // r12d
    unsigned int v536;     // r15d
    unsigned int v537;     // r14d
    int v538;              // eax
    int v539;              // ecx
    int v540;              // ebx
    int v541;              // ebp
    int v542;              // r15d
    int v543;              // esi
    int v544;              // r14d
    int v545;              // ecx
    int v546;              // r15d
    int v547;              // edx
    int v548;              // r14d
    int v549;              // ecx
    int v550;              // edi
    int v551;              // edx
    int v552;              // r14d
    int v553;              // ecx
    int v554;              // esi
    int v555;              // edi
    int v556;              // r15d
    int v557;              // ecx
    int v558;              // esi
    int v559;              // edi
    int v560;              // r15d
    int v561;              // eax
    int v562;              // ecx
    unsigned int v563;     // ebp
    int v564;              // edx
    int v565;              // edi
    int v566;              // eax
    int v567;              // esi
    int v568;              // edi
    int v569;              // r8d
    int v570;              // esi
    int v571;              // eax
    int v572;              // r8d
    int v573;              // esi
    int v574;              // edi
    int v575;              // eax
    int v576;              // esi
    int v577;              // edi
    int v578;              // eax
    int v579;              // ecx
    int v580;              // r15d
    unsigned int v581;     // r15d
    int v582;              // eax
    unsigned int v583;     // ebp
    unsigned int v584;     // r15d
    unsigned int v585;     // eax
    unsigned int v586;     // r15d
    int v587;              // edx
    unsigned int v588;     // eax
    unsigned int v589;     // ebp
    unsigned int v590;     // edx
    int v591;              // r14d
    int v592;              // et1
    int v593;              // ebx
    unsigned int v594;     // r14d
    unsigned int v595;     // r15d
    int v596;              // eax
    int v597;              // r14d
    unsigned int v598;     // r15d
    int v599;              // eax
    int v600;              // r15d
    int v601;              // esi
    int v602;              // ecx
    int v603;              // r15d
    int v604;              // eax
    int v605;              // esi
    int v606;              // ecx
    int v607;              // edi
    int v608;              // eax
    int v609;              // esi
    int v610;              // r8d
    int v611;              // edi
    int v612;              // eax
    int v613;              // esi
    int v614;              // ecx
    int v615;              // edi
    int v616;              // eax
    int v617;              // r8d
    int v618;              // r12d
    int v619;              // ebx
    int v620;              // eax
    int v621;              // ecx
    int v622;              // r12d
    int v623;              // ebx
    int v624;              // esi
    int v625;              // ecx
    int v626;              // r12d
    int v627;              // ebx
    int v628;              // r15d
    unsigned int v629;     // eax
    unsigned int v630;     // r12d
    int v631;              // ecx
    unsigned int v632;     // ebx
    unsigned int v633;     // esi
    unsigned int v634;     // edi
    int v635;              // eax
    unsigned int v636;     // ebx
    unsigned int v637;     // esi
    unsigned int v638;     // ebx
    unsigned int v639;     // edi
    unsigned int v640;     // esi
    unsigned int v641;     // ebx
    int v642;              // r15d
    int v643;              // esi
    unsigned int v644;     // ebx
    int v645;              // eax
    int v646;              // ecx
    unsigned int v647;     // edi
    unsigned int v648;     // esi
    int v649;              // r12d
    unsigned int v650;     // edi
    unsigned int v651;     // esi
    unsigned int v652;     // r12d
    unsigned int v653;     // edi
    unsigned int v654;     // esi
    unsigned int v655;     // r12d
    int v656;              // edi
    int v657;              // esi
    unsigned int v658;     // r12d
    int v659;              // ebx
    int v660;              // esi
    int v661;              // r12d
    int v662;              // ebx
    int v663;              // ebx
    unsigned int v664;     // r15d
    unsigned int v665;     // r14d
    unsigned int v666;     // r12d
    unsigned int v667;     // ebp
    unsigned int v668;     // r15d
    unsigned int v669;     // ebx
    int v670;              // eax
    unsigned int v671;     // ecx
    int v672;              // r15d
    unsigned int v673;     // ebx
    int v674;              // esi
    unsigned int v675;     // ecx
    int v676;              // r15d
    int v677;              // edx
    int v678;              // r12d
    int v679;              // ecx
    int v680;              // r15d
    int v681;              // edx
    int v682;              // r12d
    int v683;              // ebx
    unsigned int v684;     // r15d
    unsigned int v685;     // r13d
    unsigned int v686;     // r12d
    int v687;              // eax
    int v688;              // ecx
    int v689;              // r15d
    unsigned int v690;     // r13d
    unsigned int v691;     // ecx
    int v692;              // r15d
    unsigned int v693;     // r13d
    int v694;              // ebx
    int v695;              // r15d
    unsigned int v696;     // r13d
    int v697;              // ebx
    unsigned int v698;     // ebp
    unsigned int v699;     // r14d
    unsigned int v700;     // r15d
    unsigned int v701;     // ebx
    int v702;              // eax
    unsigned int v703;     // ecx
    int v704;              // eax
    int v705;              // ebp
    int v706;              // ecx
    int v707;              // edx
    int v708;              // eax
    int v709;              // ebp
    int v710;              // ecx
    int v711;              // r14d
    unsigned int v712;     // ebx
    unsigned int v713;     // ebp
    __int64 v714;          // r12
    unsigned int v715;     // r14d
    unsigned int v716;     // r15d
    int v717;              // eax
    int v718;              // ebx
    int v719;              // eax
    int v720;              // ecx
    int v721;              // r15d
    unsigned int v722;     // ebx
    unsigned int v723;     // ebp
    int v724;              // r13d
    int v725;              // ecx
    int v726;              // r15d
    int v727;              // r13d
    int v728;              // eax
    int v729;              // r12d
    unsigned int v730;     // r15d
    int v731;              // r13d
    int v732;              // ecx
    int v733;              // r12d
    int v734;              // r13d
    int v735;              // ecx
    int v736;              // eax
    int v737;              // ecx
    int v738;              // eax
    int v739;              // ecx
    unsigned int v740;     // ebx
    unsigned int v741;     // ebp
    int v742;              // eax
    int v743;              // r12d
    unsigned int v744;     // ebp
    int v745;              // ecx
    int v746;              // edx
    int v747;              // eax
    int v748;              // r13d
    int v749;              // esi
    int v750;              // eax
    unsigned int v751;     // esi
    int v752;              // r13d
    int v753;              // eax
    unsigned int v754;     // r15d
    int v755;              // r13d
    int v756;              // edx
    int v757;              // esi
    int v758;              // r13d
    int v759;              // edx
    int v760;              // esi
    int v761;              // r8d
    int v762;              // eax
    int v763;              // esi
    int v764;              // edi
    int v765;              // edx
    int v766;              // r12d
    int v767;              // r13d
    int v768;              // esi
    int v769;              // eax
    int v770;              // r12d
    int v771;              // r13d
    int v772;              // eax
    int v773;              // r12d
    int v774;              // r13d
    int v775;              // r13d
    int v776;              // eax
    int v777;              // r12d
    int v778;              // ebx
    int v779;              // ebp
    unsigned int v780;     // r15d
    int v781;              // r13d
    int v782;              // ebx
    unsigned int v783;     // ebp
    unsigned int v784;     // r15d
    unsigned int v785;     // r13d
    unsigned int v786;     // ebx
    int v787;              // ecx
    int v788;              // r15d
    unsigned int v789;     // ebx
    int v790;              // ecx
    int v791;              // eax
    int v792;              // ecx
    unsigned int v793;     // esi
    unsigned int v794;     // r13d
    unsigned int v795;     // ecx
    int v796;              // eax
    int v797;              // r15d
    int v798;              // ebx
    int v799;              // ecx
    int v800;              // r12d
    unsigned int v801;     // r13d
    unsigned int v802;     // r15d
    unsigned int v803;     // ebx
    int v804;              // eax
    unsigned int v805;     // r13d
    int v806;              // r15d
    unsigned int v807;     // ebx
    int v808;              // eax
    int v809;              // r13d
    int v810;              // ecx
    int v811;              // eax
    int v812;              // edx
    int v813;              // ebp
    int v814;              // r12d
    int v815;              // r15d
    int v816;              // edx
    int v817;              // ebp
    unsigned int v818;     // eax
    int v819;              // ecx
    int v820;              // r15d
    int v821;              // edx
    int v822;              // ecx
    int v823;              // r15d
    int v824;              // edx
    int v825;              // ecx
    int v826;              // edx
    int v827;              // r15d
    int v828;              // ecx
    int v829;              // edi
    int v830;              // edx
    int v831;              // ecx
    int v832;              // r15d
    int v833;              // edx
    int v834;              // r12d
    int v835;              // r12d
    int v836;              // r15d
    unsigned int v837;     // ebp
    unsigned int v838;     // ebx
    int v839;              // eax
    int v840;              // r12d
    int v841;              // ebp
    int v842;              // ecx
    unsigned int v843;     // edx
    int v844;              // eax
    int v845;              // r12d
    int v846;              // ebp
    int v847;              // r15d
    int v848;              // ecx
    int v849;              // r12d
    int v850;              // r13d
    int v851;              // r15d
    int v852;              // ecx
    int v853;              // r12d
    int v854;              // r13d
    unsigned int v855;     // r15d
    int v856;              // r14d
    unsigned int v857;     // r12d
    unsigned int v858;     // r13d
    int v859;              // r14d
    int v860;              // r12d
    unsigned int v861;     // r13d
    unsigned int v862;     // r14d
    int v863;              // eax
    int v864;              // edx
    int v865;              // esi
    int v866;              // r15d
    int v867;              // eax
    int v868;              // edx
    int v869;              // ecx
    int v870;              // r15d
    int v871;              // eax
    int v872;              // edx
    int v873;              // ecx
    int v874;              // r15d
    int v875;              // eax
    int v876;              // ecx
    int v877;              // r15d
    int v878;              // edi
    int v879;              // edx
    int v880;              // r9d
    int v881;              // r15d
    int v882;              // ebx
    int v883;              // r9d
    int v884;              // ebx
    int v885;              // edx
    int v886;              // r13d
    int v887;              // r15d
    int v888;              // eax
    int v889;              // ebx
    unsigned int v890;     // r13d
    unsigned int v891;     // r15d
    unsigned int v892;     // r14d
    unsigned int v893;     // r12d
    unsigned int v894;     // r13d
    unsigned int v895;     // r15d
    unsigned int v896;     // ebx
    int v897;              // eax
    int v898;              // edx
    __int64 v899;          // rbx
    __int64 v900;          // rbp
    unsigned __int64 v901; // r12
    //__int64 v902;          // r14

    unsigned int v1075;     // [rsp+0h] [rbp-138h]
    int v1077;              // [rsp+8h] [rbp-130h]

    v3 = U8TOU32(key_basis);
    v4 = U8TOU32(key_basis + 4);
    v5 = U8TOU32(key_basis + 8);
    v6 = U8TOU32(key_basis + 12) - v3;
    v7 = playIntentKey[(unsigned __int8)v6 + 5] ^ v5;
    v8 = v4 ^ __ROL4__(v7, 26);
    v9 = v8 + v3;
    v10 = playIntentKey[(unsigned __int8)v9 + 41] + v6;
    v11 = v10 ^ v7;
    v12 = v11 ^ v8;
    v13 = v12 ^ v9;
    v14 = (__ROL4__(v13, 26) - 5575) ^ v10 ^ (v12 + 6978);
    v15 = v11 - v14;
    v16 = v12 - v15;
    v17 = v13 ^ (1161522586 * v16);
    v18 = v15 - playIntentKey[(unsigned __int8)(v14 + 10 * v17) + 161];
    v19 = v18 ^ v16;
    v20 = v17 ^ (v19 + v18);
    v21 = v14 + 2109023498 * v17 - ((__ROL4__(v20, 8) + 8915) ^ (v19 + 14171));
    v22 = v21 + v18;
    v23 = v22 ^ v19;
    v24 = v20 ^ (v23 + 1754773603);
    v25 = process(v21 - v24 - 2145813339, v21 - v24, v24, v23, 1363753160LL);
    v26 = playIntentKey[(unsigned __int8)(v22 ^ v25) + 29] ^ v23;
    v27 = 976882793 - v26 + v24;
    v28 = v21 + 976882793 - v26;
    v29 = (v22 ^ v25) - v28;
    v30 = v26 ^ process(v29 - 1303859818, v29, v28, v27, 851393042LL);
    v31 = v30 ^ v27;
    if ((v31 & 2) != 0)
    {
        v29 ^= (__ROL4__(v30 + v28 + 1611120792, 24) + 1720) ^ (v30 + 30865);
        v32 = v30 + ((__ROL4__(v29, 13) + 9680) ^ (v30 + v28 + 1611095866));
        v28 = v31 ^ (v30 + v28 + 1611120792);
        v30 = v32;
    }
    if ((v30 & 0x1000) != 0)
    {
        v33 = v28 ^ (__ROL4__(v31, 7) + __ROL4__(v29, 12));
        v34 = v29 - process(v33 - 1325816497, v33, v31, v30, 292722083LL);
        v35 = v34 + v31;
        v36 = v35 ^ v33;
        v37 = v34 - v36;
        v38 = playIntentKey[(unsigned __int8)v37 + 176] ^ v35;
        v39 = v36 + process(v38 + 1342240622, v38, v37, v30, 3684303098LL);
        v40 = v39 ^ v37;
        v41 = v38 + process(v40 + 1293449252, v40, v39, v30, 3419615356LL);
        v42 = v39 - v41;
        v43 = playIntentKey[(unsigned __int8)v42 + 262] ^ v40;
        v44 = v41 ^ __ROL4__(v43, 26);
        v45 = v42 ^ __ROL4__(v44, 9);
        v46 = v45 + v44 + v43;
        v47 = playIntentKey[(unsigned __int8)v46 + 38] + v44;
        v48 = v45 + 578331952 * v47;
        v29 = playIntentKey[(unsigned __int8)(v45 + 48 * v47) + 176] ^ v46;
        v31 = v47 - v29;
        v28 = v30 ^ v48;
    }
    v49 = v31 ^ v28;
    v50 = v49 ^ v29;
    v51 = v49 + v30;
    v52 = v31 + __ROR4__(v50 + v51, 1);
    v53 = v49 - v52 - 149063553;
    v54 = v50 ^ __ROL4__(v53, 23);
    v55 = v50 + v51 + 115624190;
    v56 = v52 + v55;
    v57 = v55 + v52 + 1257722743;
    v58 = v55 - v54;
    v59 = v53 ^ v57;
    v60 = playIntentKey[(unsigned __int8)v59 + 290] + v54;
    v61 = v60 ^ v58;
    v62 = v56 - v61;
    v63 = (__ROL4__(v62, 1) - 1202) ^ v59 ^ (v61 + 25604);
    v64 = v60 - v63;
    v65 = playIntentKey[(unsigned __int8)(v61 + 84 * v64) + 85] ^ v62;
    v66 = v63 - v65;
    v67 = (__ROL4__(v66, 6) - 15156) ^ v64 ^ (unsigned int)(v65 + 7545);
    v68 = v61 + 243798868 * v64 - v67;
    v69 = v65 + process(v68 - 1694478679, v68, v67, v66, 1797834273LL);
    v70 = v67 - (v69 ^ v66) + 478230746;
    v71 = v68 - v67;
    v72 = (v71 + 2089301558) ^ v66;
    v73 = __ROL4__(v72, 14);
    v74 = v72 ^ v70;
    v75 = __ROL4__(v74, 26);
    LODWORD(v67) = v75 + v71 + v73 - 478230746;
    v76 = ((v71 + 2089301558) ^ v69) + process((unsigned int)(v75 + v71 + v73 + 1111123788), (unsigned int)v67, v74, v72, 3884691695LL);
    v77 = v72 - v76;
    v78 = v74 - ((__ROL4__(v77, 6) + 26700) ^ (v76 - 145));
    v79 = (__ROL4__(v78 + v67 + v76, 10) + 20749) ^ v77 ^ (v78 + v67 - 7901);
    v80 = __ROL4__(v79, 29);
    v81 = v78 + ((v80 - 16516) ^ (v78 + v67 + v76 - 22409));
    v82 = playIntentKey[(unsigned __int8)(v78 + ((v80 + 124) ^ (v78 + v67 + v76 + 119))) + 411] ^ (v78 + v67);
    v83 = v82 ^ (v78 + v67 + v76);
    v84 = v79 - process(v83 + 781236043, v83, v82, v81, 2822189948LL);
    v85 = v84 + v81;
    v86 = v85 + v82 - 1737470809;
    LODWORD(v67) = v83 ^ (v86 + v85);
    v87 = v84 + process((unsigned int)(v67 - 803835789), (unsigned int)v67, v86, v85, 1722804801LL);
    v88 = playIntentKey[(unsigned __int8)v87 + 447] ^ v85;
    v89 = v86 - v88 - 1652947861;
    LODWORD(v67) = v67 - playIntentKey[(unsigned __int8)v89 + 320];
    v90 = v67 + v87;
    v91 = v88 - v90 + 813749319;
    v92 = playIntentKey[(unsigned __int8)v91 + 356] ^ v89;
    LODWORD(v67) = v92 ^ v67;
    v93 = playIntentKey[(unsigned __int8)v67 + 370] ^ v90;
    v94 = v91 - v93;
    v95 = v92 - v94;
    v96 = v67 - __ROL4__(v95, 10);
    if ((v96 & 0x20000) != 0)
    {
        v97 = v93 - v95;
        v98 = v97 ^ v96;
        v99 = __ROL4__(v97, 30);
        v100 = __ROL4__((v99 - 8483) ^ v94 ^ (v95 + 4745), 19);
        v94 ^= (v99 - 8483) ^ (v95 + 4745);
        v93 = v98;
        v95 ^= v100;
    }
    if ((v95 & 0x200) != 0)
    {
        v101 = v96 + v93;
        v102 = v94 + ((__ROL4__(v101, 3) - 16968) ^ (v96 - 20093));
        v103 = v102 ^ v96;
        v104 = v101 ^ __ROL4__(v103, 16);
        v105 = v104 + v102;
        v106 = v103 - v105 + 613360723;
        v107 = v104 ^ (-809550363 * v106);
        v108 = v107 ^ v105;
        v96 = v106 - v108;
        v93 = v95 ^ v107;
        v94 = v108;
    }
    v109 = v93 + __ROL4__(v96, 7);
    v110 = v109 ^ v94;
    v111 = v95 - 1873671667 * v110;
    v112 = v111 ^ v96;
    v113 = 1482645505 * v112 + v109;
    v114 = v110 - process(v113 + 1960862996, v113, v112, v111, 2415619455LL);
    v115 = v114 + v111;
    v116 = v115 + v112;
    if ((v116 & 0x10) != 0)
    {
        v117 = (v115 + 1444403267) ^ v113;
        v118 = playIntentKey[(unsigned __int8)v117 + 495] ^ v114;
        v119 = v118 ^ v115;
        v120 = v117 - __ROL4__(v119, 24);
        v121 = v119 + ((__ROL4__(v120 + v118, 21) + 1768) ^ (v120 + 13719));
        v122 = (__ROL4__(v121, 4) - 13167) ^ v120 ^ (v120 + v118 - 3783);
        v123 = v120 + v118 - v122;
        v124 = v121 + 1246311832 * v123;
        v125 = v124 + v122;
        v126 = v123 - playIntentKey[(unsigned __int8)v125 + 79];
        v127 = playIntentKey[(unsigned __int8)v126 + 100] ^ v124;
        v128 = v125 - v127;
        v114 = v128 + v126 + 379999725;
        v115 = (unsigned int)(v127 - playIntentKey[(unsigned __int8)(v128 + v126 - 19) + 409]);
        v113 = v116 ^ v128;
    }
    v129 = (((unsigned int)v115 >> 26) & 7) + 1;
    do
    {
        v130 = v113 - v116;
        v131 = v114 + __ROL4__(v130, 7);
        v132 = v116 ^ (146926685 * v131);
        v133 = v130 - v132;
        v134 = v133 + v131 - 1828110148;
        v135 = v132 - v134;
        v136 = v133 - playIntentKey[(unsigned __int8)v135 + 115];
        v137 = v134 ^ __ROL4__(v136, 22);
        v135 += 264462239;
        v138 = v135 ^ v136;
        v139 = v137 ^ (v135 - v137);
        v140 = v138 + v139;
        v114 = v137 - (v138 + v139 + v138);
        v141 = v115;
        v142 = process(v114 + 923454031, v114, v140, (unsigned int)v115, 2161356342LL);
        v115 = v141;
        v116 = v139 + v142;
        v113 = v141 ^ v140;
        --v129;
    } while (v129);
    if ((v116 & 4) != 0)
    {
        v143 = v113 ^ (v115 + v114);
        v144 = v114 - v143;
        v145 = v144 + v115;
        v146 = v143 ^ (v115 + v144 + 1839562849);
        v144 += 627068795;
        v147 = v146 - v144 + v145 + 1839562849;
        v148 = -(v145 - v144 + 1839562849);
        v149 = v144 - v147;
        v150 = v147 - ((__ROL4__(v149, 2) + 1841) ^ (v148 + 31128));
        v151 = v148 - v150;
        v152 = v149 ^ __ROL4__(v151, 16);
        v153 = v152 + v150;
        v154 = v153 ^ v151;
        v114 = v152 + __ROL4__(v154, 4);
        LODWORD(v115) = v153 - v114;
        v113 = v116 ^ v154;
    }
    v155 = v115 + v113;
    v156 = v114 ^ (__ROL4__(v155, 8) + __ROL4__(v115, 28));
    v157 = v116 - __ROL4__(v156, 19);
    v158 = v157 ^ v115;
    v159 = v155 - playIntentKey[(unsigned __int8)v158 + 386];
    v160 = v156 - v159;
    v161 = v157 ^ (__ROL4__(v160, 13) + __ROL4__(v159, 26));
    v162 = v158 - __ROL4__(v161, 24);
    v163 = v159 - (v162 + __ROL4__(v161, 9));
    v164 = playIntentKey[(unsigned __int8)v163 + 264] + v160;
    v165 = v161 ^ (-715252002 * v164);
    v166 = v162 - v165;
    v167 = v163 - playIntentKey[(unsigned __int8)(v166 + 12) + 300];
    v168 = v164 + 1113083650 * v167;
    v169 = v166;
    v170 = v165 - process(v168 - 1472326775, v168, v167, (unsigned int)(v166 - 1504109812), 2046057600LL);
    v171 = v169 + v170 - 1504109812;
    v172 = ((v171 >> 25) & 7) + 1;
    do
    {
        v173 = v167 ^ (-1077858558 * v170);
        v174 = v168 ^ process(v173 + 2050005553, v173, v170, v171, 946606917LL);
        v175 = v170 - v174;
        v176 = v173 - playIntentKey[(unsigned __int8)v175 + 209];
        v177 = v174 + 485789351 * v176;
        v178 = v175 - playIntentKey[(unsigned __int8)(v174 - 89 * v176) + 82];
        v179 = playIntentKey[(unsigned __int8)v178 + 259] + v176;
        v168 = v177 - __ROL4__(v179, 5);
        v170 = v168 + v178;
        v167 = v171 ^ v179;
        --v172;
    } while (v172);
    v180 = (~v170 >> 19) | 0xFFFFFFF8;
    do
    {
        v181 = v167 - playIntentKey[(unsigned __int8)v171 + 204];
        v168 ^= v181;
        v171 += v168 + v181;
        v167 = v170 ^ v181;
        ++v180;
    } while (v180);
    v182 = (~v171 >> 20) | 0xFFFFFFF8;
    do
    {
        v183 = v167 - v170;
        v168 += v183;
        v170 -= __ROL4__(v168, 5);
        v167 = v171 ^ v183;
        ++v182;
    } while (v182);
    v184 = v170 ^ v167;
    v185 = v168 - (v184 + __ROL4__(v170, 5));
    v186 = v185 + v171;
    v187 = v170 - (__ROL4__(v186, 2) + __ROL4__(v185, 3));
    v188 = v184 ^ __ROL4__(v187, 3);
    v189 = v188 ^ v185;
    v190 = v189 + v186 + 743521795;
    v191 = v187 - playIntentKey[(unsigned __int8)v190 + 430];
    v192 = (~v191 >> 18) | 0xFFFFFFF8;
    do
    {
        v193 = (__ROL4__(v190, 26) + 8113) ^ v188 ^ (v189 + 27526);
        v194 = v193 + v189;
        v195 = (v193 + v189) ^ v190;
        v196 = (__ROL4__(v195, 28) - 30759) ^ v193 ^ (v193 + v189 + 28205);
        v197 = v194 + __ROL4__(v196, 25);
        v198 = v195 - v197;
        v199 = v198 + v196;
        v200 = v197 - (__ROL4__(v199, 6) + __ROL4__(v198, 4));
        v201 = playIntentKey[(unsigned __int8)v200 + 430];
        v202 = (unsigned int)(v201 + v198 + 558648383);
        v203 = v198 + v201;
        v204 = v199 - process(v202, v203, v200, v191, 380920957LL);
        v205 = v200 - playIntentKey[(unsigned __int8)v204 + 466];
        v206 = v204 ^ (v205 + v203 + 1944226139);
        v207 = playIntentKey[(unsigned __int8)(v204 ^ (v205 + v203 + 91)) + 262];
        v189 = v207 + v205;
        v190 = (v205 + v203) ^ (v207 + v205 + 1679538396);
        v188 = v191 ^ v206;
        ++v192;
    } while (v192);
    v208 = v188 - (__ROL4__(v190, 2) + __ROL4__(v191, 8));
    v209 = v189 ^ (-263883735 * v208);
    v210 = playIntentKey[(unsigned __int8)(v189 ^ (41 * v208)) + 151] ^ v191;
    v211 = v208 - playIntentKey[(unsigned __int8)(v190 - v210) + 206];
    v212 = playIntentKey[(unsigned __int8)(v209 - v211) + 459];
    v213 = v210 - v212;
    v214 = v190 - v212;
    v215 = playIntentKey[(unsigned __int8)v214 + 3];
    v216 = v215 + v209;
    v217 = v213 - __ROL4__(v216, 10);
    v218 = v217 + v214;
    v219 = v218 + v215 + v211;
    v220 = v219 + v216;
    v221 = v217 - __ROL4__(v220, 26);
    v222 = v221 ^ v218;
    v223 = v222 + v219;
    v224 = v220 - __ROL4__(v223, 18);
    v225 = v224 + v221;
    v226 = v225 + v222;
    v227 = v223 + __ROL4__(v226, 17);
    v228 = v225 + 395150012 * (v224 - v227);
    v229 = v226 ^ process(v228 - 1019028630, v228, v224 - v227, v227, 1133287441LL);
    v230 = process(v229 + 910151551, v229, v228, v224 - v227, 482174618LL);
    v231 = v224 - v230;
    v232 = v231 + v228;
    v233 = v229 - playIntentKey[(unsigned __int8)v232 + 368];
    v234 = v233 + v227 - v230;
    v235 = v234 + v231;
    v236 = v232 ^ (__ROL4__(v231 + v234 - 471162094, 6) + __ROL4__(v234, 1));
    v237 = v233 + v234;
    v238 = v233 - v236;
    v239 = v235 + __ROL4__(v237, 30) - 471162094;
    v240 = v239 ^ v236;
    v241 = playIntentKey[(unsigned __int8)v240 + 372] + v238;
    v242 = v237 ^ (v241 + v240);
    v243 = v239 - 599336772 * v242;
    v244 = v241 ^ (-864090051 * (v240 - v243));
    v245 = v242 ^ (v244 + v240 - v243);
    v246 = __ROL4__(v245, 14);
    v247 = v240 - v246 - 1098456393;
    v248 = v243 - v246;
    v249 = v244 ^ (v248 + __ROL4__(v247, 12));
    v250 = v245 ^ (v249 - 1489482555);
    v251 = v248 - (__ROL4__(v250, 26) + __ROL4__(v249, 8));
    v252 = v251 ^ v247;
    v253 = v249 - v252;
    v254 = v250 + __ROL4__(v253, 3);
    v255 = v254 ^ v251;
    v256 = v252 ^ (-1226696607 * v255);
    v257 = playIntentKey[(unsigned __int8)(v252 ^ (97 * v255)) + 12] + v253;
    v258 = v254 ^ (-1617657232 * v257);
    v259 = playIntentKey[(unsigned __int8)(v254 ^ (112 * v257)) + 27] + v255;
    v260 = v259 ^ v256;
    v261 = v257 + process(v260 + 1837751933, v260, v259, v258, 3345596271LL);
    v262 = v261 ^ v258;
    v263 = v259 ^ (2050015765 * v262);
    v264 = v261 + __ROL4__(v263 + v260 + 1557496618, 4);
    v265 = playIntentKey[(unsigned __int8)v264 + 350] + v262;
    v266 = v263 + __ROL4__(v265, 19);
    v267 = v263 + v260 + 1557496618 - v266 - v265;
    v268 = playIntentKey[(unsigned __int8)(v263 + v260 + 42 - v266 - v265) + 7] + v264;
    v269 = ((unsigned int)~v268 >> 13) | 0xFFFFFFF8;
    do
    {
        v270 = v267 + v265;
        v271 = v270 + v266;
        v272 = v267 - playIntentKey[(unsigned __int8)v271 + 204];
        v273 = playIntentKey[(unsigned __int8)v272 + 259] + v270;
        v274 = __ROL4__(v273, 24);
        v275 = v274 + v271 - 1801454077;
        v276 = v271 + v274;
        v277 = v272 ^ v275;
        v278 = v273 - __ROL4__(v277, 25);
        v266 = v278 + v276;
        v267 = v277 + ((__ROL4__(v278 + v276, 16) + 13371) ^ (v278 + 25791));
        v265 = v268 ^ v278;
        ++v269;
    } while (v269);
    v279 = v267 + v265;
    v280 = v266 - (__ROL4__(v279, 22) + __ROL4__(v267, 5));
    v281 = v280 + v268;
    v282 = v267 - (__ROL4__(v281, 27) + __ROL4__(v280, 10));
    v283 = v279 - v282;
    v284 = v280 ^ (__ROL4__(v283, 19) + __ROL4__(v282, 19));
    v285 = v281 ^ __ROL4__(v284, 19);
    v286 = v285 + v282;
    v287 = ((v286 >> 21) & 7) + 1;
    do
    {
        v288 = v284 - process(v285 + v283 + 1943856007, v285 + v283, v285, v286, 1031461698LL);
        v289 = playIntentKey[(unsigned __int8)v288 + 151];
        v290 = v285 - v289;
        v291 = playIntentKey[(unsigned __int8)(v285 - v289) + 207] ^ (v285 + v283);
        v292 = (__ROL4__(v291, 24) - 23722) ^ v288 ^ (v285 - v289 - 14494);
        v293 = v292 + v285 - v289;
        v294 = v291 - (__ROL4__(v293, 24) + __ROL4__(v292, 14));
        v295 = v292 + ((__ROL4__(v294, 13) + 22595) ^ (v292 + v290 + 25815));
        v296 = v295 ^ v293;
        v297 = v296 ^ v294;
        v298 = v296 ^ (v297 + v295 - 1596258462);
        v299 = v297 ^ (v298 - 1987219088);
        v284 = playIntentKey[(unsigned __int8)(v297 ^ ((v296 ^ (v297 + v295 + 98)) + 112)) + 283] + v297 + v295;
        v285 = v284 ^ v298;
        v283 = v286 ^ v299;
        --v287;
    } while (v287);
    v300 = (v285 & 7) + 1;
    do
    {
        v301 = playIntentKey[(unsigned __int8)v286 + 95] + v283;
        v284 += __ROL4__(v301, 20);
        v286 ^= v284;
        v283 = v285 ^ v301;
        --v300;
    } while (v300);
    if ((v286 & 0x80000) != 0)
    {
        v302 = playIntentKey[(unsigned __int8)v285 + 398] + v283;
        v303 = v284 ^ process(v302 - 1449168714, v302, v285, v286, 1236722849LL);
        v304 = v303 + v285;
        v305 = v304 + v302;
        v306 = v305 + v303;
        v307 = v304 ^ (-1040016083 * v306);
        v308 = v307 ^ v305;
        v309 = v308 ^ v306;
        v310 = v309 + v307;
        v311 = v310 + v308;
        v312 = v311 + v310 + v309;
        v313 = v310 + __ROL4__(v312, 25);
        v314 = v311 ^ __ROL4__(v313, 7);
        v315 = v312 - v314;
        v285 = v313 - playIntentKey[(unsigned __int8)v315 + 292];
        v283 = v286 ^ v314;
        v284 = v315;
    }
    v316 = v285 ^ v283;
    v317 = v316 + v284;
    v318 = v286 - v316 - v317;
    v319 = v285 - __ROL4__(v318, 30);
    v320 = v316 ^ (v319 + 1093064319);
    v321 = playIntentKey[(unsigned __int8)v320 + 42] ^ v317;
    v322 = v321 + v318;
    v323 = v322 + v321 + v319;
    v324 = v320 - v323;
    v325 = v321 - v324;
    v326 = v322 - __ROL4__(v325, 22);
    v327 = v324 ^ (v326 + v323 + 2186) ^ (v326 + 230);
    v328 = v325 - v327;
    v329 = v326 - 700136363 * v328;
    v330 = (__ROL4__(v329, 8) + 23844) ^ (v326 + v323) ^ (v328 - 26235);
    v331 = (v330 >> 30) + 1;
    do
    {
        v332 = v329 ^ v327;
        v328 += v332 + v329;
        v329 ^= v328;
        v327 = v330 ^ v332;
        --v331;
    } while (v331);
    v333 = process(v329 + 557300954, v329, v330, v328, 2666740031LL);
    v334 = (v327 + v333) ^ v328;
    v335 = v330 + v329;
    v336 = v330 - v334;
    v337 = v327 + v333 + v334;
    v338 = v327 + v333 - v335;
    v339 = playIntentKey[(unsigned __int8)v337 + 372] ^ v336;
    v340 = v339 + v335;
    v341 = ((v340 >> 28) & 7) + 1;
    do
    {
        v342 = (__ROL4__(v339, 8) + __ROL4__(v337, 19)) ^ v338;
        v337 ^= v342;
        v339 -= v337;
        v338 = v340 ^ v342;
        --v341;
    } while (v341);
    v343 = v339 ^ v338;
    v344 = v343 + v337;
    v345 = v344 ^ v340;
    v346 = v339 + v345;
    v347 = v343 - process(v339 + v345 - 320268553, v339 + v345, v345, v344, 1659671511LL);
    v348 = v347 + v344;
    v349 = playIntentKey[(unsigned __int8)v348 + 295] + v345;
    v350 = v349 ^ v346;
    v351 = process(v350 + 1510384990, v350, v349, v348, 3222982411LL) + v347;
    v352 = v349 + 1141841825 * (v348 ^ v351);
    v353 = v350 - playIntentKey[(unsigned __int8)(v349 - 95 * (v348 ^ v351)) + 204];
    v354 = v353 ^ v348;
    v355 = playIntentKey[(unsigned __int8)v354 + 299] + v352;
    v356 = v353 ^ v355;
    v357 = __ROL4__(v353 ^ v355, 9) ^ v351 ^ v353;
    v358 = v354 + v357 - 2008219468;
    v359 = v355 - playIntentKey[(unsigned __int8)(v354 + v357 - 76) + 95];
    v360 = v356 - v359;
    v361 = v357 - v360;
    v362 = v358 ^ __ROL4__(v361, 14);
    v363 = v359 - v362;
    v364 = v361 + ((__ROL4__(v360 - 330574507 * v363, 25) - 16905) ^ (v363 - 15832));
    v365 = v364 + v362;
    v366 = v363 ^ (2053674788 * v365);
    v367 = v360 - 330574507 * v363 + __ROL4__(v366, 15);
    v368 = v367 ^ v364;
    v369 = v365 ^ process(v368 + 2000534085, v368, v367, v366, 2595622576LL);
    v370 = v366 - v369;
    v371 = v367 + __ROL4__(v370, 14);
    v372 = v368 - v371 - v370;
    v373 = v369 ^ __ROL4__(v372, 28);
    v370 -= 1642285863;
    v374 = (v370 - v373) ^ v371;
    v375 = v372 ^ (v374 + v370 - v373);
    v376 = __ROL4__(v375, 16);
    v377 = v373 - v376;
    v378 = v370 - v376;
    v379 = v378 + v377 + v374;
    v380 = v375 ^ __ROL4__(v379, 18);
    v381 = v377 - v380;
    v382 = process(v381 + 1242239579, v381, v380, v379, 4262940966LL);
    v383 = v378 ^ v382;
    v384 = playIntentKey[(unsigned __int8)(v378 ^ v382) + 122] ^ v379;
    v385 = process(v384 - 2084284022, v384, v378 ^ v382, v381, 3871980340LL) ^ v380;
    v386 = v381 + 598310620 * v385;
    v387 = v383 - ((__ROL4__(v386, 26) + 5681) ^ (v385 + 3437));
    v388 = v384 + process(v387 + 1833376546, v387, v386, v385, 3555744326LL);
    v389 = v385 - v388;
    v390 = v386 ^ (v389 - 1906628798);
    v391 = v387 + process(v390 - 1859948925, v390, v389, v388, 3163490283LL);
    v392 = playIntentKey[(unsigned __int8)v391 + 319] + v388;
    v393 = v389 - v392;
    v394 = v390 ^ __ROL4__(v393, 23);
    v395 = v391 - v394;
    v396 = -886816887 * v395 + v392;
    v397 = v393 ^ (v396 + __ROL4__(v395, 28));
    v398 = v394 + ((__ROL4__(v397, 3) - 8755) ^ (v392 - 886816887 * v395 - 29158));
    v399 = v398 ^ v395;
    v400 = v396 + 2104654697 * v399;
    v401 = playIntentKey[(unsigned __int8)(v396 + 105 * v399) + 460] ^ v397;
    v402 = v398 - v401;
    v403 = v399 - v402 - 20504780;
    v404 = v400 ^ __ROL4__(v403, 2);
    v405 = v404 ^ v401;
    v406 = __ROL4__(v405, 19) + v402 + __ROL4__(v404, 5);
    v407 = v403 - v406;
    v408 = (v404 ^ (unsigned int)(1090861915 * v407)) + v407 + 884109382;
    v409 = v405 + __ROL4__(v404 ^ (1090861915 * v407), 20);
    v410 = v409 ^ v406;
    v411 = v407 + 884109382;
    v412 = v409 - v408;
    v413 = process(
        (unsigned int)(v412 - 1702366366),
        (unsigned int)(v412 + 1275070007),
        v408,
        (unsigned int)(v407 + 884109382 - v410),
        3952805703LL);
    v414 = v411 - v413;
    LODWORD(v408) = v414 + v408;
    v415 = v408 ^ (v412 + 1275070007);
    v416 = v415 + v408 + v410 - v413;
    v417 = v416 ^ v414;
    v418 = v417 ^ v408;
    if ((v418 & 0x100) != 0)
    {
        v419 = v415 + process(v417 - 638289709, v417, v416, v418, 2853420555LL);
        v420 = v419 ^ v416;
        v421 = v417 - v420;
        v422 = v420 ^ (v421 + v419 - 74094190);
        v423 = playIntentKey[(unsigned __int8)v422 + 302] ^ (v421 + 1511403681);
        v424 = v421 + v419 + 1511403681 - __ROL4__(v423, 12) - 1902429842;
        v425 = v422 - v424;
        v426 = v423 ^ (__ROL4__(v425, 10) + __ROL4__(v424, 20));
        v427 = v424 - ((__ROL4__(v426, 15) - 8683) ^ (v425 - 11749));
        v416 = (__ROL4__(v427, 4) - 722) ^ v425 ^ (v426 - 2004);
        v417 = v416 ^ v426;
        v415 = v418 ^ v427;
    }
    v428 = v415 - playIntentKey[(unsigned __int8)v417 + 403];
    v429 = v416 ^ __ROL4__(v428, 21);
    v430 = __ROL4__(v429, 11);
    v431 = __ROL4__(v428, 22);
    v432 = v430 + v418 + v431 - 1460;
    v433 = v430 + v418 + v431;
    v434 = v417 + (v432 ^ (v429 - 5272));
    v435 = v428 + 493436508 * v434;
    v436 = v429 - playIntentKey[(unsigned __int8)(v428 + 92 * v434) + 7];
    v437 = v433 ^ v434;
    v438 = v433 - v436;
    v1075 = v437;
    v439 = ((v437 >> 19) & 7) + 1;
    do
    {
        v1077 = v439;
        v440 = playIntentKey[(unsigned __int8)v438 + 2] ^ v435;
        v441 = v436 - playIntentKey[(unsigned __int8)v440 + 23];
        v442 = v441 + v438 - 1409813011;
        v443 = v440 - (__ROL4__(v442, 11) + __ROL4__(v441, 19));
        v444 = playIntentKey[(unsigned __int8)v443 + 73] + v441;
        v445 = v442 - v444;
        v446 = v443 - v445;
        v447 = v446 + v444;
        v448 = v445 + ((__ROL4__(v447, 14) + 19719) ^ (v446 + 12945));
        v449 = __ROL4__(v448, 15) + v446 + __ROL4__(v447, 23);
        v450 = v447 ^ process(v449 + 1067732014, v449, v448, v1075, 781948493LL);
        v451 = process(v450 - 1705541536, v450, v449, v1075, 62272032LL);
        v452 = (v448 ^ v451) + v449;
        v453 = v450 - playIntentKey[(unsigned __int8)v452 + 428];
        v454 = playIntentKey[(unsigned __int8)(v453 ^ v448 ^ v451) + 464] ^ v452;
        v436 = v454 + v453;
        v438 = (v453 ^ v448 ^ v451) + process(v454 + v453 + 717313069, v454 + v453, v454, v1075, 2167927547LL);
        v435 = v1075 ^ v454;
        --v439;
    } while (v1077 != 1);
    v455 = v435 - v438;
    v456 = v436 - 1681706036 * v455;
    v457 = (__PAIR64__(v436, v456) >> 2) + v1075 + __ROL4__(v455, 24);
    v458 = v438 + __ROL4__(v457, 18);
    v459 = v455 - __ROL4__(v458, 19);
    v460 = v456 ^ (v459 - 81386498);
    v461 = v457 - v460 - 2137975315;
    v462 = v458 ^ __ROL4__(v461, 9);
    if ((v462 & 0x20000) != 0)
    {
        v463 = v461 ^ v459;
        v464 = v463 ^ v460;
        v465 = v461 + process(v464 + 1304013820, v464, v463, v462, 3350170807LL);
        v466 = v463 ^ __ROL4__(v465, 21);
        v467 = v464 - v466;
        v468 = (__ROL4__(v467, 11) + 30495) ^ v465 ^ (v466 - 28525);
        v469 = v468 ^ v466;
        v470 = v467 + __ROL4__(v469, 26);
        v471 = v470 ^ v468;
        v472 = v469 - playIntentKey[(unsigned __int8)v471 + 153];
        v473 = v472 + v470;
        v474 = v473 + v471;
        v475 = v472 ^ (v474 + v473);
        v476 = v473 - v475;
        v477 = v474 - v476;
        v478 = v477 + v475;
        v460 = v476 - ((__ROL4__(v478, 15) - 15919) ^ (v477 - 23101));
        v461 = v477 - __ROL4__(v460, 4);
        v459 = v462 ^ v478;
    }
    v479 = v459 - v461;
    v480 = v460 - playIntentKey[(unsigned __int8)v479 + 146];
    v481 = __ROL4__(v480, 18);
    v482 = playIntentKey[(unsigned __int8)(v461 ^ (v481 + v462 + 125)) + 181] ^ v479;
    v483 = v480 ^ (v481 + v462);
    v484 = (v461 ^ (v481 + v462 + 411230333)) - __ROL4__(v483, 18);
    v485 = v484 + v482;
    v486 = v480 - (v482 + __ROL4__(v484 + v482, 1));
    v487 = v486 + v483;
    v488 = v484 - v487;
    v489 = v488 + v485;
    v490 = v486 ^ (__ROR4__(v489, 1) + __ROL4__(v488, 1));
    v491 = v487 - __ROL4__(v490, 10);
    v492 = v488 - v491;
    v493 = (~v492 >> 24) | 0xFFFFFFF8;
    do
    {
        v494 = (__ROL4__(v491, 24) + 11501) ^ v489 ^ (v490 + 2151);
        v495 = v490 - v494;
        v496 = v491 ^ (__ROL4__(v495, 14) + __ROL4__(v494, 10));
        v497 = v496 ^ v494;
        v498 = (__ROL4__(v497, 2) + 1266) ^ v495 ^ (v496 - 13331);
        v499 = v496 - v498;
        v500 = v497 - v499;
        v501 = v498 + v500 + 1042723588;
        v502 = v499 - process(v498 + v500 + 555136590, v501, v500, v492, 1975697538LL);
        v503 = v500 + process(v502 + 71007353, v502, v501, v492, 1584671376LL);
        v490 = playIntentKey[(unsigned __int8)v503 + 208] ^ v501;
        v491 = v502 - v490;
        v489 = v492 ^ v503;
        ++v493;
    } while (v493);
    if ((v491 & 0x10000) != 0)
    {
        v504 = v489 - v492;
        v505 = __ROL4__(v504, 9) + __ROL4__(v492, 27) + v490;
        v506 = v492 ^ __ROL4__(v505, 20);
        v507 = v504 + 680117032 * v506;
        v508 = v505 - playIntentKey[(unsigned __int8)v507 + 211];
        v509 = v506 + 415429289 * v508;
        v510 = v509 ^ v507;
        v511 = v508 - 2051267891 * v510;
        v512 = v509 - v511;
        v513 = v512 + v510;
        v490 = v513 ^ v511;
        v492 = v512 - (__ROL4__(v513 ^ v511, 19) + __ROL4__(v513, 1));
        v489 = v491 ^ v513;
    }
    v514 = v489 + __ROL4__(v492, 26);
    v515 = v514 ^ v490;
    v516 = playIntentKey[(unsigned __int8)v515 + 206] + v491;
    v517 = v492 - __ROL4__(v516, 16);
    v518 = v514 ^ (__ROL4__(v517, 19) + __ROL4__(v516, 5));
    v519 = v515 - playIntentKey[(unsigned __int8)v518 + 241];
    v520 = v519 + v516;
    v521 = v517 - playIntentKey[(unsigned __int8)v520 + 115];
    v522 = v521 + v518;
    v523 = v519 - 1950014230 * v522;
    v524 = v520 - playIntentKey[(unsigned __int8)(v519 - 22 * v522) + 402];
    v525 = v524 + v521;
    v526 = playIntentKey[(unsigned __int8)v525 + 458] + v522;
    v527 = playIntentKey[(unsigned __int8)v526 + 438] ^ v523;
    v528 = v524 ^ v525;
    v529 = v526 - __ROL4__(v528, 3);
    v530 = v527 ^ (v529 + v528);
    v531 = v524 - (v527 + __ROL4__(v530, 4));
    v532 = v531 ^ v528;
    v533 = v529 + __ROL4__(v532, 20);
    v534 = v530 - v533;
    v535 = v531 - 282695840 * v534;
    v536 = v532 - __ROL4__(v535, 11);
    v537 = (~v536 >> 2) | 0xFFFFFFF8;
    do
    {
        v538 = v533 ^ process(v535 + 2136666838, v535, v534, v536, 3454834097LL);
        v539 = v534 - v538;
        v540 = (v535 + 636153095 * (v534 - v538)) ^ v538;
        v534 = v534 - v538 + __ROR4__(v540, 1);
        v535 += playIntentKey[(unsigned __int8)v534 + 230] + 636153095 * v539;
        v533 = v536 ^ v540;
        ++v537;
    } while (v537);
    v541 = v534 - process(v535 + v533 + 261504297, v535 + v533, v535, v536, 2938209801LL);
    v542 = playIntentKey[(unsigned __int8)v541 + 73] ^ v536;
    v543 = v535 ^ __ROL4__(v542, 30);
    v544 = playIntentKey[(unsigned __int8)v543 + 88] ^ (v535 + v533);
    v545 = v541 ^ __ROL4__(v544, 13);
    v546 = v542 - v545 - 206884696;
    v547 = v543 ^ (__ROL4__(v546, 19) + __ROL4__(v545, 7));
    v548 = v544 - (__ROR4__(v547, 1) + __ROL4__(v546, 25));
    v549 = v545 - __ROL4__(v548, 30);
    v550 = v546 ^ __ROL4__(v549, 20);
    v551 = v547 - v550;
    v552 = v548 - v551;
    v553 = v549 - v552;
    v554 = v550 ^ (__ROL4__(v553, 11) + __ROL4__(v552, 20));
    v555 = v554 + v551;
    v556 = v552 ^ (v554 + v551 - 80470985);
    v557 = playIntentKey[(unsigned __int8)(v552 ^ (v554 + v551 + 55)) + 482] + v553;
    v558 = v554 - v557;
    v559 = playIntentKey[(unsigned __int8)v558 + 458] ^ v555;
    v560 = v559 ^ v556;
    v561 = v557 ^ (v560 - 592831104);
    v562 = v561 + v558;
    v563 = v559 ^ (v561 + v558 - 857518846);
    v564 = (v563 >> 31) + 1;
    do
    {
        v565 = v560 ^ (__ROL4__(v562, 16) + __ROL4__(v561, 11));
        v566 = v561 - v565;
        v567 = v562 ^ (__ROL4__(v566, 12) + __ROL4__(v565, 15));
        v568 = v565 - v567;
        v569 = __ROL4__(v568, 16) + v566 + __ROL4__(v567, 15);
        v570 = v569 ^ v567;
        v571 = __ROL4__(v570, 7);
        v572 = v568 - v571 + v569;
        v573 = v570 - (v572 + v568 - v571);
        v574 = v568 - v571 + 1692216251;
        v575 = v572 ^ (v574 - v573);
        v576 = v573 - v575;
        v577 = v574 - v575;
        v578 = v575 - v576 - v577;
        v579 = playIntentKey[(unsigned __int8)v578 + 209] + v576;
        v580 = v577 ^ (__ROL4__(v579, 20) + __ROL4__(v578, 1));
        v561 = v578 - ((__ROL4__(v580, 18) - 11849) ^ (v579 - 15031));
        v562 = v579 - (__ROL4__(v561, 26) + __ROL4__(v580, 6));
        v560 = v563 ^ v580;
        --v564;
    } while (v564);
    if ((v562 & 0x40000) != 0)
    {
        v581 = v560 - v563;
        v582 = v581 + v561 + 1975391211;
        v583 = v563 - playIntentKey[(unsigned __int8)v582 + 406];
        v584 = playIntentKey[(unsigned __int8)v583 + 461] + v581;
        v585 = v584 + v582;
        v586 = v584 - v583;
        v587 = (__ROL4__(v586, 11) + 27007) ^ (v583 - v585 + 440);
        v588 = v585 - v587;
        v589 = v583 - v587;
        v590 = v586 + __ROL4__(v589, 23);
        v561 = v588 - (__ROL4__(v590, 14) + __ROL4__(v589, 13));
        v563 = v561 + v589;
        v560 = v562 ^ v590;
    }
    if ((v563 & 0x80u) != 0)
    {
        v591 = (__ROL4__(v561 + v560 + v562 + 659453660, 28) + 8593) ^ v562 ^ (v560 + v562 - 82);
        v592 = __ROL4__(v591, 5) + v560 + v562;
        v593 = v592 + v561 + v560 + v562 + 659453660;
        v594 = v591 - ((__ROL4__(v593, 16) - 9602) ^ (v592 - 25310));
        v595 = v592 ^ (-1688017295 * v594);
        v596 = v593 ^ process(v595 - 2123587957, v595, v594, v563, 3085272242LL);
        v597 = v594 - v596;
        v598 = v595 - playIntentKey[(unsigned __int8)v597 + 62];
        v561 = v598 ^ v596;
        v560 = v563 ^ v598;
        v562 = v561 + v597;
    }
    v599 = v560 ^ v561;
    v600 = v560 - v562;
    v601 = v563 ^ __ROL4__(v599, 13);
    v602 = playIntentKey[(unsigned __int8)v601 + 85] ^ v562;
    v603 = v602 + v600;
    v604 = v599 - playIntentKey[(unsigned __int8)v603 + 141];
    v605 = v601 - __ROL4__(v604, 2);
    v606 = v605 + v602;
    v607 = v603 - 764295805 * v606;
    v608 = v604 - v607;
    v609 = v605 - v608;
    v610 = v606 - 96015316 * v609;
    v611 = v610 ^ v607;
    v612 = v608 - playIntentKey[(unsigned __int8)v611 + 55];
    v613 = v612 ^ v609;
    v614 = v610 - 1467230048 * v613;
    v615 = playIntentKey[(unsigned __int8)(v610 - 96 * v613) + 150] ^ v611;
    v616 = v612 - v615;
    v617 = v613 ^ (v616 - 962392959);
    v618 = v614 + playIntentKey[(unsigned __int8)(v613 ^ (v616 - 127)) + 44];
    v619 = v615 ^ (v618 + 2036999550);
    v620 = playIntentKey[(unsigned __int8)(v615 ^ (v614 + LOBYTE(playIntentKey[(unsigned __int8)(v613 ^ (v616 - 127)) + 44]) + 126)) + 297] + v616;
    v621 = v617 + __ROL4__(v620, 30);
    v622 = v618 - v620 - v621;
    v623 = v622 ^ v619;
    v624 = v620 ^ (v623 - 1980647883);
    v625 = v624 ^ v621;
    v626 = v622 - v625;
    v627 = v626 ^ v623;
    v628 = v624 + ((__ROL4__(v627, 4) - 30012) ^ (v626 + 14641));
    v629 = v625 + __ROL4__(v628, 24);
    v630 = v629 ^ v626;
    v631 = (HIWORD(v630) & 7) + 1;
    do
    {
        v632 = v629 + v627;
        v633 = v629 + playIntentKey[(unsigned __int8)v632 + 403] - v628;
        v634 = v632 + v629;
        v635 = v632 + v629 - 10197;
        v636 = v633 + v632;
        v637 = v634 + v633;
        v638 = v636 - ((__ROL4__(v637, 8) + 27039) ^ v635);
        v639 = v634 - __ROL4__(v638, 29);
        v640 = v639 + v637;
        v641 = v640 + v638;
        v642 = __ROL4__(v641, 21) + v639 + __ROL4__(v640, 1);
        v643 = v642 ^ v640;
        v644 = v641 - playIntentKey[(unsigned __int8)v643 + 403];
        v645 = v644 + v642 + 1725028027;
        v628 = v644 + v642;
        v629 = v643 ^ v645;
        v627 = v630 ^ v644;
        --v631;
    } while (v631);
    v646 = ((v629 >> 2) & 7) + 1;
    do
    {
        v647 = v627 - v630;
        v648 = v627 - v630 + v628;
        v649 = v627 + v628 - 2132895561;
        v650 = v648 + v649 + v647;
        v651 = v648 - __ROL4__(v650, 11);
        v652 = v649 - v651;
        v653 = v652 + v650;
        v654 = v651 - (__ROL4__(v653, 3) + __ROL4__(v652, 29));
        v655 = v652 - __ROL4__(v654, 2);
        v656 = playIntentKey[(unsigned __int8)v655 + 239] ^ v653;
        v657 = v656 ^ v654;
        v658 = v655 - v657;
        v659 = v656 ^ (429453240 * v658);
        v660 = v657 - playIntentKey[(unsigned __int8)(v656 ^ (-72 * v658)) + 312];
        v661 = v660 ^ v658;
        v662 = v661 ^ v659;
        v628 = v660 - 706707567 * v662;
        v630 = v661 - (__ROL4__(v628, 15) + __ROL4__(v662, 6));
        v627 = v629 ^ v662;
        --v646;
    } while (v646);
    v663 = v630 ^ v627;
    v664 = v663 + v628;
    v665 = v629 - 1761151959 * v664;
    v666 = v630 - v665;
    v667 = v663 + process(v666 + 12813317, v666, v665, v664, 4166917641LL);
    v668 = v667 ^ v664;
    v669 = v665 + 197906595 * v668;
    v670 = v666 + process(v669 - 260229908, v669, v668, v667, 540230834LL);
    v671 = v667 + 588867220 * v670;
    v672 = v671 ^ v668;
    v673 = v669 - (__ROL4__(v672, 19) + __ROL4__(v671, 7));
    v674 = v670 + __ROL4__(v673, 30);
    v675 = playIntentKey[(unsigned __int8)v674 + 56] + v671;
    v676 = v672 - v675 + 1064218701;
    v677 = __ROL4__(v676, 7) + v673 + __ROL4__(v675, 20);
    v678 = v674 ^ __ROL4__(v677, 18);
    v679 = v678 + v677 + v675;
    v680 = v679 ^ v676;
    v681 = v680 ^ v677;
    v682 = playIntentKey[(unsigned __int8)v681 + 218] + v678;
    v683 = v679 + __ROL4__(v682, 16);
    v684 = v683 + v680;
    v685 = v681 ^ (-1836855344 * v684);
    v686 = playIntentKey[(unsigned __int8)(v681 ^ (-48 * v684)) + 377] + v682;
    v687 = ((v686 >> 21) & 7) + 1;
    do
    {
        v688 = v683 ^ (v685 - 2071287222);
        v689 = v688 ^ v684;
        v690 = v685 - v688 - v689;
        v691 = v688 - v690;
        v692 = v689 - (__ROL4__(v691 + 507976322, 30) + __ROL4__(v690, 26));
        v693 = v690 - playIntentKey[(unsigned __int8)v692 + 62];
        v694 = __ROL4__(v693, 22) + v691 + 507976322;
        v695 = v694 + v692;
        v696 = v693 - 1830752117 * v695;
        v697 = v694 - __ROL4__(v696, 10);
        v684 = v695 - v697;
        v685 = v684 + v696;
        v683 = v686 ^ v697;
        --v687;
    } while (v687);
    v698 = (~v685 >> 27) | 0xFFFFFFF8;
    do
    {
        v699 = v683 + v686;
        v700 = (v686 + v683 + 59891385) ^ v684;
        v701 = v700 + v683;
        v702 = v699 ^ process(2020347603 - v701, -v701, v700, v685, 601839173LL);
        v684 = playIntentKey[(unsigned __int8)v702 + 410] ^ v700;
        v703 = v684 + v701;
        v686 = -337145712 - (v684 + v701);
        v683 = v685 ^ v702;
        ++v698;
    } while (v698);
    v704 = v683 + process(-468729058 - v703, v686, v685, v684, 2324939453LL);
    v705 = v704 + v684;
    v706 = v685 ^ (v684 + v704 + 2060245992);
    v707 = v686 ^ (__ROL4__(v706, 8) + __ROL4__(v704 + v684, 20));
    v708 = v704 - ((__ROL4__(v707, 19) + 1780) ^ (v706 - 7017));
    v709 = v708 + v705;
    v710 = v706 - ((__ROL4__(v709, 21) - 5198) ^ (v708 - 17321));
    v711 = v707 + __ROL4__(v710, 9);
    v712 = v708 + __ROL4__(v710, 2) + __ROL4__(v711, 22);
    v713 = v712 ^ v709;
    v714 = (__ROL4__(v713, 9) - 24417) ^ v710 ^ (v712 + 22988);
    v715 = v711 - process((unsigned int)(v714 - 661800693), v714, v713, v712, 4188381947LL);
    v716 = v715 + v712;
    v717 = process(v715 + v712 + 1975354298, v715 + v712, v715, (unsigned int)v714, 3797355786LL);
    v718 = v713 + v717;
    v719 = playIntentKey[(unsigned __int8)(v713 + v717) + 95];
    v720 = v715 ^ (v714 + v719 - 762304971);
    v721 = playIntentKey[(unsigned __int8)(v715 ^ (v714 + v719 + 53)) + 150] ^ v716;
    LODWORD(v714) = v718 + v714;
    v722 = v718 - v721;
    LODWORD(v714) = v719 + v714;
    v723 = v720 - (v714 + v722);
    v724 = v721 + process(v723 - 199131622, v723, (unsigned int)v714, v722, 2894035042LL);
    v725 = v722 ^ __ROL4__(v724, 11);
    LODWORD(v714) = v725 ^ v714;
    v726 = __ROL4__(v714, 8) + v723 + __ROL4__(v725, 16);
    v727 = playIntentKey[(unsigned __int8)v726 + 145] ^ v724;
    v728 = v725 + v727;
    v729 = v725 + v727 + v714;
    v730 = v726 - ((__ROL4__(v729, 30) + 2951) ^ (v727 + v725 - 30646));
    if ((v730 & 0x4000000) != 0)
    {
        v731 = v727 - v729;
        v732 = v728 ^ (-483382455 * v731);
        v733 = playIntentKey[(unsigned __int8)(v728 ^ (73 * v731)) + 242] + v729;
        v734 = playIntentKey[(unsigned __int8)v733 | 0x100] + v731;
        v735 = v734 ^ v732;
        v736 = v733 ^ (-206062592 * v735);
        v737 = playIntentKey[(unsigned __int8)(v734 ^ v733) + 327] + v735;
        v738 = v737 ^ v736;
        v739 = v734 ^ v737;
        v740 = v738 + ((__ROR4__(v734, 1) - 20729) ^ (v739 + 27199));
        v741 = v739 - playIntentKey[(unsigned __int8)v740 + 251];
        v742 = v734 + process(v741 + 1084058581, v741, v740, v730, 1725949259LL);
        v743 = v740 + v742;
        v744 = v741 - (v740 + v742);
        v728 = v742 - ((__ROR4__(v744, 1) + 13441) ^ (v740 + v742 - 3312));
        v729 = v743 - v728;
        v727 = v730 ^ v744;
    }
    v745 = ((unsigned __int8)v729 >> 5) + 1;
    do
    {
        v746 = v727 ^ (v730 + v728);
        v747 = v728 - v746;
        v748 = v746 ^ __ROL4__(v730 - v747, 28);
        v749 = (__ROL4__(v748, 4) + 5981) ^ (v730 - v747 - 28150);
        v750 = v749 + v747;
        v751 = v730 + v749;
        v752 = v748 - __ROL4__(v751, 17);
        v753 = v750 - v752;
        v754 = v751 + 346744644 * v753;
        v755 = v752 - v754 + 700696632;
        v756 = __ROL4__(v755, 29);
        v757 = v753 + __ROL4__(v754, 20);
        v728 = v756 + v757;
        v730 = playIntentKey[(unsigned __int8)(v756 + v757) + 155] ^ v754;
        v727 = v729 ^ v755;
        --v745;
    } while (v745);
    if ((v730 & 0x1000000) != 0)
    {
        v758 = v727 - v729 - v728;
        v759 = playIntentKey[(unsigned __int8)v758 + 275];
        v760 = v729 ^ (v759 + v728 + 1690684137);
        v761 = v759 + v728;
        v762 = v758 - __ROL4__(v760, 2);
        v763 = v760 - ((__ROL4__(v762 + v761, 21) - 12434) ^ (v762 - 28673));
        v764 = ((__ROL4__(v763, 8) - 23651) ^ (v762 + v761 + 21939)) + v762;
        v765 = v764 ^ (v762 + v761);
        v766 = (__ROL4__(v765, 9) - 31653) ^ v763 ^ (v764 + 11636);
        v767 = v764 ^ (__ROL4__(v766, 11) + __ROL4__(v765, 11));
        v768 = __ROL4__(v767, 13) + 27932;
        v769 = v765 + (v768 ^ (v766 + 3880));
        v770 = playIntentKey[(unsigned __int8)(v765 + (v768 ^ (v766 + 40))) + 351] + v766;
        v771 = playIntentKey[(unsigned __int8)v770 + 407] ^ v767;
        v772 = v769 - v771;
        v773 = playIntentKey[(unsigned __int8)v772 + 148] ^ v770;
        v774 = v771 - playIntentKey[(unsigned __int8)v773 + 203];
        v728 = v774 ^ v772;
        v729 = v728 ^ v773;
        v727 = v730 ^ v774;
    }
    v775 = v729 ^ v727;
    v776 = v728 - v775 + 144454253;
    v777 = v730 ^ v729;
    v778 = playIntentKey[(unsigned __int8)v777 + 436] + v775;
    v779 = v776 ^ (v778 + 964204938);
    v780 = v779 + v778 + v730 - v776;
    v781 = ((__ROL4__(v780, 26) + 8645) ^ (v779 - 23939)) + v777;
    v782 = v778 - v781;
    v783 = v779 - ((__ROL4__(v782, 20) - 922) ^ (v781 - 18498));
    v784 = v780 - v783;
    v785 = v784 + v781;
    if ((v785 & 0x10) != 0)
    {
        v786 = v784 + v782;
        v787 = v783 ^ (__ROL4__(v786, 3) + __ROL4__(v784, 11));
        v788 = v787 ^ v784;
        v789 = v786 - v788;
        v790 = v789 ^ v787;
        v784 = v788 - v790 + 1375274710;
        v782 = v785 ^ v789;
        v783 = v790;
    }
    v791 = ((v784 >> 10) & 7) + 1;
    do
    {
        v792 = v782 + 1624052262 * v785;
        v793 = v783 - playIntentKey[(unsigned __int8)v792 + 465];
        v794 = v785 - v793;
        v795 = v794 + v792;
        v783 = v793 + 1107267125 * v795;
        v785 = v783 + v795 + v794;
        v782 = v784 ^ v795;
        --v791;
    } while (v791);
    if ((v785 & 4) != 0)
    {
        v796 = v782 + process(v784 - 1547037017, v784, v783, v785, 2630262813LL);
        v797 = v783 ^ v784;
        v798 = v797 + v796 + 1676589091;
        v783 -= playIntentKey[(unsigned __int8)v798 + 460] + v796;
        v784 = v797 - __ROL4__(v783, 1);
        v782 = v785 ^ v798;
    }
    v799 = v782 + ((__ROL4__(v784, 5) - 23619) ^ (v785 + 11302));
    v800 = v783 ^ __ROL4__(v799, 26);
    v801 = v785 - v800;
    v802 = playIntentKey[(unsigned __int8)v801 + 59] ^ v784;
    v803 = v802 + v799;
    v804 = v800 ^ process(v802 + v799 - 130239392, v802 + v799, v802, v801, 439320605LL);
    v805 = playIntentKey[(unsigned __int8)v804 + 95] + v801;
    v806 = v805 ^ v802;
    v807 = v803 - v806;
    v808 = v804 - v807;
    v809 = playIntentKey[(unsigned __int8)v808 + 145] ^ v805;
    v810 = v806 ^ __ROL4__(v809, 6);
    v811 = v808 - __ROL4__(v807 ^ (v810 + v809), 29);
    v812 = v811 + v809 + 1049294792;
    v813 = v812 + v810 + v811;
    v814 = v807 ^ (v810 + v809) ^ __ROL4__(v813, 1);
    v815 = v814 + v811 - 1417402388;
    v816 = v812 - __ROL4__(v815, 2);
    v817 = v816 + v813;
    v818 = ((unsigned int)~v817 >> 9) | 0xFFFFFFF8;
    do
    {
        v819 = v814 - 1080843959 * v816;
        v820 = v819 ^ v815;
        v821 = v816 - v820;
        v822 = v821 + v819;
        v823 = v822 ^ v820;
        v824 = v823 + v822 + v821;
        v825 = playIntentKey[(unsigned __int8)v824 + 181] ^ v822;
        v826 = v823 ^ v824;
        v827 = v823 - v825;
        v828 = v826 ^ v825;
        v829 = v827 + playIntentKey[(unsigned __int8)v828 + 90];
        v830 = v829 ^ v826;
        v831 = v828 - ((__ROL4__(v830, 25) + 27746) ^ (v829 + 20240));
        v832 = v829 ^ (__ROL4__(v831, 1) + __ROL4__(v830, 17));
        v833 = playIntentKey[(unsigned __int8)v832 + 480] ^ v830;
        v834 = v831 + ((__ROL4__(v833, 15) - 15470) ^ (v832 - 2024));
        v815 = v832 - v834;
        v816 = v833 - v815;
        v814 = v817 ^ v834;
        ++v818;
    } while (v818);
    v835 = v814 - v816;
    v836 = v815 - v835;
    v837 = playIntentKey[(unsigned __int8)(v836 + 79) + 92] ^ v817;
    v838 = __ROL4__(v837, 29) + v816;
    v839 = v835 ^ process(v838 + 46159881, v838, v837, (unsigned int)(v836 + 412762447), 1415513387LL);
    v840 = __ROL4__(v839, 11) + v836 + 412762447;
    v841 = v840 ^ v837;
    v842 = __ROL4__(v841, 18);
    v843 = v838 + __ROL4__(v840, 3);
    v844 = v839 - (v843 + v842);
    v845 = v840 - ((__ROL4__(v844, 18) + 1066) ^ (v843 + v842 - 29825));
    v846 = v845 + v841;
    v847 = v846 ^ (v843 + v842);
    v848 = v844 ^ __ROL4__(v847, 1);
    v849 = v845 - v848;
    v850 = v846 ^ (__ROL4__(v849, 10) + __ROL4__(v848, 16));
    v851 = v847 - v850;
    v852 = v851 + v848;
    v853 = v849 - playIntentKey[(unsigned __int8)v852 + 225];
    v854 = v850 - __ROL4__(v853, 21);
    v855 = playIntentKey[(unsigned __int8)v854 + 6] + v851;
    if ((v855 & 0x80u) != 0)
    {
        v856 = (__ROL4__(v854, 27) + 24041) ^ v852 ^ (v853 + 2205);
        v857 = v853 - v856;
        v858 = v854 - v857;
        v859 = v856 - process(v858 - 1337828203, v858, v857, v855, 2260363948LL);
        v860 = playIntentKey[(unsigned __int8)v859 + 239] ^ v857;
        v861 = v858 - v860;
        v862 = v859 - v861;
        v853 = v860 ^ process(v862 - 299071805, v862, v861, v855, 3824011857LL);
        v852 = v855 ^ v862;
        v854 = (__ROL4__(v853, 4) - 31150) ^ v861 ^ (v862 - 10168);
    }
    v863 = v852 + __ROL4__(v855, 15) + __ROL4__(v854, 11);
    v864 = v853 + ((v863 + 15557) ^ (v854 - 22633));
    v865 = v855 ^ __ROL4__(v864, 29);
    v866 = __ROL4__(v865, 20) + v854 + __ROL4__(v864, 10);
    v867 = playIntentKey[(unsigned __int8)v866 + 458] ^ v863;
    v868 = v864 - v867;
    v869 = v865 + 1810732786 * v868;
    v870 = v866 - v869;
    v871 = v867 - playIntentKey[(unsigned __int8)v870 + 254];
    v872 = v868 - v871;
    v873 = v869 - v872 + 1375575319;
    v874 = playIntentKey[(unsigned __int8)v873 + 148] ^ v870;
    v875 = v871 - v874;
    v876 = v873 - __ROL4__(v875 + v872 + 1766535944, 30);
    v877 = v876 + v874;
    v878 = playIntentKey[(unsigned __int8)v877 + 258];
    v879 = (v875 + v872 + 1766535944) ^ __ROL4__(v875 + v878 + 1766535944, 2);
    v880 = v877;
    v881 = (v875 + v878 + 1766535944) ^ v877;
    v882 = (__ROL4__(v879, 10) + 31419) ^ v876 ^ (v875 + v878 + 1766511009);
    v883 = v880 - v882;
    v884 = v882 - v879;
    v885 = v879 - v881;
    v886 = __ROL4__(v884, 16) + v883 + __ROL4__(v885, 12);
    v887 = playIntentKey[(unsigned __int8)v886 + 486] ^ v881;
    v888 = v885 ^ __ROL4__(v887, 27);
    v889 = v884 - v888;
    v890 = playIntentKey[(unsigned __int8)v889 + 143] ^ v886;
    v891 = v890 + v887;
    v892 = v888 ^ (-744082064 * v891);
    v893 = v889 + process(v892 - 1941374416, v892, v891, v890, 188891886LL);
    v894 = v893 ^ v890;
    if ((v894 & 0x2000000) != 0)
    {
        v895 = 456959289 * v893 + v891;
        v896 = v895 + v892;
        v893 -= process(v892 + v895 - 1740136979, v895 + v892, v895, v894, 2216400012LL);
        v891 = v894 ^ v895;
        v892 = v896;
    }
    v897 = (v893 >> 31) + 1;
    do
    {
        v898 = v891 ^ (v894 + v892);
        v892 -= __ROL4__(v898, 28);
        v894 ^= v892 + v898;
        v891 = v893 ^ v898;
        --v897;
    } while (v897);
    v899 = v891 ^ (v894 + 146824026);
    v900 = (unsigned int)v899 + v892;
    v901 = (unsigned int)v900 ^ v893;
    //v902 = (v901 << 32) | (__ROL4__(v901, 10) + 24183) ^ v894 ^ ((_DWORD)v899 + v892 + 29249);
    
    auto index_0 = (__ROL4__(v901, 10) + 24183) ^ v894 ^ ((uint32_t)v899 + v892 + 29249);
    memcpy(dst + 3 * 4, &v899, 4);
	memcpy(dst + 2 * 4, &v900, 4);
	memcpy(dst + 1 * 4, &v901, 4);
	memcpy(dst + 0 * 4, &index_0, 4);
}

void bind_key(const uint8 decrypted_key[16], const uint8 file_id[20], uint8 dst[16])
{
    uint64 z1, z2, z3, z4;
    memcpy(&z1, decrypted_key + 8, 8);
    memcpy(&z2, decrypted_key + 0, 8);
    memcpy(&z3, file_id + 8, 8);
    memcpy(&z4, file_id + 0, 8);

    for (uint8 i = 0; i < 0x20; ++i)
    {
        z1 = z4 ^ (__ROR8__(z1, 8) + z2);
        z2 = z1 ^ (__ROL8__(z2, 3));
        z3 = i ^ (__ROR8__(z3, 8) + z4);
        z4 = z3 ^ (__ROL8__(z4, 3));
    }

    memcpy(dst + 0, &z2, 8);
    memcpy(dst + 8, &z1, 8);
}

extern "C"
void ppdecrypt(const uint8 key_basis[16], const uint8 file_id[20], uint8 dst[16]) {
    uint8 buf[16];
    decrypt_main(key_basis, buf);
    bind_key(buf, file_id, dst);
}
