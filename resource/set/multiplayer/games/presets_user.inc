; == STANDARD ==
(define "standard_user"
	{common
		{unitset
			{value "all"}
			{available "all artillery heavyart cannon mediumcan heavycan arcade light medium heavy sheavy hero inf_only sniper_only supply ger_militia rus_militia ger_smg rus_smg rus_rifeman ger_rifeman rus_elita ger_elita rus_stormt ger_stormt rus_mexa ger_mexa rus_ap ger_ap rus_at ger_at rus_sappers ger_sappers ger_rifle rus_rifle rus_onesmg ger_onesmg rus_tankman ger_tankman rus_atrifle ger_atrifle rus_bazook ger_bazook rus_mgs ger_mgs rus_stormtrooper ger_stormtrooper rus_stormtrooper2 ger_stormtrooper2 rus_stormtrooper3 ger_stormtrooper3 rus_flamer ger_flamer rus_sniper ger_sniper rus_officer ger_officer ger_r12 ger_kubel ger_sd251 ger_blitz3_6 ger_blitz3_6art ger_blitz3_6eng rus_m72 rus_gaz67b rus_m3 rus_zis5 rus_zis5art rus_zis5eng ger_mg42stan ger_flak38 ger_sgrw42 ger_pak36 ger_pak38 ger_pak40 ger_flak37 ger_lefh18 ger_sfh18 ger_wespe ger_hummel ger_sdkfz4 rus_degstan rus_dshkstan rus_bm37 rus_m37 rus_zis3 rus_zis2 rus_k61 rus_m30 rus_d1 rus_su122 rus_isu152 rus_bm13 ger_pz1b ger_sdkfz223 ger_pz1 rus_ba64 rus_ba11 rus_t26 ger_sdkfz222 ger_pz2l ger_sdkfz234 ger_welberwind ger_ostwind rus_t60 rus_t70 rus_zsu37 ger_pz3f ger_pz3 ger_pz3n ger_pz4g ger_pz4h ger_pz6e ger_pz5g ger_pz6bh rus_bt7a rus_t34_0 rus_t34_2 rus_t34_1 rus_kv1 rus_t34_3 rus_kv85 rus_is1 rus_is2 rus_is3 ger_hetzer ger_stug3g ger_nashorn ger_jagdpanzer_iv ger_jagpanther ger_elefant ger_jagdtiger rus_su76 rus_zis_30 rus_su85 rus_isu122 rus_su100"}
			{title_exclude ""}
		}
		{commandPoints "*=%cp"}
		{unitLimits ""}
		{balancingFactorBonus {cp 1.0} {mp 1.0} }
		{chargeFactors
			{value "*=1.0"}
			{available "*=0 *=0.5 *=1.0 *=1.5 *=2.0 *=2.5 *=5.0 *=10.0"}
		}
		{budgets
			{vehicle
				{mode "standard"}
				{resource 
					{start 		%start}
					{finish 	%finish}
					{growTime	1500}		; in seconds
					{growTable 	"0.65 0.65 0.65 0.70 0.70 0.70 0.75 0.75 0.75 0.80 0.80 0.80 0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.90 0.90 0.90 1.00"}
					{payback
						{cp 		"0		25		50 		60		70		80		90"}
						{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
					}
				} 
				{buttons "squad1 squad2 v1 v2 v3 v4 v5"}
			}
			{hero
				{resource 
					{start 		10}
				} 
				{buttons "hero"}
				{tag "special"}
			}
		} 
	}
	{bots
		(include "bots_generic.inc")
	}
)


; == CUSTOM ==
(define "custom_user"
	{common
		{unitset
			{value "all"}
			{available "all artillery heavyart cannon mediumcan heavycan arcade light medium heavy sheavy hero inf_only sniper_only supply ger_militia rus_militia ger_smg rus_smg rus_rifeman ger_rifeman rus_elita ger_elita rus_stormt ger_stormt rus_mexa ger_mexa rus_ap ger_ap rus_at ger_at rus_sappers ger_sappers ger_rifle rus_rifle rus_onesmg ger_onesmg rus_tankman ger_tankman rus_atrifle ger_atrifle rus_bazook ger_bazook rus_mgs ger_mgs rus_stormtrooper ger_stormtrooper rus_stormtrooper2 ger_stormtrooper2 rus_stormtrooper3 ger_stormtrooper3 rus_flamer ger_flamer rus_sniper ger_sniper rus_officer ger_officer ger_r12 ger_kubel ger_sd251 ger_blitz3_6 ger_blitz3_6art ger_blitz3_6eng rus_m72 rus_gaz67b rus_m3 rus_zis5 rus_zis5art rus_zis5eng ger_mg42stan ger_flak38 ger_sgrw42 ger_pak36 ger_pak38 ger_pak40 ger_flak37 ger_lefh18 ger_sfh18 ger_wespe ger_hummel ger_sdkfz4 rus_degstan rus_dshkstan rus_bm37 rus_m37 rus_zis3 rus_zis2 rus_k61 rus_m30 rus_d1 rus_su122 rus_isu152 rus_bm13 ger_pz1b ger_sdkfz223 ger_pz1 rus_ba64 rus_ba11 rus_t26 ger_sdkfz222 ger_pz2l ger_sdkfz234 ger_welberwind ger_ostwind rus_t60 rus_t70 rus_zsu37 ger_pz3f ger_pz3 ger_pz3n ger_pz4g ger_pz4h ger_pz6e ger_pz5g ger_pz6bh rus_bt7a rus_t34_0 rus_t34_2 rus_t34_1 rus_kv1 rus_t34_3 rus_kv85 rus_is1 rus_is2 rus_is3 ger_hetzer ger_stug3g ger_nashorn ger_jagdpanzer_iv ger_jagpanther ger_elefant ger_jagdtiger rus_su76 rus_zis_30 rus_su85 rus_isu122 rus_su100"}
			{title_exclude ""}
		}
		{commandPoints "*=%cp"}
		{unitLimits ""}
		{balancingFactorBonus {cp 1.0} {mp 1.0} }
		{chargeFactors
			{value "*=1"}
			{available "*=0 *=0.5 *=1.0 *=1.5 *=2.0 *=2.5 *=5.0 *=10.0"}
		}
		{budgets
			{vehicle
				{mode "custom"}
				{resource 
					{start 		%start}
					{finish 	%finish}
					{growTime	1500}		; in seconds
					{growTable 	"0.65 0.65 0.65 0.70 0.70 0.70 0.75 0.75 0.75 0.80 0.80 0.80 0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.90 0.90 0.90 1.00"}
					{payback
						{cp 		"0		25		50 		60		70		80		90"}  
						{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
					}
					{limitmin	1000}
					{limitmax	50000}
					{speedset 	"2500 3000 3500 4000 4500 5000 8000 10000 20000 50000"}
				} 
				{buttons "squad1 squad2 v1 v2 v3 v4 v5"}
			}
			{hero
				{resource 
					{start 		10}
				} 
				{buttons "hero"}
				{tag "special"}
			}
		} 
	}
	{bots
		(include "bots_generic.inc")
	}
)


;------------------------------------------------------------------------------------------------------------
{presets
	{"s:standard_100_user"	
		{gameMode "standard"}
		{unitMode "user"}
		{specMode "all_normal"}
		("standard_user" 		start(160) finish(3000) cp(999))
	}
	{"s:standard_160_user"	
		{gameMode "standard"}
		{unitMode "user"}
		{specMode "all_high"}
		("standard_user" 		start(600) finish(4000) cp(999))
	}
	
;------------------------------------------------------------------------------------------------------------
	{"c:custom_50_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_50"}
		("custom_user" 			start(160) finish(3000) cp(999)) 
	}
	{"c:custom_60_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_60"}
		("custom_user" 			start(160) finish(3000) cp(999)) 
	}
	{"c:custom_80_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_80"}
		("custom_user" 			start(160) finish(3000) cp(999)) 
	}
	{"c:custom_100_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_100"}
		("custom_user" 			start(160) finish(3000) cp(999))
	}
	{"c:custom_120_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_120"}
		("custom_user"  		start(160) finish(3000) cp(999))
	}
	{"c:custom_140_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_140"}
		("custom_user"  		start(160) finish(3000) cp(999))
	}
	{"c:custom_160_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_160"}
		("custom_user"  		start(160) finish(3000) cp(999))
	}
	{"c:custom_180_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_180"}
		("custom_user"  		start(160) finish(3000) cp(999))
	}
	{"c:custom_200_user"
		{gameMode "custom"}
		{unitMode "user"}
		{specMode "cp_200"}
		("custom_user"  		start(160) finish(3000) cp(9999))
	}
;------------------------------------------------------------------------------------------------------------
}