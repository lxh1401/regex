#include "_regex_unicode.h"

#define RE_PROP_CN 0
#define RE_PROP_LU 1
#define RE_PROP_LL 2
#define RE_PROP_LT 3
#define RE_PROP_LM 4
#define RE_PROP_LO 5
#define RE_PROP_MN 6
#define RE_PROP_ME 7
#define RE_PROP_MC 8
#define RE_PROP_ND 9
#define RE_PROP_NL 10
#define RE_PROP_NO 11
#define RE_PROP_ZS 12
#define RE_PROP_ZL 13
#define RE_PROP_ZP 14
#define RE_PROP_CC 15
#define RE_PROP_CF 16
#define RE_PROP_CO 17
#define RE_PROP_CS 18
#define RE_PROP_PD 19
#define RE_PROP_PS 20
#define RE_PROP_PE 21
#define RE_PROP_PC 22
#define RE_PROP_PO 23
#define RE_PROP_SM 24
#define RE_PROP_SC 25
#define RE_PROP_SK 26
#define RE_PROP_SO 27
#define RE_PROP_PI 28
#define RE_PROP_PF 29

char* re_strings[] = {
    "-1/2",
    "0",
    "1",
    "1/10",
    "1/16",
    "1/2",
    "1/3",
    "1/4",
    "1/5",
    "1/6",
    "1/7",
    "1/8",
    "1/9",
    "10",
    "100",
    "1000",
    "10000",
    "100000",
    "100000000",
    "1000000000000",
    "103",
    "107",
    "11",
    "11/2",
    "118",
    "12",
    "122",
    "129",
    "13",
    "13/2",
    "130",
    "132",
    "14",
    "15",
    "15/2",
    "16",
    "17",
    "17/2",
    "18",
    "19",
    "2",
    "2/3",
    "2/5",
    "20",
    "200",
    "2000",
    "20000",
    "202",
    "21",
    "214",
    "216",
    "218",
    "22",
    "220",
    "222",
    "224",
    "226",
    "228",
    "23",
    "230",
    "232",
    "233",
    "234",
    "24",
    "240",
    "25",
    "26",
    "27",
    "28",
    "29",
    "3",
    "3/16",
    "3/2",
    "3/4",
    "3/5",
    "3/8",
    "30",
    "300",
    "3000",
    "30000",
    "31",
    "32",
    "33",
    "34",
    "35",
    "36",
    "37",
    "38",
    "39",
    "4",
    "4/5",
    "40",
    "400",
    "4000",
    "40000",
    "41",
    "42",
    "43",
    "44",
    "45",
    "46",
    "47",
    "48",
    "49",
    "5",
    "5/2",
    "5/6",
    "5/8",
    "50",
    "500",
    "5000",
    "50000",
    "6",
    "60",
    "600",
    "6000",
    "60000",
    "7",
    "7/2",
    "7/8",
    "70",
    "700",
    "7000",
    "70000",
    "8",
    "80",
    "800",
    "8000",
    "80000",
    "84",
    "9",
    "9/2",
    "90",
    "900",
    "9000",
    "90000",
    "91",
    "A",
    "ABOVE",
    "ABOVELEFT",
    "ABOVERIGHT",
    "AEGEANNUMBERS",
    "AHEX",
    "AI",
    "AIN",
    "AL",
    "ALAPH",
    "ALCHEMICALSYMBOLS",
    "ALEF",
    "ALETTER",
    "ALNUM",
    "ALPHA",
    "ALPHABETIC",
    "ALPHABETICPRESENTATIONFORMS",
    "ALPHANUMERIC",
    "AMBIGUOUS",
    "AN",
    "ANCIENTGREEKMUSICALNOTATION",
    "ANCIENTGREEKNUMBERS",
    "ANCIENTSYMBOLS",
    "ANY",
    "AR",
    "ARAB",
    "ARABIC",
    "ARABICLETTER",
    "ARABICNUMBER",
    "ARABICPRESENTATIONFORMSA",
    "ARABICPRESENTATIONFORMSB",
    "ARABICSUPPLEMENT",
    "ARMENIAN",
    "ARMI",
    "ARMN",
    "ARROWS",
    "ASCII",
    "ASCIIHEXDIGIT",
    "ASSIGNED",
    "AT",
    "ATA",
    "ATAR",
    "ATB",
    "ATERM",
    "ATTACHEDABOVE",
    "ATTACHEDABOVERIGHT",
    "ATTACHEDBELOW",
    "AVESTAN",
    "AVST",
    "B",
    "B2",
    "BA",
    "BALI",
    "BALINESE",
    "BAMU",
    "BAMUM",
    "BAMUMSUPPLEMENT",
    "BASICLATIN",
    "BATAK",
    "BATK",
    "BB",
    "BC",
    "BEH",
    "BELOW",
    "BELOWLEFT",
    "BELOWRIGHT",
    "BENG",
    "BENGALI",
    "BETH",
    "BIDIC",
    "BIDICLASS",
    "BIDICONTROL",
    "BK",
    "BL",
    "BLANK",
    "BLK",
    "BLOCK",
    "BLOCKELEMENTS",
    "BN",
    "BOPO",
    "BOPOMOFO",
    "BOPOMOFOEXTENDED",
    "BOUNDARYNEUTRAL",
    "BOXDRAWING",
    "BR",
    "BRAH",
    "BRAHMI",
    "BRAI",
    "BRAILLE",
    "BRAILLEPATTERNS",
    "BREAKAFTER",
    "BREAKBEFORE",
    "BREAKBOTH",
    "BREAKSYMBOLS",
    "BUGI",
    "BUGINESE",
    "BUHD",
    "BUHID",
    "BURUSHASKIYEHBARREE",
    "BYZANTINEMUSICALSYMBOLS",
    "C",
    "C&",
    "CAN",
    "CANADIANABORIGINAL",
    "CANADIANSYLLABICS",
    "CANONICAL",
    "CANONICALCOMBININGCLASS",
    "CANS",
    "CARI",
    "CARIAN",
    "CARRIAGERETURN",
    "CASED",
    "CASEIGNORABLE",
    "CB",
    "CC",
    "CCC",
    "CF",
    "CHAM",
    "CHANGESWHENCASEFOLDED",
    "CHANGESWHENCASEMAPPED",
    "CHANGESWHENLOWERCASED",
    "CHANGESWHENTITLECASED",
    "CHANGESWHENUPPERCASED",
    "CHER",
    "CHEROKEE",
    "CI",
    "CIRCLE",
    "CJKCOMPATIBILITY",
    "CJKCOMPATIBILITYFORMS",
    "CJKCOMPATIBILITYIDEOGRAPHS",
    "CJKCOMPATIBILITYIDEOGRAPHSSUPPLEMENT",
    "CJKRADICALSSUPPLEMENT",
    "CJKSTROKES",
    "CJKSYMBOLSANDPUNCTUATION",
    "CJKUNIFIEDIDEOGRAPHS",
    "CJKUNIFIEDIDEOGRAPHSEXTENSIONA",
    "CJKUNIFIEDIDEOGRAPHSEXTENSIONB",
    "CJKUNIFIEDIDEOGRAPHSEXTENSIONC",
    "CJKUNIFIEDIDEOGRAPHSEXTENSIOND",
    "CL",
    "CLOSE",
    "CLOSEPARENTHESIS",
    "CLOSEPUNCTUATION",
    "CM",
    "CN",
    "CNTRL",
    "CO",
    "COM",
    "COMBININGDIACRITICALMARKS",
    "COMBININGDIACRITICALMARKSFORSYMBOLS",
    "COMBININGDIACRITICALMARKSSUPPLEMENT",
    "COMBININGHALFMARKS",
    "COMBININGMARK",
    "COMBININGMARKSFORSYMBOLS",
    "COMMON",
    "COMMONINDICNUMBERFORMS",
    "COMMONSEPARATOR",
    "COMPAT",
    "COMPLEXCONTEXT",
    "CONNECTORPUNCTUATION",
    "CONTINGENTBREAK",
    "CONTROL",
    "CONTROLPICTURES",
    "COPT",
    "COPTIC",
    "COUNTINGRODNUMERALS",
    "CP",
    "CPRT",
    "CR",
    "CS",
    "CUNEIFORM",
    "CUNEIFORMNUMBERSANDPUNCTUATION",
    "CURRENCYSYMBOL",
    "CURRENCYSYMBOLS",
    "CWCF",
    "CWCM",
    "CWL",
    "CWT",
    "CWU",
    "CYPRIOT",
    "CYPRIOTSYLLABARY",
    "CYRILLIC",
    "CYRILLICEXTENDEDA",
    "CYRILLICEXTENDEDB",
    "CYRILLICSUPPLEMENT",
    "CYRILLICSUPPLEMENTARY",
    "CYRL",
    "D",
    "DA",
    "DAL",
    "DALATHRISH",
    "DASH",
    "DASHPUNCTUATION",
    "DB",
    "DE",
    "DECIMAL",
    "DECIMALNUMBER",
    "DECOMPOSITIONTYPE",
    "DEFAULTIGNORABLECODEPOINT",
    "DEP",
    "DEPRECATED",
    "DESERET",
    "DEVA",
    "DEVANAGARI",
    "DEVANAGARIEXTENDED",
    "DI",
    "DIA",
    "DIACRITIC",
    "DIGIT",
    "DINGBATS",
    "DOMINOTILES",
    "DOUBLEABOVE",
    "DOUBLEBELOW",
    "DSRT",
    "DT",
    "DUALJOINING",
    "E",
    "EA",
    "EASTASIANWIDTH",
    "EGYP",
    "EGYPTIANHIEROGLYPHS",
    "EMOTICONS",
    "EN",
    "ENC",
    "ENCLOSEDALPHANUMERICS",
    "ENCLOSEDALPHANUMERICSUPPLEMENT",
    "ENCLOSEDCJKLETTERSANDMONTHS",
    "ENCLOSEDIDEOGRAPHICSUPPLEMENT",
    "ENCLOSINGMARK",
    "ES",
    "ET",
    "ETHI",
    "ETHIOPIC",
    "ETHIOPICEXTENDED",
    "ETHIOPICEXTENDEDA",
    "ETHIOPICSUPPLEMENT",
    "EUROPEANNUMBER",
    "EUROPEANSEPARATOR",
    "EUROPEANTERMINATOR",
    "EX",
    "EXCLAMATION",
    "EXT",
    "EXTEND",
    "EXTENDER",
    "EXTENDNUMLET",
    "F",
    "FALSE",
    "FARSIYEH",
    "FE",
    "FEH",
    "FIN",
    "FINAL",
    "FINALPUNCTUATION",
    "FINALSEMKATH",
    "FO",
    "FONT",
    "FORMAT",
    "FRA",
    "FRACTION",
    "FULLWIDTH",
    "GAF",
    "GAMAL",
    "GC",
    "GCB",
    "GENERALCATEGORY",
    "GENERALPUNCTUATION",
    "GEOMETRICSHAPES",
    "GEOR",
    "GEORGIAN",
    "GEORGIANSUPPLEMENT",
    "GL",
    "GLAG",
    "GLAGOLITIC",
    "GLUE",
    "GOTH",
    "GOTHIC",
    "GRAPH",
    "GRAPHEMEBASE",
    "GRAPHEMECLUSTERBREAK",
    "GRAPHEMEEXTEND",
    "GRAPHEMELINK",
    "GRBASE",
    "GREEK",
    "GREEKANDCOPTIC",
    "GREEKEXTENDED",
    "GREK",
    "GREXT",
    "GRLINK",
    "GUJARATI",
    "GUJR",
    "GURMUKHI",
    "GURU",
    "H",
    "H2",
    "H3",
    "HAH",
    "HALFWIDTH",
    "HALFWIDTHANDFULLWIDTHFORMS",
    "HAMZAONHEHGOAL",
    "HAN",
    "HANG",
    "HANGUL",
    "HANGULCOMPATIBILITYJAMO",
    "HANGULJAMO",
    "HANGULJAMOEXTENDEDA",
    "HANGULJAMOEXTENDEDB",
    "HANGULSYLLABLES",
    "HANGULSYLLABLETYPE",
    "HANI",
    "HANO",
    "HANUNOO",
    "HE",
    "HEBR",
    "HEBREW",
    "HEH",
    "HEHGOAL",
    "HETH",
    "HEX",
    "HEXDIGIT",
    "HIGHPRIVATEUSESURROGATES",
    "HIGHSURROGATES",
    "HIRA",
    "HIRAGANA",
    "HST",
    "HY",
    "HYPHEN",
    "ID",
    "IDC",
    "IDCONTINUE",
    "IDEO",
    "IDEOGRAPHIC",
    "IDEOGRAPHICDESCRIPTIONCHARACTERS",
    "IDS",
    "IDSB",
    "IDSBINARYOPERATOR",
    "IDST",
    "IDSTART",
    "IDSTRINARYOPERATOR",
    "IMPERIALARAMAIC",
    "IN",
    "INFIXNUMERIC",
    "INHERITED",
    "INIT",
    "INITIAL",
    "INITIALPUNCTUATION",
    "INSCRIPTIONALPAHLAVI",
    "INSCRIPTIONALPARTHIAN",
    "INSEPARABLE",
    "INSEPERABLE",
    "IOTASUBSCRIPT",
    "IPAEXTENSIONS",
    "IS",
    "ISO",
    "ISOLATED",
    "ITAL",
    "JAVA",
    "JAVANESE",
    "JG",
    "JL",
    "JOINC",
    "JOINCAUSING",
    "JOINCONTROL",
    "JOININGGROUP",
    "JOININGTYPE",
    "JT",
    "JV",
    "KA",
    "KAF",
    "KAITHI",
    "KALI",
    "KANA",
    "KANASUPPLEMENT",
    "KANAVOICING",
    "KANBUN",
    "KANGXIRADICALS",
    "KANNADA",
    "KAPH",
    "KATAKANA",
    "KATAKANAPHONETICEXTENSIONS",
    "KAYAHLI",
    "KHAPH",
    "KHAR",
    "KHAROSHTHI",
    "KHMER",
    "KHMERSYMBOLS",
    "KHMR",
    "KNDA",
    "KNOTTEDHEH",
    "KTHI",
    "KV",
    "L",
    "L&",
    "LAM",
    "LAMADH",
    "LANA",
    "LAO",
    "LAOO",
    "LATIN",
    "LATIN1",
    "LATIN1SUPPLEMENT",
    "LATINEXTENDEDA",
    "LATINEXTENDEDADDITIONAL",
    "LATINEXTENDEDB",
    "LATINEXTENDEDC",
    "LATINEXTENDEDD",
    "LATN",
    "LB",
    "LE",
    "LEADINGJAMO",
    "LEFT",
    "LEFTTORIGHT",
    "LEFTTORIGHTEMBEDDING",
    "LEFTTORIGHTOVERRIDE",
    "LEPC",
    "LEPCHA",
    "LETTER",
    "LETTERLIKESYMBOLS",
    "LETTERNUMBER",
    "LF",
    "LIMB",
    "LIMBU",
    "LINB",
    "LINEARB",
    "LINEARBIDEOGRAMS",
    "LINEARBSYLLABARY",
    "LINEBREAK",
    "LINEFEED",
    "LINESEPARATOR",
    "LISU",
    "LL",
    "LM",
    "LO",
    "LOE",
    "LOGICALORDEREXCEPTION",
    "LOWER",
    "LOWERCASE",
    "LOWERCASELETTER",
    "LOWSURROGATES",
    "LRE",
    "LRO",
    "LT",
    "LU",
    "LV",
    "LVSYLLABLE",
    "LVT",
    "LVTSYLLABLE",
    "LYCI",
    "LYCIAN",
    "LYDI",
    "LYDIAN",
    "M",
    "M&",
    "MAHJONGTILES",
    "MALAYALAM",
    "MAND",
    "MANDAIC",
    "MANDATORYBREAK",
    "MARK",
    "MATH",
    "MATHEMATICALALPHANUMERICSYMBOLS",
    "MATHEMATICALOPERATORS",
    "MATHSYMBOL",
    "MB",
    "MC",
    "ME",
    "MED",
    "MEDIAL",
    "MEEM",
    "MEETEIMAYEK",
    "MIDLETTER",
    "MIDNUM",
    "MIDNUMLET",
    "MIM",
    "MISCELLANEOUSMATHEMATICALSYMBOLSA",
    "MISCELLANEOUSMATHEMATICALSYMBOLSB",
    "MISCELLANEOUSSYMBOLS",
    "MISCELLANEOUSSYMBOLSANDARROWS",
    "MISCELLANEOUSSYMBOLSANDPICTOGRAPHS",
    "MISCELLANEOUSTECHNICAL",
    "ML",
    "MLYM",
    "MN",
    "MODIFIERLETTER",
    "MODIFIERSYMBOL",
    "MODIFIERTONELETTERS",
    "MONG",
    "MONGOLIAN",
    "MTEI",
    "MUSICALSYMBOLS",
    "MYANMAR",
    "MYANMAREXTENDEDA",
    "MYMR",
    "N",
    "N&",
    "NA",
    "NAN",
    "NAR",
    "NARROW",
    "NB",
    "NCHAR",
    "ND",
    "NEUTRAL",
    "NEWLINE",
    "NEWTAILUE",
    "NEXTLINE",
    "NK",
    "NKO",
    "NKOO",
    "NL",
    "NO",
    "NOBLOCK",
    "NOBREAK",
    "NOJOININGGROUP",
    "NONCHARACTERCODEPOINT",
    "NONE",
    "NONJOINING",
    "NONSPACINGMARK",
    "NONSTARTER",
    "NOON",
    "NOTAPPLICABLE",
    "NOTREORDERED",
    "NR",
    "NS",
    "NSM",
    "NT",
    "NU",
    "NUKTA",
    "NUMBER",
    "NUMBERFORMS",
    "NUMERIC",
    "NUMERICTYPE",
    "NUMERICVALUE",
    "NUN",
    "NV",
    "NYA",
    "OALPHA",
    "ODI",
    "OGAM",
    "OGHAM",
    "OGREXT",
    "OIDC",
    "OIDS",
    "OLCHIKI",
    "OLCK",
    "OLDITALIC",
    "OLDPERSIAN",
    "OLDSOUTHARABIAN",
    "OLDTURKIC",
    "OLETTER",
    "OLOWER",
    "OMATH",
    "ON",
    "OP",
    "OPENPUNCTUATION",
    "OPTICALCHARACTERRECOGNITION",
    "ORIYA",
    "ORKH",
    "ORYA",
    "OSMA",
    "OSMANYA",
    "OTHER",
    "OTHERALPHABETIC",
    "OTHERDEFAULTIGNORABLECODEPOINT",
    "OTHERGRAPHEMEEXTEND",
    "OTHERIDCONTINUE",
    "OTHERIDSTART",
    "OTHERLETTER",
    "OTHERLOWERCASE",
    "OTHERMATH",
    "OTHERNEUTRAL",
    "OTHERNUMBER",
    "OTHERPUNCTUATION",
    "OTHERSYMBOL",
    "OTHERUPPERCASE",
    "OUPPER",
    "OV",
    "OVERLAY",
    "P",
    "P&",
    "PARAGRAPHSEPARATOR",
    "PATSYN",
    "PATTERNSYNTAX",
    "PATTERNWHITESPACE",
    "PATWS",
    "PC",
    "PD",
    "PDF",
    "PE",
    "PF",
    "PHAG",
    "PHAGSPA",
    "PHAISTOSDISC",
    "PHLI",
    "PHNX",
    "PHOENICIAN",
    "PHONETICEXTENSIONS",
    "PHONETICEXTENSIONSSUPPLEMENT",
    "PI",
    "PLAYINGCARDS",
    "PO",
    "POPDIRECTIONALFORMAT",
    "POSTFIXNUMERIC",
    "PP",
    "PR",
    "PREFIXNUMERIC",
    "PREPEND",
    "PRINT",
    "PRIVATEUSE",
    "PRIVATEUSEAREA",
    "PRTI",
    "PS",
    "PUNCT",
    "PUNCTUATION",
    "QAAC",
    "QAAI",
    "QAF",
    "QAPH",
    "QMARK",
    "QU",
    "QUOTATION",
    "QUOTATIONMARK",
    "R",
    "RADICAL",
    "REH",
    "REJANG",
    "REVERSEDPE",
    "RIGHT",
    "RIGHTJOINING",
    "RIGHTTOLEFT",
    "RIGHTTOLEFTEMBEDDING",
    "RIGHTTOLEFTOVERRIDE",
    "RJNG",
    "RLE",
    "RLO",
    "RUMINUMERALSYMBOLS",
    "RUNIC",
    "RUNR",
    "S",
    "S&",
    "SA",
    "SAD",
    "SADHE",
    "SAMARITAN",
    "SAMR",
    "SARB",
    "SAUR",
    "SAURASHTRA",
    "SB",
    "SC",
    "SCONTINUE",
    "SCRIPT",
    "SD",
    "SE",
    "SEEN",
    "SEGMENTSEPARATOR",
    "SEMKATH",
    "SENTENCEBREAK",
    "SEP",
    "SEPARATOR",
    "SG",
    "SHAVIAN",
    "SHAW",
    "SHIN",
    "SINH",
    "SINHALA",
    "SK",
    "SM",
    "SMALL",
    "SMALLFORMVARIANTS",
    "SML",
    "SO",
    "SOFTDOTTED",
    "SP",
    "SPACE",
    "SPACESEPARATOR",
    "SPACINGMARK",
    "SPACINGMODIFIERLETTERS",
    "SPECIALS",
    "SQR",
    "SQUARE",
    "ST",
    "STERM",
    "SUB",
    "SUND",
    "SUNDANESE",
    "SUP",
    "SUPER",
    "SUPERSCRIPTSANDSUBSCRIPTS",
    "SUPPLEMENTALARROWSA",
    "SUPPLEMENTALARROWSB",
    "SUPPLEMENTALMATHEMATICALOPERATORS",
    "SUPPLEMENTALPUNCTUATION",
    "SUPPLEMENTARYPRIVATEUSEAREAA",
    "SUPPLEMENTARYPRIVATEUSEAREAB",
    "SURROGATE",
    "SWASHKAF",
    "SY",
    "SYLO",
    "SYLOTINAGRI",
    "SYMBOL",
    "SYRC",
    "SYRIAC",
    "SYRIACWAW",
    "T",
    "TAGALOG",
    "TAGB",
    "TAGBANWA",
    "TAGS",
    "TAH",
    "TAILE",
    "TAITHAM",
    "TAIVIET",
    "TAIXUANJINGSYMBOLS",
    "TALE",
    "TALU",
    "TAMIL",
    "TAML",
    "TAVT",
    "TAW",
    "TEHMARBUTA",
    "TEHMARBUTAGOAL",
    "TELU",
    "TELUGU",
    "TERM",
    "TERMINALPUNCTUATION",
    "TETH",
    "TFNG",
    "TGLG",
    "THAA",
    "THAANA",
    "THAI",
    "TIBETAN",
    "TIBT",
    "TIFINAGH",
    "TITLECASELETTER",
    "TRAILINGJAMO",
    "TRANSPARENT",
    "TRANSPORTANDMAPSYMBOLS",
    "TRUE",
    "U",
    "UGAR",
    "UGARITIC",
    "UIDEO",
    "UNASSIGNED",
    "UNIFIEDCANADIANABORIGINALSYLLABICS",
    "UNIFIEDCANADIANABORIGINALSYLLABICSEXTENDED",
    "UNIFIEDIDEOGRAPH",
    "UNKNOWN",
    "UP",
    "UPPER",
    "UPPERCASE",
    "UPPERCASELETTER",
    "V",
    "VAI",
    "VAII",
    "VARIATIONSELECTOR",
    "VARIATIONSELECTORS",
    "VARIATIONSELECTORSSUPPLEMENT",
    "VEDICEXTENSIONS",
    "VERT",
    "VERTICAL",
    "VERTICALFORMS",
    "VIRAMA",
    "VOWELJAMO",
    "VR",
    "VS",
    "W",
    "WAW",
    "WB",
    "WHITESPACE",
    "WIDE",
    "WJ",
    "WORD",
    "WORDBREAK",
    "WORDJOINER",
    "WS",
    "WSPACE",
    "XDIGIT",
    "XIDC",
    "XIDCONTINUE",
    "XIDS",
    "XIDSTART",
    "XPEO",
    "XSUX",
    "XX",
    "Y",
    "YEH",
    "YEHBARREE",
    "YEHWITHTAIL",
    "YES",
    "YI",
    "YIII",
    "YIJINGHEXAGRAMSYMBOLS",
    "YIRADICALS",
    "YISYLLABLES",
    "YUDH",
    "YUDHHE",
    "Z",
    "Z&",
    "ZAIN",
    "ZHAIN",
    "ZINH",
    "ZL",
    "ZP",
    "ZS",
    "ZW",
    "ZWSPACE",
    "ZYYY",
    "ZZZZ",
};

/* strings: 12068 bytes. */

RE_Property re_properties[] = {
    {399, 0, 0},
    {401, 0, 0},
    {212, 1, 1},
    {213, 1, 1},
    {785, 2, 2},
    {787, 2, 2},
    {905, 3, 3},
    {910, 3, 3},
    {400, 4, 4},
    {415, 4, 4},
    {784, 5, 5},
    {793, 5, 5},
    {595, 6, 6},
    {151, 7, 6},
    {152, 7, 6},
    {571, 8, 6},
    {572, 8, 6},
    {886, 9, 6},
    {887, 9, 6},
    {248, 10, 6},
    {249, 11, 6},
    {262, 11, 6},
    {257, 12, 6},
    {313, 12, 6},
    {259, 13, 6},
    {315, 13, 6},
    {258, 14, 6},
    {314, 14, 6},
    {255, 15, 6},
    {311, 15, 6},
    {256, 16, 6},
    {312, 16, 6},
    {469, 17, 6},
    {473, 17, 6},
    {464, 18, 6},
    {465, 18, 6},
    {917, 19, 6},
    {918, 19, 6},
    {915, 20, 6},
    {916, 20, 6},
    {335, 21, 6},
    {342, 21, 6},
    {416, 22, 6},
    {423, 22, 6},
    {414, 23, 6},
    {418, 23, 6},
    {417, 24, 6},
    {424, 24, 6},
    {810, 25, 6},
    {906, 25, 6},
    {913, 25, 6},
    {206, 26, 6},
    {208, 26, 6},
    {496, 27, 6},
    {498, 27, 6},
    {328, 28, 6},
    {462, 29, 6},
    {754, 30, 6},
    {757, 30, 6},
    {860, 31, 6},
    {861, 31, 6},
    {687, 32, 6},
    {705, 32, 6},
    {454, 33, 6},
    {455, 33, 6},
    {142, 34, 6},
    {174, 34, 6},
    {672, 35, 6},
    {698, 35, 6},
    {466, 36, 6},
    {467, 36, 6},
    {343, 37, 6},
    {344, 37, 6},
    {378, 38, 6},
    {380, 38, 6},
    {686, 39, 6},
    {704, 39, 6},
    {710, 40, 6},
    {711, 40, 6},
    {636, 41, 6},
    {650, 41, 6},
    {676, 42, 6},
    {700, 42, 6},
    {470, 43, 6},
    {471, 43, 6},
    {472, 44, 6},
    {474, 44, 6},
    {759, 45, 6},
    {879, 46, 6},
    {883, 46, 6},
    {673, 47, 6},
    {699, 47, 6},
    {336, 48, 6},
    {337, 48, 6},
    {788, 49, 6},
    {808, 49, 6},
    {569, 50, 6},
    {570, 50, 6},
    {678, 51, 6},
    {702, 51, 6},
    {677, 52, 6},
    {701, 52, 6},
    {818, 53, 6},
    {892, 54, 6},
    {902, 54, 6},
    {719, 55, 6},
    {720, 55, 6},
    {717, 56, 6},
    {718, 56, 6},
    {444, 57, 7},
    {460, 57, 7},
    {198, 58, 8},
    {207, 58, 8},
    {243, 59, 9},
    {252, 59, 9},
    {334, 60, 10},
    {351, 60, 10},
    {354, 61, 11},
    {355, 61, 11},
    {494, 62, 12},
    {499, 62, 12},
    {500, 63, 13},
    {501, 63, 13},
    {543, 64, 14},
    {562, 64, 14},
    {661, 65, 15},
    {667, 65, 15},
    {668, 66, 16},
    {670, 66, 16},
    {150, 67, 6},
    {154, 67, 6},
    {160, 68, 6},
    {173, 69, 6},
    {175, 70, 6},
    {211, 71, 6},
    {413, 72, 6},
    {743, 73, 6},
    {909, 74, 6},
    {914, 75, 6},
};

/* properties: 556 bytes. */

RE_PropertyValue re_property_values[] = {
    {281, 0, 0},
    {880, 0, 0},
    {578, 0, 1},
    {888, 0, 1},
    {566, 0, 2},
    {573, 0, 2},
    {577, 0, 3},
    {871, 0, 3},
    {567, 0, 4},
    {619, 0, 4},
    {568, 0, 5},
    {703, 0, 5},
    {618, 0, 6},
    {653, 0, 6},
    {365, 0, 7},
    {601, 0, 7},
    {600, 0, 8},
    {812, 0, 8},
    {333, 0, 9},
    {345, 0, 9},
    {637, 0, 9},
    {554, 0, 10},
    {645, 0, 10},
    {646, 0, 11},
    {707, 0, 11},
    {811, 0, 12},
    {941, 0, 12},
    {564, 0, 13},
    {939, 0, 13},
    {716, 0, 14},
    {940, 0, 14},
    {251, 0, 15},
    {282, 0, 15},
    {298, 0, 15},
    {253, 0, 16},
    {393, 0, 16},
    {283, 0, 17},
    {744, 0, 17},
    {306, 0, 18},
    {831, 0, 18},
    {329, 0, 19},
    {722, 0, 19},
    {690, 0, 20},
    {747, 0, 20},
    {279, 0, 21},
    {724, 0, 21},
    {296, 0, 22},
    {721, 0, 22},
    {708, 0, 23},
    {736, 0, 23},
    {598, 0, 24},
    {803, 0, 24},
    {309, 0, 25},
    {785, 0, 25},
    {620, 0, 26},
    {802, 0, 26},
    {709, 0, 27},
    {807, 0, 27},
    {481, 0, 28},
    {734, 0, 28},
    {389, 0, 29},
    {725, 0, 29},
    {237, 0, 30},
    {238, 0, 30},
    {697, 0, 30},
    {527, 0, 31},
    {528, 0, 31},
    {552, 0, 31},
    {587, 0, 32},
    {588, 0, 32},
    {594, 0, 32},
    {629, 0, 33},
    {630, 0, 33},
    {664, 0, 33},
    {714, 0, 34},
    {715, 0, 34},
    {748, 0, 34},
    {749, 0, 34},
    {774, 0, 35},
    {775, 0, 35},
    {836, 0, 35},
    {795, 0, 36},
    {934, 0, 36},
    {935, 0, 36},
    {647, 1, 0},
    {173, 1, 1},
    {194, 1, 1},
    {535, 1, 2},
    {536, 1, 2},
    {537, 1, 3},
    {539, 1, 4},
    {487, 1, 5},
    {813, 1, 6},
    {285, 1, 7},
    {419, 1, 8},
    {420, 1, 8},
    {318, 1, 9},
    {321, 1, 10},
    {322, 1, 10},
    {169, 1, 11},
    {450, 1, 12},
    {163, 1, 13},
    {838, 1, 14},
    {168, 1, 15},
    {866, 1, 16},
    {643, 1, 17},
    {779, 1, 18},
    {592, 1, 19},
    {340, 1, 20},
    {204, 1, 21},
    {427, 1, 22},
    {425, 1, 23},
    {692, 1, 24},
    {852, 1, 25},
    {859, 1, 26},
    {512, 1, 27},
    {590, 1, 28},
    {801, 1, 29},
    {867, 1, 30},
    {532, 1, 31},
    {868, 1, 32},
    {626, 1, 33},
    {405, 1, 34},
    {440, 1, 35},
    {369, 1, 36},
    {372, 1, 37},
    {261, 1, 38},
    {241, 1, 39},
    {881, 1, 39},
    {675, 1, 40},
    {772, 1, 41},
    {841, 1, 42},
    {447, 1, 43},
    {234, 1, 44},
    {843, 1, 45},
    {520, 1, 46},
    {623, 1, 47},
    {882, 1, 48},
    {557, 1, 49},
    {846, 1, 50},
    {640, 1, 51},
    {521, 1, 52},
    {232, 1, 53},
    {847, 1, 54},
    {190, 1, 55},
    {821, 1, 56},
    {195, 1, 57},
    {551, 1, 58},
    {679, 1, 59},
    {895, 1, 60},
    {732, 1, 61},
    {733, 1, 62},
    {287, 1, 63},
    {538, 1, 64},
    {421, 1, 65},
    {402, 1, 66},
    {824, 1, 67},
    {310, 1, 68},
    {286, 1, 69},
    {290, 1, 69},
    {553, 1, 70},
    {665, 1, 71},
    {172, 1, 72},
    {597, 1, 73},
    {615, 1, 74},
    {299, 1, 75},
    {691, 1, 76},
    {361, 1, 77},
    {220, 1, 78},
    {214, 1, 79},
    {403, 1, 80},
    {612, 1, 81},
    {346, 1, 82},
    {610, 1, 83},
    {825, 1, 84},
    {226, 1, 85},
    {826, 1, 86},
    {611, 1, 87},
    {827, 1, 88},
    {613, 1, 89},
    {409, 1, 90},
    {540, 1, 91},
    {301, 1, 92},
    {406, 1, 93},
    {870, 1, 94},
    {370, 1, 95},
    {319, 1, 96},
    {828, 1, 97},
    {268, 1, 98},
    {511, 1, 99},
    {468, 1, 100},
    {270, 1, 101},
    {459, 1, 102},
    {514, 1, 103},
    {217, 1, 104},
    {439, 1, 105},
    {510, 1, 106},
    {218, 1, 107},
    {269, 1, 108},
    {515, 1, 109},
    {363, 1, 110},
    {264, 1, 111},
    {272, 1, 112},
    {929, 1, 113},
    {271, 1, 114},
    {931, 1, 115},
    {930, 1, 116},
    {565, 1, 117},
    {890, 1, 118},
    {320, 1, 119},
    {192, 1, 120},
    {621, 1, 121},
    {541, 1, 122},
    {835, 1, 123},
    {292, 1, 124},
    {727, 1, 125},
    {783, 1, 126},
    {341, 1, 127},
    {516, 1, 128},
    {761, 1, 129},
    {441, 1, 130},
    {493, 1, 131},
    {254, 1, 132},
    {627, 1, 133},
    {848, 1, 134},
    {371, 1, 135},
    {605, 1, 136},
    {443, 1, 137},
    {442, 1, 138},
    {457, 1, 139},
    {456, 1, 140},
    {574, 1, 141},
    {744, 1, 142},
    {745, 1, 142},
    {266, 1, 143},
    {153, 1, 144},
    {166, 1, 145},
    {893, 1, 146},
    {898, 1, 147},
    {288, 1, 148},
    {265, 1, 149},
    {805, 1, 150},
    {167, 1, 151},
    {434, 1, 152},
    {814, 1, 153},
    {561, 1, 154},
    {560, 1, 155},
    {141, 1, 156},
    {158, 1, 157},
    {159, 1, 158},
    {728, 1, 159},
    {584, 1, 160},
    {246, 1, 161},
    {681, 1, 162},
    {412, 1, 163},
    {878, 1, 164},
    {682, 1, 165},
    {338, 1, 166},
    {797, 1, 167},
    {696, 1, 168},
    {317, 1, 169},
    {475, 1, 170},
    {731, 1, 171},
    {586, 1, 172},
    {519, 1, 173},
    {683, 1, 174},
    {184, 1, 175},
    {483, 1, 176},
    {482, 1, 177},
    {684, 1, 178},
    {771, 1, 179},
    {223, 1, 180},
    {505, 1, 181},
    {307, 1, 182},
    {308, 1, 183},
    {357, 1, 184},
    {193, 1, 185},
    {508, 1, 186},
    {236, 1, 187},
    {625, 1, 188},
    {157, 1, 189},
    {849, 1, 190},
    {302, 1, 191},
    {596, 1, 192},
    {589, 1, 193},
    {347, 1, 194},
    {735, 1, 195},
    {362, 1, 196},
    {364, 1, 197},
    {614, 1, 198},
    {358, 1, 199},
    {874, 1, 200},
    {147, 1, 201},
    {273, 1, 202},
    {274, 1, 203},
    {275, 1, 204},
    {267, 1, 205},
    {844, 1, 206},
    {894, 1, 207},
    {829, 1, 208},
    {830, 1, 209},
    {884, 2, 0},
    {945, 2, 0},
    {291, 2, 1},
    {944, 2, 1},
    {534, 2, 2},
    {542, 2, 2},
    {419, 2, 3},
    {422, 2, 3},
    {318, 2, 4},
    {323, 2, 4},
    {169, 2, 5},
    {171, 2, 5},
    {449, 2, 6},
    {450, 2, 6},
    {162, 2, 7},
    {163, 2, 7},
    {837, 2, 8},
    {838, 2, 8},
    {865, 2, 9},
    {866, 2, 9},
    {339, 2, 10},
    {340, 2, 10},
    {203, 2, 11},
    {204, 2, 11},
    {427, 2, 12},
    {428, 2, 12},
    {425, 2, 13},
    {426, 2, 13},
    {692, 2, 14},
    {694, 2, 14},
    {852, 2, 15},
    {853, 2, 15},
    {858, 2, 16},
    {859, 2, 16},
    {512, 2, 17},
    {523, 2, 17},
    {590, 2, 18},
    {617, 2, 18},
    {800, 2, 19},
    {801, 2, 19},
    {867, 2, 20},
    {532, 2, 21},
    {533, 2, 21},
    {868, 2, 22},
    {869, 2, 22},
    {626, 2, 23},
    {628, 2, 23},
    {404, 2, 24},
    {405, 2, 24},
    {437, 2, 25},
    {438, 2, 25},
    {368, 2, 26},
    {369, 2, 26},
    {260, 2, 27},
    {261, 2, 27},
    {240, 2, 28},
    {244, 2, 28},
    {674, 2, 29},
    {675, 2, 29},
    {772, 2, 30},
    {773, 2, 30},
    {520, 2, 31},
    {522, 2, 31},
    {622, 2, 32},
    {623, 2, 32},
    {458, 2, 33},
    {459, 2, 33},
    {507, 2, 34},
    {514, 2, 34},
    {216, 2, 35},
    {217, 2, 35},
    {436, 2, 36},
    {445, 2, 36},
    {927, 2, 37},
    {928, 2, 37},
    {491, 2, 38},
    {681, 2, 38},
    {411, 2, 39},
    {412, 2, 39},
    {338, 2, 40},
    {350, 2, 40},
    {478, 2, 41},
    {751, 2, 41},
    {938, 2, 41},
    {841, 2, 42},
    {864, 2, 42},
    {446, 2, 43},
    {447, 2, 43},
    {233, 2, 44},
    {234, 2, 44},
    {842, 2, 45},
    {843, 2, 45},
    {556, 2, 46},
    {557, 2, 46},
    {846, 2, 47},
    {850, 2, 47},
    {558, 2, 48},
    {559, 2, 48},
    {877, 2, 49},
    {878, 2, 49},
    {797, 2, 50},
    {798, 2, 50},
    {695, 2, 51},
    {696, 2, 51},
    {304, 2, 52},
    {316, 2, 52},
    {224, 2, 53},
    {225, 2, 53},
    {231, 2, 54},
    {232, 2, 54},
    {300, 2, 55},
    {301, 2, 55},
    {750, 2, 55},
    {640, 2, 56},
    {851, 2, 56},
    {408, 2, 57},
    {409, 2, 57},
    {863, 2, 58},
    {870, 2, 58},
    {834, 2, 59},
    {835, 2, 59},
    {682, 2, 60},
    {919, 2, 60},
    {518, 2, 61},
    {519, 2, 61},
    {189, 2, 62},
    {190, 2, 62},
    {307, 2, 63},
    {920, 2, 63},
    {730, 2, 64},
    {731, 2, 64},
    {726, 2, 65},
    {727, 2, 65},
    {643, 2, 66},
    {644, 2, 66},
    {820, 2, 67},
    {821, 2, 67},
    {550, 2, 68},
    {551, 2, 68},
    {679, 2, 69},
    {680, 2, 69},
    {890, 2, 70},
    {891, 2, 70},
    {782, 2, 71},
    {783, 2, 71},
    {506, 2, 72},
    {516, 2, 72},
    {761, 2, 73},
    {768, 2, 73},
    {583, 2, 74},
    {584, 2, 74},
    {245, 2, 75},
    {246, 2, 75},
    {585, 2, 76},
    {586, 2, 76},
    {254, 2, 77},
    {531, 2, 78},
    {847, 2, 78},
    {848, 2, 79},
    {854, 2, 79},
    {184, 2, 80},
    {185, 2, 80},
    {356, 2, 81},
    {357, 2, 81},
    {779, 2, 82},
    {780, 2, 82},
    {565, 2, 83},
    {191, 2, 84},
    {192, 2, 84},
    {492, 2, 85},
    {493, 2, 85},
    {605, 2, 86},
    {624, 2, 86},
    {170, 2, 87},
    {475, 2, 87},
    {683, 2, 88},
    {781, 2, 88},
    {483, 2, 89},
    {746, 2, 89},
    {482, 2, 90},
    {729, 2, 90},
    {684, 2, 91},
    {693, 2, 91},
    {505, 2, 92},
    {525, 2, 92},
    {195, 2, 93},
    {196, 2, 93},
    {222, 2, 94},
    {223, 2, 94},
    {591, 2, 95},
    {592, 2, 95},
    {697, 3, 0},
    {921, 3, 0},
    {305, 3, 1},
    {555, 3, 2},
    {639, 3, 3},
    {645, 3, 3},
    {379, 3, 4},
    {391, 3, 5},
    {393, 3, 5},
    {503, 3, 6},
    {514, 3, 6},
    {149, 3, 7},
    {544, 3, 7},
    {606, 3, 8},
    {616, 3, 8},
    {607, 3, 9},
    {618, 3, 9},
    {599, 3, 10},
    {608, 3, 10},
    {662, 3, 11},
    {666, 3, 11},
    {376, 3, 12},
    {381, 3, 12},
    {697, 4, 0},
    {921, 4, 0},
    {305, 4, 1},
    {555, 4, 2},
    {281, 4, 3},
    {298, 4, 3},
    {376, 4, 4},
    {379, 4, 4},
    {739, 4, 5},
    {742, 4, 5},
    {803, 4, 6},
    {812, 4, 6},
    {527, 4, 7},
    {889, 4, 8},
    {840, 4, 9},
    {579, 4, 10},
    {581, 4, 11},
    {697, 5, 0},
    {921, 5, 0},
    {305, 5, 1},
    {555, 5, 2},
    {376, 5, 3},
    {379, 5, 3},
    {789, 5, 4},
    {794, 5, 4},
    {391, 5, 5},
    {393, 5, 5},
    {809, 5, 6},
    {568, 5, 7},
    {571, 5, 7},
    {885, 5, 8},
    {886, 5, 8},
    {544, 5, 9},
    {685, 5, 9},
    {662, 5, 10},
    {666, 5, 10},
    {176, 5, 11},
    {180, 5, 11},
    {817, 5, 12},
    {818, 5, 12},
    {276, 5, 13},
    {277, 5, 13},
    {785, 5, 14},
    {786, 5, 14},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {631, 7, 0},
    {656, 7, 0},
    {527, 7, 1},
    {545, 7, 1},
    {889, 7, 2},
    {900, 7, 2},
    {840, 7, 3},
    {872, 7, 3},
    {579, 7, 4},
    {580, 7, 4},
    {581, 7, 5},
    {582, 7, 5},
    {527, 8, 1},
    {547, 8, 1},
    {758, 8, 2},
    {765, 8, 2},
    {359, 8, 3},
    {373, 8, 3},
    {366, 8, 4},
    {374, 8, 4},
    {367, 8, 5},
    {375, 8, 5},
    {156, 8, 6},
    {165, 8, 6},
    {293, 8, 7},
    {306, 8, 7},
    {186, 8, 8},
    {716, 8, 8},
    {774, 8, 9},
    {791, 8, 9},
    {906, 8, 10},
    {912, 8, 10},
    {688, 8, 11},
    {706, 8, 11},
    {215, 8, 12},
    {219, 8, 12},
    {653, 8, 13},
    {660, 8, 13},
    {145, 8, 14},
    {164, 8, 14},
    {549, 8, 15},
    {576, 8, 15},
    {767, 8, 16},
    {770, 8, 16},
    {548, 8, 17},
    {575, 8, 17},
    {766, 8, 18},
    {769, 8, 18},
    {723, 8, 19},
    {737, 8, 19},
    {1, 9, 1},
    {657, 9, 1},
    {658, 9, 1},
    {2, 9, 2},
    {712, 9, 2},
    {713, 9, 2},
    {117, 9, 3},
    {642, 9, 3},
    {663, 9, 3},
    {124, 9, 4},
    {509, 9, 4},
    {526, 9, 4},
    {130, 9, 5},
    {899, 9, 5},
    {901, 9, 5},
    {13, 9, 6},
    {22, 9, 7},
    {25, 9, 8},
    {28, 9, 9},
    {32, 9, 10},
    {33, 9, 11},
    {35, 9, 12},
    {36, 9, 13},
    {38, 9, 14},
    {39, 9, 15},
    {43, 9, 16},
    {48, 9, 17},
    {52, 9, 18},
    {58, 9, 19},
    {63, 9, 20},
    {65, 9, 21},
    {66, 9, 22},
    {67, 9, 23},
    {68, 9, 24},
    {69, 9, 25},
    {76, 9, 26},
    {80, 9, 27},
    {81, 9, 28},
    {82, 9, 29},
    {83, 9, 30},
    {84, 9, 31},
    {85, 9, 32},
    {129, 9, 33},
    {136, 9, 34},
    {20, 9, 35},
    {21, 9, 36},
    {24, 9, 37},
    {26, 9, 38},
    {27, 9, 39},
    {30, 9, 40},
    {31, 9, 41},
    {47, 9, 42},
    {179, 9, 42},
    {183, 9, 42},
    {49, 9, 43},
    {177, 9, 43},
    {181, 9, 43},
    {50, 9, 44},
    {178, 9, 44},
    {182, 9, 44},
    {51, 9, 45},
    {201, 9, 45},
    {210, 9, 45},
    {53, 9, 46},
    {186, 9, 46},
    {200, 9, 46},
    {54, 9, 47},
    {202, 9, 47},
    {221, 9, 47},
    {55, 9, 48},
    {527, 9, 48},
    {546, 9, 48},
    {56, 9, 49},
    {758, 9, 49},
    {763, 9, 49},
    {57, 9, 50},
    {139, 9, 50},
    {145, 9, 50},
    {59, 9, 51},
    {137, 9, 51},
    {138, 9, 51},
    {60, 9, 52},
    {140, 9, 52},
    {161, 9, 52},
    {61, 9, 53},
    {330, 9, 53},
    {349, 9, 53},
    {62, 9, 54},
    {325, 9, 54},
    {348, 9, 54},
    {64, 9, 55},
    {486, 9, 55},
    {488, 9, 55},
    {651, 10, 0},
    {239, 10, 1},
    {242, 10, 1},
    {284, 10, 2},
    {294, 10, 2},
    {392, 10, 3},
    {635, 10, 4},
    {648, 10, 4},
    {479, 10, 5},
    {480, 10, 5},
    {602, 10, 6},
    {603, 10, 6},
    {387, 10, 7},
    {388, 10, 7},
    {489, 10, 8},
    {490, 10, 8},
    {263, 10, 9},
    {360, 10, 9},
    {822, 10, 10},
    {823, 10, 10},
    {819, 10, 11},
    {896, 10, 12},
    {897, 10, 12},
    {907, 10, 13},
    {633, 10, 14},
    {634, 10, 14},
    {804, 10, 15},
    {806, 10, 15},
    {815, 10, 16},
    {816, 10, 16},
    {394, 10, 17},
    {395, 10, 17},
    {629, 11, 1},
    {638, 11, 1},
    {137, 11, 2},
    {155, 11, 2},
    {429, 11, 3},
    {433, 11, 3},
    {903, 11, 4},
    {907, 11, 4},
    {382, 11, 5},
    {396, 11, 5},
    {631, 11, 6},
    {634, 11, 6},
    {649, 12, 0},
    {144, 12, 1},
    {146, 12, 2},
    {148, 12, 3},
    {199, 12, 4},
    {205, 12, 5},
    {326, 12, 6},
    {327, 12, 7},
    {353, 12, 8},
    {386, 12, 9},
    {390, 12, 10},
    {397, 12, 11},
    {398, 12, 12},
    {432, 12, 13},
    {435, 12, 14},
    {857, 12, 14},
    {448, 12, 15},
    {451, 12, 16},
    {452, 12, 17},
    {453, 12, 18},
    {504, 12, 19},
    {513, 12, 20},
    {524, 12, 21},
    {529, 12, 22},
    {530, 12, 23},
    {604, 12, 24},
    {609, 12, 25},
    {655, 12, 26},
    {669, 12, 27},
    {724, 12, 28},
    {752, 12, 29},
    {753, 12, 30},
    {760, 12, 31},
    {762, 12, 32},
    {777, 12, 33},
    {778, 12, 34},
    {790, 12, 35},
    {792, 12, 36},
    {799, 12, 37},
    {832, 12, 38},
    {845, 12, 39},
    {855, 12, 40},
    {856, 12, 41},
    {862, 12, 42},
    {904, 12, 43},
    {839, 12, 44},
    {923, 12, 45},
    {924, 12, 46},
    {925, 12, 47},
    {932, 12, 48},
    {933, 12, 49},
    {936, 12, 50},
    {937, 12, 51},
    {517, 12, 52},
    {385, 12, 53},
    {235, 12, 54},
    {384, 12, 55},
    {671, 12, 56},
    {652, 13, 0},
    {876, 13, 0},
    {237, 13, 1},
    {497, 13, 1},
    {324, 13, 2},
    {352, 13, 2},
    {758, 13, 3},
    {764, 13, 3},
    {840, 13, 4},
    {873, 13, 4},
    {884, 14, 1},
    {921, 14, 1},
    {689, 14, 2},
    {690, 14, 2},
    {276, 14, 3},
    {279, 14, 3},
    {755, 14, 4},
    {756, 14, 4},
    {407, 14, 5},
    {410, 14, 5},
    {654, 14, 6},
    {659, 14, 6},
    {376, 14, 7},
    {377, 14, 7},
    {230, 14, 8},
    {833, 14, 8},
    {477, 14, 9},
    {488, 14, 9},
    {740, 14, 10},
    {741, 14, 10},
    {736, 14, 11},
    {738, 14, 11},
    {662, 14, 12},
    {666, 14, 12},
    {145, 14, 13},
    {152, 14, 13},
    {463, 14, 14},
    {467, 14, 14},
    {476, 14, 15},
    {484, 14, 15},
    {485, 14, 15},
    {461, 14, 16},
    {462, 14, 16},
    {280, 14, 17},
    {289, 14, 17},
    {197, 14, 18},
    {228, 14, 18},
    {188, 14, 19},
    {227, 14, 19},
    {809, 14, 20},
    {810, 14, 20},
    {209, 14, 21},
    {593, 14, 21},
    {247, 14, 22},
    {305, 14, 22},
    {555, 14, 23},
    {563, 14, 23},
    {250, 14, 24},
    {297, 14, 24},
    {295, 14, 25},
    {776, 14, 25},
    {143, 14, 26},
    {155, 14, 26},
    {187, 14, 27},
    {229, 14, 27},
    {796, 14, 28},
    {831, 14, 28},
    {942, 14, 29},
    {943, 14, 29},
    {641, 14, 30},
    {645, 14, 30},
    {908, 14, 31},
    {911, 14, 31},
    {495, 14, 32},
    {502, 14, 33},
    {501, 14, 34},
    {430, 14, 35},
    {431, 14, 36},
    {278, 14, 37},
    {303, 14, 37},
    {651, 15, 0},
    {662, 15, 1},
    {666, 15, 1},
    {342, 15, 2},
    {345, 15, 2},
    {331, 15, 3},
    {332, 15, 3},
    {632, 16, 0},
    {0, 16, 1},
    {1, 16, 2},
    {4, 16, 3},
    {3, 16, 4},
    {12, 16, 5},
    {11, 16, 6},
    {10, 16, 7},
    {9, 16, 8},
    {71, 16, 9},
    {8, 16, 10},
    {7, 16, 11},
    {6, 16, 12},
    {75, 16, 13},
    {42, 16, 14},
    {5, 16, 15},
    {74, 16, 16},
    {107, 16, 17},
    {41, 16, 18},
    {73, 16, 19},
    {90, 16, 20},
    {106, 16, 21},
    {119, 16, 22},
    {2, 16, 23},
    {72, 16, 24},
    {40, 16, 25},
    {105, 16, 26},
    {70, 16, 27},
    {118, 16, 28},
    {89, 16, 29},
    {131, 16, 30},
    {104, 16, 31},
    {23, 16, 32},
    {112, 16, 33},
    {29, 16, 34},
    {117, 16, 35},
    {34, 16, 36},
    {124, 16, 37},
    {37, 16, 38},
    {130, 16, 39},
    {13, 16, 40},
    {22, 16, 41},
    {25, 16, 42},
    {28, 16, 43},
    {32, 16, 44},
    {33, 16, 45},
    {35, 16, 46},
    {36, 16, 47},
    {38, 16, 48},
    {39, 16, 49},
    {43, 16, 50},
    {48, 16, 51},
    {52, 16, 52},
    {58, 16, 53},
    {63, 16, 54},
    {65, 16, 55},
    {66, 16, 56},
    {67, 16, 57},
    {68, 16, 58},
    {69, 16, 59},
    {76, 16, 60},
    {80, 16, 61},
    {81, 16, 62},
    {82, 16, 63},
    {83, 16, 64},
    {84, 16, 65},
    {85, 16, 66},
    {86, 16, 67},
    {87, 16, 68},
    {88, 16, 69},
    {91, 16, 70},
    {95, 16, 71},
    {96, 16, 72},
    {97, 16, 73},
    {98, 16, 74},
    {99, 16, 75},
    {100, 16, 76},
    {101, 16, 77},
    {102, 16, 78},
    {103, 16, 79},
    {108, 16, 80},
    {113, 16, 81},
    {120, 16, 82},
    {125, 16, 83},
    {132, 16, 84},
    {14, 16, 85},
    {44, 16, 86},
    {77, 16, 87},
    {92, 16, 88},
    {109, 16, 89},
    {114, 16, 90},
    {121, 16, 91},
    {126, 16, 92},
    {133, 16, 93},
    {15, 16, 94},
    {45, 16, 95},
    {78, 16, 96},
    {93, 16, 97},
    {110, 16, 98},
    {115, 16, 99},
    {122, 16, 100},
    {127, 16, 101},
    {134, 16, 102},
    {16, 16, 103},
    {46, 16, 104},
    {79, 16, 105},
    {94, 16, 106},
    {111, 16, 107},
    {116, 16, 108},
    {123, 16, 109},
    {128, 16, 110},
    {135, 16, 111},
    {17, 16, 112},
    {18, 16, 113},
    {19, 16, 114},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
    {382, 6, 0},
    {383, 6, 0},
    {629, 6, 0},
    {646, 6, 0},
    {840, 6, 1},
    {875, 6, 1},
    {922, 6, 1},
    {926, 6, 1},
};

/* properties values: 7430 bytes. */

/* General_Category. */

RE_UINT8 re_general_category_stage_1[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  7,  8,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  9, 10, 11,  7,  7,  7,  7, 12, 13, 14, 14, 14, 15, 
    16, 17, 18, 19, 20, 19, 21, 19, 19, 19, 19, 19, 19, 22, 19, 19, 
    19, 19, 19, 19, 19, 19, 23, 19, 19, 19, 24, 19, 19, 19, 25, 19, 
     7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  7, 26,  7, 27, 28, 19, 19, 19, 19, 19, 19, 19, 29, 
    19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
    19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
    19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
    19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
    19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
    19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
    19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
    19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
    19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
    19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
    19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
    19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
    19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
    19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
    19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
    19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
    19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
    19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
    19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
    19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
    19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
    19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
    30, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
    19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 31, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 31, 
};

RE_UINT8 re_general_category_stage_2[] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15, 
     16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,  30,  31, 
     32,  33,  34,  34,  35,  36,  37,  38,  39,  34,  34,  34,  40,  41,  42,  43, 
     44,  45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59, 
     60,  61,  62,  63,  64,  64,  65,  66,  67,  68,  69,  70,  71,  69,  72,  73, 
     69,  69,  64,  74,  64,  64,  75,  17,  76,  77,  78,  79,  80,  81,  69,  82, 
     83,  84,  85,  86,  87,  88,  69,  69,  34,  34,  34,  34,  34,  34,  34,  34, 
     34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34, 
     34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  89,  34,  34,  34,  34, 
     34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  90, 
     91,  34,  34,  34,  34,  34,  34,  34,  34,  92,  34,  34,  93,  94,  95,  96, 
     97,  98,  99, 100, 101, 102, 103, 104,  34,  34,  34,  34,  34,  34,  34,  34, 
     34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34, 105, 
    106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 
    107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 
    107, 107,  34,  34, 108, 109, 110, 111,  34,  34, 112, 113, 114, 115, 116, 117, 
    118, 119, 120, 121,  17, 122, 123, 124, 125, 126,  17,  17,  17,  17,  17,  17, 
    127,  17, 128,  17, 129,  17, 130,  17, 131,  17,  17,  17, 132,  17,  17,  17, 
    133, 134,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17, 
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17, 
     34,  34,  34,  34,  34,  34, 135,  17, 136,  17,  17,  17,  17,  17,  17,  17, 
     34,  34,  34,  34,  34,  34,  34,  34, 137,  17,  17,  17,  17,  17,  17,  17, 
     34,  34,  34,  34, 138,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17, 
    139,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17, 
     69, 140, 141, 142, 143,  17, 144,  17, 145, 146, 147, 148, 149, 150, 151, 152, 
    153, 154, 155, 156, 157,  17, 158, 159, 160, 161, 162, 163, 164, 165, 166,  17, 
     34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34, 167,  34,  34, 
     34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34, 168,  34, 
    169,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17, 
     34,  34,  34,  34, 169,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17, 
    170,  17, 171, 172,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17, 
    107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 173, 
};

RE_UINT16 re_general_category_stage_3[] = {
      0,   0,   1,   2,   3,   4,   5,   6,   0,   0,   7,   8,   9,  10,  11,  12, 
     13,  13,  13,  14,  15,  13,  13,  16,  17,  18,  19,  20,  21,  22,  13,  23, 
     13,  13,  13,  24,  25,  11,  11,  11,  11,  26,  11,  27,  28,  29,  30,  31, 
     32,  32,  32,  32,  32,  32,  32,  33,  34,  35,  36,  11,  37,  38,  13,  39, 
      9,   9,   9,  11,  11,  11,  13,  13,  40,  13,  13,  13,  41,  13,  13,  13, 
     13,  13,  42,  43,   9,  44,  45,  11,  46,  47,  32,  48,  49,  50,  51,  52, 
     53,  54,  50,  50,  55,  32,  56,  57,  50,  50,  50,  50,  50,  58,  59,  60, 
     61,  62,  50,  32,  63,  50,  50,  50,  50,  50,  64,  65,  66,  50,  67,  68, 
     50,  69,  70,  71,  50,  72,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73, 
     74,  50,  50,  75,  76,  77,  78,  79,  80,  81,  82,  83,  84,  85,  86,  87, 
     88,  81,  82,  89,  90,  91,  92,  93,  94,  95,  82,  96,  97,  98,  86,  99, 
     80,  81,  82, 100, 101, 102,  86, 103, 104, 105, 106, 107, 108, 109,  92, 110, 
    111, 112,  82, 113, 114, 115,  86, 116, 117, 112,  82, 118, 119, 120,  86, 121, 
    117, 112,  50, 122, 123, 124,  86, 125, 126, 127,  50, 128, 129, 130,  73, 131, 
    132,  50,  50, 133, 134, 135,  73,  73, 136, 137, 138, 139, 140, 141,  73,  73, 
    142, 143, 144, 145, 146,  50, 147, 148, 149, 150,  32, 151, 152, 153,  73,  73, 
     50,  50, 154, 155, 156, 157, 158, 159, 160, 161,   9,   9, 162,  50,  50, 163, 
     50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50, 164, 165,  50,  50, 
    164,  50,  50, 166, 167, 168,  50,  50,  50, 167,  50,  50,  50, 169, 170, 171, 
     50, 172,  50,  50,  50,  50,  50, 173, 174,  50,  50,  50,  50,  50,  50,  50, 
     50,  50,  50,  50,  50,  50, 175,  50, 176, 177,  50,  50,  50,  50, 178, 179, 
    180, 181,  50, 182,  50, 183, 180, 184,  50,  50,  50, 185, 186, 187, 188, 189, 
    190, 188,  50,  50, 191,  50,  50, 192,  50,  50, 193,  50,  50,  50,  50, 194, 
     50, 147, 195, 196, 197,  50, 198, 173,  50,  50, 199, 200, 201, 202, 203, 203, 
     50, 204,  50,  50,  50, 205, 206, 207, 188, 188, 208,  73,  73,  73,  73,  73, 
    209,  50,  50, 210, 211, 156, 212, 213, 214,  50, 215, 188,  50,  50, 216, 217, 
     50,  50, 218, 219, 220,  66,  50, 221,  73,  73,  73,  73,  73, 222, 223, 224, 
     11,  11, 225,  27,  27,  27, 226, 227,  11, 228,  27,  27,  32,  32, 229, 230, 
     13,  13,  13,  13,  13,  13,  13,  13,  13, 231,  13,  13,  13,  13,  13,  13, 
    232, 233, 232, 232, 233, 234, 232, 235, 236, 236, 236, 237, 238, 239, 240, 241, 
    242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253,  73, 254, 255, 256, 
    257, 258, 259, 260, 261, 262, 263, 263, 264, 265, 266, 203, 267, 268, 203, 269, 
    270, 270, 270, 270, 270, 270, 270, 270, 271, 203, 272, 203, 203, 203, 203, 273, 
    203, 274, 270, 275, 203, 276, 277, 278, 203, 203, 279,  73, 280,  73, 262, 262, 
    262, 281, 203, 203, 203, 203, 282, 262, 203, 203, 203, 203, 203, 203, 203, 203, 
    203, 203, 203, 283, 284, 203, 203, 285, 203, 203, 203, 203, 203, 203, 286, 203, 
    287, 203, 203, 203, 203, 203, 288, 289, 262, 290, 203, 203, 291, 270, 292, 270, 
    293, 294, 270, 270, 270, 295, 270, 296, 203, 203, 203, 270, 297, 172,  73,  73, 
      9,   9, 298,  11,  11, 299, 300, 301,  13,  13,  13,  13,  13,  13, 302, 303, 
     11,  11, 304,  50,  50,  50, 305, 306,  50, 307, 308, 308, 308, 308,  32,  32, 
    309, 310, 311, 312,  73,  73,  73,  73, 203, 313, 203, 203, 203, 203, 203, 278, 
    203, 203, 203, 203, 203, 314,  73, 315, 316, 317, 318, 319, 132,  50,  50,  50, 
     50, 320, 174,  50,  50,  50,  50, 321, 322,  50, 198, 132,  50,  50,  50,  50, 
    323, 324,  50,  51, 203, 203, 278,  50, 203, 325, 326, 203, 203, 327, 203, 203, 
    326, 203, 203, 327, 203, 203, 203, 325,  50,  50,  50, 194, 203, 203, 203, 203, 
     50,  50,  50,  50, 199,  73,  73,  73,  50, 328,  50,  50,  50,  50,  50,  50, 
    147, 203, 203, 203, 279,  50,  50, 221, 329,  50, 330,  73,  13,  13, 331, 332, 
     13,  42,  50,  50,  50,  50, 333, 334,  31, 335, 336, 337,  13,  13,  13, 338, 
    339, 340, 341,  73,  73,  73,  73, 342, 343,  50, 344, 345,  50,  50,  50, 346, 
    347,  50,  50, 348, 349, 188,  32, 350,  66,  50, 351,  50, 352, 353,  50, 147, 
     74,  50,  50, 354, 355, 356,  73,  73,  50,  50, 357, 358, 359, 360,  50, 361, 
     50,  50,  50, 362, 363, 364,  73,  73, 365, 366, 308,  73,  73,  73,  73,  73, 
     73,  73,  73,  73,  50,  50, 367, 188,  50,  50, 368,  50, 369,  50,  50, 199, 
    370, 370, 370, 370, 370, 370, 370, 370, 371, 371, 371, 371, 371, 371, 371, 371, 
     50,  50, 198,  50,  50,  50, 198,  50,  50,  50,  50,  50,  50, 372,  73,  73, 
    373, 374, 375, 376, 377,  50,  50,  50,  50,  50,  50, 378, 379, 380,  50,  50, 
     50,  50,  50, 381,  73,  50,  50,  50,  50, 382,  50,  50, 192,  73,  73, 383, 
     32, 384, 229, 385, 386, 387, 388, 389,  50,  50,  50,  50,  50,  50,  50, 390, 
    391,   2,   3,   4,   5, 392, 393, 394,  50, 395,  50, 323, 396, 397, 398, 399, 
    400,  50, 168, 401, 198, 198,  73,  73,  50,  50,  50,  50,  50,  50,  50,  51, 
    402, 262, 262, 403, 263, 263, 263, 404, 405, 315,  73,  73,  73, 203, 203, 406, 
     50, 147,  50,  50,  50,  98,  73,  73,  50, 323, 407,  50, 408,  73,  73,  73, 
     50, 409,  50,  50, 410, 411,  73,  73,   9,   9, 412,  11,  11,  50,  50,  50, 
     50, 198, 188,  73,  73,  73,  73,  73, 413,  50,  50, 414,  50, 415,  73,  73, 
     50, 416,  50, 417,  73,  73,  73,  73, 418, 419,  50, 420, 421, 422,  50, 423, 
     50,  50,  50, 424,  50, 425,  50, 426,  50,  50,  50,  50, 427,  73,  73,  73, 
     73,  73,  73,  73,  73,  73, 262, 428, 429,  50,  50, 430, 431, 432, 433,  73, 
    214,  50,  50, 434, 312,  73,  73,  73,  50,  50,  50,  50,  50,  50, 323,  73, 
    263, 263, 263, 263, 263, 263, 435, 436,  50,  50, 323,  73,  73,  73,  73,  73, 
     50,  50,  50, 427,  73,  73,  73,  73, 437,  73,  73,  73,  73,  73,  73,  73, 
    203, 203, 203, 203, 203, 203, 203, 314, 203, 203, 438, 203, 203, 203, 439, 440, 
    441, 203, 442, 203, 203, 443,  73,  73, 203, 203, 203, 203, 444,  73,  73,  73, 
    203, 203, 203, 203, 203, 279, 262, 445,   9, 446,  11, 447, 448, 449, 232,   9, 
    450, 451, 452, 453, 454,   9, 446,  11, 455, 456,  11, 457, 458, 459, 460,   9, 
    461,  11,   9, 446,  11, 447, 448,  11, 232,   9, 450, 460,   9, 461,  11,   9, 
    446,  11, 462,   9, 463, 464, 465, 466,  11, 467,   9, 468, 469, 470, 471,  11, 
    472,   9, 473,  11, 474, 475, 475, 475, 203, 203, 315, 203, 203, 203, 203, 203, 
    203, 278, 325, 476, 287, 287,  73,  73, 477, 203, 325, 203, 203, 203, 172, 203, 
    203, 280,  73,  73,  73,  73, 478, 203, 479, 203, 203, 280, 480, 481,  73,  73, 
    203, 203, 482, 483, 203, 203, 203, 484, 203, 278, 203, 203, 485,  73, 203, 482, 
    203, 203, 203, 325, 486, 203, 203, 203, 203, 203, 203, 203, 203, 203, 203, 487, 
    203, 203, 203, 443,  73, 203, 488,  73,  73,  73,  73,  73,  73,  73,  73, 489, 
    287, 490, 491, 492, 493,  73,  73,  73, 203, 203, 203, 203, 314,  73,  73,  73, 
    203, 203, 203, 203, 203, 203, 203, 278,  50,  50,  50,  50,  50, 307,  73,  73, 
     50,  50,  50, 173,  50,  50,  50,  50,  50, 198,  73,  73,  73,  73,  73,  73, 
    494,  73, 495, 495, 495, 495, 495, 495,  32,  32,  32,  32,  32,  32,  32,  32, 
     32,  32,  32,  32,  32,  32,  32,  73, 371, 371, 371, 371, 371, 371, 371, 496, 
};

RE_UINT16 re_general_category_stage_4[] = {
      0,   0,   0,   0,   1,   2,   3,   4,   5,   5,   6,   7,   8,   9,   9,   9, 
      9,   9,  10,  11,  12,  13,  13,  13,  13,  13,  14,  15,  16,  17,  18,  19, 
     20,  21,  22,  23,   9,   9,   9,   9,   9,  24,   9,  25,  13,  13,  13,  13, 
     13,  26,  13,  13,  27,  27,  27,  27,  27,  27,  28,  28,  28,  28,  29,  27, 
     27,  27,  30,  31,  32,  33,  34,  35,  30,  33,  36,  30,  27,  33,  31,  33, 
     34,  28,  37,  36,  38,  39,  40,  28,  28,  28,  28,  29,  41,  33,  27,  27, 
     27,  13,  35,  32,  28,  25,  27,  27,  13,  42,  13,  13,  43,  43,  43,  43, 
     44,  45,  43,  43,  44,  46,  46,  46,  43,  47,  46,  48,  46,  46,  46,  46, 
     49,  49,  49,  49,  27,  50,  51,  52,  53,  54,  55,  56,  34,   9,   9,   9, 
     57,   9,   9,  13,  13,  13,  13,  58,  35,  36,  27,  27,  13,  59,  32,  34, 
     60,  49,  61,  27,  30,  28,  28,  31,  27,  27,  53,  53,  62,   9,   9,   9, 
      9,  55,  63,  64,  65,  13,  13,  13,  13,  13,  66,  53,  67,  49,  49,  49, 
     49,  49,  49,  68,  69,  70,  53,  53,  38,  38,  38,  38,  38,  38,  71,  53, 
     72,  73,  53,  53,  74,  75,  76,  77,  49,  49,  78,  79,  80,  38,  81,  49, 
      5,   5,   6,  82,  83,  38,  38,  38,  38,  84,  49,  85,  49,  86,  87,  88, 
      5,   5,  89,  90,  64,  64,  64,  91,  92,  38,  38,  38,  49,  49,  93,  94, 
     38,  95,  49,  49,  96,  53,  53,  53,   5,   5,  89,  38,  38,  38,  81,  49, 
     49,  97,  98,  53,  38,  95,  99,  49,  49, 100, 100, 101,  64,  64,  64, 102, 
     38,  38, 103, 104,  53,  53,  53,  53, 105,  38,  38,  38,  38,  38, 106, 107, 
    108,  49, 109, 110, 103,  49,  38,  38,  95, 111,   5,   5, 112,  38,  94,  38, 
    113,  94,  38, 114, 114,  38,  38,  38,  38,  38, 115,  38, 116, 117, 118, 107, 
    108, 119, 120, 121,  53, 122,  53, 123,  95, 124,   5,   5, 125, 126, 127,  53, 
    128,  94,  71, 129, 115, 130, 118, 131, 132, 133, 134, 101, 135,  53,  94, 116, 
     53, 124,   5,   5,  88, 136,  53,  53, 128,  94,  38, 123, 123,  38,  38,  38, 
    115,  94, 118, 107, 108, 137, 138, 139, 140,  53,  53,  53, 141,  53,  53,  53, 
    115,  94, 118, 142, 108, 119, 120, 139,  53, 143,  53, 123, 144, 126,  53,  53, 
    145,  94,  71, 117, 115, 118, 130, 115, 129, 140,  71, 117,  38,  38, 118, 146, 
    147, 146, 148, 139, 140, 122,  53,  53, 149, 150, 151,  53, 152,  94,  38, 115, 
    115,  38,  38,  38,  38,  94, 118, 153, 109, 154, 155, 101,  53, 156, 118,  53, 
     53,  53, 126, 149, 146,  94,  38, 115,  38,  94, 118, 142, 157, 158, 148, 101, 
     53, 159,  53, 160, 130,  53,  53,  53,  38,  38,  71, 161, 108, 131, 148, 121, 
     53, 122,  53,  53, 126, 162, 163,  38, 146,  94,  38,  38,  38,  71, 117,  38, 
    123,  38,  38, 164,  38,  71, 165, 122, 166, 167, 157, 157, 146,  73,  53,  53, 
     94,  38,  38,  38,  92,  49,  93, 168,  38, 169,  49,  78,   5,   5,   6,  53, 
    130, 114, 116, 164,  53,  38,  94,  38,  94, 170, 117,  94,  92,  49, 137,  96, 
     38, 171,  49, 101,   5,   5, 172, 118, 173,  64,  64,  64, 174, 150, 175, 150, 
      5,   5, 176, 126, 126, 177, 178, 179,  38,  38,  94,  38,  38,  38,  38, 140, 
     67,  49,  49, 105,  49, 180,  38, 103,  49,  49,  67,  49,  49,  49,  49, 181, 
    150, 182, 150, 183,  64, 184, 185,  53,  38,  38, 186, 108, 187,  49, 188, 189, 
      5,   5,   6,  64,  38, 190,  88,  95, 107, 191, 157, 192, 103,  83,  38,  38, 
    106, 188, 157, 193,   5,   5, 194, 195,   9, 196,  53,  53,  38,  38,  72, 197, 
     38,  38, 115, 118,  38,  71, 115, 118, 115, 118,  38,  71, 115, 118,  38,  38, 
     38,  71,  38,  38,  38,  38,  71,  67, 198,  64, 199, 126, 126, 126, 126, 200, 
    150, 150, 201,  53,  38, 140,  53,  53, 202,  38,  38,  38,  38,  38,  38, 203, 
    204,  38,  38,  38,  38,  38, 205, 206,  38,  38,  72, 207, 208,  53,  53,  53, 
     38,  38,  38, 115,  95, 209,  53,  53,  95, 210,  53,  53,  95,  53,  53,  53, 
    211,  53,  53,  53,  38, 212,  49, 213, 157, 214, 108,  49,  49, 215, 216, 136, 
      5,   5, 172,  53, 126, 126, 162,  53,  64, 217, 218, 219, 220,  38,  38,  38, 
     38,  38,  53,  53,  38,  38, 221,  53,  38, 118,  53,  53, 105, 222, 109,  53, 
    214, 157, 108,  53, 223, 111,   5,   5,  38,  38,  38, 118,  38,  38,  38,  53, 
    157, 157, 157, 157, 224,  38, 225,  53,   5,   5, 226, 227, 150, 150, 150, 150, 
     38,  81, 109,  79,  38, 228,  49,  93, 229, 108,  49, 109, 222,  49,  49, 134, 
     64, 215,  64, 230,  49, 224,  38,  38,  38, 187, 105, 109, 214, 224,  38,  53, 
    184, 150, 231,  49,  49, 150, 150, 223, 232,  38,  38,  38, 233, 213, 234, 117, 
     38, 106, 213, 235, 213,  53,  53,  64,  38, 157, 157,  49,  49, 166, 236,  64, 
      5,   5, 172,  94,  38,  38,  43, 237,  78,  49,  49,  49, 187,  49,  83,  92, 
    238,  53,  53,  53,  13,  13,  13,  43, 239,  13,  13,  13,  13,  13, 240,  13, 
     13,  13, 241,  43,  49,  93,  53,  53,  53,  53,  53,  49,  27,  36,  13,  29, 
     13,  13,   9,   9,  13, 242,   9, 196,  13,  13, 243, 243,  13,  13,  13, 242, 
     13,  13, 244, 244,  13, 245,   9, 246, 247, 245,   9, 248,  13, 249,   9, 250, 
     13,  13,   9, 251, 249, 245,   9, 252, 253, 253, 254,  74, 255, 256, 257, 257, 
     64,  64, 258, 259,  64,  64, 260, 261, 262, 263,  64,  64, 264, 262,  64, 265, 
     74, 266, 267,  74, 268, 126, 269, 270, 126, 126, 269, 271,  43,  43,  43, 197, 
    272, 272, 272, 272, 272, 272, 273,  53,  49,  49,  49, 274, 275, 276,  49,  49, 
    209,  53,  53,  53, 277, 278, 279, 280,  25, 281, 282, 283, 150, 284, 285, 286, 
      9, 287, 288,  35, 289, 290, 291, 292, 126, 126, 126, 126, 293, 293, 293, 293, 
    294, 295, 296,  53, 289, 297, 298, 150, 299, 300, 150, 300, 150, 150, 150, 298, 
    300, 297, 150, 150, 150, 289, 289, 289, 289, 289, 289, 289, 150, 150, 289, 150, 
    301, 150, 302, 150, 150, 150, 150, 297, 150, 150, 303, 289, 289, 150, 150, 150, 
    150, 150, 150, 289, 301, 150, 150, 150, 150,  53,  53,  53, 150, 304,  53,  53, 
    150, 150, 304,  53, 126, 126, 126, 150, 150, 150, 305, 126, 150, 303, 150, 150, 
    306, 150, 150, 150, 150, 150, 289, 289, 150, 150, 150, 303, 307, 150, 150, 150, 
    150, 150, 308, 308, 308, 309, 126, 126, 126, 150, 150, 150, 289, 310, 311, 312, 
    289, 313, 308, 308, 314, 315, 315, 315, 315, 315, 316, 289, 289, 289, 308, 289, 
    289, 289, 289, 317, 289, 299, 289, 318,   9,   9,   9,  55,  13,  13,  13, 319, 
     33, 320,  28,  34,  27,  31,  13, 321,  27, 322, 278, 323, 101,  53, 324, 325, 
     13, 242,  53,  53,  38, 118,  53, 326,  73,  53,  53, 133,  38,  71,  53,  53, 
     38,  71,  38,  71, 327, 328, 260, 328,  64, 329, 217, 328, 330, 308, 331, 215, 
    230,  53,  53,  53, 150, 150, 332, 150, 150, 201,  53,  53, 150, 150, 150,  53, 
      1, 333, 308, 308, 334, 308, 308, 335, 336, 293, 337,  49, 338, 339, 340, 341, 
     38,  71, 342, 343,  38,  38,  72, 344,  53,  94,  38,  38,  38,  38,  38,  71, 
    305, 345, 150, 150, 150, 150, 150, 304, 126, 126, 345, 150, 346, 126, 126, 126, 
     38, 347,  38,  38,  38,  38,  38, 348,   5,   5,  89,  53,  27,  27,  27, 349, 
    350,  53,  53, 351,  38, 352, 293, 293, 353,  64,  53,  53,  46, 354,  43,  43, 
    355,  27,  27,  27,  29,  27,  27,  27, 240,  13,  28,  32,  27,  27, 356, 357, 
    358,  53,  53,  53,  27,  27, 358,  53,  53,  53, 359,  38, 360, 360,  81,  38, 
    186, 188, 150,  53, 126, 345, 361,  53,  38,  64,  53,  53, 192,  38,  38,  38, 
     38, 157, 157, 157, 157, 209,  53,  79,  88,  38, 362,  53,  38,  95,  49, 353, 
     38,  81,  49,  49, 213,  53,  53, 236,  81, 166, 213, 109, 363,  64,  64, 364, 
      5,   5, 172,  79,  38,  38, 103, 105, 188, 132,  53,  53,  81,  38,  38, 365, 
      5,   5, 172,  64,  80, 366, 367,  53, 368, 369,  83,  95, 221,  53,  53,  53, 
     53,  53, 129, 370,  94,  71,  94,  71,  94,  71,  53,  53, 186, 110, 371, 139, 
     38,  53,  53,  53,  38,  71, 129,  38, 372, 372, 372, 372, 373, 373, 373, 373, 
     38,  38, 118,  53,  13, 319,  53,  53, 374,  13,  53, 375,  38,  38, 376,  38, 
     38,  71,  38, 116, 123, 115,  38,  38, 377,  46,  46,  46, 378,  53,  53,  53, 
    129,  38,  38,  38,  38,  38,  38, 379, 117,  38,  38,  38,  38,  38,  38, 361, 
     64, 380, 381,  53, 382, 383, 315, 315, 315, 384, 385, 386, 102,  64, 387, 388, 
    389, 311, 390,  53,  38, 115,  38,  38,  38,  38,  38, 391, 324,   2,   3,   4, 
     13,  13,  14, 392, 393,  82,  38,  38,  80,  38,  38,  38,  38,  38,  38, 394, 
    117,  38, 117,  38, 117,  38, 117, 140, 395, 396, 397, 398,  53,  53, 399, 201, 
     38,  38,  38,  94,  38,  38,  71, 123, 400, 401, 126, 126, 126, 402, 150, 150, 
    293, 403, 404, 150, 150, 150, 405,  53, 150, 150, 150, 406, 126,  53,  53,  53, 
    407,  38, 408,  53,  38,  38,  38, 409,  38,  53,  38,  38, 410, 411,  53,  53, 
      9,   9,  13,  13,  38, 118, 115,  38,  38, 123, 140, 114,  38, 409, 126, 126, 
     38, 412, 126, 236,  38,  38, 118, 236, 103, 156,  53,  49,  38,  94,  94,  38, 
     38,  53,  93, 133, 126, 126,  53,  53,  64,  64,  73,  53,  38,  38,  38, 413, 
     38, 118, 324,  64,  38, 118, 126, 126,  71,  53, 126, 126,  38,  38, 140,  53, 
    126, 126, 126, 414, 415,  38,  38,  38,  38,  38,  49,  49,  49,  78,  64, 230, 
    416, 126, 126, 126, 126, 417,   5,   5, 222, 105, 418, 419, 420,  53,  53,  53, 
     64,  53,  53,  53, 118,  53,  53,  53, 150, 304, 307, 150, 150, 421, 175, 422, 
    423,  74, 424,  49, 425, 426,  49, 150, 150, 150, 427, 175, 150, 150, 150, 201, 
    427, 428,  53,  53, 162,  53,  53,  53,   9,   9, 280,  13,  13,   9,   9,   9, 
      9,   9,   9, 280,  13, 245,  13,  13, 280,  13,  13,  13,  13,  13,  13,  56, 
    429, 430,  62,  56,   9, 280, 431,  65,  13,  65,  13,  13,  13,  57,  55,  62, 
      9,  56,   9, 432,  13,  13,  57,  55,   9, 433, 434,   9, 432,  13,  13,  13, 
     13,  13,  13,   9,   9, 280,  13,  13,  13, 242,   9,   9, 435,  13,  13,  13, 
     13,  13,  26,  13,  35,   9,   9,   9,   9,   9,  24,  13,  13, 436,  13,   9, 
      9, 435,  13,  13,  13,  13,  13,  26,  13,  35,   9,   9,   9,   9,   9,  24, 
     13,  13, 436,  13,   9,   9, 435,  13,  26,  13,  29, 124,   5,   5,   5,   5, 
    307, 150, 150, 304, 126, 126, 414,  53,  53, 227, 150, 150, 304,  53,  53,  53, 
    150, 150, 223,  53, 201,  53,  53,  53, 223,  53,  53,  53, 150, 332, 150, 150, 
    150, 150, 150, 223, 150, 183, 304,  53, 183, 150, 150, 150, 150, 150, 307, 223, 
    150, 150,  53,  53,  53,  53, 402, 150, 183, 437, 437, 304, 150, 201, 150, 438, 
    150, 307, 150, 150, 223, 307, 150, 150, 439,  53,  53,  53,  74,  74,  74,  74, 
    373, 373, 373, 440, 
};

RE_UINT8 re_general_category_stage_5[] = {
    15, 15, 15, 15, 12, 23, 23, 23, 25, 23, 23, 23, 20, 21, 23, 24, 
    23, 19, 23, 23,  9,  9,  9,  9,  9,  9, 23, 23, 24, 24, 24, 23, 
    23,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 20, 23, 21, 26, 22, 
    26,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2, 20, 24, 21, 24, 15, 
    12, 23, 25, 25, 25, 25, 27, 27, 26, 27,  2, 28, 24, 16, 27, 26, 
    27, 24, 11, 11, 26,  2, 27, 23, 26, 11,  2, 29, 11, 11, 11, 23, 
     1,  1,  1, 24,  1,  1,  1,  2,  2,  2,  2, 24,  1,  2,  1,  2, 
     2,  1,  2,  1,  2,  2,  1,  2,  1,  1,  2,  1,  2,  1,  2,  2, 
     2,  1,  1,  2,  1,  2,  1,  1,  2,  1,  1,  1,  2,  2,  1,  1, 
     1,  2,  2,  2,  1,  2,  2,  5,  5,  5,  5,  5,  1,  3,  2,  1, 
     3,  2,  1,  3,  2,  1,  3,  2,  5,  2,  2,  2,  4,  4,  4,  4, 
     4,  4, 26, 26, 26, 26,  4,  4, 26, 26, 26, 26,  4, 26, 26, 26, 
     4, 26,  4, 26,  6,  6,  6,  6,  4, 26,  1,  2,  0,  0,  4,  2, 
     2,  2, 23,  0,  0,  0,  0,  0, 26, 26,  1, 23,  1,  1,  1,  0, 
     1,  0,  1,  1,  1,  1,  0,  1,  2,  2,  2,  1,  1,  2, 24,  1, 
     1,  2, 27,  6,  7,  7,  1,  2,  0,  1,  1,  1,  0,  4, 23, 23, 
    23, 23, 23, 23,  0,  2,  2,  2,  0, 23, 19,  0,  0,  6,  6,  6, 
     6,  6, 19,  6, 23,  6,  6, 23,  6,  6, 23,  6,  5,  5,  5,  0, 
     5,  5,  5, 23, 23,  0,  0,  0, 16, 16, 16, 16,  0,  0, 24, 24, 
    24, 23, 23, 25, 23, 23, 27, 27,  6,  6,  6, 23,  0,  0, 23, 23, 
     4,  5,  5,  5,  5,  5,  5,  6, 23, 23,  5,  5,  6,  5,  5,  5, 
    23,  5,  6,  6,  6, 16, 27,  6,  6,  4,  4,  6,  6, 27,  6,  6, 
     6,  6,  5,  5,  9,  9,  5,  5,  5, 27, 27,  5, 23, 23,  0, 16, 
     5,  6,  5,  5,  6,  6,  6,  0,  0,  5,  5,  5,  5,  5,  6,  6, 
     6,  5,  0,  0,  4,  4, 27, 23, 23, 23,  4,  0,  6,  6,  4,  6, 
     4,  6,  6,  6,  6,  6,  0,  0, 23, 23, 23,  0,  5,  6,  6,  6, 
     0,  0, 23,  0,  6,  6,  6,  8,  5,  5,  6,  8,  6,  5,  8,  8, 
     8,  6,  6,  6,  6,  8,  8,  8,  8,  6,  8,  8, 23, 23,  9,  9, 
    23,  4,  5,  5,  0,  6,  8,  8,  5,  0,  0,  5,  5,  0,  5,  5, 
     5,  0,  5,  0,  0,  0,  5,  5,  5,  5,  0,  0,  6,  0,  0,  8, 
     8,  0,  0,  8,  8,  6,  5,  0,  0,  0,  0,  8,  5,  5,  0,  5, 
     0,  0,  9,  9,  5,  5, 25, 25, 11, 11, 11, 11, 11, 11, 27, 25, 
     0,  6,  6,  8,  0,  0,  0,  5,  0,  5,  5,  0,  6,  0,  8,  8, 
     8,  6,  6,  0,  0,  0,  0,  6,  6,  0,  0,  6,  0,  6,  0,  0, 
     5,  6,  0,  0,  6,  6,  0,  6,  6,  8,  0,  8,  8,  6,  0,  0, 
     5,  0,  0,  0,  0, 25,  0,  0,  6,  5,  8,  6,  0,  0,  6,  8, 
    27,  5, 11, 11,  0,  0,  6,  5,  0,  0,  8,  8,  6,  8,  8,  0, 
     8,  0,  8,  8, 11, 11, 11, 27, 27, 27, 27, 27, 27, 25, 27,  0, 
     0,  8,  8,  8,  0,  5,  6,  6,  8,  0,  6,  6,  6,  0,  6,  6, 
     0,  6,  6,  0,  8,  8,  8,  8,  8,  0,  6,  8,  0,  8,  8,  0, 
     0,  0,  5,  0,  0,  5,  8,  8, 11, 11,  0,  0,  0, 27,  5,  5, 
     0,  5,  0,  0,  0,  0,  6,  0,  8,  8,  6,  6,  6,  0,  6,  0, 
     0,  0,  0, 25,  5,  5,  4,  6,  0,  5,  0,  5,  5,  0,  4,  0, 
     9,  9,  0,  0,  5, 27, 27, 27, 23, 23, 23, 27,  6,  6, 27, 27, 
     9,  9, 11, 11, 27,  6, 27,  6, 27,  6, 20, 21, 20, 21,  8,  8, 
     6, 23,  6,  6,  6,  0, 27, 27, 27, 27,  6, 27, 27,  0, 27, 27, 
    23, 27, 27, 27, 27, 23, 23,  0,  5,  5,  5,  8,  6,  8,  6,  6, 
     8,  6,  6,  8,  8,  6,  6,  5,  5,  5,  8,  8,  8,  5,  5,  8, 
     8,  8,  5,  5,  8,  6,  5,  8,  9,  9,  8,  8,  8,  6, 27, 27, 
     1,  1,  0,  0,  4,  0,  0,  0, 27, 23, 23, 23, 23, 11, 11, 11, 
    11,  0,  0,  0, 27, 27,  0,  0, 19,  5,  5,  5,  5, 23, 23,  5, 
    12,  5,  5,  5,  5,  5,  5, 20, 21,  0,  0,  0, 23, 23, 10, 10, 
    10,  0,  0,  0,  6,  0,  0,  0,  6, 23, 23,  0,  5,  0,  6,  6, 
    16, 16,  8,  6,  6,  6,  8,  8,  8,  8,  6,  8, 23, 23, 23,  4, 
    23, 23, 23, 25, 23, 23, 19, 23, 23, 23, 23,  6,  6,  6, 12,  0, 
     5,  5,  5,  4,  5,  6,  5,  0,  8,  8,  8,  6, 27,  0,  0,  0, 
     8,  5,  5,  5,  8,  8,  0,  0,  9,  9, 11,  0,  0,  0, 27, 27, 
     5,  8,  6,  8,  6,  8,  6,  8, 23, 23,  0,  0, 27, 27, 27,  6, 
     6,  6,  8,  5,  5,  8,  6,  6,  6,  6,  8,  0,  8,  6,  8,  6, 
     0,  0,  0, 23,  4,  4, 23, 23,  5,  5,  8,  0,  4,  4,  2,  2, 
     4,  2,  2,  2,  2,  2,  2,  4,  2,  2,  0,  0,  0,  1,  0,  1, 
     3,  3,  3,  3,  2,  0,  2,  2,  3, 26,  2, 26, 26, 26,  2,  2, 
     3, 26, 26, 26,  0,  0,  2,  2,  0, 26, 26, 26,  1, 26, 26, 26, 
     3, 26, 26,  0, 12, 12, 12, 12, 12, 12, 12, 16, 19, 19, 19, 19, 
    19, 19, 23, 23, 28, 29, 20, 28, 13, 14, 16, 16, 16, 16, 16, 12, 
    23, 28, 29, 23, 23, 23, 23, 22, 22, 23, 23, 23, 24, 20, 21, 23, 
    23, 23, 24, 23, 23, 23, 23, 12, 16,  0,  0,  0,  0,  0, 16, 16, 
    11,  4,  0,  0, 11, 11, 24, 24, 24, 20, 21,  4, 24, 20, 21,  0, 
    25, 25, 25, 25, 25, 25,  0,  0,  6,  7,  7,  7,  7,  6,  7,  7, 
     7,  6,  6,  6, 27, 27,  1, 27, 27, 27, 27,  1, 27, 27,  2,  1, 
     1,  1,  2,  2, 27,  1, 27, 27, 24,  1,  1,  1,  1,  1, 27, 27, 
     1, 27,  1, 27,  1, 27,  1,  1,  1,  1, 27,  2,  2,  5,  5,  5, 
     5,  2, 27, 27, 24, 24, 24, 24, 24,  1,  2,  2,  2,  2, 27, 24, 
    27, 27,  2, 27, 10, 10, 10, 10, 10, 10, 10,  1,  2, 10, 10, 10, 
    10, 11,  0,  0, 24, 27, 27, 27, 27, 27, 24, 24, 24, 27, 27, 24, 
    27, 27, 24, 27, 24, 24, 27, 27, 27, 20, 21, 27, 27, 27, 27, 24, 
    27, 27, 27,  0, 27, 27, 11, 11, 27, 24, 27, 27,  0, 27, 27, 27, 
    20, 21, 20, 21, 20, 21, 11, 11, 24, 20, 21, 24, 24, 24, 24,  0, 
    24,  0, 24, 24, 24, 24, 20, 21, 24, 24, 24, 20, 21, 20, 21, 20, 
    21, 24, 24, 24, 20, 21, 24, 24, 24,  0,  0,  0,  2,  2,  2,  0, 
     1,  2,  2,  1,  2,  4,  1,  1,  2, 27, 27, 27,  2,  1,  2,  6, 
     0, 23, 23, 23, 23, 11, 23, 23,  0,  0,  0,  4, 23, 23, 28, 29, 
    28, 29, 23, 23, 23, 23, 23, 19, 28, 29, 20, 21, 20, 21, 23, 23, 
    27, 27,  0, 27, 27,  4,  5, 10, 20, 21, 27, 27, 19, 20, 21, 21, 
    27, 10, 10, 10, 10, 10,  6,  6, 19,  4,  4,  4,  4,  4, 27, 27, 
    10, 10, 10,  4,  5, 23, 27, 27,  0,  6,  6, 26, 26,  4,  4,  5, 
     4,  4,  4,  5, 11, 11, 27, 27, 27, 11, 11, 11,  5,  4,  5,  5, 
     4, 23, 23, 23,  1,  2,  5,  6,  7,  7,  7, 23,  6,  6, 23,  4, 
     5,  5, 10, 10,  6,  6, 23, 23, 26, 26, 26,  4, 26, 26,  1,  2, 
     4, 26, 26,  1,  2,  1,  2,  0,  1,  2,  0,  0,  0,  0,  2,  5, 
     5,  5,  6,  5, 25, 27,  0,  0, 23, 23, 23,  5,  8, 23, 23, 23, 
    23, 23,  0,  4,  6,  8,  0,  0,  5,  5,  5, 27, 27, 27,  5,  8, 
     6,  5,  6,  6,  6,  5,  5,  6,  5,  4, 23, 23,  6,  8,  8, 23, 
    18, 18, 18, 18, 17, 17, 17, 17,  0,  0,  0,  2,  0,  5,  6,  5, 
     5, 24,  5,  5,  5,  5, 26, 26, 26, 26,  0,  0,  5,  5, 20, 21, 
    23, 23, 23, 20, 21, 23,  0,  0, 23, 19, 19, 22, 22, 20, 21, 20, 
    21, 23, 23, 20, 21, 23, 23, 23, 23, 22, 22, 22, 19, 20, 21, 20, 
    21, 20, 21, 23, 23, 23, 24, 19, 23, 25, 23, 23,  5,  0,  0, 16, 
    24, 21, 24, 20, 21, 23, 20, 21,  5,  5,  4,  4, 25, 25, 24, 26, 
    27, 25, 25,  0, 27, 24, 24, 24, 24, 27, 27,  0,  0, 16, 16, 16, 
    23, 23, 27,  0,  0,  0,  0, 11,  0,  0,  0, 27, 10, 11, 11, 11, 
    11, 27, 27, 27, 27, 27, 11,  0, 27,  6,  0,  0,  5, 10,  5,  5, 
     5,  5, 10,  0,  5,  5,  0, 23, 23, 10, 10, 10, 10, 10,  0,  0, 
     5,  5, 11, 11,  5, 11, 11, 23, 11, 11, 11,  0,  8,  6,  8,  5, 
     0,  0, 11, 11, 11, 11,  9,  9,  8,  6,  6, 23, 23, 16, 23, 23, 
    10, 10, 10,  0, 27,  8,  8,  6, 27,  8,  8,  8,  8,  8,  8, 16, 
    16, 16, 16,  6,  6,  6,  6, 27, 27,  6,  6,  6, 27, 27,  6,  6, 
     6, 27,  0,  0,  0,  0,  1,  0,  0,  1,  1,  0,  2,  2,  0,  2, 
     1,  0,  2,  2,  1,  0,  1,  0,  0,  0,  1,  1,  1, 24,  2,  2, 
     2, 24,  2,  2, 27,  0, 27,  0,  0, 27,  0,  0,  0, 16,  0,  0, 
    17, 17,  0,  0, 
};

/* General_Category: 9580 bytes. */

RE_UINT32 re_get_general_category(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 11;
    code = ch ^ (f << 11);
    pos = ((RE_UINT32)re_general_category_stage_1[f] << 4);
    f = code >> 7;
    code ^= (f << 7);
    pos = ((RE_UINT32)re_general_category_stage_2[pos + f] << 3);
    f = code >> 4;
    code ^= (f << 4);
    pos = ((RE_UINT32)re_general_category_stage_3[pos + f] << 2);
    f = code >> 2;
    code ^= (f << 2);
    pos = ((RE_UINT32)re_general_category_stage_4[pos + f] << 2);
    value = re_general_category_stage_5[pos + code];

    return value;
}

/* Block. */

RE_UINT8 re_block_stage_1[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  7,  8,  9,  9,  9,  9,  9,  9, 
     9,  9,  9,  9, 10, 11, 12, 12, 12, 12, 13, 14, 15, 15, 15, 16, 
    17, 18, 19, 20, 21, 20, 22, 20, 20, 20, 20, 20, 20, 23, 20, 20, 
    20, 20, 20, 20, 20, 20, 24, 20, 20, 20, 25, 20, 20, 20, 26, 20, 
    27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
    27, 27, 27, 27, 28, 29, 30, 31, 20, 20, 20, 20, 20, 20, 20, 32, 
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 
    33, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 
    34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 
    34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 
    35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 
    35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 
};

RE_UINT8 re_block_stage_2[] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   8,   9,  10,  11,  11,  12,  13, 
     14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  28, 
     29,  30,  31,  31,  32,  32,  32,  33,  34,  34,  34,  34,  34,  35,  36,  37, 
     38,  39,  40,  41,  42,  43,  44,  45,  46,  47,  48,  49,  50,  50,  51,  51, 
     52,  53,  54,  55,  56,  56,  57,  57,  58,  59,  60,  61,  62,  62,  63,  64, 
     65,  65,  66,  67,  68,  68,  69,  69,  70,  71,  72,  73,  74,  75,  76,  77, 
     78,  79,  80,  81,  82,  82,  83,  83,  84,  84,  84,  84,  84,  84,  84,  84, 
     84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84, 
     84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  85,  86,  86,  86,  86, 
     86,  86,  86,  86,  86,  86,  86,  86,  86,  86,  86,  86,  86,  86,  86,  86, 
     87,  87,  87,  87,  87,  87,  87,  87,  87,  88,  89,  89,  90,  91,  92,  93, 
     94,  95,  96,  97,  98,  99, 100, 101, 102, 102, 102, 102, 102, 102, 102, 102, 
    102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 
    102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 103, 
    104, 104, 104, 104, 104, 104, 104, 105, 106, 106, 106, 106, 106, 106, 106, 106, 
    107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 
    107, 107, 108, 108, 108, 108, 109, 110, 110, 110, 110, 110, 111, 112, 113, 114, 
    115, 116, 117, 118,  15, 119, 120, 121, 122, 123,  15,  15,  15,  15,  15,  15, 
    124,  15, 125,  15, 126,  15, 127,  15, 128,  15,  15,  15, 129,  15,  15,  15, 
    130, 131,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15, 
     15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15, 
    132, 132, 132, 132, 132, 132, 132, 132, 133,  15,  15,  15,  15,  15,  15,  15, 
    134, 134, 134, 134, 134, 134, 134, 134, 135,  15,  15,  15,  15,  15,  15,  15, 
    136, 136, 136, 136, 137,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15, 
    138, 138,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15, 
    139, 139, 140, 140, 141,  15, 142,  15, 143, 143, 143, 143, 143, 143, 143, 143, 
    144, 145, 146, 146, 147, 147, 148, 148, 148, 148, 148, 148, 149, 150, 151,  15, 
    152, 152, 152, 152, 152, 152, 152, 152, 152, 152, 152, 152, 152, 152, 152, 152, 
    152, 152, 152, 152, 152, 152, 152, 152, 152, 152, 152, 152, 152, 153, 154, 154, 
    154, 154, 154, 154, 154, 154, 154, 154, 154, 154, 154, 154, 154, 154, 154, 154, 
    154, 154, 154, 154, 154, 154, 154, 154, 154, 154, 154, 154, 154, 154, 155, 156, 
    157,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15, 
    158, 158, 158, 158, 159,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15, 
    160,  15, 161, 162,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15, 
    163, 163, 163, 163, 163, 163, 163, 163, 163, 163, 163, 163, 163, 163, 163, 163, 
    164, 164, 164, 164, 164, 164, 164, 164, 164, 164, 164, 164, 164, 164, 164, 164, 
};

RE_UINT8 re_block_stage_3[] = {
      0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1,   1,   1, 
      2,   2,   2,   2,   2,   2,   2,   2,   3,   3,   3,   3,   3,   3,   3,   3, 
      3,   3,   3,   3,   3,   4,   4,   4,   4,   4,   4,   5,   5,   5,   5,   5, 
      6,   6,   6,   6,   6,   6,   6,   7,   7,   7,   7,   7,   7,   7,   7,   7, 
      8,   8,   8,   8,   8,   8,   8,   8,   9,   9,   9,  10,  10,  10,  10,  10, 
     10,  11,  11,  11,  11,  11,  11,  11,  12,  12,  12,  12,  12,  12,  12,  12, 
     13,  13,  13,  13,  13,  14,  14,  14,  15,  15,  15,  15,  16,  16,  16,  16, 
     17,  17,  17,  17,  18,  18,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19, 
     20,  20,  20,  20,  20,  20,  20,  20,  21,  21,  21,  21,  21,  21,  21,  21, 
     22,  22,  22,  22,  22,  22,  22,  22,  23,  23,  23,  23,  23,  23,  23,  23, 
     24,  24,  24,  24,  24,  24,  24,  24,  25,  25,  25,  25,  25,  25,  25,  25, 
     26,  26,  26,  26,  26,  26,  26,  26,  27,  27,  27,  27,  27,  27,  27,  27, 
     28,  28,  28,  28,  28,  28,  28,  28,  29,  29,  29,  29,  29,  29,  29,  29, 
     30,  30,  30,  30,  30,  30,  30,  30,  31,  31,  31,  31,  31,  31,  31,  31, 
     32,  32,  32,  32,  32,  32,  32,  32,  33,  33,  33,  33,  33,  33,  33,  33, 
     33,  33,  34,  34,  34,  34,  34,  34,  35,  35,  35,  35,  35,  35,  35,  35, 
     36,  36,  36,  36,  36,  36,  36,  36,  37,  37,  38,  38,  38,  38,  38,  38, 
     39,  39,  39,  39,  39,  39,  39,  39,  40,  40,  41,  41,  41,  41,  41,  41, 
     42,  42,  43,  43,  44,  44,  45,  45,  46,  46,  46,  46,  46,  46,  46,  46, 
     47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  48,  48,  48,  48,  48, 
     49,  49,  49,  49,  49,  50,  50,  50,  51,  51,  51,  51,  51,  51,  52,  52, 
     53,  53,  54,  54,  54,  54,  54,  54,  54,  54,  54,  19,  19,  19,  19,  19, 
     55,  55,  55,  55,  55,  55,  55,  55,  56,  56,  56,  56,  57,  57,  57,  57, 
     58,  58,  58,  58,  58,  59,  59,  59,  19,  19,  19,  19,  19,  60,  60,  60, 
     61,  61,  61,  61,  61,  61,  61,  61,  62,  62,  62,  62,  63,  63,  63,  63, 
     64,  64,  64,  64,  64,  64,  64,  64,  65,  65,  65,  65,  65,  65,  65,  65, 
     66,  66,  66,  66,  66,  66,  66,  67,  67,  67,  68,  68,  68,  69,  69,  69, 
     70,  70,  70,  70,  70,  71,  71,  71,  71,  72,  72,  72,  72,  72,  72,  72, 
     73,  73,  73,  73,  73,  73,  73,  73,  74,  74,  74,  74,  74,  74,  74,  74, 
     75,  75,  75,  75,  76,  76,  77,  77,  77,  77,  77,  77,  77,  77,  77,  77, 
     78,  78,  78,  78,  78,  78,  78,  78,  79,  79,  80,  80,  80,  80,  80,  80, 
     81,  81,  81,  81,  81,  81,  81,  81,  82,  82,  82,  82,  82,  82,  82,  82, 
     82,  82,  82,  82,  83,  83,  83,  84,  85,  85,  85,  85,  85,  85,  85,  85, 
     86,  86,  86,  86,  86,  86,  86,  86,  87,  87,  87,  87,  87,  87,  87,  87, 
     88,  88,  88,  88,  88,  88,  88,  88,  89,  89,  89,  89,  89,  89,  89,  89, 
     90,  90,  90,  90,  90,  90,  91,  91,  92,  92,  92,  92,  92,  92,  92,  92, 
     93,  93,  93,  94,  94,  94,  94,  94,  95,  95,  95,  95,  95,  95,  96,  96, 
     97,  97,  97,  97,  97,  97,  97,  97,  98,  98,  98,  98,  98,  98,  98,  98, 
     99,  99,  99,  99,  99,  99,  99,  99,  99,  99,  99,  99,  99,  99,  19, 100, 
    101, 101, 101, 101, 102, 102, 102, 102, 102, 102, 103, 103, 103, 103, 103, 103, 
    104, 104, 104, 105, 105, 105, 105, 105, 105, 106, 107, 107, 108, 108, 108, 109, 
    110, 110, 110, 110, 110, 110, 110, 110, 111, 111, 111, 111, 111, 111, 111, 111, 
    112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 113, 113, 113, 113, 
    114, 114, 114, 114, 114, 114, 114, 114, 115, 115, 115, 115, 115, 115, 115, 115, 
    115, 116, 116, 116, 116, 117, 117, 117, 118, 118, 118, 118, 118, 118, 118, 118, 
    118, 118, 118, 118, 119, 119, 119, 119, 119, 119, 120, 120, 120, 120, 120, 120, 
    121, 121, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 
    123, 123, 123, 124, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 127, 127, 
    128, 128, 128, 129, 129, 129, 130, 130, 131, 131, 131, 131, 131, 131,  19,  19, 
    132, 132, 132, 132, 132, 132, 133, 133, 134, 134, 134, 134, 134, 134,  19,  19, 
    135, 135, 135,  19,  19,  19,  19,  19,  19,  19,  19,  19, 136, 136, 136, 136, 
    137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 138, 138, 138, 138, 138, 
    139, 139, 139, 139, 139, 139, 139, 139, 140, 140, 140, 140, 140, 140, 140, 140, 
    141, 141, 141, 141, 141, 141, 141, 141, 142, 142, 142, 142, 142, 142, 142, 142, 
    143, 143, 143, 143, 143, 143, 143, 143, 144, 144, 144, 144, 144, 145, 145, 145, 
    145, 145, 145, 145, 145, 145, 145, 145, 146, 147, 148, 149, 149, 150, 150, 151, 
    151, 151, 151, 151, 151, 151, 151, 151, 152, 152, 152, 152, 152, 152, 152, 152, 
    152, 152, 152, 152, 152, 152, 152, 153, 154, 154, 154, 154, 154, 154, 154, 154, 
    155, 155, 155, 155, 155, 155, 155, 155, 156, 156, 156, 156, 157, 157, 157, 157, 
    157, 158, 158, 158, 158, 159, 159, 159, 160, 160, 161, 161, 161, 161,  19,  19, 
    162, 162, 162, 163, 163,  19,  19,  19, 164, 164, 165, 165, 165, 165,  19,  19, 
    166, 166, 166, 166, 166, 167, 167, 167, 168, 168, 168,  19,  19,  19,  19,  19, 
    169, 169, 169, 169, 170, 170,  19,  19, 171, 171, 172, 172,  19,  19,  19,  19, 
    173, 173, 173, 173, 173, 173, 174, 174, 175, 175, 175, 175, 176, 176, 177, 177, 
    178, 178, 178, 178, 178,  19,  19,  19,  19,  19,  19,  19,  19,  19, 179, 179, 
    180, 180, 180, 180, 180, 180, 180, 180, 181, 181, 181, 181, 181,  19,  19,  19, 
    182, 182, 182, 182, 182, 182, 182, 182, 183, 183, 183, 183, 183, 183, 183, 183, 
    184, 184, 184, 184, 184, 184, 184, 184, 184, 184, 184,  19,  19,  19,  19,  19, 
    185, 185, 185, 185, 185, 185, 185, 185, 185, 185, 185, 185,  19,  19,  19,  19, 
    186, 186, 186, 186, 186, 186, 186, 186, 187, 187, 187, 187, 187, 187, 187, 187, 
    188, 188, 188, 188, 188, 188, 188, 188, 189, 189, 189, 189, 189,  19,  19,  19, 
    190, 190, 190, 190, 190, 190, 191, 191, 192, 192, 192, 192, 192, 192, 192, 192, 
    193, 193, 193, 194, 194, 194, 194, 194, 194, 194, 195, 195, 195, 195, 195, 195, 
    196, 196, 196, 196, 196, 196, 196, 196, 197, 197, 197, 197, 197, 197, 197, 197, 
    198, 198, 198, 198, 198, 198, 198, 198, 199, 199, 199, 199, 199,  19,  19,  19, 
    200, 200, 200, 200, 200, 200, 200, 200, 201, 201, 201, 201, 201, 201, 201, 201, 
    202, 202, 202, 202, 202, 202, 202, 202, 202, 202, 202, 202, 202, 202,  19,  19, 
    203, 203, 203, 203, 203, 203, 203, 203, 203, 203, 203, 203, 204, 204, 204, 204, 
    204, 204, 204, 204, 204, 204, 204, 204, 204, 204,  19,  19,  19,  19,  19,  19, 
    205, 205, 205, 205, 205, 205, 205, 205, 205, 205,  19,  19,  19,  19,  19,  19, 
    206, 206, 206, 206, 206, 206, 206, 206, 207, 207, 207, 207, 207, 207, 207, 207, 
    207, 207, 207, 207, 207, 207, 207,  19, 208, 208, 208, 208, 208, 208, 208, 208, 
    209, 209, 209, 209, 209, 209, 209, 209, 
};

RE_UINT8 re_block_stage_4[] = {
      0,   0,   0,   0,   1,   1,   1,   1,   2,   2,   2,   2,   3,   3,   3,   3, 
      4,   4,   4,   4,   5,   5,   5,   5,   6,   6,   6,   6,   7,   7,   7,   7, 
      8,   8,   8,   8,   9,   9,   9,   9,  10,  10,  10,  10,  11,  11,  11,  11, 
     12,  12,  12,  12,  13,  13,  13,  13,  14,  14,  14,  14,  15,  15,  15,  15, 
     16,  16,  16,  16,  17,  17,  17,  17,  18,  18,  18,  18,  19,  19,  19,  19, 
     20,  20,  20,  20,  21,  21,  21,  21,  22,  22,  22,  22,  23,  23,  23,  23, 
     24,  24,  24,  24,  25,  25,  25,  25,  26,  26,  26,  26,  27,  27,  27,  27, 
     28,  28,  28,  28,  29,  29,  29,  29,  30,  30,  30,  30,  31,  31,  31,  31, 
     32,  32,  32,  32,  33,  33,  33,  33,  34,  34,  34,  34,  35,  35,  35,  35, 
     36,  36,  36,  36,  37,  37,  37,  37,  38,  38,  38,  38,  39,  39,  39,  39, 
     40,  40,  40,  40,  41,  41,  41,  41,  42,  42,  42,  42,  43,  43,  43,  43, 
     44,  44,  44,  44,  45,  45,  45,  45,  46,  46,  46,  46,  47,  47,  47,  47, 
     48,  48,  48,  48,  49,  49,  49,  49,  50,  50,  50,  50,  51,  51,  51,  51, 
     52,  52,  52,  52,  53,  53,  53,  53,  54,  54,  54,  54,  55,  55,  55,  55, 
     56,  56,  56,  56,  57,  57,  57,  57,  58,  58,  58,  58,  59,  59,  59,  59, 
     60,  60,  60,  60,  61,  61,  61,  61,  62,  62,  62,  62,  63,  63,  63,  63, 
     64,  64,  64,  64,  65,  65,  65,  65,  66,  66,  66,  66,  67,  67,  67,  67, 
     68,  68,  68,  68,  69,  69,  69,  69,  70,  70,  70,  70,  71,  71,  71,  71, 
     72,  72,  72,  72,  73,  73,  73,  73,  74,  74,  74,  74,  75,  75,  75,  75, 
     76,  76,  76,  76,  77,  77,  77,  77,  78,  78,  78,  78,  79,  79,  79,  79, 
     80,  80,  80,  80,  81,  81,  81,  81,  82,  82,  82,  82,  83,  83,  83,  83, 
     84,  84,  84,  84,  85,  85,  85,  85,  86,  86,  86,  86,  87,  87,  87,  87, 
     88,  88,  88,  88,  89,  89,  89,  89,  90,  90,  90,  90,  91,  91,  91,  91, 
     92,  92,  92,  92,  93,  93,  93,  93,  94,  94,  94,  94,  95,  95,  95,  95, 
     96,  96,  96,  96,  97,  97,  97,  97,  98,  98,  98,  98,  99,  99,  99,  99, 
    100, 100, 100, 100, 101, 101, 101, 101, 102, 102, 102, 102, 103, 103, 103, 103, 
    104, 104, 104, 104, 105, 105, 105, 105, 106, 106, 106, 106, 107, 107, 107, 107, 
    108, 108, 108, 108, 109, 109, 109, 109, 110, 110, 110, 110, 111, 111, 111, 111, 
    112, 112, 112, 112, 113, 113, 113, 113, 114, 114, 114, 114, 115, 115, 115, 115, 
    116, 116, 116, 116, 117, 117, 117, 117, 118, 118, 118, 118, 119, 119, 119, 119, 
    120, 120, 120, 120, 121, 121, 121, 121, 122, 122, 122, 122, 123, 123, 123, 123, 
    124, 124, 124, 124, 125, 125, 125, 125, 126, 126, 126, 126, 127, 127, 127, 127, 
    128, 128, 128, 128, 129, 129, 129, 129, 130, 130, 130, 130, 131, 131, 131, 131, 
    132, 132, 132, 132, 133, 133, 133, 133, 134, 134, 134, 134, 135, 135, 135, 135, 
    136, 136, 136, 136, 137, 137, 137, 137, 138, 138, 138, 138, 139, 139, 139, 139, 
    140, 140, 140, 140, 141, 141, 141, 141, 142, 142, 142, 142, 143, 143, 143, 143, 
    144, 144, 144, 144, 145, 145, 145, 145, 146, 146, 146, 146, 147, 147, 147, 147, 
    148, 148, 148, 148, 149, 149, 149, 149, 150, 150, 150, 150, 151, 151, 151, 151, 
    152, 152, 152, 152, 153, 153, 153, 153, 154, 154, 154, 154, 155, 155, 155, 155, 
    156, 156, 156, 156, 157, 157, 157, 157, 158, 158, 158, 158, 159, 159, 159, 159, 
    160, 160, 160, 160, 161, 161, 161, 161, 162, 162, 162, 162, 163, 163, 163, 163, 
    164, 164, 164, 164, 165, 165, 165, 165, 166, 166, 166, 166, 167, 167, 167, 167, 
    168, 168, 168, 168, 169, 169, 169, 169, 170, 170, 170, 170, 171, 171, 171, 171, 
    172, 172, 172, 172, 173, 173, 173, 173, 174, 174, 174, 174, 175, 175, 175, 175, 
    176, 176, 176, 176, 177, 177, 177, 177, 178, 178, 178, 178, 179, 179, 179, 179, 
    180, 180, 180, 180, 181, 181, 181, 181, 182, 182, 182, 182, 183, 183, 183, 183, 
    184, 184, 184, 184, 185, 185, 185, 185, 186, 186, 186, 186, 187, 187, 187, 187, 
    188, 188, 188, 188, 189, 189, 189, 189, 190, 190, 190, 190, 191, 191, 191, 191, 
    192, 192, 192, 192, 193, 193, 193, 193, 194, 194, 194, 194, 195, 195, 195, 195, 
    196, 196, 196, 196, 197, 197, 197, 197, 198, 198, 198, 198, 199, 199, 199, 199, 
    200, 200, 200, 200, 201, 201, 201, 201, 202, 202, 202, 202, 203, 203, 203, 203, 
    204, 204, 204, 204, 205, 205, 205, 205, 206, 206, 206, 206, 207, 207, 207, 207, 
    208, 208, 208, 208, 209, 209, 209, 209, 
};

RE_UINT8 re_block_stage_5[] = {
      1,   1,   1,   1,   2,   2,   2,   2,   3,   3,   3,   3,   4,   4,   4,   4, 
      5,   5,   5,   5,   6,   6,   6,   6,   7,   7,   7,   7,   8,   8,   8,   8, 
      9,   9,   9,   9,  10,  10,  10,  10,  11,  11,  11,  11,  12,  12,  12,  12, 
     13,  13,  13,  13,  14,  14,  14,  14,  15,  15,  15,  15,  16,  16,  16,  16, 
     17,  17,  17,  17,  18,  18,  18,  18,  19,  19,  19,  19,   0,   0,   0,   0, 
     20,  20,  20,  20,  21,  21,  21,  21,  22,  22,  22,  22,  23,  23,  23,  23, 
     24,  24,  24,  24,  25,  25,  25,  25,  26,  26,  26,  26,  27,  27,  27,  27, 
     28,  28,  28,  28,  29,  29,  29,  29,  30,  30,  30,  30,  31,  31,  31,  31, 
     32,  32,  32,  32,  33,  33,  33,  33,  34,  34,  34,  34,  35,  35,  35,  35, 
     36,  36,  36,  36,  37,  37,  37,  37,  38,  38,  38,  38,  39,  39,  39,  39, 
     40,  40,  40,  40,  41,  41,  41,  41,  42,  42,  42,  42,  43,  43,  43,  43, 
     44,  44,  44,  44,  45,  45,  45,  45,  46,  46,  46,  46,  47,  47,  47,  47, 
     48,  48,  48,  48,  49,  49,  49,  49,  50,  50,  50,  50,  51,  51,  51,  51, 
     52,  52,  52,  52,  53,  53,  53,  53,  54,  54,  54,  54,  55,  55,  55,  55, 
     56,  56,  56,  56,  57,  57,  57,  57,  58,  58,  58,  58,  59,  59,  59,  59, 
     60,  60,  60,  60,  61,  61,  61,  61,  62,  62,  62,  62,  63,  63,  63,  63, 
     64,  64,  64,  64,  65,  65,  65,  65,  66,  66,  66,  66,  67,  67,  67,  67, 
     68,  68,  68,  68,  69,  69,  69,  69,  70,  70,  70,  70,  71,  71,  71,  71, 
     72,  72,  72,  72,  73,  73,  73,  73,  74,  74,  74,  74,  75,  75,  75,  75, 
     76,  76,  76,  76,  77,  77,  77,  77,  78,  78,  78,  78,  79,  79,  79,  79, 
     80,  80,  80,  80,  81,  81,  81,  81,  82,  82,  82,  82,  83,  83,  83,  83, 
     84,  84,  84,  84,  85,  85,  85,  85,  86,  86,  86,  86,  87,  87,  87,  87, 
     88,  88,  88,  88,  89,  89,  89,  89,  90,  90,  90,  90,  91,  91,  91,  91, 
     92,  92,  92,  92,  93,  93,  93,  93,  94,  94,  94,  94,  95,  95,  95,  95, 
     96,  96,  96,  96,  97,  97,  97,  97,  98,  98,  98,  98,  99,  99,  99,  99, 
    100, 100, 100, 100, 101, 101, 101, 101, 102, 102, 102, 102, 103, 103, 103, 103, 
    104, 104, 104, 104, 105, 105, 105, 105, 106, 106, 106, 106, 107, 107, 107, 107, 
    108, 108, 108, 108, 109, 109, 109, 109, 110, 110, 110, 110, 111, 111, 111, 111, 
    112, 112, 112, 112, 113, 113, 113, 113, 114, 114, 114, 114, 115, 115, 115, 115, 
    116, 116, 116, 116, 117, 117, 117, 117, 118, 118, 118, 118, 119, 119, 119, 119, 
    120, 120, 120, 120, 121, 121, 121, 121, 122, 122, 122, 122, 123, 123, 123, 123, 
    124, 124, 124, 124, 125, 125, 125, 125, 126, 126, 126, 126, 127, 127, 127, 127, 
    128, 128, 128, 128, 129, 129, 129, 129, 130, 130, 130, 130, 131, 131, 131, 131, 
    132, 132, 132, 132, 133, 133, 133, 133, 134, 134, 134, 134, 135, 135, 135, 135, 
    136, 136, 136, 136, 137, 137, 137, 137, 138, 138, 138, 138, 139, 139, 139, 139, 
    140, 140, 140, 140, 141, 141, 141, 141, 142, 142, 142, 142, 143, 143, 143, 143, 
    144, 144, 144, 144, 145, 145, 145, 145, 146, 146, 146, 146, 147, 147, 147, 147, 
    148, 148, 148, 148, 149, 149, 149, 149, 150, 150, 150, 150, 151, 151, 151, 151, 
    152, 152, 152, 152, 153, 153, 153, 153, 154, 154, 154, 154, 155, 155, 155, 155, 
    156, 156, 156, 156, 157, 157, 157, 157, 158, 158, 158, 158, 159, 159, 159, 159, 
    160, 160, 160, 160, 161, 161, 161, 161, 162, 162, 162, 162, 163, 163, 163, 163, 
    164, 164, 164, 164, 165, 165, 165, 165, 166, 166, 166, 166, 167, 167, 167, 167, 
    168, 168, 168, 168, 169, 169, 169, 169, 170, 170, 170, 170, 171, 171, 171, 171, 
    172, 172, 172, 172, 173, 173, 173, 173, 174, 174, 174, 174, 175, 175, 175, 175, 
    176, 176, 176, 176, 177, 177, 177, 177, 178, 178, 178, 178, 179, 179, 179, 179, 
    180, 180, 180, 180, 181, 181, 181, 181, 182, 182, 182, 182, 183, 183, 183, 183, 
    184, 184, 184, 184, 185, 185, 185, 185, 186, 186, 186, 186, 187, 187, 187, 187, 
    188, 188, 188, 188, 189, 189, 189, 189, 190, 190, 190, 190, 191, 191, 191, 191, 
    192, 192, 192, 192, 193, 193, 193, 193, 194, 194, 194, 194, 195, 195, 195, 195, 
    196, 196, 196, 196, 197, 197, 197, 197, 198, 198, 198, 198, 199, 199, 199, 199, 
    200, 200, 200, 200, 201, 201, 201, 201, 202, 202, 202, 202, 203, 203, 203, 203, 
    204, 204, 204, 204, 205, 205, 205, 205, 206, 206, 206, 206, 207, 207, 207, 207, 
    208, 208, 208, 208, 209, 209, 209, 209, 
};

/* Block: 4120 bytes. */

RE_UINT32 re_get_block(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 11;
    code = ch ^ (f << 11);
    pos = ((RE_UINT32)re_block_stage_1[f] << 4);
    f = code >> 7;
    code ^= (f << 7);
    pos = ((RE_UINT32)re_block_stage_2[pos + f] << 3);
    f = code >> 4;
    code ^= (f << 4);
    pos = ((RE_UINT32)re_block_stage_3[pos + f] << 2);
    f = code >> 2;
    code ^= (f << 2);
    pos = ((RE_UINT32)re_block_stage_4[pos + f] << 2);
    value = re_block_stage_5[pos + code];

    return value;
}

/* Script. */

RE_UINT8 re_script_stage_1[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  7,  8,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  9, 10, 11, 12, 12, 12, 12, 13, 14, 14, 14, 14, 15, 
    16, 17, 18, 14, 19, 14, 20, 14, 14, 14, 14, 14, 14, 21, 14, 14, 
    14, 14, 14, 14, 14, 14, 22, 14, 14, 14, 23, 14, 14, 14, 24, 14, 
     7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  7, 25,  7, 26, 27, 14, 14, 14, 14, 14, 14, 14, 28, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    29, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
};

RE_UINT8 re_script_stage_2[] = {
      0,   1,   2,   2,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13, 
     14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29, 
     30,  31,  32,  32,  33,  34,  35,  36,  37,  37,  37,  37,  37,  38,  39,  40, 
     41,  42,  43,  44,  45,  46,  47,  48,  49,  50,  51,  52,   2,   2,  53,  54, 
     55,  56,  57,  58,  59,  59,  59,  60,  61,  59,  59,  59,  59,  59,  62,  63, 
     64,  64,  59,  59,  59,  59,  65,  15,  66,  67,  68,  69,  70,  71,  72,  73, 
     74,  75,  76,  77,  78,  79,  80,  59,  72,  72,  72,  72,  72,  72,  72,  72, 
     72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72, 
     72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  81,  72,  72,  72,  72, 
     72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  82, 
     83,  83,  83,  83,  83,  83,  83,  83,  83,  84,  85,  85,  86,  87,  88,  89, 
     90,  91,  92,  93,  94,  95,  96,  97,  32,  32,  32,  32,  32,  32,  32,  32, 
     32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32, 
     32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  98, 
     15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15, 
     15,  15,  72,  72,  99, 100, 101, 102, 103, 103, 104, 105, 106, 107, 108, 109, 
    110, 111, 112, 113,  15, 114, 115, 116, 117, 118,  15,  15,  15,  15,  15,  15, 
    119,  15, 120,  15, 121,  15, 122,  15, 123,  15,  15,  15, 124,  15,  15,  15, 
    125, 126,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15, 
    127, 127, 127, 127, 127, 127, 128,  15, 129,  15,  15,  15,  15,  15,  15,  15, 
    130, 130, 130, 130, 130, 130, 130, 130, 131,  15,  15,  15,  15,  15,  15,  15, 
    132, 132, 132, 132, 133,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15, 
    134,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15, 
     59, 135, 136, 137, 138,  15, 139,  15, 140, 141, 142,  59,  59, 143,  59, 144, 
    145, 146, 147, 148, 149,  15, 150, 151, 152, 153, 154, 155, 156, 157,  60,  15, 
     72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72, 158,  72,  72, 
     72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72, 159,  72, 
    160,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15, 
     72,  72,  72,  72, 160,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15, 
    161,  15, 162, 163,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15, 
};

RE_UINT16 re_script_stage_3[] = {
      0,   0,   0,   0,   1,   2,   1,   2,   0,   0,   3,   3,   4,   5,   4,   5, 
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   6,   0,   0,   7,   0, 
      8,   8,   8,   8,   8,   8,   8,   9,  10,  11,  12,  11,  11,  11,  13,  11, 
     14,  14,  14,  14,  14,  14,  14,  14,  15,  14,  14,  14,  14,  14,  14,  14, 
     14,  14,  16,  17,  18,  19,  17,  18,  20,  21,  22,  22,  23,  22,  24,  25, 
     26,  27,  28,  28,  29,  30,  31,  32,  28,  28,  28,  28,  28,  33,  28,  28, 
     34,  35,  35,  35,  36,  28,  28,  28,  37,  37,  37,  38,  39,  39,  39,  40, 
     41,  41,  42,  43,  44,  45,  46,  46,  46,  46,  46,  46,  46,  46,  46,  46, 
     47,  47,  47,  47,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58, 
     59,  60,  61,  62,  63,  64,  65,  66,  67,  68,  69,  70,  71,  72,  73,  74, 
     75,  76,  77,  78,  79,  80,  81,  82,  83,  84,  85,  86,  87,  88,  89,  90, 
     91,  92,  93,  94,  95,  96,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106, 
    107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120,  46, 121, 
    122, 123, 123, 124, 123, 125,  46,  46, 126, 127, 128, 129, 130, 131,  46,  46, 
    132, 132, 132, 132, 133, 132, 134, 135, 132, 133, 132, 136, 136, 137,  46,  46, 
    138, 138, 138, 138, 138, 138, 138, 138, 138, 138, 139, 139, 140, 139, 139, 141, 
    142, 142, 142, 142, 142, 142, 142, 142, 143, 143, 143, 143, 144, 145, 143, 143, 
    144, 143, 143, 146, 147, 148, 143, 143, 143, 147, 143, 143, 143, 149, 143, 150, 
    143, 151, 152, 152, 152, 152, 152, 153, 154, 154, 154, 154, 154, 154, 154, 154, 
    155, 156, 157, 157, 157, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 
    168, 168, 168, 168, 168, 169, 170, 170, 171, 172, 173, 173, 173, 173, 173, 174, 
    173, 173, 175, 154, 154, 154, 154, 176, 177, 178, 179, 179, 180, 181, 182, 183, 
    184, 184, 185, 184, 186, 187, 168, 168, 188, 189, 190, 190, 190, 191, 190, 192, 
    193, 193, 194,  46,  46,  46,  46,  46, 195, 195, 195, 195, 196, 195, 195, 197, 
    198, 198, 199, 200, 201, 201, 201, 202, 203, 203, 203, 204, 205, 206, 206, 206, 
     46,  46,  46,  46,  46, 207, 208, 209,   4,   4, 210,   4,   4, 211, 212, 213, 
      4,   4,   4, 214,   8,   8, 215, 216,  11, 217,  11,  11, 217, 218,  11, 219, 
     11,  11,  11, 220, 220, 221,  11, 222, 223,   0,   0,   0,   0,   0, 224, 225, 
    226, 227,   0, 228,  46,   8,   8, 229,   0,   0, 230, 231, 232,   0,   4,   4, 
    233,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0, 234,   0,   0, 235,  46, 236,  46,   0,   0, 
    237,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 238,   0,   0,   0, 
    239, 239, 239, 239, 239, 239, 239, 239,   0,   0,   0,   0, 240, 228,  46,  46, 
    241, 241, 242, 241, 241, 242,   4,   4, 243, 243, 243, 243, 243, 243, 243, 244, 
    139, 139, 140, 245, 245, 245, 246, 247, 143, 248, 249, 249, 249, 249,  14,  14, 
      0,   0,   0, 250,  46,  46,  46,  46, 251, 252, 251, 251, 251, 251, 251, 253, 
    251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 254,  46, 255, 
    256,   0, 257, 258, 259, 260, 260, 260, 260, 261, 262, 263, 263, 263, 263, 264, 
    265, 266, 267, 268, 142, 142, 142, 142, 269,   0, 266, 270,   0,   0, 234, 263, 
    142, 269,   0,   0,   0,   0, 142, 271,   0,   0,   0,   0,   0, 263, 263, 272, 
    263, 263, 263, 263, 263, 273,   0,   0, 251, 251, 251, 254,   0,   0,   0,   0, 
    251, 251, 251, 251, 274,  46,  46,  46, 275, 275, 275, 275, 275, 275, 275, 275, 
    276, 275, 275, 275, 277, 278, 278, 278, 279, 279, 279, 279, 279, 279, 279, 279, 
    279, 279, 280,  46,  14,  14,  14, 281,  14,  16, 282, 282, 282, 282, 282, 283, 
      0,   0, 284,   4,   4,   4,   4,   4, 285, 286, 287,  46,  46,  46,  46, 288, 
    289, 289, 290, 228, 291, 291, 291, 292, 293, 293, 293, 293, 294, 295,  47, 296, 
    297, 297, 297, 298, 298, 299, 142, 300, 301, 301, 301, 301, 302, 303,  46,  46, 
    304, 304, 304, 305, 306, 307, 138, 308, 309, 309, 309, 309, 310, 311,  46,  46, 
    312, 313, 249,  46,  46,  46,  46,  46,  46,  46,  46,  46, 314, 314, 315, 316, 
    142, 142, 317, 142, 318, 142, 142, 319, 251, 251, 320, 251, 251, 251, 320, 251, 
    251, 251, 251, 251, 251, 321,  46,  46, 322, 323,  22, 324, 325,  28,  28,  28, 
     28,  28,  28,  28, 326, 327,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28, 
     28,  28,  28, 328,  46,  28,  28,  28,  28, 329,  28,  28, 330,  46,  46, 331, 
      8, 228, 215,   0,   0, 332, 333, 334,  28,  28,  28,  28,  28,  28,  28, 335, 
    237,   0,   1,   2,   1,   2, 336, 262, 263, 337, 142, 269, 338, 339, 340, 341, 
    342, 343, 344, 345, 346, 346,  46,  46, 343, 343, 343, 343, 343, 343, 343, 347, 
    348,   0,   0, 349,  11,  11,  11,  11, 350, 255,  46,  46,  46,   0,   0, 351, 
    352, 353, 354, 354, 354, 355,  46,  46, 356, 357, 358, 359, 360,  46,  46,  46, 
    361, 362, 363, 363, 364, 365,  46,  46, 366, 366, 366, 366, 366, 367, 367, 367, 
    368, 369, 370,  46,  46,  46,  46,  46, 371, 372, 372, 373, 374, 375,  46,  46, 
    376, 377, 378, 379,  46,  46,  46,  46, 380, 381, 382, 383, 384, 385, 386, 386, 
    387, 387, 387, 388, 389, 390, 391, 392, 393, 393, 393, 393, 394,  46,  46,  46, 
     46,  46,  46,  46,  46,  46,  28, 395, 396, 396, 396, 396, 397, 398, 396,  46, 
    399, 399, 399, 399, 400,  46,  46,  46, 401, 401, 401, 401, 401, 401, 401, 401, 
    401, 401, 401, 401, 401, 401, 402,  46, 401, 401, 401, 401, 401, 401, 403, 404, 
    405, 405, 405, 405, 405, 405, 405, 405, 405, 405, 406,  46,  46,  46,  46,  46, 
    282, 282, 282, 282, 282, 282, 282, 282, 282, 282, 282, 407,  46,  46,  46,  46, 
    408,  46,  46,  46,  46,  46,  46,  46,   0,   0,   0,   0,   0,   0,   0, 409, 
      0,   0, 410,   0,   0,   0, 411, 412, 413,   0, 414,   0,   0, 415,  46,  46, 
     11,  11,  11,  11, 416,  46,  46,  46,   0,   0,   0,   0,   0, 235,   0, 250, 
      0,   0,   0,   0,   0, 417,   0,   0,   0, 418, 419, 420, 421,   0,   0,   0, 
    422, 423,   0, 424, 425, 426,   0,   0,   0,   0, 427,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 428,   0,   0,   0,   0,   0, 255,   0,   0,   0,   0,   0, 
      0, 234, 226, 429, 237, 237,  46,  46, 236,   0, 226,   0,   0,   0, 228,   0, 
      0, 236,  46,  46,  46,  46, 430,   0, 431,   0,   0, 236, 432, 250,  46,  46, 
      0,   0, 433, 434,   0,   0,   0, 240,   0, 234,   0,   0, 435,  46,   0, 433, 
      0,   0,   0, 226, 426,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 436, 
      0,   0,   0, 415,  46,   0, 437,  46,  46,  46,  46,  46,  46,  46,  46, 438, 
    237, 439, 440, 421, 441,  46,  46,  46,   0,   0,   0,   0, 409,  46,  46,  46, 
    251, 251, 251, 251, 251, 442,  46,  46, 251, 251, 251, 443, 251, 251, 251, 251, 
    251, 320,  46,  46,  46,  46,  46,  46, 444,  46,   0,   0,   0,   0,   0,   0, 
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  46, 
};

RE_UINT16 re_script_stage_4[] = {
      0,   0,   0,   0,   1,   2,   2,   2,   2,   2,   3,   0,   0,   0,   4,   0, 
      2,   2,   2,   2,   2,   3,   2,   2,   2,   2,   5,   0,   2,   5,   6,   0, 
      7,   7,   7,   7,   8,   9,  10,  11,  12,  13,  14,  15,   8,   8,   8,   8, 
     16,   8,   8,   8,  17,  18,  18,  18,  19,  19,  19,  19,  19,  20,  19,  19, 
     19,  19,  12,  12,  21,  22,  22,  22,  22,  22,  22,  22,  22,  23,  21,  22, 
     22,  22,  24,  12,  25,  26,  26,  26,  26,  26,  26,  26,  26,  26,  12,  12, 
     26,  26,  27,  12,  26,  28,  12,  12,  29,  30,  29,  31,  29,  29,  32,  33, 
     29,  29,  29,  29,  31,  29,  34,   7,   7,  35,  29,  34,   0,   0,  36,  29, 
     37,  29,  29,  29,  29,  29,  29,  38,  39,  39,  39,  40,  39,  39,  39,  39, 
     39,  39,  41,  42,  43,  43,  43,  43,  44,  12,  12,  12,  45,  45,  45,  45, 
     45,  45,  46,  12,  47,  47,  47,  47,  47,  47,  47,  48,  47,  47,  47,  49, 
     50,  50,  50,  50,  50,  50,  50,  51,  12,  12,  12,  12,  52,  52,  52,  52, 
     53,  52,  52,  52,  52,  54,  52,  52,  55,  52,  56,  52,  57,  57,  58,  59, 
     59,  58,  58,  58,  58,  58,  60,  58,  61,  62,  63,  58,  58,  59,  59,  64, 
     12,  65,  12,  66,  58,  62,  58,  58,  58,  58,  58,  12,  67,  67,  68,  69, 
     70,  71,  71,  71,  71,  71,  72,  71,  72,  73,  74,  72,  68,  69,  70,  74, 
     75,  12,  67,  76,  12,  77,  71,  71,  71,  74,  12,  12,  78,  78,  79,  80, 
     80,  79,  79,  79,  79,  79,  81,  79,  81,  78,  82,  79,  79,  80,  80,  82, 
     83,  12,  12,  12,  79,  84,  79,  79,  85,  12,  12,  12,  86,  86,  87,  88, 
     88,  87,  87,  87,  87,  87,  89,  87,  89,  86,  90,  87,  87,  88,  88,  90, 
     12,  91,  12,  92,  87,  91,  87,  87,  87,  87,  12,  12,  93,  94,  95,  93, 
     96,  97,  98,  96,  99, 100,  95,  93, 101, 101,  97,  93,  95,  93,  96,  97, 
    100,  99,  12,  12,  12,  93, 101, 101, 101, 101,  95,  12, 102, 102, 103, 104, 
    104, 103, 103, 103, 103, 103, 104, 103, 103, 102, 105, 102, 103, 104, 104, 105, 
     12, 106, 105,  12, 103, 107, 103, 103,  12,  12, 103, 103, 108, 109, 110, 111, 
    111, 110, 110, 110, 110, 110, 111, 110, 110, 109, 112, 110, 110, 111, 111, 112, 
     12, 113,  12, 114, 110, 108, 110, 110, 113,  12,  12,  12, 115, 116, 117, 118, 
    118, 117, 117, 117, 117, 117, 117, 117, 117, 117, 119, 116, 117, 118, 118, 119, 
     12, 120,  12,  12, 117, 115, 117, 117, 117, 121, 116, 117, 122, 123, 124, 124, 
    124, 125, 122, 124, 124, 124, 124, 124, 126, 124, 124, 127, 124, 125, 128, 129, 
    124, 130, 124, 124, 122, 131,  12,  12, 132, 133, 133, 133, 133, 133, 133, 133, 
    133, 133, 134, 135, 133, 133, 133,  12, 136, 137, 138, 139,  12, 140, 141, 140, 
    141, 142, 143, 141, 140, 140, 144, 145, 140, 138, 140, 145, 140, 140, 145, 145, 
    146, 146, 146, 146, 146, 146, 147, 146, 146, 146, 146, 148, 147, 146, 146, 146, 
    146, 146, 146, 149, 146, 150, 151,  12, 152, 152, 152, 152, 153, 153, 153, 153, 
    153, 154,  12,  12, 153, 153, 155, 156, 157, 157, 157, 157, 158, 158, 158, 158, 
    158, 158, 159, 160, 158, 161, 159, 160, 159, 160, 158, 161, 159, 160, 158, 158, 
    158, 161, 158, 158, 158, 158, 161, 162, 158, 158, 158, 163, 158, 158, 160,  12, 
    164, 164, 164, 164, 164, 165,  12,  12, 166, 166, 166, 166, 167, 167, 167, 167, 
    167, 167, 167, 168, 169, 169, 169, 169, 169, 169, 170, 171, 172,  12,  12,  12, 
    173, 173, 173, 174, 173, 175,  12,  12, 176, 176, 176, 176, 176, 177,  12,  12, 
    178, 178, 178, 178, 178,  12,  12,  12, 179, 179, 179, 180, 180,  12,  12,  12, 
    181, 181, 181, 181, 181, 181, 181, 182, 181, 181, 182,  12, 183, 184, 185, 186, 
    185, 185, 187,  12, 185, 185, 185, 185, 185, 185,  12,  12, 185, 185, 186,  12, 
    166, 188,  12,  12, 189, 189, 189, 189, 189, 189, 189, 190, 189, 189, 189,  12, 
    190, 189, 189, 189, 191, 191, 191, 191, 191, 191, 191, 192, 191, 193,  12,  12, 
    194, 194, 194, 194, 194, 194, 194,  12, 194, 194, 195,  12, 194, 194, 196, 197, 
    198, 198, 198, 198, 198, 198, 198, 199, 200, 200, 200, 200, 200, 200, 200, 201, 
    200, 200, 200, 202, 200, 200, 203,  12, 200, 200, 200, 203, 204, 204, 204, 204, 
    204, 204, 204,  12, 204, 204, 204, 205, 206, 206, 206, 206, 206, 206, 207, 208, 
    206, 206, 209,  12, 210, 210, 210, 210, 210,  12,  12, 210, 211, 211, 211, 211, 
    211, 211, 212, 211, 211, 211, 213, 214, 215, 215, 215, 215, 216,   7,   7,   7, 
    217,   7, 218, 219, 220,  12,  12,  12,   2, 221, 222,   2,   2,   2,   2, 223, 
    224, 221, 225,   2,   2,   2, 226,   2,   2,   2,   2, 227,   7, 228,  12,  12, 
     12,  12,  12,   7,   8, 229,   8, 229,   8,   8, 230, 230,   8,   8,   8, 229, 
      8,  15,   8,   8,   8,  10,   8, 231,  10,  15,   8,  14,   0,   0,   0, 232, 
      0, 233, 234,   0, 235,   0,   0, 236,   0,   0,   0, 220,   2,   2,   2, 237, 
      0,   0, 238,  12, 239,  12,  12,  12,   0, 240, 241,   0,   4,   0,   0,   0, 
      0,   0,   0,   4,   2,   2, 242,  12,   0,  12,  12,  12,   0, 220,  12,  12, 
      0,   0, 220,  12, 243,   0,   0,   0,   0,   0, 220, 244, 245, 245, 245, 245, 
      0,   0,   0, 233, 246, 246, 246, 246, 246, 246, 246, 247,  18,  18,  18,  18, 
    248,  12, 249,  18, 250, 250, 250, 250, 250, 251,  12, 252, 253,  12,  12, 252, 
    158, 161,  12,  12, 158, 161, 158, 161, 238,  12,  12,  12, 254, 254, 254, 254, 
    254, 254, 255, 254, 254,  12,  12,  12, 254, 256,  12,  12,   0,   0,   0,  12, 
      0, 257,   0,   0, 258, 254, 259, 260,   0,   0, 254,   0, 261, 262, 262, 262, 
    262, 262, 262, 262, 262, 263, 264, 265, 266, 267, 267, 267, 267, 267, 267, 267, 
    267, 267, 268, 266,  12, 269, 270, 270, 270, 270, 270, 270, 270, 270, 270, 271, 
    272, 157, 157, 157, 157, 157, 157, 273, 270, 270, 274,  12, 157, 157, 157, 275, 
    267, 267, 267, 276, 267, 267,   0,   0, 254, 254, 254,  12, 277, 277, 277, 277, 
    277, 277, 277, 278, 277, 279,  12,  12, 280, 280, 280, 280, 281, 281, 281, 281, 
    281, 281, 281,  12,  19,  12,  12,  19, 282, 282, 282, 282, 282, 282,  12,  12, 
    241,   2,   2,   2,   2,   2, 236, 283, 284,  12,  12,  12,   2,   2, 284,  12, 
     12,  12, 285,   2, 286, 286, 286, 286, 286, 286, 286,  12, 287, 287, 287, 287, 
    287, 287,  12,  12, 288, 288, 288, 288, 288, 289,  12, 290, 288, 288, 291,  12, 
     52,  52,  52,  12, 292, 292, 292, 292, 293, 293, 293, 293, 293,  12,  12, 294, 
    157, 157, 157, 295, 296, 296, 296, 296, 296, 296, 296, 297, 296, 296, 298, 299, 
    300, 300, 300, 300, 300, 301,  12,  12, 300, 300, 300, 302, 300, 300, 302, 300, 
    152, 152, 152,  12, 303, 303, 303, 303, 304,  12,  12,  12,  12,  12, 305, 303, 
    162, 161, 162, 161, 162, 161,  12,  12, 306, 306, 306, 306, 306, 306, 306, 307, 
    306, 306, 307,  12, 157,  12,  12,  12, 157, 273, 308, 157, 157, 157, 157,  12, 
    254, 254, 254, 256, 254, 254, 256,  12,   2, 283,  12,  12, 309,  22,  12,  25, 
     26,  27,  26, 310, 311, 312,  26,  26, 313,  12,  12,  12, 314,  29,  29,  29, 
     29,  29,  29, 315,  30,  29,  29,  29,  29,  29,  12,  12,  29,  29,  29, 316, 
    220,   0,   0,   0,   0, 220,   0,  12,  29, 317,  29,  29,  29,  29,  29, 318, 
      0, 319, 267, 267, 267, 267, 267, 320, 321, 157, 321, 157, 321, 157, 321, 295, 
      0, 220,   0, 220,  12,  12, 243, 238, 322, 322, 322, 323, 322, 322, 322, 322, 
    322, 324, 322, 322, 322, 322, 324, 325, 322, 322, 322, 326, 322, 322, 324,  12, 
    220, 135,   0,   0,   0, 135,   0,   0,   8,   8,  14,  12,   0,   0,   0, 327, 
    328, 328, 328, 328, 328, 328, 328, 329, 330, 330, 330, 330, 331,  12,  12,  12, 
    332, 332, 332, 332, 332, 332, 332, 333, 332,  12,  12,  12, 334, 334, 334, 334, 
    334, 334, 335,  12, 336, 336, 336, 336, 336, 336, 336, 337, 338, 338, 338, 338, 
    338,  12, 338, 338, 338, 339,  12,  12, 340, 340, 340, 340, 341, 341, 341, 341, 
    342, 342, 342, 342, 342, 342, 342, 343, 342, 342, 343,  12, 344, 345, 346, 344, 
    344, 344, 344, 344, 344, 347, 348, 349, 350, 350, 350, 350, 350, 351, 350, 350, 
    352, 352, 352, 352, 352, 352, 352, 353, 354, 354, 354, 354, 354, 354, 355, 356, 
    357, 358,  12, 357, 357, 359, 359, 357, 357, 357, 357, 357, 357,  12, 360, 361, 
    357, 357,  12,  12, 357, 357, 362,  12, 363, 363, 363, 363, 364, 364, 364, 364, 
    364, 365, 366, 364, 367, 367, 367, 367, 367, 368, 367, 367, 369, 369, 369, 369, 
    370,  12, 369, 369, 371, 371, 371, 371, 371, 371, 372,  12,  29,  29,  29, 373, 
    374, 374, 374, 374, 374, 374, 374, 375, 376, 374, 374, 374, 377, 377, 377, 377, 
    378,  12,  12,  12, 379, 379, 379, 379, 379, 379, 379, 380, 380,  12,  12,  12, 
    379,  12,  12,  12, 381, 381, 381, 381, 381, 381, 381, 382, 282, 282, 383,  12, 
    384,  12,  12,  12,   0, 238,  12,  12,   0, 220, 243,   0,   0, 385, 232,   0, 
      0,   0, 385,   7, 216, 386,   7,   0,   0,   0, 387, 232,   0,   0,   0, 238, 
      8, 229,  12,  12,   0, 244,   0,   0,   0,   0,   0, 244, 388, 389, 243, 244, 
      0,   0, 390, 243,   0, 243,   0,   0,   0, 390, 220, 243,   0, 244,   0, 244, 
      0,   0, 390, 220,   0, 391, 234,   0, 244,   0,   0,   0,   0, 238,   0,   0, 
      0,   0,   0, 234, 243,   0,   0, 220,  12, 234,   0,   0, 392,  12,  12,  12, 
      0,   0, 233,  12, 233,  12,  12,  12,   0, 390,   0,   0,   0, 244, 220,  12, 
      0,   0, 243, 233,   0,   0,  12,  12,  12,  12, 135,   0, 244, 391, 391, 220, 
      0, 238,   0, 393, 233, 243,   0,   0, 254, 394,  12,  12, 254, 395,  12,  12, 
    393,  12,  12,  12, 
};

RE_UINT8 re_script_stage_5[] = {
     1,  1,  1,  1,  1,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  1, 
     1,  1,  2,  1,  2,  1,  1,  1,  1,  1, 35, 35, 41, 41, 41, 41, 
     3,  3,  3,  3,  1,  3,  3,  3,  0,  0,  3,  3,  3,  3,  1,  0, 
     0,  0,  0,  0,  3,  1,  3,  1,  3,  3,  3,  0,  3,  0,  3,  3, 
     3,  3,  0,  3,  3,  3, 55, 55, 55, 55, 55, 55,  4,  4,  4,  4, 
     4, 41, 41,  4,  0,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  0, 
     0,  1,  5,  0,  0,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  0, 
     6,  0,  0,  0,  7,  7,  7,  7,  0,  0,  7,  7,  1,  7,  7,  7, 
     7,  7,  7,  1,  0,  0,  7,  1,  7,  7,  7, 41, 41, 41,  7,  7, 
     1,  1,  7,  7, 41,  7,  7,  7,  7,  1,  7,  7,  8,  8,  8,  8, 
     8,  8,  0,  8,  8,  8,  8,  0,  0,  8,  8,  8,  9,  9,  9,  9, 
     9,  9,  0,  0, 66, 66, 66, 66, 66, 66, 66,  0, 82, 82, 82, 82, 
    82, 82,  0,  0, 82, 82, 82,  0, 95, 95, 95, 95,  0,  0, 95,  0, 
    10, 10, 10, 10, 10, 41, 41, 10,  1,  1, 10, 10,  1, 10, 10, 10, 
     0, 10, 10, 10,  0, 11, 11, 11, 11, 11, 11, 11, 11,  0,  0, 11, 
    11,  0, 11, 11, 11,  0, 11,  0,  0,  0, 11, 11, 11, 11,  0,  0, 
    11, 11, 11,  0,  0,  0,  0, 11, 11, 11,  0, 11,  0, 12, 12, 12, 
    12, 12, 12,  0,  0,  0,  0, 12, 12,  0,  0, 12, 12, 12, 12, 12, 
    12,  0, 12, 12,  0, 12, 12,  0, 12, 12,  0,  0,  0, 12,  0,  0, 
    12,  0, 12,  0,  0,  0, 12, 12,  0, 13, 13, 13, 13, 13, 13, 13, 
    13, 13,  0, 13, 13,  0, 13, 13, 13, 13,  0,  0, 13,  0,  0,  0, 
     0,  0, 13, 13,  0, 13,  0,  0,  0, 14, 14, 14, 14, 14, 14, 14, 
    14,  0,  0, 14, 14,  0, 14, 14, 14, 14,  0,  0,  0,  0, 14, 14, 
    14, 14,  0, 14,  0,  0, 15, 15,  0, 15, 15, 15, 15, 15, 15,  0, 
    15,  0, 15, 15, 15, 15,  0,  0,  0, 15, 15,  0,  0,  0,  0, 15, 
    15,  0,  0,  0, 15, 15, 15, 15,  0, 16, 16, 16, 16, 16, 16, 16, 
    16,  0, 16, 16, 16, 16,  0,  0,  0, 16, 16,  0,  0,  0, 16, 16, 
     0,  0, 17, 17,  0, 17, 17, 17, 17, 17, 17, 17, 17,  0, 17, 17, 
    17, 17,  0,  0,  0, 17, 17,  0,  0,  0, 17,  0,  0,  0, 18, 18, 
     0, 18, 18, 18, 18, 18, 18, 18, 18,  0, 18, 18, 18, 18, 18,  0, 
     0,  0,  0, 18, 18, 18,  0,  0,  0,  0, 19, 19,  0, 19, 19, 19, 
    19, 19, 19, 19, 19, 19, 19,  0, 19, 19,  0, 19,  0, 19,  0,  0, 
     0,  0, 19,  0,  0,  0,  0, 19, 19,  0, 19,  0, 19,  0,  0,  0, 
     0, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20,  0,  0,  0,  0,  1, 
     0, 21, 21,  0, 21,  0,  0, 21, 21,  0, 21,  0,  0, 21,  0,  0, 
    21, 21, 21, 21,  0, 21, 21, 21,  0, 21,  0, 21,  0,  0, 21, 21, 
    21, 21,  0, 21, 21, 21,  0,  0, 22, 22, 22, 22,  0, 22, 22, 22, 
    22,  0,  0,  0, 22,  0, 22, 22, 22,  1,  1,  1,  1, 22, 22,  0, 
    23, 23, 23, 23, 24, 24, 24, 24, 24, 24,  0,  0, 24, 24, 24,  1, 
    24,  0,  0,  0, 25, 25, 25, 25, 26, 26, 26, 26, 26,  0, 26, 26, 
    26, 26,  0,  0, 26, 26, 26,  0,  0, 26, 26, 26, 26,  0,  0,  0, 
    27, 27, 27, 27, 27,  0,  0,  0, 28, 28, 28, 28, 29, 29, 29, 29, 
    29,  0,  0,  0, 30, 30, 30, 30, 30, 30, 30,  1,  1,  1, 30, 30, 
    30,  0,  0,  0, 42, 42, 42, 42, 42,  0, 42, 42, 42,  0,  0,  0, 
    43, 43, 43, 43, 43,  1,  1,  0, 44, 44, 44, 44, 45, 45, 45, 45, 
    45,  0, 45, 45, 31, 31, 31, 31, 31, 31,  0,  0, 32, 32,  1,  1, 
    32,  1, 32, 32, 32, 32, 32, 32, 32, 32, 32,  0, 32, 32,  0,  0, 
    28, 28,  0,  0, 46, 46, 46, 46, 46,  0,  0,  0, 47, 47, 47, 47, 
    47, 47,  0,  0, 47,  0,  0,  0, 56, 56, 56, 56, 56, 56,  0,  0, 
    56, 56, 56,  0,  0,  0, 56, 56, 54, 54, 54, 54,  0,  0, 54, 54, 
    78, 78, 78, 78, 78, 78, 78,  0, 78,  0,  0, 78, 78, 78,  0,  0, 
    62, 62, 62, 62, 62,  0,  0,  0, 67, 67, 67, 67, 67, 67, 67,  0, 
     0,  0, 67, 67, 67, 67,  0,  0, 93, 93, 93, 93, 68, 68, 68, 68, 
     0,  0,  0, 68, 68, 68,  0,  0,  0, 68, 68, 68, 69, 69, 69, 69, 
    41, 41, 41,  1, 41,  1, 41, 41, 41,  1,  1,  1,  1, 41,  1,  1, 
     1,  1,  1,  0,  2,  2,  3,  3,  3,  3,  3,  4,  2,  3,  3,  3, 
     3,  3,  2,  2,  3,  3,  3,  2,  4,  2,  2,  2,  2,  2,  2,  3, 
    41, 41, 41,  0,  3,  3,  0,  0,  0,  3,  0,  3,  0,  3,  3,  3, 
    41, 41,  1,  1,  1,  0,  0,  0,  0,  0,  1,  1,  1,  2,  0,  0, 
     1,  1,  1,  2,  2,  0,  0,  0,  1,  1,  0,  0, 41,  0,  0,  0, 
     1,  1,  3,  1,  1,  1,  2,  2,  2,  1,  0,  0,  0,  1,  1,  1, 
     1,  0,  1,  1, 53, 53, 53, 53, 57, 57, 57, 57, 57, 57, 57,  0, 
    55, 55,  0,  0,  0, 55, 55, 55, 58, 58, 58, 58, 58, 58,  0,  0, 
     0,  0,  0, 58, 58,  0,  0,  0, 36, 36, 36, 36, 36, 36,  0, 36, 
    36, 36,  0,  0,  1, 36,  1, 36,  1, 36, 36, 36, 36, 36, 41, 41, 
    41, 41, 25, 25,  0, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33,  0, 
     0, 41, 41,  1,  1, 33, 33, 33,  1, 34, 34, 34, 34, 34, 34, 34, 
    34, 34, 34,  1,  0, 35, 35, 35, 35, 35, 35, 35, 35, 35,  0,  0, 
     0, 25, 25, 25, 25, 25, 25,  0, 35, 35, 35,  0, 25, 25, 25,  1, 
    34, 34, 34,  0, 37, 37, 37, 37, 37,  0,  0,  0, 37, 37, 37,  0, 
    83, 83, 83, 83, 70, 70, 70, 70, 84, 84, 84, 84,  2,  2,  2,  0, 
     2,  2,  0,  0,  0,  0,  2,  2, 59, 59, 59, 59, 65, 65, 65, 65, 
    71, 71, 71, 71, 71,  0,  0,  0,  0,  0, 71, 71, 71, 71,  0,  0, 
    72, 72, 72, 72, 73, 73, 73, 73,  0,  0,  0, 73, 25,  0,  0,  0, 
    85, 85, 85, 85, 85, 85,  0, 85, 85, 85,  0,  0,  0,  0, 85, 85, 
    77, 77, 77, 77, 77, 77, 77,  0, 77, 77,  0,  0, 79, 79, 79, 79, 
    79, 79, 79,  0,  0,  0,  0, 79, 86, 86, 86, 86, 86, 86,  0,  0, 
     0,  0,  0, 25,  0,  0,  0,  5,  6,  0,  6,  0,  6,  6,  0,  6, 
     6,  0,  6,  6,  7,  7,  0,  0,  0,  0,  0,  7,  7,  7,  1,  1, 
     7,  1,  0,  0,  7,  0,  7,  7,  7,  0,  0,  1,  1,  1, 34, 34, 
    34, 34,  1,  1,  0,  0, 25, 25, 48, 48, 48, 48,  0, 48, 48, 48, 
    48, 48, 48,  0, 48, 48,  0, 48, 48, 48,  0,  0,  1, 41,  0,  0, 
    74, 74, 74, 74, 74,  0,  0,  0, 75, 75, 75, 75, 75,  0,  0,  0, 
    38, 38, 38, 38, 38, 38, 38,  0, 39, 39, 39, 39, 39, 39, 39,  0, 
    49, 49, 49, 49, 49, 49,  0, 49, 60, 60, 60, 60, 60, 60,  0,  0, 
    40, 40, 40, 40, 50, 50, 50, 50, 51, 51, 51, 51, 51, 51,  0,  0, 
    52, 52, 52, 52, 52, 52,  0,  0, 52,  0, 52, 52, 52, 52,  0, 52, 
    52,  0,  0,  0, 52,  0,  0, 52, 87, 87, 87, 87, 87, 87,  0, 87, 
    64, 64, 64, 64,  0,  0,  0, 64, 76, 76, 76, 76, 76, 76,  0,  0, 
     0,  0,  0, 76, 61, 61, 61, 61,  0, 61, 61,  0,  0, 61, 61, 61, 
    61, 61, 61,  0,  0,  0,  0, 61, 61,  0,  0,  0, 88, 88, 88, 88, 
    80, 80, 80, 80, 80, 80,  0,  0,  0, 80, 80, 80, 89, 89, 89, 89, 
    89, 89,  0,  0, 90, 90, 90, 90, 90, 90, 90,  0, 91, 91, 91, 91, 
    91,  0,  0,  0,  7,  7,  7,  0, 94, 94, 94, 94, 94, 94,  0,  0, 
     0,  0, 94, 94, 92, 92, 92, 92, 92, 92,  0,  0, 63, 63, 63, 63, 
    63, 63, 63,  0, 81, 81, 81, 81, 81, 81, 81,  0, 84,  0,  0,  0, 
    34, 33,  0,  0,  1,  1,  1, 41,  1, 41, 41, 41,  1,  1, 41, 41, 
     0,  0,  1,  0,  0,  1,  1,  0,  1,  1,  0,  1,  1,  0,  1,  0, 
    33,  1,  1,  0,  0,  1,  0,  0, 36, 36, 36,  0, 36,  0,  0,  0, 
};

/* Script: 8792 bytes. */

RE_UINT32 re_get_script(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 11;
    code = ch ^ (f << 11);
    pos = ((RE_UINT32)re_script_stage_1[f] << 4);
    f = code >> 7;
    code ^= (f << 7);
    pos = ((RE_UINT32)re_script_stage_2[pos + f] << 3);
    f = code >> 4;
    code ^= (f << 4);
    pos = ((RE_UINT32)re_script_stage_3[pos + f] << 2);
    f = code >> 2;
    code ^= (f << 2);
    pos = ((RE_UINT32)re_script_stage_4[pos + f] << 2);
    value = re_script_stage_5[pos + code];

    return value;
}

/* Word_Break. */

RE_UINT8 re_word_break_stage_1[] = {
     0,  1,  2,  2,  2,  3,  4,  5,  6,  7,  2,  8,  2,  9, 10,  2, 
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2, 
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2, 
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2, 
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2, 
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2, 
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2, 
    11,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2, 
     2,  2,  2,  2,  2,  2,  2,  2, 
};

RE_UINT8 re_word_break_stage_2[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 
    16, 17, 18, 17, 17, 17, 19, 20, 21, 22, 17, 17, 17, 17, 17, 17, 
    17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 
    23, 23, 24, 25, 26, 27, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 
    23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 28, 17, 17, 17, 17, 
    17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 29, 30, 31, 
    32, 33, 34, 17, 35, 36, 37, 17, 38, 17, 17, 17, 17, 17, 17, 17, 
    23, 39, 40, 17, 17, 17, 17, 17, 23, 23, 41, 17, 17, 17, 17, 17, 
    17, 17, 17, 17, 23, 42, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 
    17, 17, 17, 17, 17, 17, 17, 17, 43, 17, 17, 17, 17, 17, 17, 17, 
    17, 17, 17, 17, 17, 17, 17, 17, 44, 45, 46, 47, 17, 17, 17, 17, 
    48, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 
};

RE_UINT16 re_word_break_stage_3[] = {
      0,   1,   2,   3,   4,   5,   6,   6,   7,   7,   7,   7,   7,   7,   7,   7, 
      7,   7,   7,   7,   7,   7,   8,   9,  10,  10,  10,  11,  12,  13,   7,  14, 
      7,   7,   7,   7,  15,   7,   7,   7,   7,  16,  17,  18,  19,  20,  21,  22, 
     23,   7,  24,  25,   7,   7,  26,  27,  28,  29,  30,   7,   7,  31,  32,  33, 
     34,  35,  36,  37,  37,  37,  37,  37,  38,  39,  40,  41,  42,  43,  44,  45, 
     46,  47,  48,  49,  50,  51,  52,  53,  42,  51,  54,  55,  56,  57,  58,  59, 
     60,  61,  62,  53,  63,  64,  65,  66,  63,  67,  68,  69,  70,  71,  72,  73, 
     37,  74,  75,  37,  37,  76,  77,  37,  78,  79,  80,  81,  82,  83,  84,  37, 
     37,  85,  86,  87,  88,   7,  89,  90,   7,   7,   7,   7,   7,   7,   7,   7, 
      7,   7,  91,   7,  92,  93,  94,   7,  95,   7,  96,  37,  97,   7,   7,  98, 
     18,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7, 
      7,   7,   7,  99,   3,   7,   7, 100, 101, 102, 103, 104,  37, 105, 106, 107, 
    108,   7,   7, 109,   7, 110,   7, 111, 112, 113,  59,  37,  37, 114, 115,  37, 
    116,  37, 117, 118, 119,  37,  37,  37, 120, 121, 122, 123, 124, 125,   7, 126, 
      7, 127, 128, 129,  37,  37, 130, 131,   7,   7,   7,   7,   7,   7,  10, 132, 
      7,   7,   7,   7,   7,   7,   7,   7, 133,   7, 134, 129,   7, 135, 136, 137, 
    138, 139, 140, 141, 142,  37, 114, 143, 144, 145, 146,   7, 147,  37,  37,  37, 
     37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37, 
     37,  37,  37,  37,  37, 148,   7, 149,  37,  37,  37,  37,  37,  37,  37,  37, 
      7, 150, 151,   7,   7,   7,   7, 152,   7,  89,   7, 153, 154, 155, 155,  10, 
     37, 156,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37, 
    157, 158,  37,  37, 159, 160, 160, 161, 162, 163,   7,   7, 164, 165,  37, 166, 
     37,  37,  37,  37,  37,  37, 166, 167, 160, 160, 168,  37,  37,  37,  37,  37, 
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7, 
      7,   7,   7,   7, 169,  37, 170, 129,   7,   7,   7,   7,   7,   7,   7,   7, 
    171, 172,   7, 173, 109,   7,   7, 174, 175, 176,   7,   7, 177, 149,  37, 178, 
    179, 180,   7, 181, 182, 121, 183, 184,  32, 185, 186, 112,  38, 187, 188,  37, 
      7, 189, 190, 191,  37, 192, 193,  37, 194, 195,  37,  37,  37,  37,   7, 196, 
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7, 197, 198, 199, 
     37,  37,  37,  37,  37,  37,  37,  37, 200, 201, 202,   7,   7, 203, 204,   7, 
      7,   7,   7,   7,   7,   7,   7,   7,   7, 129, 170,   7, 205,   7, 206, 207, 
    208, 209, 210, 211,   7,   7,   7, 212, 213,   2,   3, 214, 215, 151, 216, 217, 
    218, 219, 220,  37,   7,   7,   7, 165,  37,  37,   7,  98,  37,  37,  37, 221, 
     37,  37,  37,  37, 112,   7, 222,  37, 151, 170, 223,  37, 129,   7, 224,  37, 
      7,   7,   7,   7, 129, 107,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37, 
    225, 226, 111,  37,  37,  37,  37,  37, 111, 227,  37,  37,  37,  37,  37,  37, 
    228, 229,  37, 112,  37,  37,  37,  37,   7, 111, 111, 230,  37,  37,  37,  37, 
      7,   7, 147,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37, 
    124, 231, 232,  59, 124, 233,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37, 
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7, 164,  37,  37,  37,  37, 
      7,   7,   7, 234,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37, 
      7, 164,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37, 
      7, 235,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37, 
    236,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37, 
     37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37, 237, 238, 239,  37,  37, 
     37,  37, 240,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37, 
      7,   7, 241,   7, 242, 243, 244,   7, 245, 246, 247,   7,   7,   7,   7,   7, 
      7,   7,   7,   7,   7, 248, 249, 250, 241, 241, 150, 150, 251, 251, 252, 253, 
    254, 255, 255, 255,  37,  37,  37,  37,  10,  10,  10,  10,  10,  10,  10, 256, 
};

RE_UINT8 re_word_break_stage_4[] = {
      0,   0,   1,   2,   0,   0,   0,   0,   0,   3,   0,   4,   5,   5,   6,   0, 
      7,   8,   8,   8,   8,   8,   9,  10,   7,   8,   8,   8,   8,   8,   9,   0, 
      0,  11,   0,   0,   0,   0,   0,   0,   0,   0,  12,  13,   0,  14,  12,   0, 
      8,   8,   8,   8,   8,   9,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8, 
     15,  16,   8,   8,  15,   0,   0,   0,   8,  17,   0,  18,   0,   0,   0,   0, 
     19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,   8,  20,  16,  21, 
      0,  22,   9,  20,   8,   8,   8,   8,  23,   8,   8,   8,   8,   8,   8,   8, 
      8,   8,   8,   8,   8,  23,   8,   8,  24,  19,  25,   8,   8,   8,   8,   8, 
      8,   8,   0,   0,   7,   8,   8,   8,   8,   8,   8,   8,   8,   9,  26,   0, 
      7,   8,   8,   8,   8,   8,   8,   8,   8,   8,  27,   0,  28,  19,  19,  19, 
     19,  19,  19,  19,  19,  19,  19,  29,  30,  29,   0,   0,   8,   8,   8,   8, 
      8,   8,   9,   0,   8,  31,   0,   0,  32,   0,   0,  33,  19,  19,  34,   0, 
      8,   8,  35,  19,  19,  19,  19,  19,   5,   5,  36,  37,  38,   8,   8,   8, 
      8,   8,   8,   8,   8,  39,  19,  40,  19,  41,  42,  25,   5,   5,  43,  44, 
      0,   0,   0,  45,  46,   8,   8,   8,   8,   8,   8,   8,  19,  19,  19,  19, 
     19,  19,  34,   7,   8,   8,   8,   8,   8,  47,  19,  19,  48,   0,   0,   0, 
      5,   5,  43,   8,   8,   8,   8,   8,   8,   8,  35,  19,  19,  15,  49,   0, 
      8,   8,   8,   8,   8,  47,  50,  19,  19,  51,  51,  52,   0,   0,   0,   0, 
      8,   8,   8,   8,   8,   8,  51,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     19,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  47,  53, 
     19,  19,  19,  19,  51,  19,   8,   8,  47,  54,   5,   5,   7,   8,   7,   8, 
     28,   7,   8,  44,  44,   8,   8,   8,   8,   8,  20,   8,  18,  16,  15,  53, 
     19,  55,  55,  56,   0,  57,   0,  23,  47,  54,   5,   5,  15,   0,   0,   0, 
     28,   7,   9,  58,  44,   8,   8,   8,   8,   8,  20,   8,  20,  59,  15,  42, 
     34,  57,  55,  52,  60,   0,   7,  18,   0,  54,   5,   5,  25,  61,   0,   0, 
     28,   7,   8,  23,  23,   8,   8,   8,   8,   8,  20,   8,  20,   7,  15,  53, 
     19,  29,  29,  52,  17,   0,   0,   0,  47,  54,   5,   5,   0,   0,   0,   0, 
     19,  55,  55,  52,   0,  62,   0,  23,  47,  54,   5,   5,  26,   0,   0,   0, 
     63,   7,   9,  16,  20,  15,  59,  20,  58,  17,   9,  16,   8,   8,  15,  62, 
     34,  62,  42,  52,  17,  57,   0,   0,   0,  54,   5,   5,   0,   0,   0,   0, 
     28,   7,   8,  20,  20,   8,   8,   8,   8,   8,  20,   8,   8,   7,  15,  39, 
     19,  42,  42,  52,   0,  30,  15,   0,  62,   7,   8,  20,  20,   8,   8,   8, 
      8,   8,  20,   8,   8,   7,  15,  53,  19,  42,  42,  52,   0,  30,   0,  12, 
     47,  54,   5,   5,  59,   0,   0,   0,   8,   8,   8,   8,   8,   8,   9,  39, 
     19,  42,  42,  56,   0,  57,   0,   0,  47,  54,   5,   5,   0,   0,  16,   8, 
     62,   7,   8,   8,   8,   9,  16,   8,   8,   8,   8,   8,  23,   8,   8,  26, 
      8,   9,  64,  57,  19,  65,  19,  19,   0,   0,   0,   0,  62,   0,   0,   0, 
      0,   0,   0,   0,  60,  19,  34,   0,   0,  57,  19,  34,   5,   5,  66,   0, 
      0,   0,   0,   0,  60,  19,  29,  67,   0,   0,  19,  52,   5,   5,  66,   0, 
     17,   0,   0,   0,   0,   0,  52,   0,   5,   5,  66,   0,   0,  68,  60,  62, 
      8,   8,   7,   8,   8,   8,   8,   8,   8,   8,   8,  17,  28,  19,  19,  19, 
     19,  42,   8,  51,  19,  19,  28,  19,  19,  19,  19,  19,  19,  19,  19,  67, 
      0,  64,   0,   0,   0,   0,   0,   0,   0,   0,  57,  19,  19,  19,  19,  34, 
      5,   5,  66,   0,   0,  62,  52,  62,  42,  55,  19,  52,  28,  67,   0,   0, 
     62,  19,  19,  29,   5,   5,  69,  52,   8,  15,   0,   0,   8,   8,   8,   8, 
      8,   8,   8,   8,   8,   8,   9,  17,   8,   8,  20,  15,   8,   9,  20,  15, 
      8,   8,  20,  15,   8,   8,   8,   8,   8,   8,   8,   8,  20,  15,   8,   9, 
     20,  15,   8,   8,   8,   9,   8,   8,   8,   8,   8,   8,  20,  15,   8,   8, 
      8,   8,   8,   8,   8,   8,   9,  28,   8,   8,   8,   8,   0,   0,   0,   0, 
      8,   8,   8,   8,   8,  17,   0,   0,   8,   8,   8,  44,   8,   8,   8,   8, 
      8,   8,   9,  16,  17,   0,   0,   0,   8,   8,   8,  20,  47,  67,   0,   0, 
      8,   8,   8,   8,  47,  67,   0,   0,   8,   8,   8,   8,  47,   0,   0,   0, 
      8,   8,   8,  20,  70,   0,   0,   0,   0,   0,   0,   0,   0,  71,  19,  19, 
     19,  19,  19,  19,  19,   0,   0,  60,   5,   5,  66,   0,   0,   0,   0,   0, 
      0,   0,  57,  52,   5,   5,  66,   0,   8,   8,   8,   8,   8,   8,   0,   0, 
      8,   8,  72,   0,   8,   8,   8,   8,   8,   8,   8,   8,   8,  15,   0,   0, 
      8,   8,   8,   8,   8,   8,   8,  17,  19,  19,  19,   0,  19,  19,  19,   0, 
      0,   0,   0,   0,  19,  19,  19,  19,  67,   0,  52,   0,   5,   5,  66,   0, 
      8,   8,   8,   8,   8,  35,  19,   0,   0,   0,   0,   0,   0,  28,  19,  34, 
     19,  19,  19,  19,  19,  19,  19,  55,   5,   5,  66,   0,   5,   5,  66,   0, 
     19,  38,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  19,  19,  19, 
     19,  38,   8,   0,   5,   5,  66,   0,   0,   0,  57,  19,  19,   0,   0,   0, 
     73,   8,   8,   8,   8,   8,   8,   8,  51,  19,  34,  16,   5,   5,  66,   0, 
      8,  47,  19,  19,  19,   0,   0,   0,   8,  19,  19,  19,  19,  19,   0,   0, 
      5,   5,  66,   7,   5,   5,  43,   8,   8,   8,   8,   8,   8,   8,   8,  15, 
      0,   0,   0,   0,  34,  19,  19,  19,  19,  19,  38,  46,  74,   0,   0,   0, 
     19,  34,   0,   0,   0,   0,   0,  19,   8,   8,   8,   8,   8,  15,   8,  15, 
      8,  15,   8,  15,   8,   8,  75,  75,   8,   8,   8,   8,   8,  20,   8,  18, 
     16,  20,   8,  17,   8,  16,   8,   0,   8,   8,   8,  17,  16,  20,   8,  17, 
      0,   0,   0,  76,   0,   0,  77,   0,   0,  78,  79,  80,   0,   0,   0,  10, 
     81,  82,   0,   0,   0,  81,   0,   0,  32,  83,  84,  32,  26,   0,   0,  58, 
      0,   0,   0,   0,   8,   8,   8,  17,  19,  19,  19,  19,  67,   0,   0,   0, 
     12,  58,  16,   8,   8,  26,   7,  15,   0,  18,  20,  23,   8,   8,  15,   8, 
      0,   7,  15,  12,   0,   0,   0,   0,   8,   8,  17,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  16,   8,   8,   8,   8,  15,   0,   0,   0,   0,   0, 
      8,   8,   8,   9,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   9, 
      8,  17,  58,  35,  52,   0,   0,   0,   8,  15,   0,  58,   0,   0,   0,  57, 
      8,   8,   8,   8,   8,   9,   0,   0,   8,   9,   8,   9,   8,   9,   8,   9, 
      0,   0,   0,  58,   0,   0,   0,   0,   0,  26,   0,   0,   0,   0,   0,   0, 
      0,   0,  62,  19,  85,  86,  58,  17,   0,   0,   0,   0,   0,   0,  87,  88, 
     89,  89,  89,  89,  89,  89,  89,  89,  89,  89,  89,  89,  89,  89,  90,  89, 
      0,   7,   8,   8,   8,   8,   8,   8,   8,   8,   8,  15,   7,   8,   8,   8, 
      8,   8,   8,   9,   0,   0,   0,   0,   8,   8,   8,   8,   8,   8,   9,   0, 
      0,   0,   0,   0,  89,  89,  89,  89,  89,  89,  89,  89,  89,  89,  89,  90, 
     89,  89,  89,  89,  89,  89,   0,   0,   8,   8,   8,  17,   0,   0,   0,   0, 
      0,   0,   0,   0,   8,   8,   8,   8,   8,   8,   8,  17,   8,   8,   8,   8, 
      5,   5,  43,   0,   0,   0,   0,   0,   8,   8,   8,  35,  34,   0,   0,  91, 
      8,   8,   8,   8,  52,   0,   0,   0,   0,   0,   0,   0,   0,  58,   8,   8, 
     16,   8,   8,   8,   8,   8,   8,   8,   8,   8,  44,   9,  15,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  16,   8,  92,  92,  35,   8,   8,   8,   8,   8, 
     35,  19,   0,   0,   0,   0,   0,   0,   8,   8,   8,   8,   8,   0,   0,   0, 
     25,   8,   8,   8,   8,   8,   8,   8,  19,  67,   0,   0,   5,   5,  66,   0, 
     19,  19,  19,  19,  25,   8,  58,   0,   8,  47,  19,  52,   8,   8,   8,   8, 
      8,  35,  19,  19,  19,   0,   0,   0,   8,   8,   8,   8,  35,  19,  19,  19, 
     67,   0,   0,  58,   5,   5,  66,   0,   8,   8,  51,  19,  19,  34,   0,   0, 
     35,   8,   8,  52,   5,   5,  66,   0,   0,   0,   0,   0,   0,   0,  57,   0, 
      0,   0,   0,   0,  42,  55,  67,  62,  60,   0,   0,   0,   0,   0,   0,   0, 
      7,   9,   7,   9,   7,   9,   0,   0,   8,   9,   8,   9,   0,   0,   0,   0, 
     35,  19,  34,  52,   5,   5,  66,   0,   8,   0,   0,   0,   8,   8,   8,   8, 
      8,   9,  58,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   0, 
      8,   9,   0,   0,  58,   8,   0,  93,   8,   8,  20,   8,   8,   9,   8,  18, 
     23,  20,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  15,   0,   0,   0, 
      0,   0,   0,   0,  58,   8,   8,   8,   8,   8,   8,   8,  16,   8,   8,   8, 
      8,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,   8,   8,   0, 
     19,  19,  19,  19,  94,  82,   0,   0,  19,  34,   0,   0,  10,  81,   0,   0, 
      0,   0,   0,  95,   4,  96,   0,   0,   0,   0,   0,   0,   8,  20,   8,   8, 
      8,   8,   8,   8,   8,   8,   8,  97,   0,   3,   0,   4,   0,   0,  98,   0, 
      0,  99,  89,  89,  89,  89,  89,  89,  89,  89,  89,  89,  89,  89,  89, 100, 
     16,   8,  16,   8,  16,   8,  16,  17,   0,   0,   0,   0,   0,   0, 101,   0, 
      8,   8,   8,   7,   8,   8,   8,   8,   8,   9,   8,   8,   8,   8,   9,  23, 
      8,   8,   8,  15,   8,   8,   8,  15,   0,   0,   0,   0,   0,   0,   0,  60, 
      8,   8,   8,   8,  17,   0,   0,   0,   8,   8,   9,   0,   0,   0,   0,   0, 
      8,   0,   8,   8,   7,  15,   0,   0,   8,  15,  20,   8,   8,   8,   8,   8, 
      8,   8,   8,   8,   8,  23,  17,  44,   8,   8,   8,   8,   8,   8,  15,   0, 
     51,  30,   0,  19,   8,   7,   7,   8,   8,   8,   8,   8,   8,   0,  34,  57, 
      8,   8,   8,   8,   9,   0,   0,   0,   8,   8,   8,   8,   8,   8,  19,  19, 
     19,  34,   0,   0,   0,   0,   0,   0,   8,   8,   8,   8,  19,  19,  34,  13, 
      9,   0,   0,   0,   0,   0,   0,   0,   8,   8,   8,   8,   8,   8,  17,   0, 
     88,   0,   0,   0,   0,   0,   0,   0,   0,  28,  52,  28, 102,  32, 103,  19, 
     34,  28,  19,   0,   0,   0,   0,   0,   0,   0,  62,  52,   0,   0,   0,   0, 
     62,  67,   0,   0,   0,   0,   0,   0,   8,   8,   8,   8,   8,  20,   8,   8, 
      8,   8,   8,   8,   8,   8,   8,  20,  12,  59,   7,  20,   8,   8,  23,   7, 
      8,   7,   8,   8,   8,   8,   8,   8,   8,  23,   9,   7,   8,  20,   8,  20, 
      8,   8,   8,   8,   8,   8,  23,   9,   8,  18,  16,   8,  20,   8,   8,   8, 
      8,  15,   8,   8,   8,   8,   8,   8,  20,   8,   8,   8,   8,   8,   9,   8, 
      8,   8,   8,   8,   8,   8,   9,   8,   8,   8,  20,   8,   8,   8,   8,   8, 
      9,   8,   8,  54,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5, 
     13,   0,   0,   0,   0,   0,   0,   0,  32,  32,  32,  32,  32,  32,  32,  32, 
     19,  19,  19,  19,   0,   0,   0,   0, 
};

RE_UINT8 re_word_break_stage_5[] = {
     0,  0,  0,  0,  0,  0,  2,  3,  3,  1,  0,  0,  0,  0,  0, 10, 
     9,  0, 10,  0, 11, 11, 11, 11, 11, 11,  8,  9,  0,  7,  7,  7, 
     7,  7,  7,  7,  7,  7,  7,  0,  0,  0,  0, 12,  0,  3,  0,  0, 
     0,  0,  7,  0,  0,  5,  0,  0,  0,  7,  0,  8,  7,  7,  0,  0, 
     0,  0,  7,  7,  7,  0,  0,  0,  7,  0,  7,  0,  4,  4,  4,  4, 
     7,  0,  7,  7,  7,  7,  9,  0,  0,  0,  7,  8,  7,  7,  0,  7, 
     7,  7,  0,  4,  4,  4,  7,  7,  0,  7,  0,  0,  0,  9,  0,  0, 
     0,  4,  4,  4,  4,  4,  0,  4,  0,  4,  4,  0,  8,  0,  0,  0, 
     5,  5,  5,  5,  9,  9,  0,  0,  4,  4,  4,  0,  7,  7,  7,  4, 
    11, 11,  0, 11,  9,  0,  7,  7,  4,  7,  7,  7,  0,  7,  4,  4, 
     4,  5,  0,  4,  4,  7,  7,  4,  4,  0,  4,  4, 11, 11,  7,  7, 
     7,  0,  0,  7,  0,  0,  0,  5,  7,  4,  7,  7,  7,  7,  4,  4, 
     4,  7,  0,  0,  9,  0,  7,  0,  4,  4,  7,  4,  7,  4,  4,  4, 
     4,  4,  0,  0,  4,  7,  4,  4,  0,  0, 11, 11,  4,  0,  0,  4, 
     4,  4,  7,  0,  0,  0,  0,  4,  0,  0,  0,  7,  0,  7,  7,  0, 
     0,  4,  0,  0,  7,  4,  0,  0,  0,  0,  4,  4,  0,  0,  4,  7, 
     0,  0,  4,  0,  4,  0,  4,  0, 11, 11,  0,  0,  4,  0,  0,  0, 
     0,  4,  0,  4, 11, 11,  4,  4,  7,  0,  4,  4,  5,  5,  4,  4, 
     7,  4,  7,  0,  4,  4,  4,  7,  7,  7,  4,  0,  0,  7,  0,  7, 
     4,  4,  5,  5, 10, 10,  0,  0, 10,  0,  0,  8,  3,  3,  5,  5, 
     5,  5,  5,  0, 12,  0,  0,  0,  9,  0,  0,  0,  5,  0,  0,  0, 
     0,  0,  5,  5,  0,  6,  6,  6,  6,  6,  0,  0,  0,  4,  4,  6, 
     6,  0,  0,  0,  6,  6,  6,  6,  6,  6,  6,  0,  4,  4,  0,  7, 
     7,  7,  4,  7,  0,  7,  4,  7,  9,  0,  0,  8,  0, 12, 12, 12, 
     9,  8,  0,  0,  7,  0,  0,  5,  0,  0,  8,  9,  0,  0,  6,  6, 
     6,  6,  4,  4,  0,  5,  5,  5,  4,  4,  4,  5,  5,  5,  5,  4, 
};

/* Word_Break: 3584 bytes. */

RE_UINT32 re_get_word_break(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 13;
    code = ch ^ (f << 13);
    pos = ((RE_UINT32)re_word_break_stage_1[f] << 4);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_word_break_stage_2[pos + f] << 4);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_word_break_stage_3[pos + f] << 3);
    f = code >> 2;
    code ^= (f << 2);
    pos = ((RE_UINT32)re_word_break_stage_4[pos + f] << 2);
    value = re_word_break_stage_5[pos + code];

    return value;
}

/* Grapheme_Cluster_Break. */

RE_UINT8 re_grapheme_cluster_break_stage_1[] = {
    0, 1, 2, 2, 2, 3, 4, 5, 6, 2, 2, 2, 2, 2, 7, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    8, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 
};

RE_UINT8 re_grapheme_cluster_break_stage_2[] = {
     0,  1,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 
    15, 16,  1, 17,  1,  1,  1, 18, 19, 20, 21, 22, 23, 24,  1,  1, 
    25,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 26, 27,  1,  1, 
    28,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1, 29,  1, 30, 31, 32, 33, 34, 35, 36, 37, 
    38, 39, 40, 34, 35, 36, 37, 38, 39, 40, 34, 35, 36, 37, 38, 39, 
    40, 34, 35, 36, 37, 38, 39, 40, 34, 35, 36, 37, 38, 39, 40, 34, 
    35, 36, 37, 38, 39, 40, 34, 41,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 42,  1,  1, 43, 44, 
     1, 45,  1,  1,  1,  1,  1,  1,  1,  1, 46,  1,  1,  1,  1,  1, 
    47,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1, 48, 49,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
    50, 51,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
};

RE_UINT8 re_grapheme_cluster_break_stage_3[] = {
      0,   1,   2,   2,   2,   2,   2,   3,   1,   1,   4,   2,   2,   2,   2,   2, 
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 
      5,   5,   5,   5,   5,   5,   5,   2,   2,   2,   2,   2,   2,   2,   2,   2, 
      2,   2,   2,   2,   2,   2,   2,   2,   6,   2,   2,   2,   2,   2,   2,   2, 
      2,   2,   2,   2,   2,   2,   2,   2,   2,   7,   5,   8,   9,   2,   2,   2, 
     10,  11,   2,   2,  12,   5,   2,  13,   2,   2,   2,   2,   2,  14,  15,   2, 
      3,  16,   2,   5,  11,   2,   2,   2,   2,   2,  17,  13,   2,   2,  12,  18, 
      2,  19,  20,   2,   2,  21,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 
     22,   2,   2,  23,  24,  25,  26,   2,  27,   2,   2,  28,  29,  30,  26,   2, 
     31,   2,   2,  32,  33,  16,   2,  34,  31,   2,   2,  32,  35,   2,  26,   2, 
     27,   2,   2,  36,  29,  37,  26,   2,  38,   2,   2,  39,  40,  30,   2,   2, 
     41,   2,   2,  42,  43,  44,  26,   2,  45,   2,   2,  46,  47,  44,  26,   2, 
     45,   2,   2,  39,  48,  30,  26,   2,  45,   2,   2,   2,  49,  50,   2,  45, 
      2,   2,   2,  51,  52,   2,   2,   2,   2,   2,   2,  53,  54,   2,   2,   2, 
      2,  55,   2,  56,   2,   2,   2,  57,  58,  59,   5,  60,  61,   2,   2,   2, 
      2,   2,  62,  63,   2,  64,  65,  66,  67,  68,   2,   2,   2,   2,   2,   2, 
     69,  69,  69,  69,  69,  69,  70,  70,  70,  70,  71,  72,  72,  72,  72,  72, 
      2,   2,   2,   2,   2,  73,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 
      2,  74,   2,  74,   2,  26,   2,  26,   2,   2,   2,  75,  76,  77,   2,   2, 
     78,   2,   2,   2,   2,   2,   2,   2,   2,   2,  79,   2,   2,   2,   2,   2, 
      2,   2,  80,  81,   2,   2,   2,   2,   2,   2,   2,  82,  83,   2,   2,   2, 
      2,  84,   2,   2,   2,  85,  86,  87,   2,   2,   2,   2,   2,   2,   2,   2, 
     88,   2,   2,  89,  90,   2,  12,  18,  91,   2,  92,   2,   2,   2,  93,  94, 
      2,   2,  95,  96,   2,   2,   2,   2,   2,   2,   2,   2,   2,  97,  98,  99, 
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   5,   5, 100, 101, 
    102,   2, 103,   2,   2,   2, 104,   2,   2,   2,   2,   2,   2,   5,   5,  13, 
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 105, 106, 
      2,   2,   2,   2,   2,   2,   2, 105,   2,   2,   2,   2,   2,   2,   5,   5, 
      2,   2, 107,   2,   2,   2,   2,   2,   2, 108,   2,   2,   2,   2,   2,   2, 
      2,   2,   2,   2,   2,   2, 105, 109,   2,   2,   2,   2,   2,   2,   2, 106, 
    110,   2, 111,   2,   2,   2,   2,   2, 112,   2,   2, 113, 114,   2,   5, 106, 
      2,   2, 115,   2, 116,  94,  69, 117,  22,   2,   2, 118, 119,   2,   2,   2, 
      2,   2, 120, 121, 122,   2,   2, 123,   2,   2,   2, 124,  16,   2,   2,   2, 
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 125,   2, 
    126, 127, 128, 129, 128, 130, 128, 126, 127, 128, 129, 128, 130, 128, 126, 127, 
    128, 129, 128, 130, 128, 126, 127, 128, 129, 128, 130, 128, 126, 127, 128, 129, 
    128, 130, 128, 126, 127, 128, 129, 128, 130, 128, 126, 127, 128, 129, 128, 130, 
    128, 126, 127, 128, 129, 128, 130, 128, 126, 127, 128, 129, 128, 130, 128, 126, 
    127, 128, 129, 128, 130, 128, 126, 127, 128, 129, 128, 130, 128, 126, 127, 128, 
    129, 128, 130, 128, 126, 127, 128, 129, 128, 130, 128, 126, 127, 128, 129, 128, 
    130, 128, 126, 127, 128, 129, 128, 130, 128, 126, 127, 128, 129, 128, 130, 128, 
    128, 129, 128, 130, 128, 126, 127, 128, 129, 128, 131,  70, 132,  72,  72, 133, 
      2, 134,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 
      5,   2, 100,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   3, 
      2,   2,   2,   2,   2,   2,   2,   2,   2,  42,   2,   2,   2,   2,   2, 135, 
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 136, 
    137,   2,   2, 138,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 
    139,   2,   2, 140, 100,   2,   2,   2,  91,   2,   2, 141,   2,   2,   2,   2, 
      2,   2,   2,   2,   2,   2, 142, 143, 144,   2, 145,   2,   2,   2,   2,   2, 
      2,   2,   2,   2,  74,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 
    146,   2,   1,   1,   1,   1,   1,   1,   2,   2,   2,   2,   2,   2,   2,   2, 
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   2, 
};

RE_UINT8 re_grapheme_cluster_break_stage_4[] = {
     0,  0,  1,  2,  0,  0,  0,  0,  3,  3,  3,  3,  3,  3,  3,  4, 
     3,  3,  3,  5,  6,  6,  6,  6,  7,  6,  8,  3,  9,  6,  6,  6, 
     6,  6,  6, 10, 11, 10,  3,  3,  0,  3,  3,  3,  6,  6, 12,  3, 
     3,  3,  7,  6, 13,  3,  3,  3,  3, 14,  6, 15,  6, 16, 17,  8, 
    18,  3,  3,  3,  3, 14,  6,  6,  6,  3,  3,  3,  3, 14, 10,  6, 
     6,  9,  9,  8,  3,  3,  9,  3, 19,  3,  3,  3,  3,  3, 20, 21, 
    22,  6, 23, 24,  9,  6,  3,  3, 14,  3,  3,  3, 25,  3,  3,  3, 
     3,  3,  3, 26, 22, 27, 28, 29,  3,  7,  3,  3, 30,  3,  3,  3, 
     3,  3,  3, 21, 31,  7, 16,  8,  8, 18,  3,  3, 22, 10, 32, 29, 
     3,  3,  3, 17,  3, 14,  3,  3, 33,  3,  3,  3,  3,  3,  3, 20, 
    34, 35, 36, 29, 37,  3,  3,  3,  3,  3,  3, 14, 23, 38, 17,  8, 
     3, 11,  3,  3, 35,  3,  3,  3,  3,  3,  3, 39, 40, 41, 36,  8, 
    22, 21, 36, 29,  3,  3, 33,  7, 42, 43, 44, 45, 24,  6, 12,  3, 
    46, 47,  6, 12, 24,  6, 10, 13, 46, 48,  6,  8,  3,  3,  8,  3, 
     3, 49, 18, 35,  9,  6,  6, 19,  6, 17,  3,  9,  6,  6,  9,  6, 
     6,  6,  6, 13,  3, 33,  3,  3,  3,  3, 50, 22, 51,  6, 52, 31, 
     3, 35,  8, 14, 21, 28, 44, 53,  9, 13,  3,  3, 20, 52, 44, 54, 
     3,  3, 35, 29, 55, 55, 55, 55, 56, 56, 56, 56, 56, 56, 57, 57, 
    57, 57, 57, 57,  3,  3,  3,  9, 14, 13,  3,  3,  3, 58,  6, 59, 
    44, 40, 22,  6,  6,  3,  3, 18,  3,  3,  7,  8,  3,  3, 18,  3, 
    19, 45, 23,  3, 40, 44, 22,  3, 44, 44, 44, 44, 60,  3, 53,  3, 
     3,  7, 23,  3,  3, 61,  6, 12, 62, 22,  6, 23, 45,  6,  6, 16, 
     6, 60,  3,  3,  3, 51, 19, 23, 40, 60,  3,  3, 63,  3,  3,  3, 
    64, 59, 63,  3,  3, 20, 59, 65, 59,  3,  3,  3,  3, 44, 44,  6, 
     6, 42,  3,  3, 12,  6,  6,  6, 51,  6, 13, 18, 66,  3,  3,  3, 
     6, 12,  3,  3,  3,  3,  3,  6,  3,  3,  4, 67,  3,  3,  0, 68, 
     0, 69, 70,  0,  3,  3,  3,  7,  8,  3,  3,  3,  3,  3, 14,  6, 
     3,  3, 11,  3, 12,  3,  3,  8, 33, 33,  7,  3, 50, 52,  3,  3, 
    53,  3,  3,  3,  3, 44, 44, 44, 44, 13,  3,  3,  3, 14,  6,  8, 
     3,  7,  6,  6, 55, 55, 55, 71,  7, 42, 59, 23, 60,  3,  3,  3, 
     3,  3,  9, 19, 52, 31,  3,  3,  7,  3,  3, 72,  3,  3, 50,  3, 
    17, 73, 74, 75, 50, 24, 34, 29, 76, 77, 77, 77, 77, 77, 77, 76, 
    77, 77, 77, 77, 77, 77, 76, 77, 77, 76, 77, 77, 77,  3,  3,  3, 
    56, 78, 79, 57, 57, 57, 57,  3,  3,  3,  3, 33,  3,  3, 80,  3, 
     3,  3,  3, 18,  9, 11,  3,  6,  3,  3, 12,  7, 81,  3,  3,  3, 
     3,  3,  6,  6, 45, 19, 31,  5,  3, 82,  8, 64, 83,  0, 84,  6, 
    12,  9,  6,  3,  3,  3, 14,  8,  5,  3,  3,  3, 
};

RE_UINT8 re_grapheme_cluster_break_stage_5[] = {
     3,  3,  3,  3,  3,  3,  2,  3,  3,  1,  3,  3,  0,  0,  0,  0, 
     0,  0,  0,  3,  0,  3,  0,  0,  4,  4,  4,  4,  0,  0,  0,  4, 
     4,  4,  0,  0,  0,  4,  4,  4,  4,  4,  0,  4,  0,  4,  4,  0, 
     4,  4,  4,  0,  4,  0,  0,  0,  0,  0,  4,  4,  4,  3,  0,  4, 
     4,  0,  0,  4,  4,  0,  4,  4,  0,  4,  0,  0,  4,  4,  4,  6, 
     0,  0,  4,  6,  4,  0,  6,  6,  6,  4,  4,  4,  4,  6,  6,  6, 
     6,  4,  6,  6,  0,  4,  6,  6,  4,  0,  4,  6,  4,  0,  0,  6, 
     6,  0,  0,  6,  6,  4,  0,  0,  0,  4,  4,  6,  6,  4,  4,  0, 
     4,  6,  0,  6,  0,  0,  4,  0,  4,  6,  6,  0,  0,  0,  6,  6, 
     6,  0,  6,  6,  0,  6,  6,  6,  6,  0,  4,  4,  4,  0,  6,  4, 
     6,  6,  4,  6,  6,  0,  4,  6,  6,  6,  4,  4,  4,  0,  4,  0, 
     6,  6,  6,  6,  6,  6,  6,  4,  5,  5,  5,  5,  5,  6,  0,  4, 
     5,  0,  0,  0,  0,  4,  0,  4,  0,  0,  0,  6,  4,  6,  4,  4, 
     6,  4,  4,  6,  6,  6,  0,  0,  6,  4,  0,  6,  7,  7,  7,  7, 
     8,  8,  8,  8,  9,  9,  9,  9,  3,  3,  6,  4,  4,  4,  6,  6, 
     6,  0,  0,  0,  0,  6,  4,  6,  4,  6,  4,  6,  4,  4,  6,  0, 
     0,  6,  4,  4,  6,  4,  6,  4,  0,  0,  6,  0,  4,  4,  3,  3, 
     3,  3,  3,  0,  3,  0,  0,  0,  0,  0,  3,  3,  7,  0,  0,  0, 
     4,  6,  0,  0,  4,  5,  5,  4,  4,  5,  0,  5,  5,  0,  4,  4, 
    10, 11, 11, 11, 11, 11, 11, 11,  8,  8,  8,  0,  0,  0,  0,  9, 
     0,  3,  3,  3,  6,  4,  6,  0,  0,  4,  6,  4,  4,  4,  4,  3, 
     3,  3,  3,  4, 
};

/* Grapheme_Cluster_Break: 2184 bytes. */

RE_UINT32 re_get_grapheme_cluster_break(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 13;
    code = ch ^ (f << 13);
    pos = ((RE_UINT32)re_grapheme_cluster_break_stage_1[f] << 5);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_grapheme_cluster_break_stage_2[pos + f] << 4);
    f = code >> 4;
    code ^= (f << 4);
    pos = ((RE_UINT32)re_grapheme_cluster_break_stage_3[pos + f] << 2);
    f = code >> 2;
    code ^= (f << 2);
    pos = ((RE_UINT32)re_grapheme_cluster_break_stage_4[pos + f] << 2);
    value = re_grapheme_cluster_break_stage_5[pos + code];

    return value;
}

/* Sentence_Break. */

RE_UINT8 re_sentence_break_stage_1[] = {
     0,  1,  2,  3,  4,  5,  5,  5,  5,  6,  7,  5,  5,  8,  9, 10, 
    11, 12, 13, 14,  9,  9, 15,  9,  9,  9,  9, 16,  9, 17,  9,  9, 
     5,  5,  5,  5,  5,  5,  5,  5,  5,  5, 18, 19,  9,  9,  9, 20, 
     9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9, 
     9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9, 
     9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9, 
     9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9, 
     9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9, 
     9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9, 
     9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9, 
     9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9, 
     9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9, 
     9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9, 
     9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9, 
    21,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9, 
     9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9, 
     9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9, 
};

RE_UINT8 re_sentence_break_stage_2[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 
    16, 17, 18, 19, 20, 17, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 
    31, 32, 33, 34, 35, 33, 33, 36, 33, 37, 33, 33, 38, 39, 40, 33, 
    41, 42, 33, 33, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 
    17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 43, 17, 17, 
    17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 
    17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 44, 
    17, 17, 17, 17, 45, 17, 46, 47, 48, 49, 50, 51, 17, 17, 17, 17, 
    17, 17, 17, 17, 17, 17, 17, 52, 33, 33, 33, 33, 33, 33, 33, 33, 
    33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 
    33, 33, 33, 33, 33, 33, 33, 33, 33, 17, 53, 54, 17, 55, 56, 57, 
    58, 59, 60, 61, 62, 33, 33, 33, 63, 64, 65, 66, 67, 33, 33, 33, 
    68, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 
    17, 17, 17, 69, 70, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 
    17, 17, 17, 17, 71, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 
    33, 33, 33, 33, 33, 33, 33, 33, 17, 17, 72, 33, 33, 33, 33, 33, 
    73, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 
    33, 74, 75, 33, 76, 77, 78, 79, 33, 33, 33, 33, 33, 33, 33, 33, 
    17, 17, 17, 17, 17, 17, 80, 17, 17, 17, 17, 17, 17, 17, 17, 17, 
    17, 17, 17, 17, 17, 17, 17, 81, 82, 33, 33, 33, 33, 33, 33, 33, 
    33, 33, 33, 33, 33, 33, 33, 33, 17, 17, 82, 33, 33, 33, 33, 33, 
    83, 84, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 
};

RE_UINT16 re_sentence_break_stage_3[] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15, 
      8,  16,  17,  18,  19,  20,  21,  22,  23,  23,  23,  24,  25,  26,  27,  28, 
     29,  30,  18,   8,  31,   8,  32,   8,   8,  33,  34,  35,  36,  37,  38,  39, 
     40,  41,  42,  43,  41,  41,  44,  45,  46,  47,  48,  41,  41,  49,  50,  51, 
     52,  53,  54,  55,  55,  55,  55,  55,  56,  57,  58,  59,  60,  61,  62,  63, 
     64,  65,  66,  67,  68,  69,  70,  71,  60,  69,  72,  73,  74,  75,  76,  77, 
     78,  79,  80,  71,  81,  82,  83,  84,  81,  85,  86,  87,  88,  89,  90,  91, 
     92,  93,  94,  55,  95,  96,  97,  55,  98,  99, 100, 101, 102, 103, 104,  55, 
     41, 105, 106, 107, 108,  29, 109, 110,  41,  41,  41,  41,  41,  41,  41,  41, 
     41,  41, 111,  41, 112, 113, 114,  41, 115,  41, 116, 117, 118,  41,  41, 119, 
     92,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41, 120, 121,  41,  41, 122, 
    123, 124, 125, 126,  41, 127, 128, 129, 130,  41,  41, 131,  41, 132,  41, 133, 
    134, 135, 136, 137,  41, 138, 139,  55, 140,  41, 141, 142, 143, 144,  55,  55, 
    145, 146, 147, 148, 149, 150,  41, 151,  41, 152, 153, 154,  55,  55, 155, 156, 
     18,  18,  18,  18,  18,  18,  23, 157,   8,   8,   8,   8, 158,   8,   8,   8, 
    159, 160, 161, 162, 160, 163, 164, 165, 166, 167, 168, 169, 170,  55, 171, 172, 
    173, 174, 175,  30, 176,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55, 
     55, 177,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55, 178,  30, 179, 
     55,  55, 180, 181,  55,  55, 182, 183,  55,  55,  55,  55, 184,  55, 185, 186, 
     29, 187, 188, 189,   8,   8,   8, 190,  18, 191,  41, 192, 193, 194, 194,  23, 
    195, 196,  55,  55,  55,  55,  55,  55, 197, 198,  92,  41, 199,  92,  41, 200, 
    201, 202,  41,  41, 203, 204,  55, 205,  41,  41,  41,  41,  41, 133,  55,  55, 
     41,  41,  41,  41,  41,  41, 206,  55,  41,  41,  41,  41, 207,  55, 205, 208, 
    209, 210,   8, 211, 212,  41,  41, 213, 214, 215,   8, 216, 217, 218,  55, 219, 
    220, 221,  41, 222, 223, 146, 224, 225,  50, 226, 227, 134,  56, 228, 229,  55, 
     41, 230, 231, 232,  41, 233, 234,  55, 235, 236,  55,  55,  55,  55,  41, 237, 
     41,  41,  41,  41,  41, 238, 239, 240,  41, 241,  41, 241,  41,  41, 242,  55, 
    243, 244, 245,  41,  41, 246, 247,  41,  41, 248, 205,  41, 249,  41, 250, 251, 
    252, 253, 254, 255,  41,  41,  41, 256, 257,   2, 258, 259, 260, 261, 262, 263, 
    264, 265, 266,  55,  41,  41,  41, 204,  55,  55,  41, 119,  55,  55,  55, 267, 
     55,  55,  55,  55, 134,  41, 268,  55, 261, 205, 269,  55, 270,  41, 271,  55, 
     29, 272, 273,  41, 270, 129,  55,  55, 274, 275, 133,  55,  55,  55,  55,  55, 
    133, 242,  55,  55,  55,  55,  55,  55, 276, 277, 278, 134,  55,  55,  55,  55, 
     41, 133, 133, 279,  55,  55,  55,  55,  41,  41, 280,  55,  55,  55,  55,  55, 
    149, 281, 282,  77, 149, 283, 284,  55,  41,  41,  41, 203,  55,  55,  55,  55, 
     41,  41,  41, 285,  55,  55,  55,  55,  41, 203,  55,  55,  55,  55,  55,  55, 
     41, 286,  55,  55,  55,  55,  55,  55, 287,  55,  55,  55,  55,  55,  55,  55, 
     55,  55,  55, 288, 289, 290,  55,  55,  55,  55, 291,  55,  55,  55,  55,  55, 
    292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 292, 293, 305, 
    295, 306, 307, 308, 299, 309, 310, 311, 312, 313, 314, 187, 315, 316, 317, 318, 
     41,  41,  41,  41,  41,  41, 193,  55,  41, 119,  41,  41,  41,  41,  41,  41, 
    270,  55,  55,  55,  55,  55,  55,  55, 319, 320, 320, 320,  55,  55,  55,  55, 
     23,  23,  23,  23,  23,  23,  23, 321, 
};

RE_UINT8 re_sentence_break_stage_4[] = {
      0,   0,   1,   2,   0,   0,   0,   0,   3,   4,   5,   6,   7,   7,   8,   9, 
     10,  11,  11,  11,  11,  11,  12,  13,  14,  15,  15,  15,  15,  15,  16,  13, 
      0,  17,   0,   0,   0,   0,   0,   0,  18,   0,  19,  20,   0,  21,  19,   0, 
     11,  11,  11,  11,  11,  22,  11,  23,  15,  15,  15,  15,  15,  24,  15,  15, 
     25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  26,  26, 
     26,  26,  27,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  28,  29, 
     30,  31,  32,  33,  28,  31,  34,  28,  25,  31,  29,  31,  32,  26,  35,  34, 
     36,  28,  31,  26,  26,  26,  26,  27,  25,  25,  25,  25,  30,  31,  25,  25, 
     25,  25,  25,  25,  25,  15,  33,  30,  26,  23,  25,  25,  15,  15,  15,  15, 
     15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  37,  15,  15, 
     15,  15,  15,  15,  15,  15,  38,  36,  39,  40,  36,  36,  41,   0,   0,   0, 
     15,  42,   0,  43,   0,   0,   0,   0,  44,  44,  44,  44,  44,  44,  44,  44, 
     44,  44,  44,  44,  25,  45,  46,  39,   0,  47,  22,  48,  32,  11,  11,  11, 
     49,  11,  11,  15,  15,  15,  15,  15,  15,  15,  15,  50,  33,  34,  25,  25, 
     25,  25,  25,  25,  15,  51,  30,  32,  11,  11,  11,  11,  11,  11,  11,  11, 
     11,  11,  11,  11,  15,  15,  15,  15,  52,  44,  53,  25,  25,  25,  25,  25, 
     28,  26,  26,  29,  25,  25,  25,  25,  25,  25,   0,   0,  10,  11,  11,  11, 
     11,  11,  11,  11,  11,  22,  54,  55,  14,  15,  15,  15,  15,  15,  15,  15, 
     15,  15,  56,   0,  57,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  58, 
     59,  58,   0,   0,  36,  36,  36,  36,  36,  36,  60,   0,  36,   0,   0,   0, 
     61,   0,   0,  62,  44,  44,  63,   9,  36,  36,  36,  36,  36,  36,  36,  36, 
     36,  36,  64,  44,  44,  44,  44,  44,   7,   7,  65,  66,  67,  36,  36,  36, 
     36,  36,  36,  36,  36,  68,  44,  69,  44,  70,  71,  72,   7,   7,  73,  74, 
     75,   0,   0,  76,  77,  36,  36,  36,  36,  36,  36,  36,  44,  44,  44,  44, 
     44,  44,  63,  78,  36,  36,  36,  36,  36,  79,  44,  44,  80,   0,   0,   0, 
      7,   7,  73,  36,  36,  36,  36,  36,  36,  36,  64,  44,  44,  41,  81,   0, 
     36,  36,  36,  36,  36,  79,  82,  44,  44,  83,  83,  84,   0,   0,   0,   0, 
     36,  36,  36,  36,  36,  36,  83,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     44,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  79,  85, 
     44,  44,  44,  44,  83,  44,  36,  36,  79,  86,   7,   7,  78,  36,  78,  36, 
     57,  78,  36,  74,  74,  36,  36,  36,  36,  36,  87,  36,  43,  40,  41,  85, 
     44,  88,  88,  89,   0,  90,   0,  91,  79,  92,   7,   7,  41,   0,   0,   0, 
     57,  78,  60,  93,  74,  36,  36,  36,  36,  36,  87,  36,  87,  94,  41,  71, 
     63,  90,  88,  84,  95,   0,  78,  43,   0,  92,   7,   7,  72,  96,   0,   0, 
     57,  78,  36,  91,  91,  36,  36,  36,  36,  36,  87,  36,  87,  78,  41,  85, 
     44,  58,  58,  84,  97,   0,   0,   0,  79,  92,   7,   7,   0,   0,   0,   0, 
     44,  88,  88,  84,   0,  98,   0,  91,  79,  92,   7,   7,  54,   0,   0,   0, 
     99,  78,  60,  40,  87,  41,  94,  87,  93,  97,  60,  40,  36,  36,  41,  98, 
     63,  98,  71,  84,  97,  90,   0,   0,   0,  92,   7,   7,   0,   0,   0,   0, 
     57,  78,  36,  87,  87,  36,  36,  36,  36,  36,  87,  36,  36,  78,  41, 100, 
     44,  71,  71,  84,   0,  59,  41,   0,  98,  78,  36,  87,  87,  36,  36,  36, 
     36,  36,  87,  36,  36,  78,  41,  85,  44,  71,  71,  84,   0,  59,   0, 101, 
     79,  92,   7,   7,  94,   0,   0,   0,  36,  36,  36,  36,  36,  36,  60, 100, 
     44,  71,  71,  89,   0,  90,   0,   0,  79,  92,   7,   7,   0,   0,  40,  36, 
     98,  78,  36,  36,  36,  60,  40,  36,  36,  36,  36,  36,  91,  36,  36,  54, 
     36,  60, 102,  90,  44, 103,  44,  44,   0,   0,   0,   0,  98,   0,   0,   0, 
     78,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  77,  44,  63,   0, 
     36,  64,  44,  63,   7,   7, 104,   0,  94,  74,  43,  54,   0,  36,  78,  36, 
     78, 105,  40,  78,  77,  44,  58,  80,  36,  43,  44,  84,   7,   7, 104,  41, 
     97,   0,   0,   0,   0,   0,  84,   0,   7,   7, 104,   0,   0, 106, 107, 108, 
     36,  36,  78,  36,  36,  36,  36,  36,  36,  36,  36,  97,  57,  44,  44,  44, 
     44,  71,  36,  83,  44,  44,  57,  44,  44,  44,  44,  44,  44,  44,  44, 109, 
      0, 102,   0,   0,   0,   0,   0,   0,  36,  36,  64,  44,  44,  44,  44, 110, 
      7,   7, 111,   0,  36,  79,  72,  79,  85,  70,  44,  72,  83,  67,  36,  36, 
     79,  44,  44,  82,   7,   7, 112,  84,  11, 113,   0,   0,  36,  36,  36,  36, 
     36,  36,  36,  36,  36,  36,  60,  97,  36,  36,  87,  41,  36,  60,  87,  41, 
     36,  36,  87,  41,  36,  36,  36,  36,  36,  36,  36,  36,  87,  41,  36,  60, 
     87,  41,  36,  36,  36,  60,  36,  36,  36,  36,  36,  36,  87,  41,  36,  36, 
     36,  36,  36,  36,  36,  36,  60,  57, 114,   9, 115,   0,   0,   0,   0,   0, 
     36,  36,  36,  36,   0,   0,   0,   0,  36,  36,  36,  36,  36,  97,   0,   0, 
     36,  36,  36, 116,  36,  36,  36,  36, 117,  36,  36,  36,  36,  36, 118, 119, 
     36,  36,  60,  40,  97,   0,   0,   0,  36,  36,  36,  87,  79, 109,   0,   0, 
     36,  36,  36,  36,  79, 120,   0,   0,  36,  36,  36,  36,  79,   0,   0,   0, 
     36,  36,  36,  87, 121,   0,   0,   0,  36,  36,  36,  36,  36, 122,  44,  44, 
     44,  44,  44,  44,  44,  93,   0,  96,   7,   7, 104,   0,   0,   0,   0,   0, 
    123,   0, 124, 125,   7,   7, 104,   0,  36,  36,  36,  36,  36,  36,   0,   0, 
     36,  36, 126,   0,  36,  36,  36,  36,  36,  36,  36,  36,  36,  41,   0,   0, 
     36,  36,  36,  36,  36,  36,  36,  97,  44,  44,  44,   0,  44,  44,  44,   0, 
      0,  86,   7,   7,  36,  36,  36,  36,  36,  36,  36,  41,  36,  97,   0,   0, 
     36,  36,  36,   0,  44,  44,  44,  44,  67,  36,  84,   0,   7,   7, 104,   0, 
     36,  36,  36,  36,  36,  64,  44,   0,  36,  36,  36,  36,  36,  83,  44,  63, 
     44,  44,  44,  44,  44,  44,  44,  88,   7,   7, 104,   0,   7,   7, 104,   0, 
      0,  93, 127,   0,   0,   0,   0,   0,  44,  67,  36,  36,  36,  36,  36,  36, 
     36,  36,  36,  36,  36,  44,  44,  44,  44,  67,  36,   0,   7,   7, 111, 128, 
      0,   0,  90,  44,  44,   0,   0,   0, 110,  36,  36,  36,  36,  36,  36,  36, 
     83,  44,  63,  40,   7,   7, 104,   0,  36,  79,  44,  44,  44,   0,   0,   0, 
     36,  44,  44,  44,  44,  44,   9, 115,   7,   7, 104,  78,   7,   7,  73,  36, 
     36,  36,  36,  36,  36,  36,  36, 129,   0,   0,   0,   0,  63,  44,  44,  44, 
     44,  44,  67,  77, 130,   0,   0,   0,  44,  63,   0,   0,   0,   0,   0,  44, 
     25,  25,  25,  25,  25,  34,  15,  27,  15,  15,  11,  11,  15,  39,  11, 113, 
     15,  15,  11,  11,  15,  15,  11,  11,  15,  39,  11, 113,  15,  15, 131, 131, 
     15,  15,  11,  11,  15,  15,  15,  39,  15,  15,  11,  11,  15, 132,  11, 133, 
     46, 132,  11, 134,  15,  46,  11,   0,  15,  15,  11, 134,  46, 132,  11, 134, 
    135, 135, 136, 137, 138, 139, 140, 140,   0, 141, 142, 143,   0,   0, 144, 145, 
      0, 146, 145,   0,   0,   0,   0, 147,  61, 148, 149,  61,  54,   0,   0, 150, 
      0,   0,   0, 144,  15,  38,  36,  97,   0,   0,   0,   0,  44,  44,  44,  44, 
     44,  44,  44,  44, 109,   0,   0,   0,  47, 151, 152, 153,  23, 154,  10, 113, 
      0, 155,  48, 156,  11,  38, 157,  33,   0, 158,  39, 159,   0,   0,   0,   0, 
    160,  38,  97,   0,   0,   0,   0,   0,   0,   0, 144,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0, 161,  11,  11,  15,  15,  39,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   4, 162,   0,   0, 140, 140, 140,   5,   0,   0, 
      0, 144,   0,   0,   0,   0,   0,   0,   0, 163, 140, 140,   0,   0,   0,   0, 
      4, 140, 140, 140, 140, 140, 119,   0,   0,   0,   0,   0,   0,   0, 140,   0, 
      0,   0,   0,   0,   0,   0,   0,   5,  11,  11,  11,  22,  15,  15,  15,  15, 
     15,  15,  15,  15,  15,  15,  15,  24,  31, 164,  26,  32,  25,  29,  15,  33, 
     25,  42, 151, 165,  84,   0,   0,   0,  15,  39,   0,   0,  36,  36,  36,  36, 
     36,  41,   0,  93,   0,   0,   0,  90,  36,  36,  36,  36,  36,  60,   0,   0, 
     36,  60,  36,  60,  36,  60,  36,  60, 140, 140, 140,   5,   0,   0,   0,   5, 
    140, 140,   5, 166,   0,   0,   0,   0, 167,  78, 140, 140,   5, 140, 140, 168, 
     78,  36,  79,  44,  78,  41,  36,  97,  36,  36,  36,  36,  36,  60,  59,  78, 
     36,  36,  36,  36,  36,  36,  60,  36,   0,  78,  36,  36,  36,  36,  36,  36, 
     36,  36,  36,  41,  78,  36,  36,  36,  36,  36,  36,  60,   0,   0,   0,   0, 
     36,  36,  36,  36,  36,  36,  60,   0,   0,   0,   0,   0,  36,  36,  36,  36, 
     36,  36,  36,   0,   0,   0,   0,   0,  36,  36,  36,  97,   0,   0,   0,   0, 
     36,  36,  36,  36,  36,  36,  36, 169,  36,  36,  36, 170,  36,  36,  36,  36, 
      7,   7,  73,   0,   0,   0,   0,   0,  25,  25,  25, 171,  63,   0,   0, 172, 
     25,  25,  25,  25,  25,  25,   0,   0,  36,  36,  36,  36, 173,   9,   0,   0, 
      0,   0,   0,   0,   0,  93,  36,  36, 174,  25,  25,  25,  27,  25,  25,  25, 
     25,  25,  25,  25,  15,  15,  26,  30,  25,  25, 175, 176, 177,   0,   0,   0, 
     25,  25, 177,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 178,  36, 
    179, 179,  64,  36,  36,  36,  36,  36,  64,  44,   0,   0,   0,   0,   0,   0, 
     36,  36,  36,  36,  36, 128,   0,   0,  72,  36,  36,  36,  36,  36,  36,  36, 
     44, 109,   0, 128,   7,   7, 104,   0,  44,  44,  44,  44,  72,  36,  93,   0, 
     36,  79,  44, 173,  36,  36,  36,  36,  36,  64,  44,  44,  44,   0,   0,   0, 
     36,  36,  36,  36,  64,  44,  44,  44, 109,   0, 145,  93,   7,   7, 104,   0, 
     36,  36,  83,  44,  44,  63,   0,   0,  64,  36,  36,  84,   7,   7, 104, 180, 
     36,  36,  36,  36,  36,  60, 181,   0,  36,  36,  36,  36,  85,  70,  67,  79, 
    126,   0,   0,   0,   0,   0,  93,  41,  78,  60,  78,  60,  78,  60,   0,   0, 
     36,  60,  36,  60,   0,   0,   0,   0,  64,  44, 182,  84,   7,   7, 104,   0, 
     36,   0,   0,   0,  36,  36,  36,  36,  36,  60,  93,  36,  36,  36,  36,  36, 
     36,  36,  36,  36,  36,  36,  36,   0,  36,  36,  36,  41,  36,  36,  36,  36, 
     36,  36,  36,  36,  36,  36,  41,   0,  15,  24,   0,   0, 183,  15,   0, 184, 
     36,  36,  87,  36,  36,  60,  36,  43,  91,  87,  36,  36,  36,  36,  36,  36, 
     36,  36,  36,  36,  41,   0,   0,   0,   0,   0,   0,   0,  93,  36,  36,  36, 
     36,  36,  36,  36,  36,  36,  36, 185,  36,  36,  36,  36,  40,  36,  36,  36, 
     36,  36,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  36,  36,  36,   0, 
     44,  44,  44,  44, 186,   4, 119,   0,  44,  63,   0,   0, 187, 168, 140, 140, 
    140, 188, 119,   0,   6, 189, 190, 162, 138,   0,   0,   0,  36,  87,  36,  36, 
     36,  36,  36,  36,  36,  36,  36, 191,  56,   0,   5,   6,   0,   0, 192,   9, 
     14,  15,  15,  15,  15,  15,  16, 193, 194, 195,  36,  36,  36,  36,  36,  36, 
     36,  36,  36,  36,  36,  36,  36,  79,  36,  36,  36,  36,  36,  36,  36,  60, 
     40,  36,  40,  36,  40,  36,  40,  97,   0,   0,   0,   0,   0,   0, 196,   0, 
     36,  36,  36,  78,  36,  36,  36,  36,  36,  60,  36,  36,  36,  36,  60,  91, 
     36,  36,  36,  41,  36,  36,  36,  41,   0,   0,   0,   0,   0,   0,   0,  95, 
     36,  36,  36,  36,  97,   0,   0,   0,  36,  36,  60,   0,   0,   0,   0,   0, 
     36,  36,  36,  36,  36,  36,  36,  41,  36,   0,  36,  36,  78,  41,   0,   0, 
     11,  11,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  36,  36,  36,  36, 
     36,  41,  87,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  91,  97,  74, 
     83,  59,   0,  44,  36,  78,  78,  36,  36,  36,  36,  36,  36,   0,  63,  90, 
      0,   0,   0,   0,   0, 128,   0,   0,  36,  36,  36,  36,  60,   0,   0,   0, 
     36,  36,  97,   0,   0,   0,   0,   0,  36,  36,  36,  36,  36,  36,  44,  44, 
     44, 182, 115,   0,   0,   0,   0,   0,  36,  36,  36,  36,  44,  44,  63, 197, 
    145,   0,   0,   0,   0,   0,   0,   0,  60,   0,   0,   0,   0,   0,   0,   0, 
     36,  36,  36,  36,  36,  36,  97,   0,  41,   0,   0,   0,   0,   0,   0,   0, 
      0,  57,  84,  57, 198,  61, 199,  44,  63,  57,  44,   0,   0,   0,   0,   0, 
      0,   0,  98,  84,   0,   0,   0,   0,  98, 109,   0,   0,   0,   0,   0,   0, 
     11,  11,  11,  11,  11,  11, 153,  15,  15,  15,  15,  15,  15,  11,  11,  11, 
     11,  11,  11, 153,  15, 132,  15,  15,  15,  15,  11,  11,  11,  11,  11,  11, 
    153,  15,  15,  15,  15,  15,  15,  48,  47, 200,  10,  48,  11, 153, 201,  14, 
     15,  14,  15,  15,  11,  11,  11,  11,  11,  11, 153,  15,  15,  15,  15,  15, 
     15,  49,  22,  10,  11,  48,  11, 202,  15,  15,  15,  15,  15,  15,  49,  22, 
     11, 155, 161,  11, 202,  15,  15,  15,  15,  15,  15,  11,  11,  11,  11,  11, 
     11, 153,  15,  15,  15,  15,  15,  15,  11,  11,  11, 153,  15,  15,  15,  15, 
    153,  15,  15,  15,  15,  15,  15,  11,  11,  11,  11,  11,  11, 153,  15,  15, 
     15,  15,  15,  15,  11,  11,  11,  11,  15,  39,  11,  11,  11,  11,  11,  11, 
    202,  15,  15,  15,  15,  15,  24,  15,  33,  11,  11,  11,  11,  11,  22,  15, 
     15,  15,  15,  15,  15, 132,  15,  11,  11,  11,  11,  11,  11, 202,  15,  15, 
     15,  15,  15,  24,  15,  33,  11,  11,  15,  15, 132,  15,  11,  11,  11,  11, 
     11,  11, 202,  15,  15,  15,  15,  15,  24,  15,  27,  92,   7,   7,   7,   7, 
      7,   7,   7,   7,   7,   7,   7,   7,  20,   0,   0,   0,   0,   0,   0,   0, 
     61,  61,  61,  61,  61,  61,  61,  61,  44,  44,  44,  44,   0,   0,   0,   0, 
};

RE_UINT8 re_sentence_break_stage_5[] = {
     0,  0,  0,  0,  0,  6,  2,  6,  6,  1,  0,  0,  6, 12, 13,  0, 
     0,  0,  0, 13, 13, 13,  0,  0, 14, 14, 11,  0, 10, 10, 10, 10, 
    10, 10, 14,  0,  0,  0,  0, 12,  0,  8,  8,  8,  8,  8,  8,  8, 
     8,  8,  8, 13,  0, 13,  0,  0,  0,  7,  7,  7,  7,  7,  7,  7, 
     7,  7,  7, 13,  0,  4,  0,  0,  6,  0,  0,  0,  0,  0,  7, 13, 
     0,  5,  0,  0,  0,  7,  0,  0,  8,  8,  8,  0,  8,  8,  8,  7, 
     7,  7,  7,  0,  8,  7,  8,  7,  7,  8,  7,  8,  7,  7,  8,  7, 
     8,  8,  7,  8,  7,  8,  7,  7,  7,  8,  8,  7,  8,  7,  8,  8, 
     7,  8,  8,  8,  7,  7,  8,  8,  8,  7,  7,  7,  8,  7,  7,  9, 
     9,  9,  9,  9,  9,  7,  7,  7,  7,  9,  9,  9,  7,  7,  0,  0, 
     0,  0,  9,  9,  9,  9,  0,  0,  7,  0,  0,  0,  9,  0,  9,  0, 
     3,  3,  3,  3,  9,  0,  8,  7,  0,  0,  7,  7,  0,  0,  8,  0, 
     8,  0,  8,  8,  8,  8,  0,  8,  7,  7,  7,  8,  8,  7,  0,  8, 
     8,  7,  0,  3,  3,  3,  8,  7,  0,  9,  0,  0, 12, 14, 12,  0, 
     0, 12,  0,  0,  0,  3,  3,  3,  3,  3,  0,  3,  0,  3,  3,  0, 
     9,  9,  9,  0,  5,  5,  5,  5, 14, 14,  0,  0,  3,  3,  3,  0, 
     9,  9,  9,  3, 10, 10,  0, 10, 10,  0,  9,  9,  3,  9,  9,  9, 
    12,  9,  3,  3,  3,  5,  0,  3,  3,  9,  9,  3,  3,  0,  3,  3, 
     3,  3,  9,  9, 10, 10,  9,  9,  9,  0,  0,  9, 12, 12, 12,  0, 
     0,  0,  0,  5,  9,  3,  9,  9,  0,  9,  9,  9,  9,  9,  3,  3, 
     3,  9,  0,  0, 14, 12,  9,  0,  3,  3,  9,  3,  9,  3,  3,  3, 
     3,  3,  0,  0,  3,  9,  3,  3, 12, 12, 10, 10,  9,  0,  9,  9, 
     3,  0,  0,  3,  3,  3,  9,  0,  0,  0,  0,  3,  9,  9,  0,  9, 
     0,  0, 10, 10,  0,  0,  0,  9,  0,  9,  9,  0,  0,  3,  0,  0, 
     9,  3,  0,  0,  9,  0,  0,  0,  0,  0,  3,  3,  0,  0,  3,  9, 
     0,  9,  3,  3,  0,  0,  9,  0,  0,  0,  3,  0,  3,  0,  3,  0, 
    10, 10,  0,  0,  0,  9,  0,  9,  0,  3,  0,  3,  0,  3, 13, 13, 
    13, 13,  3,  3,  3,  0,  0,  0,  3,  3,  3,  9, 10, 10, 12, 12, 
    10, 10,  3,  3,  8,  8,  0,  0,  0,  0, 12,  0, 12,  0,  0,  0, 
     9,  0, 12,  9,  6,  9,  9,  9,  9,  9,  9, 13, 13,  0,  0,  0, 
     3, 12, 12,  0,  9,  0,  3,  3,  5,  5,  3,  3,  0,  0, 14, 12, 
    14, 12,  0,  3,  3,  3,  6,  0,  9,  3,  9,  0, 12, 12, 12, 12, 
     0,  0, 12, 12,  9,  9, 12, 12,  9,  9,  3,  0,  0,  8,  0,  8, 
     7,  0,  7,  7,  8,  0,  7,  0,  8,  0,  0,  0,  6,  6,  6,  6, 
     6,  6,  6,  5,  3,  3,  5,  5,  0,  0,  0, 14, 14,  0,  0,  0, 
    13, 13, 13, 13, 11,  0,  0,  0,  4,  4,  5,  5,  5,  5,  5,  6, 
     0, 13, 13,  0, 12, 12,  0,  0,  0, 13, 13, 12,  0,  0,  0,  6, 
     5,  0,  0,  0,  0,  0,  5,  5,  0, 13, 13,  9,  0,  0,  0,  8, 
     0,  0,  7,  8,  8,  8,  7,  7,  0,  8,  0,  0,  8,  0,  8,  0, 
     8,  8,  0,  7,  9,  7,  0,  0,  0,  8,  7,  7,  0,  0,  7,  0, 
     9,  9,  9,  8,  0,  0,  8,  8, 13, 13, 13,  0,  0,  0, 13, 13, 
     8,  7,  7,  8,  7,  8,  7,  3,  0,  0, 12,  9,  6, 14, 12,  0, 
     0, 13, 13, 13,  9,  9,  0, 12,  9,  0, 12, 12,  8,  7,  9,  3, 
     3,  3,  0,  9,  3,  3,  0, 12,  0,  0,  8,  7,  9,  0,  0,  8, 
     7,  8,  7,  0,  8,  7,  0,  0,  0,  0,  7,  9,  9,  9,  3,  9, 
     0, 12, 12, 12,  0,  0,  9,  3,  3,  3,  3, 12,  0,  0,  0,  7, 
     0,  9,  3,  9,  9,  9, 13, 13, 14, 14,  0, 14,  0, 14, 14,  0, 
    13,  0,  0, 13,  0, 14, 12, 12, 14, 13, 13, 13,  9,  0,  0,  5, 
     0,  0, 14,  0,  0, 13,  0, 13, 13, 12, 13, 13, 14,  0,  9,  9, 
     0,  5,  5,  5,  0,  5, 12, 12,  3,  3,  3,  5,  5,  5,  5,  3, 
     0,  8,  8,  0,  7,  7,  0,  7,  8,  0,  7,  7, 
};

/* Sentence_Break: 5372 bytes. */

RE_UINT32 re_get_sentence_break(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 12;
    code = ch ^ (f << 12);
    pos = ((RE_UINT32)re_sentence_break_stage_1[f] << 4);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_sentence_break_stage_2[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_sentence_break_stage_3[pos + f] << 3);
    f = code >> 2;
    code ^= (f << 2);
    pos = ((RE_UINT32)re_sentence_break_stage_4[pos + f] << 2);
    value = re_sentence_break_stage_5[pos + code];

    return value;
}

/* Math. */

RE_UINT8 re_math_stage_1[] = {
    0, 1, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 2, 
};

RE_UINT8 re_math_stage_2[] = {
    0, 1, 1, 1, 2, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 1, 1, 1, 1, 1, 
};

RE_UINT8 re_math_stage_3[] = {
     0,  1,  2,  2,  2,  2,  2,  3,  2,  2,  2,  2,  4,  2,  2,  2, 
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2, 
     5,  6,  7,  8,  9,  9, 10, 11,  2,  2,  2, 12, 13,  2,  2, 14, 
     2,  2,  9,  9,  9,  9, 15,  2,  2,  2,  2,  2,  2,  2,  2,  2, 
     2,  2,  2,  2,  2,  2, 16,  2,  2,  2,  2,  2, 17,  2, 18, 19, 
     2,  2,  2,  2,  2,  2,  2,  2, 20, 21, 22,  9,  9, 23,  9, 24, 
};

RE_UINT8 re_math_stage_4[] = {
     0,  1,  2,  3,  0,  4,  5,  5,  0,  0,  0,  0,  0,  0,  6,  7, 
     8,  0,  0,  0,  9, 10, 11, 12, 13,  0, 14, 15, 16, 17, 18,  0, 
    19, 20, 21, 22, 23, 23, 23, 23, 24, 25,  0, 26, 27, 28, 29, 30, 
     0, 31, 32, 33, 34,  0, 35, 36,  0,  0, 37, 23,  0, 19, 38,  0, 
     0, 39,  0,  0,  0,  0,  0, 40,  1,  3,  3,  0,  0,  0,  0, 41, 
    23, 23, 42, 23, 43, 44, 45, 23, 46, 47, 48, 23, 23, 49, 23, 23, 
    23, 23, 50, 23, 
};

RE_UINT8 re_math_stage_5[] = {
      0,   0,   0,   0,   0,   8,   0, 112,   0,   0,   0,  64,   0,   0,   0,  80, 
      0,  16,   2,   0,   0,   0, 128,   0,   0,   0,  39,   0,   0,   0, 115,   0, 
    192,   1,   0,   0,   0,   0,  64,   0,   0,   0,  28,   0,  17,   0,   4,   0, 
     30,   0,   0, 124,   0, 124,   0,   0,   0,   0, 255,  31,  98, 248,   0,   0, 
    132, 252,  47,  63,  16, 179, 251, 241, 255,  11,   0,   0,   0,   0, 255, 255, 
    255, 126, 195, 240, 255, 255, 255,  47,  48,   0, 240, 255, 255, 255, 255, 255, 
      0,  15,   0,   0,   3,   0,   0,   0,   0,   0,   0,  16,   0,   0,   0, 248, 
    255, 255, 191,   0,   0,   0,   1, 240,   7,   0,   0,   0,   3, 192, 255, 240, 
    195, 140,  15,   0, 148,  31,   0, 255,  96,   0,   0,   0,   5,   0,   0,   0, 
     15, 224,   0,   0, 255, 215, 255, 255, 159,  31,   0,   0,   0,   2,   0,   0, 
    126,   1,   0,   0,   4,  30,   0,   0, 255, 255, 223, 255, 255, 255, 255, 223, 
    100, 222, 255, 235, 239, 255, 255, 255, 191, 231, 223, 223, 255, 255, 255, 123, 
     95, 252, 253, 255,  63, 255, 255, 255, 255, 207, 255, 255, 
};

/* Math: 498 bytes. */

RE_UINT32 re_get_math(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 15;
    code = ch ^ (f << 15);
    pos = ((RE_UINT32)re_math_stage_1[f] << 4);
    f = code >> 11;
    code ^= (f << 11);
    pos = ((RE_UINT32)re_math_stage_2[pos + f] << 4);
    f = code >> 7;
    code ^= (f << 7);
    pos = ((RE_UINT32)re_math_stage_3[pos + f] << 2);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_math_stage_4[pos + f] << 5);
    pos += code;
    value = (re_math_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Alphabetic. */

RE_UINT8 re_alphabetic_stage_1[] = {
    0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
    3, 
};

RE_UINT8 re_alphabetic_stage_2[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  7,  8,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  9, 10, 11,  7,  7,  7,  7, 12, 13, 13, 13, 13, 14, 
    15, 16, 17, 13, 18, 13, 19, 13, 13, 13, 13, 13, 13, 20, 13, 13, 
    13, 13, 13, 13, 13, 13, 21, 13, 13, 13, 22, 13, 13, 13, 13, 13, 
     7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  7, 23,  7, 24, 25, 13, 13, 13, 13, 13, 13, 13, 26, 
    13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 
    13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 
};

RE_UINT8 re_alphabetic_stage_3[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 
    16,  1, 17, 18, 19,  1, 20, 21, 22, 23, 24, 25, 26, 27,  1, 28, 
    29, 30, 31, 31, 32, 31, 31, 31, 31, 31, 31, 31, 33, 34, 35, 31, 
    36, 37, 31, 31,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1, 38,  1,  1,  1,  1,  1,  1,  1,  1,  1, 39, 
     1,  1,  1,  1, 40,  1, 41, 42, 43, 44, 45, 46,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1, 47, 31, 31, 31, 31, 31, 31, 31, 31, 
    31,  1, 48, 49,  1, 50, 51, 52, 53, 54, 55, 56, 57, 31, 31, 31, 
    58, 59, 60, 61, 62, 31, 31, 31, 63, 31, 31, 31, 31, 31, 31, 31, 
     1,  1,  1, 64, 65, 31, 31, 31,  1,  1,  1,  1, 66, 31, 31, 31, 
     1,  1, 67, 31, 31, 31, 31, 31, 68, 31, 31, 31, 31, 31, 31, 31, 
    31, 31, 31, 31, 69, 70, 71, 72,  1,  1,  1,  1,  1,  1, 73,  1, 
     1,  1,  1,  1,  1,  1,  1, 74, 75, 31, 31, 31, 31, 31, 31, 31, 
     1,  1, 75, 31, 31, 31, 31, 31, 
};

RE_UINT8 re_alphabetic_stage_4[] = {
      0,   0,   1,   1,   0,   2,   3,   3,   4,   4,   4,   4,   4,   4,   4,   4, 
      4,   4,   4,   4,   4,   4,   5,   6,   0,   0,   7,   8,   9,  10,   4,  11, 
      4,   4,   4,   4,  12,   4,   4,   4,   4,  13,  14,  15,  16,  17,  18,  19, 
     20,   4,  21,  22,   4,   4,  23,  24,  25,   4,  26,   4,   4,  27,  28,  29, 
     30,  31,  32,   0,   0,   0,   0,   0,   4,  33,  34,  35,  36,  37,  38,  39, 
     40,  41,  42,  43,  44,  45,  46,  47,  36,  45,  48,  49,  50,  51,  52,   0, 
     53,  54,  55,  47,  56,  54,  57,  58,  56,  59,  60,  61,  62,  63,  64,  65, 
     15,  66,  67,   0,  68,  69,  70,   0,  71,   0,  72,  73,  74,  75,   0,   0, 
      4,  76,  25,  77,  78,   4,  79,  80,   4,   4,  81,   4,  82,  83,  84,   4, 
     85,   4,  86,   0,  87,   4,   4,  88,  15,   4,   4,   4,   4,   4,   4,   4, 
      4,   4,   4,  89,   1,   4,   4,  90,  91,  92,  92,  93,   4,  94,  95,   0, 
      0,   4,   4,  96,   4,  97,   4,  98,  75,  99,  25, 100,   4, 101, 102,   0, 
    103,   4, 104, 105,   0, 106,   0,   0,   4, 107, 108,   0,   4, 109,   4, 110, 
      4,  98, 111, 112,   0,   0,   0, 113,   4,   4,   4,   4,   4,   4,   0,   0, 
    114,   4, 115, 112,   4, 116, 117, 118,   0,   0,   0, 119, 120,   0,   0,   0, 
    121, 122, 123,   4, 124,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0, 125,   4, 102,   4, 126, 104,   4,   4,   4,   4, 127, 
      4,  79,   4, 128, 129, 130, 130,   4,   0, 131,   0,   0,   0,   0,   0,   0, 
    132, 133,  15,   4, 134,  15,   4, 135, 136, 137,   4,   4, 138,  66,   0,  25, 
      4,   4,   4,   4,   4,  98,   0,   0,   4,   4,   4,   4,   4,   4, 139,   0, 
      4,   4,   4,   4,  31,   0,  25, 112, 140, 141,   4, 142,  96,   4,   4,  87, 
    143, 144,   4,   4, 145, 102,   0, 146, 147,  16,   4,  92,   4,   4,  47, 148, 
     28,  97, 149,  75,   4, 150, 131,   0,   4, 129, 151, 152,   4, 104, 153,   0, 
    154, 155,   0,   0,   0,   0,   4, 156,   4,   4,   4,   4,   4, 157, 158, 103, 
      4, 159,   4, 159,   4,   4, 160,   0, 161, 162, 163,   4,   4,  27, 164,   4, 
      4, 112,  25,   4, 165,   4,  16, 166,   0,   0,   0, 167,   4,   4,   4,  75, 
      0,   1,   1, 168,   4, 104, 169,   0, 170, 171, 172,   0,   4,   4,   4,  66, 
      0,   0,   4,  88,   0,   0,   0,   0,   0,   0,   0,   0,  75,   4, 173,   0, 
    104,  25, 156,   0, 112,   4, 174,   0,   4,   4,   4,   4, 112,   0,   0,   0, 
    175, 176,  98,   0,   0,   0,   0,   0,  98, 160,   0,   0,   0,   0,   0,   0, 
    177,  92,   0,  75,   0,   0,   0,   0,   4,  98,  98, 149,   0,   0,   0,   0, 
      4,   4, 124,   0,   0,   0,   0,   0,   4,   4, 178,   0, 144,  32,   0,   0, 
      4,   4,   4, 138,   0,   0,   0,   0,   4,   4,   4, 179,   0,   0,   0,   0, 
      4, 138,   0,   0,   0,   0,   0,   0,   4,  32,   0,   0,   0,   0,   0,   0, 
    180,   0,   0,   0,   0,   0,   0,   0,   4,   4, 181,   4, 182, 183, 184,   4, 
    185, 186, 187,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4, 188, 189, 135, 
    181, 181, 126, 126, 190, 190, 191,   0,   4,   4,   4,   4,   4,   4, 129,   0, 
      4,  88,   4,   4,   4,   4,   4,   4, 112,   0,   0,   0,   0,   0,   0,   0, 
};

RE_UINT8 re_alphabetic_stage_5[] = {
      0,   0,   0,   0, 254, 255, 255,   7,   0,   4,  32,   4, 255, 255, 127, 255, 
    255, 255, 255, 255, 195, 255,   3,   0,  31,  80,   0,   0,  32,   0,   0,   0, 
      0,   0, 223,  60,  64, 215, 255, 255, 251, 255, 255, 255, 255, 255, 191, 255, 
      3, 252, 255, 255, 255,   0, 254, 255, 255, 255, 127,   2, 254, 255, 255, 255, 
    255,   0,   0,   0,   0,   0, 255, 191, 182,   0, 255, 255, 255,   7,   7,   0, 
      0,   0, 255,   7, 255, 255, 255, 254,   0, 192, 255, 255, 255, 255, 239,  31, 
    254, 225,   0, 156,   0,   0, 255, 255,   0, 224, 255, 255, 255, 255,   3,   0, 
      0, 252, 255, 255, 255,   7,  48,   4, 255, 255, 255, 252, 255,  31,   0,   0, 
    255, 255, 255,   1, 255, 255, 255, 239, 255, 223, 225, 255,  15,   0, 254, 254, 
    238, 159, 249, 255, 255, 253, 197, 227, 159,  89, 128, 176,  15,   0,   3,   0, 
    238, 135, 249, 255, 255, 253, 109, 195, 135,  25,   2,  94,   0,   0,  63,   0, 
    238, 191, 251, 255, 255, 253, 237, 227, 191,  27,   1,   0,  15,   0,   0,   0, 
    159,  25, 192, 176,  15,   0,   2,   0, 236, 199,  61, 214,  24, 199, 255, 195, 
    199,  29, 129,   0, 238, 223, 253, 255, 255, 253, 239, 227, 223,  29,  96,   3, 
    236, 223, 253, 255, 223,  29,  96,  64,  15,   0,   6,   0, 255, 255, 255, 231, 
    223,  93, 128,   0,  15,   0,   0, 252, 236, 255, 127, 252, 255, 255, 251,  47, 
    127, 128,  95, 255,   0,   0,  12,   0, 255, 255, 255,   7, 127,  32,   0,   0, 
    150,  37, 240, 254, 174, 236, 255,  59,  95,  32,   0,  48,   1,   0,   0,   0, 
    255, 254, 255, 255, 255,  31, 254, 255,   3, 255, 255, 254, 255, 255, 255,  31, 
    255, 255, 127, 249, 231, 193, 255, 255, 127,  64,   0,  48,  63,   0, 255, 255, 
    255, 255, 255,  23, 255,  61, 127,  61, 255,  61, 255, 255, 255, 255,  61, 127, 
     61, 255, 127, 255, 255, 255,  61, 255, 255, 255, 255, 135, 255, 255,   0,   0, 
    255, 255,  31,   0, 255, 159, 255, 255, 255, 199,   1,   0, 255, 223,  15,   0, 
    255, 255,  15,   0, 255, 223,  13,   0, 255, 255, 207, 255, 255,   1, 128,  16, 
    255, 255, 255,   0, 255,   7, 255, 255, 255, 255,  63,   0, 255,  15, 255,   1, 
    255,  63,  31,   0, 255,  15, 255, 255, 255,   3,   0,   0, 255, 255, 255,  15, 
    255, 255, 255, 127, 254, 255,  31,   0, 128,   0,   0,   0, 255, 255, 239, 255, 
    239,  15,   0,   0, 255, 195,   0,   0, 191, 255,   3,   0,   0, 224,   0, 252, 
    255, 255, 255,  63,   0, 222,   7,   0, 255, 255,  63,  63,  63,  63, 255, 170, 
    255, 255, 223,  95, 220,  31, 207,  15, 255,  31, 220,  31,   0,   0,   2, 128, 
      0,   0, 255,  31, 132, 252,  47,  62,  80, 189, 255, 243, 224,  67,   0,   0, 
    255,   1,   0,   0,   0,   0, 192, 255, 255, 127, 255, 255,  31, 120,   0,   0, 
     63, 128,   0,   0, 255, 255, 127,   0, 127, 127, 127, 127,   0, 128,   0,   0, 
    224,   0,   0,   0, 254,   3,  62,  31, 255, 255, 127, 224, 255, 255, 255, 247, 
    224, 255, 255, 255, 255,  63, 254, 255, 255, 127,   0,   0, 255,  15,   0,   0, 
    255,  31, 255, 255,   0,  12,   0,   0, 255, 127,   0, 128,   0,   0, 128, 255, 
    252, 255, 255, 255, 255, 121,   3,   0,   0,   0,   0, 252, 187, 247, 255, 255, 
      0,   0, 252,   8, 255, 255,   7,   0, 255, 255, 247, 255, 255,  63,   0,   0, 
    255, 255, 127,   4,   5,   0,   0,  56, 126, 126, 126,   0, 127, 127,   0,   0, 
    255,   7,   0,   0,  15,   0, 255, 255, 127, 248, 255, 255, 255,  63, 255, 255, 
    255, 255, 255,   3, 127,   0, 248, 224, 255, 253, 127,  95, 219, 255, 255, 255, 
      0,   0, 248, 255, 255, 255, 252, 255,   0,   0, 255,  15,   0,   0, 223, 255, 
    192, 255, 255, 255, 252, 252, 252,  28, 255, 239, 255, 255, 127, 255, 255, 183, 
    255,  63, 255,  63, 255, 255,   1,   0,  15, 255,  62,   0,  63, 253, 255, 255, 
    255, 255, 191, 145, 111, 240, 239, 254,  63,   0,   0,   0,   7,   0,   0,   0, 
      3,   0,   0,   0, 255, 255, 223, 255, 255, 255, 255, 223, 100, 222, 255, 235, 
    239, 255, 255, 255, 191, 231, 223, 223, 255, 255, 255, 123,  95, 252, 253, 255, 
     63, 255, 255, 255, 253, 255, 255, 247, 255, 253, 255, 255, 247,  15,   0,   0, 
};

/* Alphabetic: 1737 bytes. */

RE_UINT32 re_get_alphabetic(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_alphabetic_stage_1[f] << 5);
    f = code >> 11;
    code ^= (f << 11);
    pos = ((RE_UINT32)re_alphabetic_stage_2[pos + f] << 3);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_alphabetic_stage_3[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_alphabetic_stage_4[pos + f] << 5);
    pos += code;
    value = (re_alphabetic_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Lowercase. */

RE_UINT8 re_lowercase_stage_1[] = {
    0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 
};

RE_UINT8 re_lowercase_stage_2[] = {
    0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 5, 
    6, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 7, 3, 3, 
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
};

RE_UINT8 re_lowercase_stage_3[] = {
     0,  1,  2,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  4,  5, 
     6,  3,  7,  3,  3,  3,  8,  3,  3,  3,  3,  3,  3,  3,  3,  3, 
     3,  3,  3,  9,  3,  3,  3,  3,  3,  3,  3,  3,  3, 10,  3, 11, 
     3,  3, 12,  3,  3,  3,  3,  3,  3,  3, 13, 14,  3,  3,  3,  3, 
};

RE_UINT8 re_lowercase_stage_4[] = {
     0,  0,  0,  1,  0,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 
     5, 13, 14, 15, 16, 17, 18, 19,  0,  0, 20, 21, 22, 23, 24, 25, 
     0, 26, 15,  5, 27,  5, 28,  5,  5, 29,  0, 30, 31,  0,  0,  0, 
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  0,  0,  0,  0,  0,  0, 15, 15, 15, 15, 15, 15,  0,  0, 
     5,  5,  5,  5, 32,  5,  5,  5, 33, 34, 35, 36, 34, 37, 38, 39, 
     0,  0,  0,  0, 40,  0,  0,  0, 41, 42, 43, 26, 44,  0,  0,  0, 
     0,  0,  0,  0,  0,  0, 26, 45,  0,  0,  0,  0,  0,  0,  0,  0, 
     0, 26, 46, 47,  5,  5,  5, 48, 15, 49,  0,  0,  0,  0,  0,  0, 
     0,  0,  5, 50, 51,  0,  0,  0,  0, 52,  5, 53, 54, 55,  0, 56, 
     0,  0,  0,  0,  0,  0,  0,  0, 57,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0, 
     0, 58, 59,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
    60, 61, 62, 31, 63, 64, 65, 66, 67, 68, 69, 70, 71, 60, 61, 72, 
    31, 63, 73, 59, 66, 49, 74, 75, 76, 73, 77, 26, 78, 66, 79,  0, 
};

RE_UINT8 re_lowercase_stage_5[] = {
      0,   0,   0,   0, 254, 255, 255,   7,   0,   4,  32,   4,   0,   0,   0, 128, 
    255, 255, 127, 255, 170, 170, 170, 170, 170, 170, 170,  85,  85, 171, 170, 170, 
    170, 170, 170, 212,  41,  49,  36,  78,  42,  45,  81, 230,  64,  82,  85, 181, 
    170, 170,  41, 170, 170, 170, 250, 147, 133, 170, 255, 255, 255, 255, 255, 255, 
    255, 255, 239, 255, 255, 255, 255,   1,   3,   0,   0,   0,  31,   0,   0,   0, 
     32,   0,   0,   0,   0,   0, 138,  60,   0,   0,   1,   0,   0, 240, 255, 255, 
    255, 127, 227, 170, 170, 170,  47,  25,   0,   0, 255, 255,   2, 168, 170, 170, 
     84, 213, 170, 170, 170,   0,   0,   0, 254, 255, 255, 255, 255,   0,   0,   0, 
    170, 170, 234, 191, 255,   0,  63,   0, 255,   0, 255,   0,  63,   0, 255,   0, 
    255,   0, 255,  63, 255,   0, 223,  64, 220,   0, 207,   0, 255,   0, 220,   0, 
      0,   0,  31,   0,   0, 196,   8,   0,   0, 128,  16,  50, 192,  67,   0,   0, 
     16,   0,   0,   0, 255,   3,   0,   0, 255, 255, 255, 127,  98,  21, 218,  63, 
     26,  80,   0,   0,  63,   0,   0,   0, 170,  42,   0,   0, 170, 170, 170,   0, 
    168, 170, 171, 170, 170, 170, 255, 149, 170,  80,   2,   0, 170,   2,   0,   0, 
      0,   0,   0,   4, 127,   0, 248,   0,   0, 255, 255, 255, 255, 255,   0,   0, 
      0,   0,   0, 252, 255, 255,  15,   0,   0, 192, 223, 255, 252, 255, 255,  15, 
      0,   0, 192, 235, 239, 255,   0,   0,   0, 252, 255, 255,  15,   0,   0, 192, 
    255, 255, 255,   0,   0,   0, 252, 255, 255,  15,   0,   0, 192, 255, 255, 255, 
      0, 192, 255, 255,   0,   0, 192, 255, 252, 255, 255, 247,   3,   0,   0, 240, 
    255, 255, 223,  15, 255, 127,  63,   0, 255, 253,   0,   0, 247,  11,   0,   0, 
};

/* Lowercase: 689 bytes. */

RE_UINT32 re_get_lowercase(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_lowercase_stage_1[f] << 4);
    f = code >> 12;
    code ^= (f << 12);
    pos = ((RE_UINT32)re_lowercase_stage_2[pos + f] << 3);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_lowercase_stage_3[pos + f] << 4);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_lowercase_stage_4[pos + f] << 5);
    pos += code;
    value = (re_lowercase_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Uppercase. */

RE_UINT8 re_uppercase_stage_1[] = {
    0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 
};

RE_UINT8 re_uppercase_stage_2[] = {
    0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 5, 
    6, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 7, 3, 3, 
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
};

RE_UINT8 re_uppercase_stage_3[] = {
     0,  1,  2,  3,  3,  3,  3,  3,  4,  3,  3,  3,  3,  3,  3,  5, 
     6,  3,  7,  3,  3,  3,  8,  3,  3,  3,  3,  3,  3,  3,  3,  3, 
     3,  3,  3,  9,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 10, 
     3,  3, 11,  3,  3,  3,  3,  3,  3,  3, 12, 13,  3,  3,  3,  3, 
};

RE_UINT8 re_uppercase_stage_4[] = {
     0,  0,  1,  0,  0,  0,  2,  0,  3,  4,  5,  6,  7,  8,  9, 10, 
     3, 11, 12,  0,  0,  0,  0,  0,  0,  0,  0, 13, 14, 15, 16, 17, 
    18, 19,  0,  3, 20,  3, 21,  3,  3, 22, 23,  0,  0,  0,  0,  0, 
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  0,  0,  0, 18, 24,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
     3,  3,  3,  3, 25,  3,  3,  3, 26, 27, 28, 29,  0, 30, 31, 32, 
     0,  0,  0,  0,  0,  0,  0,  0, 33, 34, 35, 19, 36,  0,  0,  0, 
     0,  0,  0,  0,  0, 37, 19,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
    18, 38,  0, 39,  3,  3,  3, 40,  0,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  3, 41, 42,  0,  0,  0,  0, 43,  3, 44, 45, 46,  0,  0, 
     0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0, 
    18, 47,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
    48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 24, 48, 49, 50, 
    51, 60, 61, 54, 55, 51, 62, 63, 64, 65, 37, 38, 54, 66, 67,  0, 
};

RE_UINT8 re_uppercase_stage_5[] = {
      0,   0,   0,   0, 254, 255, 255,   7, 255, 255, 127, 127,  85,  85,  85,  85, 
     85,  85,  85, 170, 170,  84,  85,  85,  85,  85,  85,  43, 214, 206, 219, 177, 
    213, 210, 174,  17, 144, 164, 170,  74,  85,  85, 210,  85,  85,  85,   5, 108, 
    122,  85,   0,   0,   0,   0,  69,   0,  64, 215, 254, 255, 251,  15,   0,   0, 
      0, 128,  28,  85,  85,  85, 144, 230, 255, 255, 255, 255, 255, 255,   0,   0, 
      1,  84,  85,  85, 171,  42,  85,  85,  85,   0, 254, 255, 255, 255, 127,   0, 
     63,   0,   0,   0,  85,  85,  21,  64,   0, 255,   0,  63,   0, 255,   0, 255, 
      0,  63,   0, 170,   0, 255,   0,   0,   0,   0,   0,  15,   0,  15,   0,  15, 
      0,  31,   0,  15, 132,  56,  39,  62,  80,  61,  15, 192,  32,   0,   0,   0, 
      8,   0,   0,   0,   0,   0, 192, 255, 255, 127,   0,   0, 157, 234,  37, 192, 
      5,  40,   0,   0,  85,  21,   0,   0,  85,  85,  85,   0,  84,  85,  84,  85, 
     85,  85,   0, 106,  85,  40,   1,   0,  85,   1,   0,   0, 255,   0,   0,   0, 
    255, 255, 255,   3,   0,   0, 240, 255, 255,  63,   0,   0,   0, 255, 255, 255, 
      3,   0,   0, 208, 100, 222,  63,   0,   0,   0, 255, 255, 255,   3,   0,   0, 
    176, 231, 223,  31,   0,   0,   0, 123,  95, 252,   1,   0,   0, 240, 255, 255, 
      3,   0,   0, 240, 255, 255,  63,   0,   1,   0,   0,   0, 252, 255, 255,   7, 
      0,   0,   0, 240, 255, 255,  31,   0, 255,   1,   0,   0,   0,   4,   0,   0, 
};

/* Uppercase: 625 bytes. */

RE_UINT32 re_get_uppercase(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_uppercase_stage_1[f] << 4);
    f = code >> 12;
    code ^= (f << 12);
    pos = ((RE_UINT32)re_uppercase_stage_2[pos + f] << 3);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_uppercase_stage_3[pos + f] << 4);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_uppercase_stage_4[pos + f] << 5);
    pos += code;
    value = (re_uppercase_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Cased. */

RE_UINT8 re_cased_stage_1[] = {
    0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 
};

RE_UINT8 re_cased_stage_2[] = {
    0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 5, 
    6, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 7, 3, 3, 
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
};

RE_UINT8 re_cased_stage_3[] = {
     0,  1,  2,  3,  3,  3,  3,  3,  4,  3,  3,  3,  3,  3,  5,  6, 
     7,  3,  8,  3,  3,  3,  9,  3,  3,  3,  3,  3,  3,  3,  3,  3, 
     3,  3,  3, 10,  3,  3,  3,  3,  3,  3,  3,  3,  3, 11,  3, 12, 
     3,  3, 13,  3,  3,  3,  3,  3,  3,  3, 14, 15,  3,  3,  3,  3, 
};

RE_UINT8 re_cased_stage_4[] = {
     0,  0,  1,  1,  0,  2,  3,  3,  4,  4,  4,  4,  4,  5,  6,  4, 
     4,  4,  4,  4,  7,  8,  9, 10,  0,  0, 11, 12, 13, 14,  4, 15, 
     4,  4,  4,  4, 16,  4,  4,  4,  4, 17, 18, 19, 20,  0,  0,  0, 
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  0,  0,  0,  4, 21,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  0,  0,  0,  0,  0,  0,  4,  4,  4,  4,  4,  4,  0,  0, 
     4,  4,  4,  4,  4,  4,  4,  4, 22,  4, 23, 24,  4, 25, 26, 27, 
     0,  0,  0,  0, 28,  0,  0,  0, 29, 30, 31,  4, 32,  0,  0,  0, 
     0,  0,  0,  0,  0, 33,  4, 34,  0,  0,  0,  0,  0,  0,  0,  0, 
     4, 35, 36,  4,  4,  4,  4, 37,  4, 21,  0,  0,  0,  0,  0,  0, 
     0,  0,  4, 38, 39,  0,  0,  0,  0, 40,  4,  4, 41, 34,  0, 42, 
     0,  0,  0,  0,  0,  0,  0,  0, 43,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0, 
     4,  4, 44,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
     4,  4, 45,  4, 46, 47, 48,  4, 49, 50, 51,  4,  4,  4,  4,  4, 
     4,  4,  4,  4,  4, 52, 53,  5, 45, 45, 35, 35, 54, 54, 55,  0, 
};

RE_UINT8 re_cased_stage_5[] = {
      0,   0,   0,   0, 254, 255, 255,   7,   0,   4,  32,   4, 255, 255, 127, 255, 
    255, 255, 255, 255, 255, 255, 255, 247, 240, 255, 255, 255, 255, 255, 239, 255, 
    255, 255, 255,   1,   3,   0,   0,   0,  31,   0,   0,   0,  32,   0,   0,   0, 
      0,   0, 207,  60,  64, 215, 255, 255, 251, 255, 255, 255, 255, 255, 191, 255, 
      3, 252, 255, 255, 255,   0, 254, 255, 255, 255, 127,   0, 254, 255, 255, 255, 
    255,   0,   0,   0,  63,   0,   0,   0, 255, 255,  63,  63,  63,  63, 255, 170, 
    255, 255, 255,  63, 255, 255, 223,  95, 220,  31, 207,  15, 255,  31, 220,  31, 
      0,   0,  31,   0, 132, 252,  47,  62,  80, 189,  31, 242, 224,  67,   0,   0, 
     24,   0,   0,   0,   0,   0, 192, 255, 255,   3,   0,   0, 255, 127, 255, 255, 
    255, 255, 255, 127,  31, 120,   0,   0, 255,  63,   0,   0, 255, 255, 255,   0, 
    252, 255, 255, 255, 255, 120,   3,   0,   0,   0,   0,   4, 127,   0, 248,   0, 
    255, 255,   0,   0, 255, 255, 223, 255, 255, 255, 255, 223, 100, 222, 255, 235, 
    239, 255, 255, 255, 191, 231, 223, 223, 255, 255, 255, 123,  95, 252, 253, 255, 
     63, 255, 255, 255, 253, 255, 255, 247, 255, 253, 255, 255, 247,  15,   0,   0, 
};

/* Cased: 609 bytes. */

RE_UINT32 re_get_cased(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_cased_stage_1[f] << 4);
    f = code >> 12;
    code ^= (f << 12);
    pos = ((RE_UINT32)re_cased_stage_2[pos + f] << 3);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_cased_stage_3[pos + f] << 4);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_cased_stage_4[pos + f] << 5);
    pos += code;
    value = (re_cased_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Case_Ignorable. */

RE_UINT8 re_case_ignorable_stage_1[] = {
    0, 1, 2, 3, 4, 1, 1, 5, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 6, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 
};

RE_UINT8 re_case_ignorable_stage_2[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  7,  7,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  7,  8,  9,  7,  7,  7,  7,  7,  7,  7,  7,  7, 10, 
    11, 12, 13,  7,  7,  7,  7,  7,  7,  7, 14,  7,  7,  7,  7,  7, 
    15,  7,  7,  7,  7,  7,  7,  7, 
};

RE_UINT8 re_case_ignorable_stage_3[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 
    16,  1,  1, 17,  1,  1,  1, 18, 19, 20, 21, 22, 23, 24,  1, 25, 
    26,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 27, 28, 29,  1, 
    30,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
    31,  1,  1,  1, 32,  1, 33, 34, 35, 36, 37, 38,  1,  1,  1,  1, 
     1,  1,  1, 39,  1,  1, 40, 41,  1, 42,  1,  1,  1,  1,  1,  1, 
     1,  1, 43,  1,  1,  1,  1,  1, 44,  1,  1,  1,  1,  1,  1,  1, 
     1, 45, 46,  1,  1,  1,  1,  1, 47, 48,  1,  1,  1,  1,  1,  1, 
};

RE_UINT8 re_case_ignorable_stage_4[] = {
      0,   1,   2,   3,   0,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   5,   6,   6,   6,   6,   6,   7,   8,   0,   0,   0, 
      0,   0,   0,   0,   9,   0,   0,   0,   0,   0,  10,   0,  11,  12,  13,  14, 
     15,   0,  16,  17,   0,   0,  18,  19,  20,   5,  21,   0,   0,  22,   0,  23, 
     24,  25,  26,   0,   0,   0,   0,   0,  27,  28,  29,  30,  31,  32,  33,  34, 
     35,  32,  36,  37,  35,  32,  38,  34,  31,  39,  40,  34,  41,   0,  42,   0, 
      0,  43,  44,  34,   0,  39,  45,  34,   0,   0,  33,  34,   0,   0,  46,   0, 
      0,  47,  48,   0,   0,  49,  50,   0,  51,  52,   0,  53,  54,  55,  56,   0, 
      0,  57,  58,  59,  60,   0,   0,  32,   0,   0,  61,   0,   0,   0,   0,   0, 
     62,  62,  63,  63,   0,  64,  65,   0,  66,   0,  67,   0,   0,  68,   0,   0, 
      0,  69,   0,   0,   0,   0,   0,   0,  70,   0,  71,  72,   0,  73,   0,   0, 
     74,  75,  41,  76,  77,  78,   0,  79,   0,  80,   0,  81,   0,   0,  82,  83, 
      0,  84,   6,  85,  86,   6,   6,  87,   0,   0,   0,   0,   0,  88,  89,  90, 
     91,  92,   0,  93,  94,   0,   5,  95,   0,   0,   0,  96,   0,   0,   0,  97, 
      0,   0,   0,  98,   0,   0,   0,   6,   0,  99,   0,   0,   0,   0,   0,   0, 
    100, 101,   0,   0, 102,   0,   0, 103, 104,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  81, 105,   0,   0, 106,   0,   0,   0, 107, 
      6,  77,   0,  17, 108,   0,   0,   0, 109, 110,   0,   0,   0,   0, 111, 112, 
      0, 113, 114,   0,  27, 115,  99,   0,   0, 116, 117,  17,   0, 118, 119,   0, 
      0,   0,   0,   0,   0,   0,   0, 120,   2,   0,   0,   0,   0, 121,  77,   0, 
    122, 123, 124,   0,   0,   0,   0, 125,   1,   2,   3,  17,  43,   0,   0, 126, 
      0,   0,   0,   0,   0,   0,   0,  96, 127, 128,   0,   0,   0,   0,   0,   0, 
     31, 129, 123,   0,  77, 130,   0,   0,   0,   0,   0, 131, 132, 133,   0,   0, 
      0,   0, 134,   0,   0,   0,   0,   0,  31,   6,   6,   6,   0,   0,   0,   0, 
      6,   6,   6,   6,   6,   6,   6, 135, 
};

RE_UINT8 re_case_ignorable_stage_5[] = {
      0,   0,   0,   0, 128,  64,   0,   4,   0,   0,   0,  64,   1,   0,   0,   0, 
      0, 161, 144,   1,   0,   0, 255, 255, 255, 255, 255, 255, 255, 255,  48,   4, 
    176,   0,   0,   0, 248,   3,   0,   0,   0,   0,   0,   2,   0,   0, 254, 255, 
    255, 255, 255, 191, 182,   0,   0,   0,   0,   0,  16,   0,  15,   0, 255,   7, 
      1, 248, 255, 255,   0,   0,   1,   0,   0,   0, 192, 191, 255,  61,   0,   0, 
      0, 128,   2,   0, 255,   7,   0,   0, 192, 255,   1,   0,   0, 248,  63,   4, 
      0,   0, 192, 255, 255,  63,   0,   0,   0,   0,   0,  14,   7,   0,   0,   0, 
      0,   0,   0,  20, 254,  33, 254,   0,  12,   0,   2,   0,   2,   0,   0,   0, 
      0,   0,   0,  16,  30,  32,   0,   0,  12,   0,   0,   0,   6,   0,   0,   0, 
    134,  57,   2,   0,   0,   0,  35,   0, 190,  33,   0,   0,   0,   0,   0, 144, 
     30,  32,  64,   0,   4,   0,   0,   0,   1,  32,   0,   0,   0,   0,   0, 192, 
    193,  61,  96,   0,  64,  48,   0,   0,   0,   4,  92,   0,   0,   0, 242,   7, 
    192, 127,   0,   0,   0,   0, 242,  27,  64,  63,   0,   0,   0,   0,   0,   3, 
      0,   0, 160,   2,   0,   0, 254, 127, 223, 224, 255, 254, 255, 255, 255,  31, 
     64,   0,   0,   0,   0, 224, 253, 102,   0,   0,   0, 195,   1,   0,  30,   0, 
    100,  32,   0,  32,   0,   0,   0, 224,   0,   0,  28,   0,   0,   0,  12,   0, 
      0,   0, 176,  63,  64, 254, 143,  32,   0,  56,   0,   0,   8,   0,   0,   0, 
      0,   2,   0,   0, 135,   1,   4,  14,   0,   0, 128,   1,   0,   0,  64, 127, 
    229,  31, 248, 159, 128,   0,   0,   0,  15,   0,   0,   0,   0,   0, 208,  23, 
      0, 248,  15,   0,   3,   0,   0,   0,  60,   3,   0,   0,  64, 163,   3,   0, 
      0, 240, 207,   0,   0,   0,   0,  63,   0,   0, 247, 255, 253,  33,   0,   0, 
      0, 240, 255, 255,   3,   0,   0,   1,   0,   0,   0, 248, 127,   0,   0, 240, 
      0,   0,   0, 160,   3, 224,   0, 224,   0, 224,   0,  96,   0, 248,   0,   3, 
    144, 124,   0,   0,  31, 252,   2, 128,   0,   0, 255,  31, 255, 255,   1,   0, 
      0,   0,   0,  32,   0, 128,   3,   0,   0, 128,   0, 128,   0, 128,   0,   0, 
     32,   0,   0,   0,   0, 252,  62,   8,   0,   0,   0, 126,   0,   0,   0, 112, 
      0,   0,  32,   0,   0,  16,   0,   0,   0, 128,   7, 176,   0,   0,   3,   0, 
      0,   7,   0,   0,  68,   8,   0,   0,  96,   0,   0,   0,  16,   0,   0,   0, 
    255, 255,   3,   0, 192,  63,   0,   0, 128, 255,   3,   0,   0,   0, 200,  19, 
      0, 126, 102,   0,   8,  16,   0,   0,   0,   0, 157, 193,   2,   0,   0,  32, 
     32,  33,   0,   0,   0,   0, 252, 255, 255, 255,   8,   0, 127,   0,   0,   0, 
      0,   0,  36,   0,   0,   0,   0, 128,   8,   0,   0,  14, 110, 240,   0,   0, 
      0,   0,   0, 135,   0,   0,   0, 255,   0,   0, 120,  38, 128,   3, 248, 255, 
    231,  15,   0,   0,   0,  60,   0,   0,  28,   0,   0,   0, 255, 255,   0,   0, 
};

/* Case_Ignorable: 1188 bytes. */

RE_UINT32 re_get_case_ignorable(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 14;
    code = ch ^ (f << 14);
    pos = ((RE_UINT32)re_case_ignorable_stage_1[f] << 3);
    f = code >> 11;
    code ^= (f << 11);
    pos = ((RE_UINT32)re_case_ignorable_stage_2[pos + f] << 3);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_case_ignorable_stage_3[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_case_ignorable_stage_4[pos + f] << 5);
    pos += code;
    value = (re_case_ignorable_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Changes_When_Lowercased. */

RE_UINT8 re_changes_when_lowercased_stage_1[] = {
    0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
    3, 3, 
};

RE_UINT8 re_changes_when_lowercased_stage_2[] = {
    0, 1, 2, 3, 4, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 7, 
    8, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
};

RE_UINT8 re_changes_when_lowercased_stage_3[] = {
     0,  1,  2,  3,  4,  5,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6, 
     7,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  8,  9, 
     6, 10,  6,  6, 11,  6,  6,  6,  6,  6,  6,  6, 12,  6,  6,  6, 
     6,  6,  6,  6,  6,  6, 13, 14,  6,  6,  6,  6,  6,  6,  6, 15, 
     6,  6,  6,  6, 16,  6,  6,  6, 
};

RE_UINT8 re_changes_when_lowercased_stage_4[] = {
     0,  0,  1,  0,  0,  0,  2,  0,  3,  4,  5,  6,  7,  8,  9, 10, 
     3, 11, 12,  0,  0,  0,  0,  0,  0,  0,  0, 13, 14, 15, 16, 17, 
    18, 19,  0,  3, 20,  3, 21,  3,  3, 22, 23,  0,  0,  0,  0,  0, 
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 18, 24,  0, 
     3,  3,  3,  3, 25,  3,  3,  3, 26, 27, 28, 29, 27, 30, 31, 32, 
     0, 33,  0, 19, 34,  0,  0,  0,  0,  0,  0,  0,  0, 35, 19,  0, 
    18, 36,  0, 37,  3,  3,  3, 38,  0,  0,  3, 39, 40,  0,  0,  0, 
     0, 41,  3, 42, 43, 44,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0, 
    18, 45,  0,  0,  0,  0,  0,  0, 
};

RE_UINT8 re_changes_when_lowercased_stage_5[] = {
      0,   0,   0,   0, 254, 255, 255,   7, 255, 255, 127, 127,  85,  85,  85,  85, 
     85,  85,  85, 170, 170,  84,  85,  85,  85,  85,  85,  43, 214, 206, 219, 177, 
    213, 210, 174,  17, 176, 173, 170,  74,  85,  85, 214,  85,  85,  85,   5, 108, 
    122,  85,   0,   0,   0,   0,  69,   0,  64, 215, 254, 255, 251,  15,   0,   0, 
      0, 128,   0,  85,  85,  85, 144, 230, 255, 255, 255, 255, 255, 255,   0,   0, 
      1,  84,  85,  85, 171,  42,  85,  85,  85,   0, 254, 255, 255, 255, 127,   0, 
     63,   0,   0,   0,  85,  85,  21,  64,   0, 255,   0,  63,   0, 255,   0, 255, 
      0,  63,   0, 170,   0, 255,   0,   0,   0, 255,   0,  31,   0,  31,   0,  15, 
      0,  31,   0,  31,  64,  12,   4,   0,   8,   0,   0,   0,   0,   0, 192, 255, 
    255, 127,   0,   0, 157, 234,  37, 192,   5,  40,   0,   0,  85,  21,   0,   0, 
     85,  85,  85,   0,  84,  85,  84,  85,  85,  85,   0, 106,  85,  40,   1,   0, 
     85,   1,   0,   0, 255,   0,   0,   0, 
};

/* Changes_When_Lowercased: 490 bytes. */

RE_UINT32 re_get_changes_when_lowercased(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 15;
    code = ch ^ (f << 15);
    pos = ((RE_UINT32)re_changes_when_lowercased_stage_1[f] << 4);
    f = code >> 11;
    code ^= (f << 11);
    pos = ((RE_UINT32)re_changes_when_lowercased_stage_2[pos + f] << 3);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_changes_when_lowercased_stage_3[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_changes_when_lowercased_stage_4[pos + f] << 5);
    pos += code;
    value = (re_changes_when_lowercased_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Changes_When_Uppercased. */

RE_UINT8 re_changes_when_uppercased_stage_1[] = {
    0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
    3, 3, 
};

RE_UINT8 re_changes_when_uppercased_stage_2[] = {
    0, 1, 1, 2, 3, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 6, 
    7, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
};

RE_UINT8 re_changes_when_uppercased_stage_3[] = {
     0,  1,  2,  3,  4,  5,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6, 
     6,  6,  6,  6,  6,  7,  8,  9,  6, 10,  6,  6, 11,  6,  6,  6, 
     6,  6,  6,  6, 12, 13,  6,  6,  6,  6,  6,  6,  6,  6, 14, 15, 
     6,  6,  6, 16,  6,  6,  6, 17,  6,  6,  6,  6, 18,  6,  6,  6, 
};

RE_UINT8 re_changes_when_uppercased_stage_4[] = {
     0,  0,  0,  1,  0,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 
     5, 13, 14, 15, 16,  0,  0,  0,  0,  0, 17, 18, 19, 20, 21, 22, 
     0, 23, 24,  5, 25,  5, 26,  5,  5, 27,  0, 28, 29,  0,  0,  0, 
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 30,  0,  0,  0,  0, 
     5,  5,  5,  5, 31,  5,  5,  5, 32, 33, 34, 35, 24, 36, 37, 38, 
     0,  0, 39, 23, 40,  0,  0,  0,  0,  0,  0,  0,  0,  0, 23, 41, 
     0, 23, 42, 43,  5,  5,  5, 44, 24, 45,  0,  0,  0,  0,  0,  0, 
     0,  0,  5, 46, 47,  0,  0,  0,  0, 48,  5, 49, 50, 51,  0,  0, 
    52,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0, 
     0, 53, 54,  0,  0,  0,  0,  0, 
};

RE_UINT8 re_changes_when_uppercased_stage_5[] = {
      0,   0,   0,   0, 254, 255, 255,   7,   0,   0,  32,   0,   0,   0,   0, 128, 
    255, 255, 127, 255, 170, 170, 170, 170, 170, 170, 170,  84,  85, 171, 170, 170, 
    170, 170, 170, 212,  41,  17,  36,  70,  42,  33,  81, 162,  96,  91,  85, 181, 
    170, 170,  45, 170, 168, 170,  10, 144, 133, 170, 223,  10,  41, 139,  38,  32, 
      9,  31,   4,   0,  32,   0,   0,   0,   0,   0, 138,  56,   0,   0,   1,   0, 
      0, 240, 255, 255, 255, 127, 227, 170, 170, 170,  39,   9,   0,   0, 255, 255, 
    255, 255, 255, 255,   2, 168, 170, 170,  84, 213, 170, 170, 170,   0,   0,   0, 
    254, 255, 255, 255, 255,   0,   0,   0,   0,   0,   0,  34, 170, 170, 234,  15, 
    255,   0,  63,   0, 255,   0, 255,   0,  63,   0, 255,   0, 255,   0, 255,  63, 
    255, 255, 223,  80, 220,  16, 207,   0, 255,   0, 220,  16,   0,  64,   0,   0, 
     16,   0,   0,   0, 255,   3,   0,   0, 255, 255, 255, 127,  98,  21,  72,   0, 
     10,  80,   0,   0,  63,   0,   0,   0, 170,  42,   0,   0, 170, 170, 170,   0, 
    168, 170, 168, 170, 170, 170,   0, 148, 170,  16,   2,   0, 170,   2,   0,   0, 
    127,   0, 248,   0,   0, 255, 255, 255, 255, 255,   0,   0, 
};

/* Changes_When_Uppercased: 534 bytes. */

RE_UINT32 re_get_changes_when_uppercased(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 15;
    code = ch ^ (f << 15);
    pos = ((RE_UINT32)re_changes_when_uppercased_stage_1[f] << 4);
    f = code >> 11;
    code ^= (f << 11);
    pos = ((RE_UINT32)re_changes_when_uppercased_stage_2[pos + f] << 3);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_changes_when_uppercased_stage_3[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_changes_when_uppercased_stage_4[pos + f] << 5);
    pos += code;
    value = (re_changes_when_uppercased_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Changes_When_Titlecased. */

RE_UINT8 re_changes_when_titlecased_stage_1[] = {
    0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
    3, 3, 
};

RE_UINT8 re_changes_when_titlecased_stage_2[] = {
    0, 1, 1, 2, 3, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 6, 
    7, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
};

RE_UINT8 re_changes_when_titlecased_stage_3[] = {
     0,  1,  2,  3,  4,  5,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6, 
     6,  6,  6,  6,  6,  7,  8,  9,  6, 10,  6,  6, 11,  6,  6,  6, 
     6,  6,  6,  6, 12, 13,  6,  6,  6,  6,  6,  6,  6,  6, 14, 15, 
     6,  6,  6, 16,  6,  6,  6, 17,  6,  6,  6,  6, 18,  6,  6,  6, 
};

RE_UINT8 re_changes_when_titlecased_stage_4[] = {
     0,  0,  0,  1,  0,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 
     5, 13, 14, 15, 16,  0,  0,  0,  0,  0, 17, 18, 19, 20, 21, 22, 
     0, 23, 24,  5, 25,  5, 26,  5,  5, 27,  0, 28, 29,  0,  0,  0, 
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 30,  0,  0,  0,  0, 
     5,  5,  5,  5, 31,  5,  5,  5, 32, 33, 34, 35, 33, 36, 37, 38, 
     0,  0, 39, 23, 40,  0,  0,  0,  0,  0,  0,  0,  0,  0, 23, 41, 
     0, 23, 42, 43,  5,  5,  5, 44, 24, 45,  0,  0,  0,  0,  0,  0, 
     0,  0,  5, 46, 47,  0,  0,  0,  0, 48,  5, 49, 50, 51,  0,  0, 
    52,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0, 
     0, 53, 54,  0,  0,  0,  0,  0, 
};

RE_UINT8 re_changes_when_titlecased_stage_5[] = {
      0,   0,   0,   0, 254, 255, 255,   7,   0,   0,  32,   0,   0,   0,   0, 128, 
    255, 255, 127, 255, 170, 170, 170, 170, 170, 170, 170,  84,  85, 171, 170, 170, 
    170, 170, 170, 212,  41,  17,  36,  70,  42,  33,  81, 162, 208,  86,  85, 181, 
    170, 170,  43, 170, 168, 170,  10, 144, 133, 170, 223,  10,  41, 139,  38,  32, 
      9,  31,   4,   0,  32,   0,   0,   0,   0,   0, 138,  56,   0,   0,   1,   0, 
      0, 240, 255, 255, 255, 127, 227, 170, 170, 170,  39,   9,   0,   0, 255, 255, 
    255, 255, 255, 255,   2, 168, 170, 170,  84, 213, 170, 170, 170,   0,   0,   0, 
    254, 255, 255, 255, 255,   0,   0,   0,   0,   0,   0,  34, 170, 170, 234,  15, 
    255,   0,  63,   0, 255,   0, 255,   0,  63,   0, 255,   0, 255,   0, 255,  63, 
    255,   0, 223,  64, 220,   0, 207,   0, 255,   0, 220,   0,   0,  64,   0,   0, 
     16,   0,   0,   0, 255,   3,   0,   0, 255, 255, 255, 127,  98,  21,  72,   0, 
     10,  80,   0,   0,  63,   0,   0,   0, 170,  42,   0,   0, 170, 170, 170,   0, 
    168, 170, 168, 170, 170, 170,   0, 148, 170,  16,   2,   0, 170,   2,   0,   0, 
    127,   0, 248,   0,   0, 255, 255, 255, 255, 255,   0,   0, 
};

/* Changes_When_Titlecased: 534 bytes. */

RE_UINT32 re_get_changes_when_titlecased(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 15;
    code = ch ^ (f << 15);
    pos = ((RE_UINT32)re_changes_when_titlecased_stage_1[f] << 4);
    f = code >> 11;
    code ^= (f << 11);
    pos = ((RE_UINT32)re_changes_when_titlecased_stage_2[pos + f] << 3);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_changes_when_titlecased_stage_3[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_changes_when_titlecased_stage_4[pos + f] << 5);
    pos += code;
    value = (re_changes_when_titlecased_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Changes_When_Casefolded. */

RE_UINT8 re_changes_when_casefolded_stage_1[] = {
    0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
    3, 3, 
};

RE_UINT8 re_changes_when_casefolded_stage_2[] = {
    0, 1, 2, 3, 4, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 7, 
    8, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
};

RE_UINT8 re_changes_when_casefolded_stage_3[] = {
     0,  1,  2,  3,  4,  5,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6, 
     7,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  8,  9, 
     6, 10,  6,  6, 11,  6,  6,  6,  6,  6,  6,  6, 12,  6,  6,  6, 
     6,  6,  6,  6,  6,  6, 13, 14,  6,  6,  6, 15,  6,  6,  6, 16, 
     6,  6,  6,  6, 17,  6,  6,  6, 
};

RE_UINT8 re_changes_when_casefolded_stage_4[] = {
     0,  0,  1,  0,  0,  2,  3,  0,  4,  5,  6,  7,  8,  9, 10, 11, 
     4, 12, 13,  0,  0,  0,  0,  0,  0,  0, 14, 15, 16, 17, 18, 19, 
    20, 21,  0,  4, 22,  4, 23,  4,  4, 24, 25,  0, 26,  0,  0,  0, 
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 20, 27,  0, 
     4,  4,  4,  4, 28,  4,  4,  4, 29, 30, 31, 32, 20, 33, 34, 35, 
     0, 36,  0, 21, 37,  0,  0,  0,  0,  0,  0,  0,  0, 38, 21,  0, 
    20, 39,  0, 40,  4,  4,  4, 41,  0,  0,  4, 42, 43,  0,  0,  0, 
     0, 44,  4, 45, 46, 47,  0,  0, 48,  0,  0,  0,  0,  0,  0,  0, 
     0,  1,  0,  0,  0,  0,  0,  0, 20, 49,  0,  0,  0,  0,  0,  0, 
};

RE_UINT8 re_changes_when_casefolded_stage_5[] = {
      0,   0,   0,   0, 254, 255, 255,   7,   0,   0,  32,   0, 255, 255, 127, 255, 
     85,  85,  85,  85,  85,  85,  85, 170, 170,  86,  85,  85,  85,  85,  85, 171, 
    214, 206, 219, 177, 213, 210, 174,  17, 176, 173, 170,  74,  85,  85, 214,  85, 
     85,  85,   5, 108, 122,  85,   0,   0,  32,   0,   0,   0,   0,   0,  69,   0, 
     64, 215, 254, 255, 251,  15,   0,   0,   4, 128,  99,  85,  85,  85, 179, 230, 
    255, 255, 255, 255, 255, 255,   0,   0,   1,  84,  85,  85, 171,  42,  85,  85, 
     85,   0, 254, 255, 255, 255, 127,   0, 128,   0,   0,   0,  63,   0,   0,   0, 
     85,  85,  21,  76,   0, 255,   0,  63,   0, 255,   0, 255,   0,  63,   0, 170, 
      0, 255,   0,   0, 255, 255, 156,  31, 156,  31,   0,  15,   0,  31, 156,  31, 
     64,  12,   4,   0,   8,   0,   0,   0,   0,   0, 192, 255, 255, 127,   0,   0, 
    157, 234,  37, 192,   5,  40,   0,   0,  85,  21,   0,   0,  85,  85,  85,   0, 
     84,  85,  84,  85,  85,  85,   0, 106,  85,  40,   1,   0,  85,   1,   0,   0, 
    127,   0, 248,   0, 255,   0,   0,   0, 
};

/* Changes_When_Casefolded: 514 bytes. */

RE_UINT32 re_get_changes_when_casefolded(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 15;
    code = ch ^ (f << 15);
    pos = ((RE_UINT32)re_changes_when_casefolded_stage_1[f] << 4);
    f = code >> 11;
    code ^= (f << 11);
    pos = ((RE_UINT32)re_changes_when_casefolded_stage_2[pos + f] << 3);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_changes_when_casefolded_stage_3[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_changes_when_casefolded_stage_4[pos + f] << 5);
    pos += code;
    value = (re_changes_when_casefolded_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Changes_When_Casemapped. */

RE_UINT8 re_changes_when_casemapped_stage_1[] = {
    0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
    3, 3, 
};

RE_UINT8 re_changes_when_casemapped_stage_2[] = {
    0, 1, 2, 3, 4, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 7, 
    8, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
};

RE_UINT8 re_changes_when_casemapped_stage_3[] = {
     0,  1,  2,  3,  4,  5,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6, 
     7,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  8,  9, 10, 
     6, 11,  6,  6, 12,  6,  6,  6,  6,  6,  6,  6, 13, 14,  6,  6, 
     6,  6,  6,  6,  6,  6, 15, 16,  6,  6,  6, 17,  6,  6,  6, 18, 
     6,  6,  6,  6, 19,  6,  6,  6, 
};

RE_UINT8 re_changes_when_casemapped_stage_4[] = {
     0,  0,  1,  1,  0,  2,  3,  3,  4,  5,  4,  4,  6,  7,  8,  4, 
     4,  9, 10, 11, 12,  0,  0,  0,  0,  0, 13, 14, 15, 16, 17, 18, 
     4,  4,  4,  4, 19,  4,  4,  4,  4, 20, 21, 22, 23,  0,  0,  0, 
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  4, 24,  0, 
     0,  0,  0, 25,  0,  0,  0,  0,  4,  4,  4,  4, 26,  4,  4,  4, 
    27,  4, 28, 29,  4, 30, 31, 32,  0, 33, 34,  4, 35,  0,  0,  0, 
     0,  0,  0,  0,  0, 36,  4, 37,  4, 38, 39, 40,  4,  4,  4, 41, 
     4, 24,  0,  0,  0,  0,  0,  0,  0,  0,  4, 42, 43,  0,  0,  0, 
     0, 44,  4, 45, 46, 37,  0,  0, 47,  0,  0,  0,  0,  0,  0,  0, 
     0,  1,  1,  0,  0,  0,  0,  0,  4,  4, 48,  0,  0,  0,  0,  0, 
};

RE_UINT8 re_changes_when_casemapped_stage_5[] = {
      0,   0,   0,   0, 254, 255, 255,   7,   0,   0,  32,   0, 255, 255, 127, 255, 
    255, 255, 255, 255, 255, 255, 255, 254, 255, 223, 255, 247, 255, 243, 255, 179, 
    240, 255, 255, 255, 253, 255,  15, 252, 255, 255, 223,  10,  41, 139,  38,  32, 
      9,  31,   4,   0,  32,   0,   0,   0,   0,   0, 207,  56,  64, 215, 255, 255, 
    251, 255, 255, 255, 255, 255, 227, 255, 255, 255, 183, 239,   3, 252, 255, 255, 
    255,   0, 254, 255, 255, 255, 127,   0, 254, 255, 255, 255, 255,   0,   0,   0, 
     63,   0,   0,   0,   0,   0,   0,  34, 255, 255, 255,  79, 255, 255,  63,  63, 
     63,  63, 255, 170, 255, 255, 255,  63, 255, 255, 223,  95, 220,  31, 207,  15, 
    255,  31, 220,  31,  64,  12,   4,   0,   0,  64,   0,   0,  24,   0,   0,   0, 
      0,   0, 192, 255, 255,   3,   0,   0, 255, 127, 255, 255, 255, 255, 255, 127, 
    255, 255, 109, 192,  15, 120,   0,   0, 255,  63,   0,   0, 255, 255, 255,   0, 
    252, 255, 252, 255, 255, 255,   0, 254, 255,  56,   3,   0, 127,   0, 248,   0, 
    255, 255,   0,   0, 
};

/* Changes_When_Casemapped: 526 bytes. */

RE_UINT32 re_get_changes_when_casemapped(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 15;
    code = ch ^ (f << 15);
    pos = ((RE_UINT32)re_changes_when_casemapped_stage_1[f] << 4);
    f = code >> 11;
    code ^= (f << 11);
    pos = ((RE_UINT32)re_changes_when_casemapped_stage_2[pos + f] << 3);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_changes_when_casemapped_stage_3[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_changes_when_casemapped_stage_4[pos + f] << 5);
    pos += code;
    value = (re_changes_when_casemapped_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* ID_Start. */

RE_UINT8 re_id_start_stage_1[] = {
    0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
    3, 
};

RE_UINT8 re_id_start_stage_2[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  7,  8,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  9, 10, 11,  7,  7,  7,  7, 12, 13, 13, 13, 13, 14, 
    15, 16, 17, 13, 18, 13, 19, 13, 13, 13, 13, 13, 13, 20, 13, 13, 
    13, 13, 13, 13, 13, 13, 21, 13, 13, 13, 22, 13, 13, 13, 13, 13, 
     7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  7, 23,  7, 24, 25, 13, 13, 13, 13, 13, 13, 13, 26, 
    13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 
    13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 
};

RE_UINT8 re_id_start_stage_3[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 
    16,  1, 17, 18, 19,  1, 20, 21, 22, 23, 24, 25, 26, 27,  1, 28, 
    29, 30, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 32, 33, 31, 31, 
    34, 35, 31, 31,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1, 36,  1,  1,  1,  1,  1,  1,  1,  1,  1, 37, 
     1,  1,  1,  1, 38,  1, 39, 40, 41, 42, 43, 44,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1, 45, 31, 31, 31, 31, 31, 31, 31, 31, 
    31,  1, 46, 47,  1, 48, 49, 50, 51, 52, 53, 54, 55, 31, 31, 31, 
    56, 57, 58, 59, 60, 31, 31, 31, 61, 31, 31, 31, 31, 31, 31, 31, 
     1,  1,  1, 62, 63, 31, 31, 31,  1,  1,  1,  1, 64, 31, 31, 31, 
     1,  1, 65, 31, 31, 31, 31, 31, 66, 31, 31, 31, 31, 31, 31, 31, 
    31, 31, 31, 31, 67, 68, 69, 70,  1,  1,  1,  1,  1,  1, 71,  1, 
     1,  1,  1,  1,  1,  1,  1, 72, 73, 31, 31, 31, 31, 31, 31, 31, 
     1,  1, 73, 31, 31, 31, 31, 31, 
};

RE_UINT8 re_id_start_stage_4[] = {
      0,   0,   1,   1,   0,   2,   3,   3,   4,   4,   4,   4,   4,   4,   4,   4, 
      4,   4,   4,   4,   4,   4,   5,   6,   0,   0,   0,   7,   8,   9,   4,  10, 
      4,   4,   4,   4,  11,   4,   4,   4,   4,  12,  13,  14,  15,   0,  16,  17, 
      0,   4,  18,  19,   4,   4,  20,  21,  22,  23,  24,   4,   4,  25,  26,  27, 
     28,  29,  30,   0,   0,   0,   0,   0,  31,  32,  33,  34,  35,  36,  37,  38, 
     39,  40,  41,  42,  43,  44,  45,  46,  35,  44,  47,  48,  49,  50,  45,   0, 
     51,  52,  53,  46,  51,  52,  54,  55,  51,  56,  57,  58,  59,  60,  61,   0, 
     14,  62,  61,   0,  63,  64,  65,   0,  66,   0,  67,  68,  69,   0,   0,   0, 
      4,  70,  71,  72,  73,   4,  74,  75,   4,   4,  76,   4,  77,  78,  79,   4, 
     80,   4,  81,   0,  23,   4,   4,  82,  14,   4,   4,   4,   4,   4,   4,   4, 
      4,   4,   4,  83,   1,   4,   4,  84,  85,  86,  86,  87,   4,  88,  89,   0, 
      0,   4,   4,  90,   4,  91,   4,  92,  93,   0,  16,  94,   4,  95,  96,   0, 
     97,   4,  82,   0,   0,  98,   0,   0,  99,  88, 100,   0, 101, 102,   4, 103, 
      4, 104, 105, 106,   0,   0,   0, 107,   4,   4,   4,   4,   4,   4,   0,   0, 
    108,   4, 109, 106,   4, 110, 111, 112,   0,   0,   0, 113, 114,   0,   0,   0, 
    115, 116, 117,   4, 118,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      4, 119, 120,   4,   4,   4,   4, 121,   4,  74,   4, 122,  97, 123, 123,   0, 
    124, 125,  14,   4, 126,  14,   4, 127,  99, 128,   4,   4, 129,  81,   0,  16, 
      4,   4,   4,   4,   4,  92,   0,   0,   4,   4,   4,   4,   4,   4,  95,   0, 
      4,   4,   4,   4,  68,   0,  16, 106, 130, 131,   4, 132,  90,   4,   4,  23, 
    133, 134,   4,   4, 135, 136,   0, 137, 138, 139,   4,  88, 134,  88,   0, 140, 
     26,  74,  61,  93,  31, 141, 142,   0,   4, 118, 143, 144,   4, 145, 146,   0, 
    147, 148,   0,   0,   0,   0,   4, 139,   4,   4,   4,   4,   4, 149, 150, 151, 
      4, 152,   4, 152,   4,   4, 153,   0, 154, 155, 156,   4,   4,  86, 157,   4, 
      4, 106,  16,   4, 158,   4,  15, 159,   0,   0,   0, 160,   4,   4,   4,  93, 
      0,   1,   1, 161,   4, 120, 162,   0, 163, 164, 165,   0,   4,   4,   4,  81, 
      0,   0,   4,  82,   0,   0,   0,   0,   0,   0,   0,   0,  93,   4, 166,   0, 
    120,  16,  18,   0, 106,   4, 167,   0,   4,   4,   4,   4, 106,   0,   0,   0, 
    168, 169,  92,   0,   0,   0,   0,   0,  92, 153,   0,   0,   0,   0,   0,   0, 
    170,  88,   0,  93,   0,   0,   0,   0,   4,  92,  92, 141,   0,   0,   0,   0, 
      4,   4, 118,   0,   0,   0,   0,   0, 101,  90,   0,   0, 101,  23,   0,   0, 
      4,   4,   4, 129,   0,   0,   0,   0,   4,   4,   4, 139,   0,   0,   0,   0, 
      4, 129,   0,   0,   0,   0,   0,   0,   4,  30,   0,   0,   0,   0,   0,   0, 
     46,   0,   0,   0,   0,   0,   0,   0,   4,   4, 171,   4, 172, 173, 174,   4, 
    175, 176, 177,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4, 178, 179, 127, 
    171, 171, 119, 119, 180, 180, 143,   0,   4,   4,   4,   4,   4,   4,  97,   0, 
      4,  82,   4,   4,   4,   4,   4,   4, 106,   0,   0,   0,   0,   0,   0,   0, 
};

RE_UINT8 re_id_start_stage_5[] = {
      0,   0,   0,   0, 254, 255, 255,   7,   0,   4,  32,   4, 255, 255, 127, 255, 
    255, 255, 255, 255, 195, 255,   3,   0,  31,  80,   0,   0,   0,   0, 223,  60, 
     64, 215, 255, 255, 251, 255, 255, 255, 255, 255, 191, 255,   3, 252, 255, 255, 
    255,   0, 254, 255, 255, 255, 127,   2, 254, 255, 255, 255, 255,   0,   0,   0, 
      0,   0, 255, 255, 255,   7,   7,   0, 255,   7,   0,   0,   0, 192, 254, 255, 
    255, 255,  47,   0,  96, 192,   0, 156,   0,   0, 253, 255, 255, 255,   0,   0, 
      0, 224, 255, 255,  63,   0,   2,   0,   0, 252, 255, 255, 255,   7,  48,   4, 
    255, 255,  63,   4,  16,   1,   0,   0, 255, 255, 255,   1, 240, 255, 255, 255, 
    255, 255, 255,  35,   0,   0,   1, 255,   3,   0, 254, 254, 224, 159, 249, 255, 
    255, 253, 197,  35,   0,  64,   0, 176,   3,   0,   3,   0, 224, 135, 249, 255, 
    255, 253, 109,   3,   0,   0,   0,  94,   0,   0,  28,   0, 224, 191, 251, 255, 
    255, 253, 237,  35,   0,   0,   1,   0,   3,   0,   0,   0,   0,   0,   0, 176, 
      3,   0,   2,   0, 232, 199,  61, 214,  24, 199, 255,   3, 224, 223, 253, 255, 
    255, 253, 239,  35,   0,   0,   0,   3,   0,   0,   0,  64,   3,   0,   6,   0, 
    255, 255, 255,  39,   0,  64,   0,   0,   3,   0,   0, 252, 224, 255, 127, 252, 
    255, 255, 251,  47, 127,   0,   0,   0, 255, 255,  13,   0, 150,  37, 240, 254, 
    174, 236,  13,  32,  95,   0,   0,  48,   1,   0,   0,   0, 255, 254, 255, 255, 
    255,  31,   0,   0,   0,  31,   0,   0, 255,   7,   0, 128,   0,   0,  63,  60, 
     98, 192, 225, 255,   3,  64,   0,   0,  63,   0, 255, 255, 255, 255, 255,  23, 
    255,  61, 127,  61, 255,  61, 255, 255, 255, 255,  61, 127,  61, 255, 127, 255, 
    255, 255,  61, 255, 255, 255, 255,   7, 255, 255,  31,   0, 255, 159, 255, 255, 
    255, 199,   1,   0, 255, 223,   3,   0, 255, 255,   3,   0, 255, 223,   1,   0, 
    255, 255,  15,   0,   0,   0, 128,  16, 255, 255, 255,   0, 255,   5, 255, 255, 
    255, 255,  63,   0, 255, 255, 255,  31, 255,  63,  31,   0, 255,  15,   0,   0, 
    254,   0,   0,   0, 255, 255, 127,   0, 128,   0,   0,   0, 224, 255, 255, 255, 
    224,  15,   0,   0, 248, 255, 255, 255,   1, 192,   0,   0,  63,   0,   0,   0, 
     15,   0,   0,   0,   0, 224,   0, 252, 255, 255, 255,  63,   0, 222,   3,   0, 
    255, 255,  63,  63,  63,  63, 255, 170, 255, 255, 223,  95, 220,  31, 207,  15, 
    255,  31, 220,  31,   0,   0,   2, 128,   0,   0, 255,  31, 132, 252,  47,  63, 
     80, 253, 255, 243, 224,  67,   0,   0, 255,   1,   0,   0, 255, 127, 255, 255, 
    255, 255, 255, 127,  31, 120,   0,   0,  63, 128,   0,   0, 127, 127, 127, 127, 
    224,   0,   0,   0, 254,   3,  62,  31, 255, 255, 127, 248, 255, 255, 255, 247, 
    255,  63, 254, 255, 255, 127,   0,   0, 255,  31, 255, 255,   0,  12,   0,   0, 
    255, 127,   0, 128,   0,   0, 128, 255, 252, 255, 255, 255, 255, 121,   3,   0, 
    255,   3,   0,   0,   0,   0,   0, 252, 187, 247, 255, 255,   7,   0,   0,   0, 
      0,   0, 252,   8, 255, 255,   7,   0,   0, 128,   0,   0, 247,  15,   0,   0, 
    255, 255, 127,   4, 255, 255,  98,  62,   5,   0,   0,  56, 126, 126, 126,   0, 
    127, 127,   0,   0,  15,   0, 255, 255, 127, 248, 255, 255, 255, 255, 255,  15, 
    255,  63, 255, 255, 255, 255, 255,   3, 127,   0, 248, 160, 255, 253, 127,  95, 
    219, 255, 255, 255,   0,   0, 248, 255, 255, 255, 252, 255,   0,   0, 255,  15, 
      0,   0, 223, 255, 192, 255, 255, 255, 252, 252, 252,  28, 255, 239, 255, 255, 
    127, 255, 255, 183, 255,  63, 255,  63, 255, 255,   1,   0,  15, 255,  62,   0, 
     63, 253, 255, 255, 255, 255, 191, 145,   1,   0, 239, 254, 255, 255, 223, 255, 
    255, 255, 255, 223, 100, 222, 255, 235, 239, 255, 255, 255, 191, 231, 223, 223, 
    255, 255, 255, 123,  95, 252, 253, 255,  63, 255, 255, 255, 253, 255, 255, 247, 
    255, 253, 255, 255, 
};

/* ID_Start: 1677 bytes. */

RE_UINT32 re_get_id_start(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_id_start_stage_1[f] << 5);
    f = code >> 11;
    code ^= (f << 11);
    pos = ((RE_UINT32)re_id_start_stage_2[pos + f] << 3);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_id_start_stage_3[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_id_start_stage_4[pos + f] << 5);
    pos += code;
    value = (re_id_start_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* ID_Continue. */

RE_UINT8 re_id_continue_stage_1[] = {
    0, 1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 6, 6, 6, 
    6, 6, 
};

RE_UINT8 re_id_continue_stage_2[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  7,  8,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  9, 10, 11,  7,  7,  7,  7, 12, 13, 13, 13, 13, 14, 
    15, 16, 17, 13, 18, 13, 19, 13, 13, 13, 13, 13, 13, 20, 13, 13, 
    13, 13, 13, 13, 13, 13, 21, 13, 13, 13, 22, 13, 13, 13, 13, 13, 
     7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  7, 23,  7, 24, 25, 13, 13, 13, 13, 13, 13, 13, 26, 
    13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 
    27, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 
};

RE_UINT8 re_id_continue_stage_3[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 
    16,  1, 17, 18, 19,  1, 20, 21, 22, 23, 24, 25, 26, 27,  1, 28, 
    29, 30, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 32, 33, 31, 31, 
    34, 35, 31, 31,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1, 36,  1,  1,  1,  1,  1,  1,  1,  1,  1, 37, 
     1,  1,  1,  1, 38,  1, 39, 40, 41, 42, 43, 44,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1, 45, 31, 31, 31, 31, 31, 31, 31, 31, 
    31,  1, 46, 47,  1, 48, 49, 50, 51, 52, 53, 54, 55, 31, 31, 31, 
    56, 57, 58, 59, 60, 31, 31, 31, 61, 31, 31, 31, 31, 31, 31, 31, 
     1,  1,  1, 62, 63, 31, 31, 31,  1,  1,  1,  1, 64, 31, 31, 31, 
     1,  1, 65, 31, 31, 31, 31, 31, 66, 31, 31, 31, 31, 31, 31, 31, 
    31, 67, 68, 31, 69, 70, 71, 72,  1,  1,  1,  1,  1,  1, 73,  1, 
     1,  1,  1,  1,  1,  1,  1, 74, 75, 31, 31, 31, 31, 31, 31, 31, 
     1,  1, 75, 31, 31, 31, 31, 31, 31, 76, 31, 31, 31, 31, 31, 31, 
};

RE_UINT8 re_id_continue_stage_4[] = {
      0,   1,   2,   3,   0,   4,   5,   5,   6,   6,   6,   6,   6,   6,   6,   6, 
      6,   6,   6,   6,   6,   6,   7,   8,   6,   6,   6,   9,  10,  11,   6,  12, 
      6,   6,   6,   6,  13,   6,   6,   6,   6,  14,  15,  16,  14,  17,  18,  19, 
     20,   6,   6,  21,   6,   6,  22,  23,  24,   6,  25,   6,   6,  26,   6,  27, 
      6,  28,  29,   0,   0,   0,   0,   0,   6,   6,   6,  30,  31,  32,  33,  34, 
     35,  36,  37,  38,  39,  40,  41,  42,  31,  40,  43,  44,  45,  46,  47,  48, 
     49,  50,  51,  42,  52,  53,  54,  55,  52,  56,  57,  58,  59,  60,  61,  62, 
     16,  63,  64,   0,  65,  66,  67,   0,  68,  69,  70,  71,  72,  73,  74,   0, 
      6,   6,  75,   6,  76,   6,  77,  78,   6,   6,  79,   6,  80,  81,  82,   6, 
     83,   6,  56,  84,  85,   6,   6,  86,  16,   6,   6,   6,   6,   6,   6,   6, 
      6,   6,   6,  87,   3,   6,   6,  88,  89,  86,  90,  91,   6,  92,  93,  94, 
     95,   6,   6,  96,   6,  97,   6,  98,  73,  99, 100, 101,   6, 102, 103,   0, 
     29,   6, 104, 105, 106, 107,   0,   0,   6,   6, 108, 109,   6, 110,   6,  90, 
      6,  96, 111,  76,   0,   0, 112, 113,   6,   6,   6,   6,   6,   6,   6, 114, 
    115,   6, 116,  76,   6, 117, 118, 119,   0, 120, 121, 122, 123,   0, 123, 124, 
    125, 126, 127,   6, 128,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      6, 129, 104,   6,   6,   6,   6, 130,   6,  77,   6, 131, 132, 133, 133,   6, 
    134, 135,  16,   6, 136,  16,   6, 137, 138, 139,   6,   6, 140,  63,   0,  24, 
      6,   6,   6,   6,   6,  98,   0,   0,   6,   6,   6,   6,   6,   6, 141,   0, 
      6,   6,   6,   6, 142,   0,  24,  76, 143, 141,   6, 144,  96,   6,   6,  26, 
    145, 146,   6,   6, 147,  94,   0, 148,   6, 149,   6,  90,   6,   6, 150, 151, 
      6, 152,  90,  73,   6,   6, 153,   0,   6, 132, 154, 155,   6,   6, 156,   0, 
    157, 158,   0,   0,   0,   0,   6, 159,   6,   6,   6,   6,   6, 160, 161,  29, 
      6, 152,   6, 152,   6,   6, 162,   0, 163, 164, 165,   6,   6,  26, 166,   6, 
      6,  76,  24,   6, 167,   6, 149, 168,  85, 169, 170, 171,   6,   6,   6,  73, 
      1,   2,   3, 100,   6, 104, 172,   0, 173, 174, 175,   0,   6,   6,   6,  63, 
      0,   0,   6,  86,   0,   0,   0, 176,   0,   0,   0,   0,  73,   6, 177,   0, 
    104,  24, 178,   0,  76,   6, 179,   0,   6,   6,   6,   6,  76,  94,   0,   0, 
    180, 181,  98,   0,   0,   0,   0,   0,  98, 162,   0,   0,   0,   0,   0,   0, 
    182, 183,   0,  73,   0,   0,   0,   0,   6,  98,  98, 113,   0,   0,   0,   0, 
      6,   6, 128,   0,   0,   0,   0,   0,   6,   6, 184,  48,   6,  63,   0,   0, 
      6,   6,   6, 140,   0,   0,   0,   0,   6,   6,   6, 185,   0,   0,   0,   0, 
      6, 140,   0,   0,   0,   0,   0,   0,   6, 186,   0,   0,   0,   0,   0,   0, 
    187,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 188, 189, 190,   0,   0, 
      0,   0, 191,   0,   0,   0,   0,   0,   6,   6, 192,   6, 193, 194, 195,   6, 
    196, 197, 198,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 199, 200, 137, 
    192, 192, 129, 129, 201, 201, 202,   6,   6,   6,   6,   6,   6,   6, 132,   0, 
      6,  86,   6,   6,   6,   6,   6,   6,  76,   0,   0,   0,   0,   0,   0,   0, 
      6,   6,   6,   6,   6,   6,   6,  85, 
};

RE_UINT8 re_id_continue_stage_5[] = {
      0,   0,   0,   0,   0,   0, 255,   3, 254, 255, 255, 135, 254, 255, 255,   7, 
      0,   4, 160,   4, 255, 255, 127, 255, 255, 255, 255, 255, 195, 255,   3,   0, 
     31,  80,   0,   0, 255, 255, 223,  60, 192, 215, 255, 255, 251, 255, 255, 255, 
    255, 255, 191, 255, 251, 252, 255, 255, 255,   0, 254, 255, 255, 255, 127,   2, 
    254, 255, 255, 255, 255, 255, 255, 191, 182,   0, 255, 255, 255,   7,   7,   0, 
      0,   0, 255,   7, 255, 195, 255, 255, 255, 255, 239, 159, 255, 253, 255, 159, 
      0,   0, 255, 255, 255, 231, 255, 255, 255, 255,   3,   0, 255, 255,  63,   4, 
    255,  63,   0,   0, 255, 255, 255,  15, 207, 255, 254, 254, 238, 159, 249, 255, 
    255, 253, 197, 243, 159, 121, 128, 176, 207, 255,   3,   0, 238, 135, 249, 255, 
    255, 253, 109, 211, 135,  57,   2,  94, 192, 255,  63,   0, 238, 191, 251, 255, 
    255, 253, 237, 243, 191,  59,   1,   0, 207, 255,   0,   0, 159,  57, 192, 176, 
    207, 255,   2,   0, 236, 199,  61, 214,  24, 199, 255, 195, 199,  61, 129,   0, 
    192, 255,   0,   0, 238, 223, 253, 255, 255, 253, 239, 227, 223,  61,  96,   3, 
    236, 223, 253, 255, 255, 253, 239, 243, 223,  61,  96,  64, 207, 255,   6,   0, 
    255, 255, 255, 231, 223, 125, 128,   0, 207, 255,   0, 252, 236, 255, 127, 252, 
    255, 255, 251,  47, 127, 132,  95, 255,   0,   0,  12,   0, 255, 255, 255,   7, 
    255, 127, 255,   3, 150,  37, 240, 254, 174, 236, 255,  59,  95,  63, 255,  51, 
      1,   0,   0,   3, 255,   3, 160, 194, 255, 254, 255, 255, 255,  31, 254, 255, 
    223, 255, 255, 254, 255, 255, 255,  31,  64,   0,   0,   0, 255,   3, 255, 255, 
    255, 255, 255,  63,  63,   0, 255, 255, 255, 255, 255,  23, 255,  61, 127,  61, 
    255,  61, 255, 255, 255, 255,  61, 127,  61, 255, 127, 255, 255, 255,  61, 255, 
      0, 254,   3,   0, 255, 255,   0,   0, 255, 255,  31,   0, 255, 159, 255, 255, 
    255, 199,   1,   0, 255, 223,  31,   0, 255, 255,  15,   0, 255, 223,  13,   0, 
    255, 255, 207, 255, 255, 255, 143,  48, 255,   3,   0,   0,   0,  56, 255,   3, 
    255, 255, 255,   0, 255,   7, 255, 255, 255, 255,  63,   0, 255,  15, 255,  15, 
    192, 255, 255, 255, 255,  63,  31,   0, 255,  15, 255, 255, 255,   3, 255,   7, 
    255, 255, 255, 127, 255, 255, 255, 159, 255,   3, 255,   3, 128,   0,   0,   0, 
    255,  15, 255,   3,   0, 248,  15,   0, 255, 199, 255,   3, 255, 227, 255, 255, 
      0,   0, 247, 255, 255, 255,   7,   0, 127,   0,   0, 240, 255, 255,  63,  63, 
     63,  63, 255, 170, 255, 255, 223,  95, 220,  31, 207,  15, 255,  31, 220,  31, 
      0,   0,   0, 128,   1,   0,  16,   0,   0,   0,   2, 128,   0,   0, 255,  31, 
    226, 255,   1,   0, 132, 252,  47,  63,  80, 253, 255, 243, 224,  67,   0,   0, 
    255,   1,   0,   0, 255, 127, 255, 255,  31, 248,   3,   0,  63, 128,   0, 128, 
    255, 255, 127,   0, 127, 127, 127, 127, 224,   0,   0,   0, 254, 255,  62,  31, 
    255, 255, 127, 254, 255, 255, 255, 247, 224, 255, 255, 255, 255,  63, 254, 255, 
    255, 127,   0,   0, 255,  15,   0,   0, 255,  31,   0,   0, 255,  31, 255, 255, 
    255, 255,   0, 176,   0,   0, 128, 255, 252, 255, 255, 255, 255, 121,   3,   0, 
      0,   0,   0, 252, 255,   0,   0,   0,  31,   0, 255,   3, 255, 255, 255,   8, 
    255,  63, 255, 255,   1, 128, 255,   3, 255,  63, 255,   3, 255, 255, 127,  12, 
      7,   0,   0,  56, 126, 126, 126,   0, 127, 127,   0,   0, 255,  55, 255,   3, 
     15,   0, 255, 255, 127, 248, 255, 255, 255, 255, 255,   3, 127,   0, 248, 224, 
    255, 253, 127,  95, 219, 255, 255, 255,   0,   0, 248, 255, 255, 255, 252, 255, 
      0,   0, 255,  15, 127,   0,  24,   0,   0, 224,   0,   0,   0,   0, 223, 255, 
    252, 252, 252,  28, 255, 239, 255, 255, 127, 255, 255, 183, 255,  63, 255,  63, 
      0,   0,   0,  32, 255, 255,   1,   0, 255,   7,   0,   0,  15, 255,  62,   0, 
     63, 253, 255, 255, 255, 255, 191, 145, 111, 240, 239, 254, 255, 255,  15, 135, 
    127,   0,   0,   0,   7,   0,   0,   0, 255, 255, 255,   1,   3,   0,   0,   0, 
    224, 227,   7, 248, 231,  15,   0,   0,   0,  60,   0,   0,  28,   0,   0,   0, 
    255, 255, 223, 255, 255, 255, 255, 223, 100, 222, 255, 235, 239, 255, 255, 255, 
    191, 231, 223, 223, 255, 255, 255, 123,  95, 252, 253, 255,  63, 255, 255, 255, 
    253, 255, 255, 247, 255, 253, 255, 255, 247, 207, 255, 255, 
};

/* ID_Continue: 1814 bytes. */

RE_UINT32 re_get_id_continue(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 15;
    code = ch ^ (f << 15);
    pos = ((RE_UINT32)re_id_continue_stage_1[f] << 4);
    f = code >> 11;
    code ^= (f << 11);
    pos = ((RE_UINT32)re_id_continue_stage_2[pos + f] << 3);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_id_continue_stage_3[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_id_continue_stage_4[pos + f] << 5);
    pos += code;
    value = (re_id_continue_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* XID_Start. */

RE_UINT8 re_xid_start_stage_1[] = {
    0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
    3, 
};

RE_UINT8 re_xid_start_stage_2[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  7,  8,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  9, 10, 11,  7,  7,  7,  7, 12, 13, 13, 13, 13, 14, 
    15, 16, 17, 13, 18, 13, 19, 13, 13, 13, 13, 13, 13, 20, 13, 13, 
    13, 13, 13, 13, 13, 13, 21, 13, 13, 13, 22, 13, 13, 13, 13, 13, 
     7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  7, 23,  7, 24, 25, 13, 13, 13, 13, 13, 13, 13, 26, 
    13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 
    13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 
};

RE_UINT8 re_xid_start_stage_3[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 
    16,  1, 17, 18, 19,  1, 20, 21, 22, 23, 24, 25, 26, 27,  1, 28, 
    29, 30, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 32, 33, 31, 31, 
    34, 35, 31, 31,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1, 36,  1,  1,  1,  1,  1,  1,  1,  1,  1, 37, 
     1,  1,  1,  1, 38,  1, 39, 40, 41, 42, 43, 44,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1, 45, 31, 31, 31, 31, 31, 31, 31, 31, 
    31,  1, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 31, 31, 31, 
    57, 58, 59, 60, 61, 31, 31, 31, 62, 31, 31, 31, 31, 31, 31, 31, 
     1,  1,  1, 63, 64, 31, 31, 31,  1,  1,  1,  1, 65, 31, 31, 31, 
     1,  1, 66, 31, 31, 31, 31, 31, 67, 31, 31, 31, 31, 31, 31, 31, 
    31, 31, 31, 31, 68, 69, 70, 71,  1,  1,  1,  1,  1,  1, 72,  1, 
     1,  1,  1,  1,  1,  1,  1, 73, 74, 31, 31, 31, 31, 31, 31, 31, 
     1,  1, 74, 31, 31, 31, 31, 31, 
};

RE_UINT8 re_xid_start_stage_4[] = {
      0,   0,   1,   1,   0,   2,   3,   3,   4,   4,   4,   4,   4,   4,   4,   4, 
      4,   4,   4,   4,   4,   4,   5,   6,   0,   0,   0,   7,   8,   9,   4,  10, 
      4,   4,   4,   4,  11,   4,   4,   4,   4,  12,  13,  14,  15,   0,  16,  17, 
      0,   4,  18,  19,   4,   4,  20,  21,  22,  23,  24,   4,   4,  25,  26,  27, 
     28,  29,  30,   0,   0,   0,   0,   0,  31,  32,  33,  34,  35,  36,  37,  38, 
     39,  40,  41,  42,  43,  44,  45,  46,  35,  44,  47,  48,  49,  50,  45,   0, 
     51,  52,  53,  46,  51,  52,  54,  55,  51,  56,  57,  58,  59,  60,  61,   0, 
     14,  62,  61,   0,  63,  64,  65,   0,  66,   0,  67,  68,  69,   0,   0,   0, 
      4,  70,  71,  72,  73,   4,  74,  75,   4,   4,  76,   4,  77,  78,  79,   4, 
     80,   4,  81,   0,  23,   4,   4,  82,  14,   4,   4,   4,   4,   4,   4,   4, 
      4,   4,   4,  83,   1,   4,   4,  84,  85,  86,  86,  87,   4,  88,  89,   0, 
      0,   4,   4,  90,   4,  91,   4,  92,  93,   0,  16,  94,   4,  95,  96,   0, 
     97,   4,  82,   0,   0,  98,   0,   0,  99,  88, 100,   0, 101, 102,   4, 103, 
      4, 104, 105, 106,   0,   0,   0, 107,   4,   4,   4,   4,   4,   4,   0,   0, 
    108,   4, 109, 106,   4, 110, 111, 112,   0,   0,   0, 113, 114,   0,   0,   0, 
    115, 116, 117,   4, 118,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      4, 119, 120,   4,   4,   4,   4, 121,   4,  74,   4, 122,  97, 123, 123,   0, 
    124, 125,  14,   4, 126,  14,   4, 127,  99, 128,   4,   4, 129,  81,   0,  16, 
      4,   4,   4,   4,   4,  92,   0,   0,   4,   4,   4,   4,   4,   4,  95,   0, 
      4,   4,   4,   4,  68,   0,  16, 106, 130, 131,   4, 132,  90,   4,   4,  23, 
    133, 134,   4,   4, 135, 136,   0, 137, 138, 139,   4,  88, 134,  88,   0, 140, 
     26,  74,  61,  93,  31, 141, 142,   0,   4, 118, 143, 144,   4, 145, 146,   0, 
    147, 148,   0,   0,   0,   0,   4, 139,   4,   4,   4,   4,   4, 149, 150, 151, 
      4, 152,   4, 152,   4,   4, 153,   0, 154, 155, 156,   4,   4,  86, 157,   4, 
      4,   4, 106,  31,   4,   4,   4,   4,   4, 106,  16,   4, 158,   4,  15, 159, 
      0,   0,   0, 160,   4,   4,   4,  93,   0,   1,   1, 161, 106, 120, 162,   0, 
    163, 164, 165,   0,   4,   4,   4,  81,   0,   0,   4,  82,   0,   0,   0,   0, 
      0,   0,   0,   0,  93,   4, 166,   0, 120,  16,  18,   0, 106,   4, 167,   0, 
      4,   4,   4,   4, 106,   0,   0,   0, 168, 169,  92,   0,   0,   0,   0,   0, 
     92, 153,   0,   0,   0,   0,   0,   0, 170,  88,   0,  93,   0,   0,   0,   0, 
      4,  92,  92, 141,   0,   0,   0,   0,   4,   4, 118,   0,   0,   0,   0,   0, 
    101,  90,   0,   0, 101,  23,   0,   0,   4,   4,   4, 129,   0,   0,   0,   0, 
      4,   4,   4, 139,   0,   0,   0,   0,   4, 129,   0,   0,   0,   0,   0,   0, 
      4,  30,   0,   0,   0,   0,   0,   0,  46,   0,   0,   0,   0,   0,   0,   0, 
      4,   4, 171,   4, 172, 173, 174,   4, 175, 176, 177,   4,   4,   4,   4,   4, 
      4,   4,   4,   4,   4, 178, 179, 127, 171, 171, 119, 119, 180, 180, 143,   0, 
      4,   4,   4,   4,   4,   4,  97,   0,   4,  82,   4,   4,   4,   4,   4,   4, 
    106,   0,   0,   0,   0,   0,   0,   0, 
};

RE_UINT8 re_xid_start_stage_5[] = {
      0,   0,   0,   0, 254, 255, 255,   7,   0,   4,  32,   4, 255, 255, 127, 255, 
    255, 255, 255, 255, 195, 255,   3,   0,  31,  80,   0,   0,   0,   0, 223,  56, 
     64, 215, 255, 255, 251, 255, 255, 255, 255, 255, 191, 255,   3, 252, 255, 255, 
    255,   0, 254, 255, 255, 255, 127,   2, 254, 255, 255, 255, 255,   0,   0,   0, 
      0,   0, 255, 255, 255,   7,   7,   0, 255,   7,   0,   0,   0, 192, 254, 255, 
    255, 255,  47,   0,  96, 192,   0, 156,   0,   0, 253, 255, 255, 255,   0,   0, 
      0, 224, 255, 255,  63,   0,   2,   0,   0, 252, 255, 255, 255,   7,  48,   4, 
    255, 255,  63,   4,  16,   1,   0,   0, 255, 255, 255,   1, 240, 255, 255, 255, 
    255, 255, 255,  35,   0,   0,   1, 255,   3,   0, 254, 254, 224, 159, 249, 255, 
    255, 253, 197,  35,   0,  64,   0, 176,   3,   0,   3,   0, 224, 135, 249, 255, 
    255, 253, 109,   3,   0,   0,   0,  94,   0,   0,  28,   0, 224, 191, 251, 255, 
    255, 253, 237,  35,   0,   0,   1,   0,   3,   0,   0,   0,   0,   0,   0, 176, 
      3,   0,   2,   0, 232, 199,  61, 214,  24, 199, 255,   3, 224, 223, 253, 255, 
    255, 253, 239,  35,   0,   0,   0,   3,   0,   0,   0,  64,   3,   0,   6,   0, 
    255, 255, 255,  39,   0,  64,   0,   0,   3,   0,   0, 252, 224, 255, 127, 252, 
    255, 255, 251,  47, 127,   0,   0,   0, 255, 255,   5,   0, 150,  37, 240, 254, 
    174, 236,   5,  32,  95,   0,   0,  48,   1,   0,   0,   0, 255, 254, 255, 255, 
    255,  31,   0,   0,   0,  31,   0,   0, 255,   7,   0, 128,   0,   0,  63,  60, 
     98, 192, 225, 255,   3,  64,   0,   0,  63,   0, 255, 255, 255, 255, 255,  23, 
    255,  61, 127,  61, 255,  61, 255, 255, 255, 255,  61, 127,  61, 255, 127, 255, 
    255, 255,  61, 255, 255, 255, 255,   7, 255, 255,  31,   0, 255, 159, 255, 255, 
    255, 199,   1,   0, 255, 223,   3,   0, 255, 255,   3,   0, 255, 223,   1,   0, 
    255, 255,  15,   0,   0,   0, 128,  16, 255, 255, 255,   0, 255,   5, 255, 255, 
    255, 255,  63,   0, 255, 255, 255,  31, 255,  63,  31,   0, 255,  15,   0,   0, 
    254,   0,   0,   0, 255, 255, 127,   0, 128,   0,   0,   0, 224, 255, 255, 255, 
    224,  15,   0,   0, 248, 255, 255, 255,   1, 192,   0,   0,  63,   0,   0,   0, 
     15,   0,   0,   0,   0, 224,   0, 252, 255, 255, 255,  63,   0, 222,   3,   0, 
    255, 255,  63,  63,  63,  63, 255, 170, 255, 255, 223,  95, 220,  31, 207,  15, 
    255,  31, 220,  31,   0,   0,   2, 128,   0,   0, 255,  31, 132, 252,  47,  63, 
     80, 253, 255, 243, 224,  67,   0,   0, 255,   1,   0,   0, 255, 127, 255, 255, 
    255, 255, 255, 127,  31, 120,   0,   0,  63, 128,   0,   0, 127, 127, 127, 127, 
    224,   0,   0,   0, 254,   3,  62,  31, 255, 255, 127, 224, 255, 255, 255, 247, 
    255,  63, 254, 255, 255, 127,   0,   0, 255,  31, 255, 255,   0,  12,   0,   0, 
    255, 127,   0, 128,   0,   0, 128, 255, 252, 255, 255, 255, 255, 121,   3,   0, 
    255,   3,   0,   0,   0,   0,   0, 252, 187, 247, 255, 255,   7,   0,   0,   0, 
      0,   0, 252,   8, 255, 255,   7,   0,   0, 128,   0,   0, 247,  15,   0,   0, 
    255, 255, 127,   4, 255, 255,  98,  62,   5,   0,   0,  56, 126, 126, 126,   0, 
    127, 127,   0,   0,  15,   0, 255, 255, 127, 248, 255, 255, 255, 255, 255,  15, 
    255,  63, 255, 255, 255, 255, 255,   3, 127,   0, 248, 160, 255, 253, 127,  95, 
    219, 255, 255, 255,   0,   0, 248, 255, 255, 255, 252, 255,   0,   0, 255,   3, 
      0,   0, 138, 170, 192, 255, 255, 255, 252, 252, 252,  28, 255, 239, 255, 255, 
    127, 255, 255, 183, 255,  63, 255,  63, 255, 255,   1,   0,  15, 255,  62,   0, 
     63, 253, 255, 255, 255, 255, 191, 145,   1,   0, 239, 254, 255, 255, 223, 255, 
    255, 255, 255, 223, 100, 222, 255, 235, 239, 255, 255, 255, 191, 231, 223, 223, 
    255, 255, 255, 123,  95, 252, 253, 255,  63, 255, 255, 255, 253, 255, 255, 247, 
    255, 253, 255, 255, 
};

/* XID_Start: 1685 bytes. */

RE_UINT32 re_get_xid_start(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_xid_start_stage_1[f] << 5);
    f = code >> 11;
    code ^= (f << 11);
    pos = ((RE_UINT32)re_xid_start_stage_2[pos + f] << 3);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_xid_start_stage_3[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_xid_start_stage_4[pos + f] << 5);
    pos += code;
    value = (re_xid_start_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* XID_Continue. */

RE_UINT8 re_xid_continue_stage_1[] = {
    0, 1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 6, 6, 6, 
    6, 6, 
};

RE_UINT8 re_xid_continue_stage_2[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  7,  8,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  9, 10, 11,  7,  7,  7,  7, 12, 13, 13, 13, 13, 14, 
    15, 16, 17, 13, 18, 13, 19, 13, 13, 13, 13, 13, 13, 20, 13, 13, 
    13, 13, 13, 13, 13, 13, 21, 13, 13, 13, 22, 13, 13, 13, 13, 13, 
     7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  7, 23,  7, 24, 25, 13, 13, 13, 13, 13, 13, 13, 26, 
    13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 
    27, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 
};

RE_UINT8 re_xid_continue_stage_3[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 
    16,  1, 17, 18, 19,  1, 20, 21, 22, 23, 24, 25, 26, 27,  1, 28, 
    29, 30, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 32, 33, 31, 31, 
    34, 35, 31, 31,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1, 36,  1,  1,  1,  1,  1,  1,  1,  1,  1, 37, 
     1,  1,  1,  1, 38,  1, 39, 40, 41, 42, 43, 44,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1, 45, 31, 31, 31, 31, 31, 31, 31, 31, 
    31,  1, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 31, 31, 31, 
    57, 58, 59, 60, 61, 31, 31, 31, 62, 31, 31, 31, 31, 31, 31, 31, 
     1,  1,  1, 63, 64, 31, 31, 31,  1,  1,  1,  1, 65, 31, 31, 31, 
     1,  1, 66, 31, 31, 31, 31, 31, 67, 31, 31, 31, 31, 31, 31, 31, 
    31, 68, 69, 31, 70, 71, 72, 73,  1,  1,  1,  1,  1,  1, 74,  1, 
     1,  1,  1,  1,  1,  1,  1, 75, 76, 31, 31, 31, 31, 31, 31, 31, 
     1,  1, 76, 31, 31, 31, 31, 31, 31, 77, 31, 31, 31, 31, 31, 31, 
};

RE_UINT8 re_xid_continue_stage_4[] = {
      0,   1,   2,   3,   0,   4,   5,   5,   6,   6,   6,   6,   6,   6,   6,   6, 
      6,   6,   6,   6,   6,   6,   7,   8,   6,   6,   6,   9,  10,  11,   6,  12, 
      6,   6,   6,   6,  13,   6,   6,   6,   6,  14,  15,  16,  14,  17,  18,  19, 
     20,   6,   6,  21,   6,   6,  22,  23,  24,   6,  25,   6,   6,  26,   6,  27, 
      6,  28,  29,   0,   0,   0,   0,   0,   6,   6,   6,  30,  31,  32,  33,  34, 
     35,  36,  37,  38,  39,  40,  41,  42,  31,  40,  43,  44,  45,  46,  47,  48, 
     49,  50,  51,  42,  52,  53,  54,  55,  52,  56,  57,  58,  59,  60,  61,  62, 
     16,  63,  64,   0,  65,  66,  67,   0,  68,  69,  70,  71,  72,  73,  74,   0, 
      6,   6,  75,   6,  76,   6,  77,  78,   6,   6,  79,   6,  80,  81,  82,   6, 
     83,   6,  56,  84,  85,   6,   6,  86,  16,   6,   6,   6,   6,   6,   6,   6, 
      6,   6,   6,  87,   3,   6,   6,  88,  89,  86,  90,  91,   6,  92,  93,  94, 
     95,   6,   6,  96,   6,  97,   6,  98,  73,  99, 100, 101,   6, 102, 103,   0, 
     29,   6, 104, 105, 106, 107,   0,   0,   6,   6, 108, 109,   6, 110,   6,  90, 
      6,  96, 111,  76,   0,   0, 112, 113,   6,   6,   6,   6,   6,   6,   6, 114, 
    115,   6, 116,  76,   6, 117, 118, 119,   0, 120, 121, 122, 123,   0, 123, 124, 
    125, 126, 127,   6, 128,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      6, 129, 104,   6,   6,   6,   6, 130,   6,  77,   6, 131, 132, 133, 133,   6, 
    134, 135,  16,   6, 136,  16,   6, 137, 138, 139,   6,   6, 140,  63,   0,  24, 
      6,   6,   6,   6,   6,  98,   0,   0,   6,   6,   6,   6,   6,   6, 141,   0, 
      6,   6,   6,   6, 142,   0,  24,  76, 143, 141,   6, 144,  96,   6,   6,  26, 
    145, 146,   6,   6, 147,  94,   0, 148,   6, 149,   6,  90,   6,   6, 150, 151, 
      6, 152,  90,  73,   6,   6, 153,   0,   6, 132, 154, 155,   6,   6, 156,   0, 
    157, 158,   0,   0,   0,   0,   6, 159,   6,   6,   6,   6,   6, 160, 161,  29, 
      6, 152,   6, 152,   6,   6, 162,   0, 163, 164, 165,   6,   6,  26, 166,   6, 
      6,   6,  76, 167,   6,   6,   6,   6,   6,  76,  24,   6, 168,   6, 149,   1, 
     85, 169, 170, 171,   6,   6,   6,  73,   1,   2,   3, 100,   6, 104, 172,   0, 
    173, 174, 175,   0,   6,   6,   6,  63,   0,   0,   6,  86,   0,   0,   0, 176, 
      0,   0,   0,   0,  73,   6, 177,   0, 104,  24, 178,   0,  76,   6, 179,   0, 
      6,   6,   6,   6,  76,  94,   0,   0, 180, 181,  98,   0,   0,   0,   0,   0, 
     98, 162,   0,   0,   0,   0,   0,   0, 182, 183,   0,  73,   0,   0,   0,   0, 
      6,  98,  98, 113,   0,   0,   0,   0,   6,   6, 128,   0,   0,   0,   0,   0, 
      6,   6, 184,  48,   6,  63,   0,   0,   6,   6,   6, 140,   0,   0,   0,   0, 
      6,   6,   6, 185,   0,   0,   0,   0,   6, 140,   0,   0,   0,   0,   0,   0, 
      6, 186,   0,   0,   0,   0,   0,   0, 187,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0, 188, 189, 190,   0,   0,   0,   0, 191,   0,   0,   0,   0,   0, 
      6,   6, 192,   6, 193, 194, 195,   6, 196, 197, 198,   6,   6,   6,   6,   6, 
      6,   6,   6,   6,   6, 199, 200, 137, 192, 192, 129, 129, 201, 201, 202,   6, 
      6,   6,   6,   6,   6,   6, 132,   0,   6,  86,   6,   6,   6,   6,   6,   6, 
     76,   0,   0,   0,   0,   0,   0,   0,   6,   6,   6,   6,   6,   6,   6,  85, 
};

RE_UINT8 re_xid_continue_stage_5[] = {
      0,   0,   0,   0,   0,   0, 255,   3, 254, 255, 255, 135, 254, 255, 255,   7, 
      0,   4, 160,   4, 255, 255, 127, 255, 255, 255, 255, 255, 195, 255,   3,   0, 
     31,  80,   0,   0, 255, 255, 223,  56, 192, 215, 255, 255, 251, 255, 255, 255, 
    255, 255, 191, 255, 251, 252, 255, 255, 255,   0, 254, 255, 255, 255, 127,   2, 
    254, 255, 255, 255, 255, 255, 255, 191, 182,   0, 255, 255, 255,   7,   7,   0, 
      0,   0, 255,   7, 255, 195, 255, 255, 255, 255, 239, 159, 255, 253, 255, 159, 
      0,   0, 255, 255, 255, 231, 255, 255, 255, 255,   3,   0, 255, 255,  63,   4, 
    255,  63,   0,   0, 255, 255, 255,  15, 207, 255, 254, 254, 238, 159, 249, 255, 
    255, 253, 197, 243, 159, 121, 128, 176, 207, 255,   3,   0, 238, 135, 249, 255, 
    255, 253, 109, 211, 135,  57,   2,  94, 192, 255,  63,   0, 238, 191, 251, 255, 
    255, 253, 237, 243, 191,  59,   1,   0, 207, 255,   0,   0, 159,  57, 192, 176, 
    207, 255,   2,   0, 236, 199,  61, 214,  24, 199, 255, 195, 199,  61, 129,   0, 
    192, 255,   0,   0, 238, 223, 253, 255, 255, 253, 239, 227, 223,  61,  96,   3, 
    236, 223, 253, 255, 255, 253, 239, 243, 223,  61,  96,  64, 207, 255,   6,   0, 
    255, 255, 255, 231, 223, 125, 128,   0, 207, 255,   0, 252, 236, 255, 127, 252, 
    255, 255, 251,  47, 127, 132,  95, 255,   0,   0,  12,   0, 255, 255, 255,   7, 
    255, 127, 255,   3, 150,  37, 240, 254, 174, 236, 255,  59,  95,  63, 255,  51, 
      1,   0,   0,   3, 255,   3, 160, 194, 255, 254, 255, 255, 255,  31, 254, 255, 
    223, 255, 255, 254, 255, 255, 255,  31,  64,   0,   0,   0, 255,   3, 255, 255, 
    255, 255, 255,  63,  63,   0, 255, 255, 255, 255, 255,  23, 255,  61, 127,  61, 
    255,  61, 255, 255, 255, 255,  61, 127,  61, 255, 127, 255, 255, 255,  61, 255, 
      0, 254,   3,   0, 255, 255,   0,   0, 255, 255,  31,   0, 255, 159, 255, 255, 
    255, 199,   1,   0, 255, 223,  31,   0, 255, 255,  15,   0, 255, 223,  13,   0, 
    255, 255, 207, 255, 255, 255, 143,  48, 255,   3,   0,   0,   0,  56, 255,   3, 
    255, 255, 255,   0, 255,   7, 255, 255, 255, 255,  63,   0, 255,  15, 255,  15, 
    192, 255, 255, 255, 255,  63,  31,   0, 255,  15, 255, 255, 255,   3, 255,   7, 
    255, 255, 255, 127, 255, 255, 255, 159, 255,   3, 255,   3, 128,   0,   0,   0, 
    255,  15, 255,   3,   0, 248,  15,   0, 255, 199, 255,   3, 255, 227, 255, 255, 
      0,   0, 247, 255, 255, 255,   7,   0, 127,   0,   0, 240, 255, 255,  63,  63, 
     63,  63, 255, 170, 255, 255, 223,  95, 220,  31, 207,  15, 255,  31, 220,  31, 
      0,   0,   0, 128,   1,   0,  16,   0,   0,   0,   2, 128,   0,   0, 255,  31, 
    226, 255,   1,   0, 132, 252,  47,  63,  80, 253, 255, 243, 224,  67,   0,   0, 
    255,   1,   0,   0, 255, 127, 255, 255,  31, 248,   3,   0,  63, 128,   0, 128, 
    255, 255, 127,   0, 127, 127, 127, 127, 224,   0,   0,   0, 254, 255,  62,  31, 
    255, 255, 127, 230, 255, 255, 255, 247, 224, 255, 255, 255, 255,  63, 254, 255, 
    255, 127,   0,   0, 255,  15,   0,   0, 255,  31,   0,   0, 255,  31, 255, 255, 
    255, 255,   0, 176,   0,   0, 128, 255, 252, 255, 255, 255, 255, 121,   3,   0, 
      0,   0,   0, 252, 255,   0,   0,   0,  31,   0, 255,   3, 255, 255, 255,   8, 
    255,  63, 255, 255,   1, 128, 255,   3, 255,  63, 255,   3, 255, 255, 127,  12, 
      7,   0,   0,  56, 126, 126, 126,   0, 127, 127,   0,   0, 255,  55, 255,   3, 
     15,   0, 255, 255, 127, 248, 255, 255, 255, 255, 255,   3, 127,   0, 248, 224, 
    255, 253, 127,  95, 219, 255, 255, 255,   0,   0, 248, 255, 240, 255, 255, 255, 
    255, 255, 252, 255, 127,   0,  24,   0,   0, 224,   0,   0,   0,   0, 138, 170, 
    252, 252, 252,  28, 255, 239, 255, 255, 127, 255, 255, 183, 255,  63, 255,  63, 
      0,   0,   0,  32, 255, 255,   1,   0, 255,   7,   0,   0,  15, 255,  62,   0, 
     63, 253, 255, 255, 255, 255, 191, 145, 111, 240, 239, 254, 255, 255,  15, 135, 
    127,   0,   0,   0,   7,   0,   0,   0, 255, 255, 255,   1,   3,   0,   0,   0, 
    224, 227,   7, 248, 231,  15,   0,   0,   0,  60,   0,   0,  28,   0,   0,   0, 
    255, 255, 223, 255, 255, 255, 255, 223, 100, 222, 255, 235, 239, 255, 255, 255, 
    191, 231, 223, 223, 255, 255, 255, 123,  95, 252, 253, 255,  63, 255, 255, 255, 
    253, 255, 255, 247, 255, 253, 255, 255, 247, 207, 255, 255, 
};

/* XID_Continue: 1822 bytes. */

RE_UINT32 re_get_xid_continue(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 15;
    code = ch ^ (f << 15);
    pos = ((RE_UINT32)re_xid_continue_stage_1[f] << 4);
    f = code >> 11;
    code ^= (f << 11);
    pos = ((RE_UINT32)re_xid_continue_stage_2[pos + f] << 3);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_xid_continue_stage_3[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_xid_continue_stage_4[pos + f] << 5);
    pos += code;
    value = (re_xid_continue_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Default_Ignorable_Code_Point. */

RE_UINT8 re_default_ignorable_code_point_stage_1[] = {
    0, 1, 1, 2, 1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 
};

RE_UINT8 re_default_ignorable_code_point_stage_2[] = {
    0, 1, 2, 3, 4, 1, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 6, 1, 1, 7, 1, 1, 1, 1, 1, 
    8, 8, 1, 1, 1, 1, 1, 1, 
};

RE_UINT8 re_default_ignorable_code_point_stage_3[] = {
     0,  1,  1,  2,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  3,  1,  1,  1,  1,  1,  4,  5,  1,  1,  1,  1,  1,  1,  1, 
     6,  1,  1,  1,  1,  1,  1,  1,  1,  7,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  8,  9,  1, 10,  1,  1,  1,  1,  1,  1, 
    11, 11, 11, 11, 11, 11, 11, 11, 
};

RE_UINT8 re_default_ignorable_code_point_stage_4[] = {
     0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  2,  0,  0,  0,  0,  0,  0,  0,  3,  4,  0,  0,  0,  0, 
     0,  0,  0,  0,  0,  5,  0,  0,  6,  0,  0,  0,  0,  0,  0,  0, 
     7,  8,  0,  9,  0,  0,  0,  0,  0,  0,  0, 10,  0,  0,  0,  0, 
     9,  0,  0,  0,  0,  0,  0,  3,  0,  0,  0,  0,  0,  4,  0, 11, 
     0,  0,  0, 12,  0,  0,  0,  0, 13, 13, 13, 13, 13, 13, 13, 13, 
};

RE_UINT8 re_default_ignorable_code_point_stage_5[] = {
      0,   0,   0,   0,   0,  32,   0,   0,   0, 128,   0,   0,   0,   0,   0, 128, 
      1,   0,   0,   0,   0,   0,  48,   0,   0,  56,   0,   0,   0, 248,   0,   0, 
      0, 124,   0,   0, 255, 255,   0,   0,  16,   0,   0,   0,   0,   0, 255,   1, 
      0,   0, 248,   7, 255, 255, 255, 255, 
};

/* Default_Ignorable_Code_Point: 332 bytes. */

RE_UINT32 re_get_default_ignorable_code_point(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 14;
    code = ch ^ (f << 14);
    pos = ((RE_UINT32)re_default_ignorable_code_point_stage_1[f] << 3);
    f = code >> 11;
    code ^= (f << 11);
    pos = ((RE_UINT32)re_default_ignorable_code_point_stage_2[pos + f] << 3);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_default_ignorable_code_point_stage_3[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_default_ignorable_code_point_stage_4[pos + f] << 5);
    pos += code;
    value = (re_default_ignorable_code_point_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Grapheme_Extend. */

RE_UINT8 re_grapheme_extend_stage_1[] = {
    0, 1, 2, 3, 4, 1, 1, 5, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 6, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 
};

RE_UINT8 re_grapheme_extend_stage_2[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  7,  7,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  7,  8,  9,  7,  7,  7,  7,  7,  7,  7,  7,  7, 10, 
    11, 12, 13,  7,  7,  7,  7,  7,  7,  7, 14,  7,  7,  7,  7,  7, 
    15,  7,  7,  7,  7,  7,  7,  7, 
};

RE_UINT8 re_grapheme_extend_stage_3[] = {
     0,  0,  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 
    14,  0,  0, 15,  0,  0,  0, 16, 17, 18, 19, 20, 21, 22,  0,  0, 
    23,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 24, 25,  0,  0, 
    26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  0,  0,  0,  0, 27,  0, 28, 29, 30, 31,  0,  0,  0,  0, 
     0,  0,  0, 32,  0,  0, 33, 34,  0, 35,  0,  0,  0,  0,  0,  0, 
     0,  0, 36,  0,  0,  0,  0,  0, 37,  0,  0,  0,  0,  0,  0,  0, 
     0, 38, 39,  0,  0,  0,  0,  0,  0, 40,  0,  0,  0,  0,  0,  0, 
};

RE_UINT8 re_grapheme_extend_stage_4[] = {
      0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   2,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0,   0,   0,   0,   0,   0,   0,   4,   5,   6,   0, 
      7,   0,   8,   9,   0,   0,  10,  11,  12,  13,  14,   0,   0,  15,   0,  16, 
     17,  18,  19,   0,   0,   0,   0,   0,  20,  21,  22,  23,  24,  25,  26,  23, 
     27,  28,  29,  30,  27,  28,  31,  23,  24,  32,  33,  23,  34,  35,  36,   0, 
      0,  37,  38,  23,   0,  39,  40,  23,   0,  35,  26,  23,   0,   0,  41,   0, 
      0,  42,  43,   0,   0,  44,  45,   0,  46,  47,   0,  48,  49,  50,  51,   0, 
      0,  52,  53,  54,  55,   0,   0,   0,   0,   0,  56,   0,   0,   0,   0,   0, 
     57,  57,  58,  58,   0,  59,  60,   0,  61,   0,   0,   0,   0,  62,   0,   0, 
      0,  63,   0,   0,   0,   0,   0,   0,  64,   0,  65,  66,   0,   0,   0,   0, 
     67,  68,  34,  16,  69,  70,   0,  71,   0,  72,   0,   0,   0,   0,  73,  74, 
      0,   0,   0,   0,   0,   0,   1,  75,  76,   0,   0,   0,   0,   0,  13,  77, 
      0,   0,   0,   0,   0,   0,   0,  78,   0,   0,   0,  79,   0,   0,   0,   1, 
      0,  80,   0,   0,  81,   0,   0,   0,   0,   0,   0,  82,   0,   0,   0,  83, 
     84,  85,   0,   0,   0,   0,  86,  87,   0,  88,  89,   0,  20,  90,   0,   0, 
      0,  91,  92,   0,   0,  93,  24,   0,   0,   0,   0,   0,   0,   0,   0,  94, 
     35,   0,   0,   0,   0,   0,   0,   0,   2,  95,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  37,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  96, 
     97,  98,   0,   0,   0,   0,   0,   0,  24,  99,  95,   0,  69, 100,   0,   0, 
      0,   0,   0, 101, 102, 103,   0,   0,   0,   0, 104,   0,   0,   0,   0,   0, 
      1,   1,   1,   1,   1,   1,   1,   2, 
};

RE_UINT8 re_grapheme_extend_stage_5[] = {
      0,   0,   0,   0, 255, 255, 255, 255, 255, 255,   0,   0, 248,   3,   0,   0, 
      0,   0, 254, 255, 255, 255, 255, 191, 182,   0,   0,   0,   0,   0, 255,   7, 
      0, 248, 255, 255,   0,   0,   1,   0,   0,   0, 192, 159, 159,  61,   0,   0, 
      0,   0,   2,   0,   0,   0, 255, 255, 255,   7,   0,   0, 192, 255,   1,   0, 
      0, 248,  15,   0,   0,   0, 192, 251, 239,  62,   0,   0,   0,   0,   0,  14, 
      7,   0,   0,   0,   0,   0,   0,  20, 254,  33, 254,   0,  12,   0,   0,   0, 
      2,   0,   0,   0,   0,   0,   0,  80,  30,  32, 128,   0,   6,   0,   0,   0, 
      0,   0,   0,  16, 134,  57,   2,   0,   0,   0,  35,   0, 190,  33,   0,   0, 
      0,   0,   0, 208,  30,  32, 192,   0,   4,   0,   0,   0,   0,   0,   0,  64, 
      1,  32, 128,   0,   0,   0,   0, 192, 193,  61,  96,   0,   0,   0,   0, 144, 
     68,  48,  96,   0,   0, 132,  92, 128,   0,   0, 242,   7, 128, 127,   0,   0, 
      0,   0, 242,  27,   0,  63,   0,   0,   0,   0,   0,   3,   0,   0, 160,   2, 
      0,   0, 254, 127, 223, 224, 255, 254, 255, 255, 255,  31,  64,   0,   0,   0, 
      0, 224, 253, 102,   0,   0,   0, 195,   1,   0,  30,   0, 100,  32,   0,  32, 
      0,   0,   0, 224,   0,   0,  28,   0,   0,   0,  12,   0,   0,   0, 128,  63, 
     64, 254,  15,  32,   0,  56,   0,   0,   0,   2,   0,   0, 135,   1,   4,  14, 
      0,   0, 128,   1,   0,   0,  64, 127, 229,  31, 248, 159,  15,   0,   0,   0, 
      0,   0, 208,  23,   3,   0,   0,   0,  60,   3,   0,   0,  64, 163,   3,   0, 
      0, 240, 207,   0,   0,   0, 247, 255, 253,  33,   0,   0, 127,   0,   0, 240, 
      0,  48,   0,   0, 255, 255,   1,   0,   0, 128,   3,   0,   0,   0,   0, 128, 
      0, 252,   0,   0,   0,   0,   0,   6,   0, 128,   7,  48,   0,   0,   3,   0, 
     68,   8,   0,   0,  96,   0,   0,   0,  16,   0,   0,   0, 255, 255,   3,   0, 
    192,  63,   0,   0, 128, 255,   3,   0,   0,   0, 200,  19,   0, 126, 102,   0, 
      8,  16,   0,   0,   0,   0, 157, 193,  32,  33,   0,   0, 127,   0,   0,   0, 
      0,   0,   0,  32, 110, 240,   0,   0,   0,   0,   0, 135,   0,   0,   0, 255, 
      0,   0, 120,   6, 160, 195,   7, 248, 231,  15,   0,   0,   0,  60,   0,   0, 
     28,   0,   0,   0, 
};

/* Grapheme_Extend: 1000 bytes. */

RE_UINT32 re_get_grapheme_extend(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 14;
    code = ch ^ (f << 14);
    pos = ((RE_UINT32)re_grapheme_extend_stage_1[f] << 3);
    f = code >> 11;
    code ^= (f << 11);
    pos = ((RE_UINT32)re_grapheme_extend_stage_2[pos + f] << 3);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_grapheme_extend_stage_3[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_grapheme_extend_stage_4[pos + f] << 5);
    pos += code;
    value = (re_grapheme_extend_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Grapheme_Base. */

RE_UINT8 re_grapheme_base_stage_1[] = {
    0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
    3, 
};

RE_UINT8 re_grapheme_base_stage_2[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  7,  8,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  9, 10, 11,  7,  7,  7,  7, 12, 13, 13, 13, 13, 14, 
    15, 16, 17, 13, 18, 13, 19, 13, 13, 13, 13, 13, 13, 20, 13, 13, 
    13, 13, 13, 13, 13, 13, 21, 13, 13, 13, 22, 13, 13, 13, 23, 13, 
     7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  7, 24,  7, 25, 26, 13, 13, 13, 13, 13, 13, 13, 27, 
    13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 
    13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 
};

RE_UINT8 re_grapheme_base_stage_3[] = {
     0,  1,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 
    15,  1, 16, 17,  1,  1, 18, 19, 20, 21, 22, 23, 24, 25,  1, 26, 
    27, 28,  1, 29, 30,  1,  1, 31,  1,  1,  1, 32, 33, 34, 35, 36, 
    37, 38, 39,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1, 40,  1,  1,  1,  1,  1,  1,  1,  1,  1, 41, 
     1,  1,  1,  1, 42,  1, 43, 44, 45, 46, 47, 48,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1, 49, 50, 50, 50, 50, 50, 50, 50, 50, 
    50,  1, 51, 52,  1, 53, 54, 55, 56, 57, 58, 59, 60, 50, 50, 50, 
    61, 62, 63, 64, 65, 50, 66, 50, 67, 50, 50, 50, 50, 50, 50, 50, 
     1,  1,  1, 68, 69, 50, 50, 50,  1,  1,  1,  1, 70, 50, 50, 50, 
     1,  1, 71, 50, 50, 50, 50, 50, 72, 50, 50, 50, 50, 50, 50, 50, 
    73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 
     1,  1,  1,  1,  1,  1, 89,  1,  1,  1,  1,  1,  1,  1,  1, 90, 
    91, 50, 50, 50, 50, 50, 50, 50,  1,  1, 91, 50, 50, 50, 50, 50, 
};

RE_UINT8 re_grapheme_base_stage_4[] = {
      0,   1,   1,   2,   0,   3,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 
      0,   0,   0,   4,   5,   6,   1,   1,   1,   1,   1,   1,   7,   1,   1,   1, 
      1,   8,   9,  10,  11,  12,  13,  14,  15,   1,  16,  17,   1,   1,  18,  19, 
     20,  21,  22,   1,   1,  23,   1,  24,  25,  26,  27,   0,   0,   0,   0,   0, 
     28,  29,  30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43, 
     32,  44,  45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58, 
     55,  59,  60,  61,  62,  63,  64,  65,  10,  66,  67,   0,  68,  69,  70,   0, 
     71,  72,  73,  74,  75,  76,  77,   0,   1,  78,  79,  80,  81,   1,  82,  83, 
      1,   1,  84,   1,  85,  86,  87,   1,  88,   1,  89,  83,  90,   1,   1,  91, 
      1,   1,   1,   1,  83,   1,   1,  92,  93,  94,  95,  96,   1,  97,  98,  99, 
    100,   1,   1, 101,   1, 102,   1, 103,  83, 104, 105, 106,   1, 107, 108,   1, 
    109,   1, 110, 111,  99, 112,   0,   0, 113, 114, 115, 116, 117, 118,   1, 119, 
      1, 120, 121,   1,   0,   0, 122, 123,   1,   1,   1,   1,   1,   1,   0,   0, 
    124,   1, 125, 126,   1, 127, 128, 129, 130, 131,   1, 132, 133,  90,   0,   0, 
      1,   1,   1,   1, 134,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 135, 
      1, 136,  16,   1,   1,   1,   1,   1,  10,   1,   1,   1,   1,   1, 137,   1, 
      1,   1, 138,   0,   0,   0,   0,   0,   1, 139,   2,   1,   1,   1,   1, 140, 
      1,  82,   1, 141, 142, 143, 143,   0,   1,  95,   0,   0, 144,   1,   1, 135, 
      1,   1,   1,   1,   1,   1, 103, 145,   1, 134,  10,   1, 146,   1,   1,   1, 
    147, 148,   1,   1, 139,  89,   1, 149,   2,   1,   1,   1,   1,   1,   1,   2, 
      1,   1,   1,   1,   1, 103,   1,   1,   1,   1,   1,   1,   1,   1, 150,   0, 
      1,   1,   1,   1, 151,   1, 152,   1,   1, 150,   1, 153, 101,   1,   1, 154, 
      1,   1,   1,   1, 155, 156,   0, 157, 158, 159,   1, 101,   1,   1, 160, 161, 
      1, 162, 163,  83,  28, 164, 165,   0,   1, 166, 167, 168,   1, 169, 170,   0, 
    171, 172,   0,   0,   0,   0,   1, 173,   1,   1,   1,   1,   1, 149, 174, 168, 
      0,   0,   0,   0,   0,   0,   0,   0,   1, 175,   1, 175,   1,   1,  90,   0, 
    176, 177, 178,   1,   1,   1, 179,   1,   1,   1, 180,   1, 181,   1, 182, 183, 
    184, 180, 185, 186,   1,   1,   1,  83,  10,   1,   1,   1, 126,   2, 187, 188, 
    189, 190, 191,   0,   1,   1,   1,  89, 192, 193,   1,   1, 194,   0, 180,  83, 
      0,   0,   0,   0,  83,   1,  92,   0,   2, 149,  16,   0, 195,   1, 196,   0, 
      1,   1,   1,   1, 126, 156,   0,   0, 197, 198, 199,   0,   0,   0,   0,   0, 
    200, 201,   0,   0,   0,   0,   0,   0, 202, 135, 203,   1,   0,   0,   0,   0, 
      1, 204, 205, 206,   0,   0,   0,   0,   1,   1, 207,   0,   0,   0,   0,   0, 
      0,   0,   0,   2,   0,   0,   0,   0, 208, 101, 209,  21, 117, 210, 211,   0, 
      1,   1,   1, 212,   0,   0,   0,   0,   1,   1,   1, 213,   0,   0,   0,   0, 
      1, 212,   0,   0,   0,   0,   0,   0,   1, 214,   0,   0,   0,   0,   0,   0, 
    211,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1,   1, 103, 
      1, 215,   1, 216, 217, 218, 126,   0,   1,   1, 219,   0,   0,   0,   0,   0, 
      1,   1, 142,  95,   0,   0,   0,   0,   1,   1, 127,   1, 220, 221, 222,   1, 
    223, 224, 225,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 226,   1,   1, 
      1,   1,   1,   1,   1,   1, 227,   1,   1, 107,   1,   1, 135, 228, 229,   0, 
    130, 139,   1, 134,  89,   0,   0, 230, 231,  89, 232,   0,   0,   0,   0,   0, 
      1, 233,   1,  83, 135,   1, 234,  92,   1,   2, 208,   1,   1,   1,   1, 235, 
      1, 126, 180, 182,   0,   0,   0, 236, 237, 238, 239,   0,   1,   1, 240,   0, 
      1,   1,   1, 135,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1, 142,   0, 
      1,  91,   1,   1,   1,   1,   1,   1, 126,   0,   0,   0,   0,   0,   0,   0, 
};

RE_UINT8 re_grapheme_base_stage_5[] = {
      0,   0,   0,   0, 255, 255, 255, 255, 255, 255, 255, 127, 255, 223, 255, 255, 
      0,   0, 255, 124, 240, 215, 255, 255, 251, 255, 255, 255,   7, 252, 255, 255, 
    255,   0, 254, 255, 255, 255, 127, 254, 254, 255, 255, 255, 255,   6,   0,   0, 
      0,   0,   0,  64,  73,   0, 255, 255, 255,   7,  31,   0, 192, 255,   0, 200, 
    255,   7,   0,   0, 255, 255, 254, 255, 255, 255,  63,  64,  96, 194, 255, 255, 
    255,  63, 253, 255, 255, 255,   0,   0,   0, 224, 255, 255,  63,   0,   2,   0, 
    255,   7, 240,   7, 255, 255,  63,   4,  16,   1, 255, 127, 255, 255, 255,  65, 
    248, 255, 255, 255, 255, 255, 255, 235,   1, 222,   1, 255, 243, 255, 255, 254, 
    236, 159, 249, 255, 255, 253, 197, 163, 129,  89,   0, 176, 195, 255, 255,  15, 
    232, 135, 249, 255, 255, 253, 109, 195,   1,   0,   0,  94, 192, 255,  28,   0, 
    232, 191, 251, 255, 255, 253, 237, 227,   1,  26,   1,   0, 195, 255,   2,   0, 
    255, 253, 237,  35, 129,  25,   0, 176, 195, 255, 255,   0, 232, 199,  61, 214, 
     24, 199, 255, 131, 198,  29,   1,   0, 192, 255, 255,   7, 238, 223, 253, 255, 
    255, 253, 239,  35,  30,   0,   0,   3, 195, 255,   0, 255, 236, 223, 253, 255, 
    255, 253, 239,  99, 155,  13,   0,  64, 195, 255,   6,   0, 255, 255, 255, 167, 
    193,  93,   0,   0, 195, 255,  63, 254, 236, 255, 127, 252, 255, 255, 251,  47, 
    127,   0,   3, 127,   0,   0,  28,   0, 255, 255,  13, 128, 127, 128, 255,  15, 
    150,  37, 240, 254, 174, 236,  13,  32,  95,   0, 255,  51, 255, 255, 255, 252, 
    255, 255,  95, 253, 255, 254, 255, 255, 255,  31,   0, 128,  32,  31,   0,   0, 
      0,   0,   0, 192, 191, 223, 255,   7, 255,  31,   2, 153, 255, 255, 255,  60, 
    254, 255, 225, 255, 155, 223, 255, 223,  63,   0, 255, 255, 255, 255, 255,  31, 
    255,  61, 127,  61, 255,  61, 255, 255, 255, 255,  61, 127,  61, 255, 127, 255, 
    255, 255,  61, 255, 255, 255, 255,   7, 255, 255, 255,   3, 255, 255,  31,   0, 
    255, 255,   1,   0, 255, 223,   3,   0, 255, 255,  99,   0, 255, 255,   3,   0, 
    255, 223,   1,   0, 255, 255,  79, 192, 191,   1, 240,  31, 255,   3, 255,   3, 
    255,  71, 255,   3, 255, 255, 255,   0, 255,   5, 255, 255, 255, 255,  63,   0, 
    120,  14, 251,   1, 241, 255, 255, 255, 255,  63,  31,   0, 255,  15, 255, 255, 
    255,   3, 255, 199, 255, 255, 127, 206, 255, 255, 191,   0,  26, 224,   7,   0, 
    255,  63,   0,   0, 240, 255, 255, 255, 255, 255,  47, 232, 251,  15, 255, 255, 
    255,   7, 240,  31, 252, 255, 255, 255, 195, 196, 255,   3, 191,  92,  12, 240, 
    255,  15,  48, 248, 255, 227, 255, 255,   0,   0,   8,   0,   2, 222,   7,   0, 
    255, 255,  63,  63,  63,  63, 255, 170, 255, 255, 255,  63, 255, 255, 223, 255, 
    223, 255, 207, 239, 255, 255, 220, 127, 255,   7, 255, 255, 255, 128, 255, 255, 
      0,   0, 243, 255, 255, 127, 255,  31, 255,   3, 255, 255, 255, 255,  15,   0, 
    127,   0,   0,   0, 255, 215, 255, 255, 255,  31, 255,   3, 255, 127, 255, 255, 
    255, 127,   0, 254,  63, 128,   1,   0, 255, 255, 127,   0, 127, 127, 127, 127, 
    255, 255, 255, 251,   0,   0, 255,  15, 255, 255, 127, 248, 224, 255, 255, 255, 
    255,  63, 254, 255,  15,   0, 255, 255, 255,  15,   0,   0, 255,  31, 255, 255, 
    127,   0, 255, 255, 255, 127,   8, 192, 255, 255, 252,   0, 255, 127,   3,   0, 
    255,   3,   0,   0,   0,   0,   0, 252, 187, 247, 255, 255, 159,  15, 255,   3, 
     15, 192, 255,   3,   0,   0, 252,  15,  63, 192, 255, 255, 127,   0,  12, 128, 
    255, 255,  55, 236, 255, 191, 255, 195, 255, 129,  25,   0, 247,  47, 255, 243, 
    255, 255, 255,  15, 255, 255,  98,  62,   5,   0,   0, 248, 126, 126, 126,   0, 
    127, 127,   0,   0, 223,  30, 255,   3, 127, 248, 255, 255, 255,  63, 255, 255, 
    127,   0, 248, 160, 255, 255, 127,  95, 219, 255, 255, 255,   3,   0, 248, 255, 
      0,   0, 255, 255, 255, 255, 252, 255, 255,   0,   0,   0,   0,   0, 255,  63, 
      0,   0, 255,   3, 255, 255, 247, 255, 127,  15, 223, 255, 252, 252, 252,  28, 
    127, 127,   0,  48, 255, 239, 255, 255, 127, 255, 255, 183, 255,  63, 255,  63, 
    135, 255, 255, 255, 255, 255, 143, 255, 255,   7, 255,  15, 255, 255, 255, 191, 
     15, 255,  63,   0,  63, 253, 255, 255, 255, 255, 191, 145, 255, 255, 191, 255, 
    255, 255, 255, 143, 255, 255, 255, 131,   1,   0, 239, 254, 255,   0, 255,   1, 
    255, 255,  63, 254, 255, 255,  63, 255, 255, 255,   7, 255, 255,   1,   0,   0, 
    253, 255, 255, 255, 128,  63, 252, 255, 255, 255, 135, 217,   3,   0,   0,   0, 
    255, 127,   0,   0,   7,   0,  15,   0, 255, 255, 255,   1, 127, 254, 255, 255, 
     95,  60,   0,   0,  24, 240, 255, 255, 255, 195, 255, 255,  35,   0,   0,   0, 
    255, 255, 255, 223, 100, 222, 255, 235, 239, 255, 255, 255, 191, 231, 223, 223, 
    255, 255, 255, 123,  95, 252, 253, 255,  63, 255, 255, 255, 255, 207, 255, 255, 
    255, 127, 254, 127, 254, 255, 254, 255, 192, 255, 255, 255,   7,   0, 255, 255, 
    255,   1,   3,   0,   1,   0, 191, 255, 223,   7,   0,   0, 255, 255, 255,  30, 
      0,   0,   0, 248, 254, 255,  93, 117,  63,  47, 239, 255, 225, 255,   0,   0, 
     63,   0,   0,   0, 
};

/* Grapheme_Base: 2069 bytes. */

RE_UINT32 re_get_grapheme_base(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_grapheme_base_stage_1[f] << 5);
    f = code >> 11;
    code ^= (f << 11);
    pos = ((RE_UINT32)re_grapheme_base_stage_2[pos + f] << 3);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_grapheme_base_stage_3[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_grapheme_base_stage_4[pos + f] << 5);
    pos += code;
    value = (re_grapheme_base_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Grapheme_Link. */

RE_UINT8 re_grapheme_link_stage_1[] = {
    0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
    3, 3, 
};

RE_UINT8 re_grapheme_link_stage_2[] = {
    0, 1, 2, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
    0, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_grapheme_link_stage_3[] = {
     0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  2,  3,  4, 
     5,  0,  0,  0,  0,  0,  0,  6,  0,  0,  7,  8,  0,  0,  0,  0, 
     0,  0,  0,  0,  0,  9,  0,  0, 10, 11,  0, 12,  0,  0,  0,  0, 
     0,  0, 13,  0,  0,  0,  0,  0, 14,  0,  0,  0,  0,  0,  0,  0, 
};

RE_UINT8 re_grapheme_link_stage_4[] = {
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  1,  0, 
     0,  0,  1,  0,  0,  0,  2,  0,  0,  3,  0,  0,  0,  0,  0,  0, 
     0,  0,  0,  0,  4,  0,  0,  0,  0,  5,  0,  0,  0,  0,  0,  0, 
     6,  6,  0,  0,  0,  0,  7,  0,  0,  0,  0,  8,  0,  0,  0,  0, 
     0,  0,  4,  0,  0,  2,  0,  9,  0,  0,  0, 10,  0,  0,  0,  0, 
    11,  0,  0,  0,  0,  0,  4,  0,  0,  0, 12,  0,  0,  0,  8,  0, 
     0,  0,  0,  0,  0,  0,  0,  1,  0, 10,  0,  0,  0,  0,  0,  0, 
     0,  0, 11,  0,  0, 13,  0,  0, 
};

RE_UINT8 re_grapheme_link_stage_5[] = {
      0,   0,   0,   0,   0,  32,   0,   0,   0,   4,   0,   0,   0,   0,   0,   4, 
     16,   0,   0,   0,   0,   0,   0,   6,   0,   0,  16,   0,   0,   0,   4,   0, 
      1,   0,   0,   0,   0,   0,  12,   0,   0,   0,   0, 128,  64,   0,   0,   0, 
      0,   0,   8,   0,   0,   0,   0,   2, 
};

/* Grapheme_Link: 338 bytes. */

RE_UINT32 re_get_grapheme_link(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 15;
    code = ch ^ (f << 15);
    pos = ((RE_UINT32)re_grapheme_link_stage_1[f] << 4);
    f = code >> 11;
    code ^= (f << 11);
    pos = ((RE_UINT32)re_grapheme_link_stage_2[pos + f] << 3);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_grapheme_link_stage_3[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_grapheme_link_stage_4[pos + f] << 5);
    pos += code;
    value = (re_grapheme_link_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* White_Space. */

RE_UINT8 re_white_space_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 
};

RE_UINT8 re_white_space_stage_2[] = {
    0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
};

RE_UINT8 re_white_space_stage_3[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 1, 1, 1, 
    4, 1, 1, 1, 1, 1, 1, 1, 5, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
};

RE_UINT8 re_white_space_stage_4[] = {
    0, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 3, 1, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 
    5, 6, 1, 1, 1, 1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1, 
};

RE_UINT8 re_white_space_stage_5[] = {
      0,  62,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     32,   0,   0,   0,   1,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0, 
      0,  64,   0,   0,   0,   0,   0,   0, 255,   7,   0,   0,   0, 131,   0,   0, 
      0,   0,   0, 128,   0,   0,   0,   0, 
};

/* White_Space: 185 bytes. */

RE_UINT32 re_get_white_space(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_white_space_stage_1[f] << 3);
    f = code >> 13;
    code ^= (f << 13);
    pos = ((RE_UINT32)re_white_space_stage_2[pos + f] << 4);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_white_space_stage_3[pos + f] << 3);
    f = code >> 6;
    code ^= (f << 6);
    pos = ((RE_UINT32)re_white_space_stage_4[pos + f] << 6);
    pos += code;
    value = (re_white_space_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Bidi_Control. */

RE_UINT8 re_bidi_control_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 
};

RE_UINT8 re_bidi_control_stage_2[] = {
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_bidi_control_stage_3[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_bidi_control_stage_4[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_bidi_control_stage_5[] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0, 192,   0,   0,   0, 124,   0,   0, 
};

/* Bidi_Control: 97 bytes. */

RE_UINT32 re_get_bidi_control(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_bidi_control_stage_1[f] << 4);
    f = code >> 12;
    code ^= (f << 12);
    pos = ((RE_UINT32)re_bidi_control_stage_2[pos + f] << 3);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_bidi_control_stage_3[pos + f] << 3);
    f = code >> 6;
    code ^= (f << 6);
    pos = ((RE_UINT32)re_bidi_control_stage_4[pos + f] << 6);
    pos += code;
    value = (re_bidi_control_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Join_Control. */

RE_UINT8 re_join_control_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 
};

RE_UINT8 re_join_control_stage_2[] = {
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_join_control_stage_3[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_join_control_stage_4[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_join_control_stage_5[] = {
     0,  0,  0,  0,  0,  0,  0,  0,  0, 48,  0,  0,  0,  0,  0,  0, 
};

/* Join_Control: 97 bytes. */

RE_UINT32 re_get_join_control(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_join_control_stage_1[f] << 4);
    f = code >> 12;
    code ^= (f << 12);
    pos = ((RE_UINT32)re_join_control_stage_2[pos + f] << 3);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_join_control_stage_3[pos + f] << 3);
    f = code >> 6;
    code ^= (f << 6);
    pos = ((RE_UINT32)re_join_control_stage_4[pos + f] << 6);
    pos += code;
    value = (re_join_control_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Dash. */

RE_UINT8 re_dash_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 
};

RE_UINT8 re_dash_stage_2[] = {
    0, 1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
};

RE_UINT8 re_dash_stage_3[] = {
    0, 1, 2, 1, 1, 1, 1, 1, 1, 1, 3, 1, 4, 1, 1, 1, 
    5, 6, 1, 1, 1, 1, 1, 7, 8, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 9, 
};

RE_UINT8 re_dash_stage_4[] = {
     0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  2,  1,  3,  1,  1,  1,  1,  1,  1,  1, 
     4,  1,  1,  1,  1,  1,  1,  1,  5,  6,  7,  1,  1,  1,  1,  1, 
     8,  1,  1,  1,  1,  1,  1,  1,  9,  1,  1,  1,  1,  1,  1,  1, 
    10,  1, 11,  1,  1,  1,  1,  1, 12, 13,  1,  1, 14,  1,  1,  1, 
};

RE_UINT8 re_dash_stage_5[] = {
      0,   0,   0,   0,   0,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   4,   0,   0,   0,   0,   0,  64,   1,   0,   0,   0,   0,   0,   0,   0, 
     64,   0,   0,   0,   0,   0,   0,   0,   0,   0,  63,   0,   0,   0,   0,   0, 
      0,   0,   8,   0,   0,   0,   0,   8,   0,   8,   0,   0,   0,   0,   0,   0, 
      0,   0,   4,   0,   0,   0,   0,   0,   0,   0, 128,   4,   0,   0,   0,   0, 
      0,   0,   0,  16,   0,   0,   1,   0,   0,   0,   0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   6,   0,   0,   0,   0,   1,   8,   0,   0,   0, 
      0,  32,   0,   0,   0,   0,   0,   0, 
};

/* Dash: 297 bytes. */

RE_UINT32 re_get_dash(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_dash_stage_1[f] << 4);
    f = code >> 12;
    code ^= (f << 12);
    pos = ((RE_UINT32)re_dash_stage_2[pos + f] << 3);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_dash_stage_3[pos + f] << 3);
    f = code >> 6;
    code ^= (f << 6);
    pos = ((RE_UINT32)re_dash_stage_4[pos + f] << 6);
    pos += code;
    value = (re_dash_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Hyphen. */

RE_UINT8 re_hyphen_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 
};

RE_UINT8 re_hyphen_stage_2[] = {
    0, 1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
};

RE_UINT8 re_hyphen_stage_3[] = {
    0, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 1, 1, 1, 
    4, 1, 1, 1, 1, 1, 1, 5, 6, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 7, 
};

RE_UINT8 re_hyphen_stage_4[] = {
    0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 2, 1, 3, 1, 1, 1, 1, 1, 1, 1, 
    4, 1, 1, 1, 1, 1, 1, 1, 5, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 6, 1, 1, 1, 1, 1, 7, 1, 1, 8, 9, 1, 1, 
};

RE_UINT8 re_hyphen_stage_5[] = {
      0,   0,   0,   0,   0,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   4,   0,   0,   0,   0,   0,   0,  64,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0,   0,   0,   0,   0, 128,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   8,   0,   0,   0,   0,   8,   0,   0,   0, 
      0,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32,   0,   0,   0, 
};

/* Hyphen: 241 bytes. */

RE_UINT32 re_get_hyphen(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_hyphen_stage_1[f] << 4);
    f = code >> 12;
    code ^= (f << 12);
    pos = ((RE_UINT32)re_hyphen_stage_2[pos + f] << 3);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_hyphen_stage_3[pos + f] << 3);
    f = code >> 6;
    code ^= (f << 6);
    pos = ((RE_UINT32)re_hyphen_stage_4[pos + f] << 6);
    pos += code;
    value = (re_hyphen_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Quotation_Mark. */

RE_UINT8 re_quotation_mark_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 
};

RE_UINT8 re_quotation_mark_stage_2[] = {
    0, 1, 2, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
};

RE_UINT8 re_quotation_mark_stage_3[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    2, 1, 1, 1, 1, 1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 4, 
};

RE_UINT8 re_quotation_mark_stage_4[] = {
    0, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    3, 1, 1, 1, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 
    1, 5, 1, 1, 6, 7, 1, 1, 
};

RE_UINT8 re_quotation_mark_stage_5[] = {
      0,   0,   0,   0, 132,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   8,   0,   8,   0,   0,   0, 255,   0,   0,   0,   6, 
      0, 240,   0, 224,   0,   0,   0,   0,  30,   0,   0,   0,   0,   0,   0,   0, 
    132,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12,   0,   0,   0, 
};

/* Quotation_Mark: 193 bytes. */

RE_UINT32 re_get_quotation_mark(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_quotation_mark_stage_1[f] << 4);
    f = code >> 12;
    code ^= (f << 12);
    pos = ((RE_UINT32)re_quotation_mark_stage_2[pos + f] << 3);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_quotation_mark_stage_3[pos + f] << 3);
    f = code >> 6;
    code ^= (f << 6);
    pos = ((RE_UINT32)re_quotation_mark_stage_4[pos + f] << 6);
    pos += code;
    value = (re_quotation_mark_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Terminal_Punctuation. */

RE_UINT8 re_terminal_punctuation_stage_1[] = {
    0, 1, 2, 3, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 
};

RE_UINT8 re_terminal_punctuation_stage_2[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  9, 10, 11,  9,  9,  9, 
     9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9, 
     9,  9,  9,  9,  9,  9,  9,  9,  9, 12, 13,  9,  9,  9,  9,  9, 
     9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9,  9, 14, 
    15,  9, 16,  9, 17,  9,  9,  9,  9, 18,  9,  9,  9,  9,  9,  9, 
};

RE_UINT8 re_terminal_punctuation_stage_3[] = {
     0,  1,  1,  1,  1,  1,  2,  3,  1,  1,  1,  4,  5,  6,  7,  8, 
     9,  1, 10,  1,  1,  1,  1,  1,  1,  1,  1,  1, 11,  1, 12,  1, 
    13,  1,  1,  1,  1,  1, 14,  1,  1,  1,  1,  1, 15, 16,  1, 17, 
    18,  1, 19,  1,  1, 20, 21,  1, 22,  1,  1,  1,  1,  1,  1,  1, 
    23,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1, 24,  1,  1,  1, 25,  1,  1,  1,  1,  1,  1,  1, 
     1, 26,  1,  1, 27, 28,  1,  1, 29, 30, 31, 32, 33, 34,  1, 35, 
     1,  1,  1,  1, 36,  1, 37,  1,  1,  1,  1,  1,  1,  1,  1, 38, 
    39,  1, 40,  1,  1,  1, 41,  1, 42, 43,  1,  1,  1,  1,  1,  1, 
    44,  1,  1,  1,  1,  1,  1,  1, 
};

RE_UINT8 re_terminal_punctuation_stage_4[] = {
     0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  3,  0,  0,  0, 
     4,  0,  5,  0,  6,  0,  0,  0,  0,  0,  7,  0,  8,  0,  0,  0, 
     0,  0,  0,  9,  0, 10,  2,  0,  0,  0,  0, 11,  0,  0, 12,  0, 
    13,  0,  0,  0,  0,  0, 14,  0,  0,  0,  0, 15,  0,  0,  0, 16, 
     0,  0,  0, 17,  0,  0, 18,  0, 19,  0,  0,  0,  0,  0, 11,  0, 
     0, 20,  0,  0,  0,  0, 21,  0,  0, 22,  0, 23,  0, 24, 25,  0, 
     0, 26,  0,  0, 27,  0,  0,  0,  0,  0,  0, 23, 28,  0,  0,  0, 
     0,  0,  0, 29,  0,  0,  0, 30,  0,  0, 31,  0,  0, 32,  0,  0, 
     0,  0, 25,  0,  0,  0, 33,  0,  0,  0, 34,  0,  0,  0,  0, 35, 
     0,  0, 36,  0,  1,  0,  0, 37, 34,  0, 38,  0,  0,  0, 39,  0, 
    34,  0,  0,  0,  0, 40,  0,  0,  0,  0, 41,  0,  0, 23, 42,  0, 
     0,  0,  0, 43, 
};

RE_UINT8 re_terminal_punctuation_stage_5[] = {
      0,   0,   0,   0,   2,  80,   0, 140,   0,   0,   0,  64, 128,   0,   0,   0, 
      0,   2,   0,   0,   8,   0,   0,   0,   0,  16,   0, 136,   0,   0,  16,   0, 
    255,  23,   0,   0,   0,   0,   0,   3,   0,   0, 255, 127,  48,   0,   0,   0, 
      0,   0,   0,  12,   0, 225,   7,   0,   0,  12,   0,   0, 254,   1,   0,   0, 
      0,  96,   0,   0,   0,  56,   0,   0,   0,   0, 112,   4,  60,   3,   0,   0, 
      0,  15,   0,   0,   0,   0,   0, 236,   0,   0,   0, 248,   0,   0,   0, 192, 
      0,   0,   0,  48, 128,   3,   0,   0,   0,  64,   0,   0,   6,   0,   0,   0, 
      0, 224,   0,   0,   0,   0, 248,   0,   0,   0, 192,   0,   0, 192,   0,   0, 
      0, 128,   0,   0,   0,   0,   0, 224,   0,   0,   0, 128,   0,   8,   0,   0, 
      0,   0, 247,   0,  18,   0,   0,   0,   0,   0,   1,   0,   0,   0, 128,   0, 
      0,   0,   0, 252, 128,  63,   0,   0,   3,   0,   0,   0,   0,   0,  15,   0, 
};

/* Terminal_Punctuation: 656 bytes. */

RE_UINT32 re_get_terminal_punctuation(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 14;
    code = ch ^ (f << 14);
    pos = ((RE_UINT32)re_terminal_punctuation_stage_1[f] << 4);
    f = code >> 10;
    code ^= (f << 10);
    pos = ((RE_UINT32)re_terminal_punctuation_stage_2[pos + f] << 3);
    f = code >> 7;
    code ^= (f << 7);
    pos = ((RE_UINT32)re_terminal_punctuation_stage_3[pos + f] << 2);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_terminal_punctuation_stage_4[pos + f] << 5);
    pos += code;
    value = (re_terminal_punctuation_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Other_Math. */

RE_UINT8 re_other_math_stage_1[] = {
    0, 1, 1, 2, 1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 
};

RE_UINT8 re_other_math_stage_2[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 
    1, 1, 1, 1, 1, 6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
};

RE_UINT8 re_other_math_stage_3[] = {
     0,  1,  1,  1,  1,  1,  1,  2,  1,  1,  1,  1,  1,  1,  1,  1, 
     3,  4,  5,  6,  1,  1,  1,  7,  1,  1,  1,  8,  9,  1,  1, 10, 
     1,  1,  1, 11,  1,  1,  1,  1,  1,  1,  1,  1, 12,  1, 13,  1, 
    14, 15, 16, 17, 17, 18, 19, 20, 
};

RE_UINT8 re_other_math_stage_4[] = {
     0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  2,  3,  4,  5,  6,  7, 
     8,  0,  9, 10, 11, 12, 13,  0, 14, 15, 16, 17,  0, 18, 19, 20, 
     0, 21, 22, 23, 24,  0, 25, 26,  0,  0, 24, 27, 28,  0, 29, 30, 
     0,  0,  0, 31,  0, 32,  0,  0, 33, 33, 34, 33, 35, 36, 37, 33, 
    38, 39, 40, 33, 33, 33, 33, 33, 33, 41, 42, 43, 34, 34, 44, 44, 
    45, 45, 46, 33, 
};

RE_UINT8 re_other_math_stage_5[] = {
      0,   0,   0,   0,   0,   0,   0,  64,   0,   0,  39,   0,   0,   0,  51,   0, 
      0,   0,  64,   0,   0,   0,  28,   0,   1,   0,   0,   0,  30,   0,   0,  96, 
      0,  96,   0,   0,   0,   0, 255,  31,  98, 248,   0,   0, 132, 252,  47,  62, 
     16, 179, 251, 241, 224,   3,   0,   0,   0,   0, 224, 243, 182,  62, 195, 240, 
    255,  63, 235,  47,  48,   0,   0,   0,   0,   0, 176,   0,   0,   0,   1,   0, 
      4,   0,   0,   0,   3, 192, 127, 240, 193, 140,  15,   0, 148,  31,   0,   0, 
     96,   0,   0,   0,   5,   0,   0,   0,  15,  96,   0,   0, 192, 255,   0,   0, 
    248, 255, 255,   1,   0,   0,   0,  15,   0,   0,   0,  48,  10,   1,   0,   0, 
      0,   0,   0,  80, 255, 255, 255, 255, 255, 255, 223, 255, 255, 255, 255, 223, 
    100, 222, 255, 235, 239, 255, 255, 255, 191, 231, 223, 223, 255, 255, 255, 123, 
     95, 252, 253, 255,  63, 255, 255, 255, 253, 255, 255, 247, 255, 255, 255, 247, 
    255, 127, 255, 255, 255, 253, 255, 255, 247, 207, 255, 255, 
};

/* Other_Math: 460 bytes. */

RE_UINT32 re_get_other_math(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 14;
    code = ch ^ (f << 14);
    pos = ((RE_UINT32)re_other_math_stage_1[f] << 4);
    f = code >> 10;
    code ^= (f << 10);
    pos = ((RE_UINT32)re_other_math_stage_2[pos + f] << 3);
    f = code >> 7;
    code ^= (f << 7);
    pos = ((RE_UINT32)re_other_math_stage_3[pos + f] << 2);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_other_math_stage_4[pos + f] << 5);
    pos += code;
    value = (re_other_math_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Hex_Digit. */

RE_UINT8 re_hex_digit_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 
};

RE_UINT8 re_hex_digit_stage_2[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
};

RE_UINT8 re_hex_digit_stage_3[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 
};

RE_UINT8 re_hex_digit_stage_4[] = {
    0, 1, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
    1, 2, 2, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_hex_digit_stage_5[] = {
      0,   0,   0,   0,   0,   0, 255,   3, 126,   0,   0,   0, 
};

/* Hex_Digit: 133 bytes. */

RE_UINT32 re_get_hex_digit(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_hex_digit_stage_1[f] << 4);
    f = code >> 12;
    code ^= (f << 12);
    pos = ((RE_UINT32)re_hex_digit_stage_2[pos + f] << 4);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_hex_digit_stage_3[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_hex_digit_stage_4[pos + f] << 5);
    pos += code;
    value = (re_hex_digit_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* ASCII_Hex_Digit. */

RE_UINT8 re_ascii_hex_digit_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 
};

RE_UINT8 re_ascii_hex_digit_stage_2[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
};

RE_UINT8 re_ascii_hex_digit_stage_3[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
};

RE_UINT8 re_ascii_hex_digit_stage_4[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
};

RE_UINT8 re_ascii_hex_digit_stage_5[] = {
      0,   0,   0,   0,   0,   0, 255,   3, 126,   0,   0,   0, 126,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
};

/* ASCII_Hex_Digit: 97 bytes. */

RE_UINT32 re_get_ascii_hex_digit(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_ascii_hex_digit_stage_1[f] << 3);
    f = code >> 13;
    code ^= (f << 13);
    pos = ((RE_UINT32)re_ascii_hex_digit_stage_2[pos + f] << 3);
    f = code >> 10;
    code ^= (f << 10);
    pos = ((RE_UINT32)re_ascii_hex_digit_stage_3[pos + f] << 3);
    f = code >> 7;
    code ^= (f << 7);
    pos = ((RE_UINT32)re_ascii_hex_digit_stage_4[pos + f] << 7);
    pos += code;
    value = (re_ascii_hex_digit_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Other_Alphabetic. */

RE_UINT8 re_other_alphabetic_stage_1[] = {
    0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
    3, 3, 
};

RE_UINT8 re_other_alphabetic_stage_2[] = {
     0,  1,  2,  3,  4,  5,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6, 
     6,  6,  6,  6,  6,  7,  6,  6,  6,  6,  6,  6,  6,  6,  6,  8, 
     6,  9, 10,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6, 
     6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6, 
};

RE_UINT8 re_other_alphabetic_stage_3[] = {
     0,  0,  0,  1,  0,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 
    13,  0,  0, 14,  0,  0,  0, 15, 16, 17, 18, 19, 20,  0,  0,  0, 
     0,  0,  0,  0, 21,  0,  0,  0,  0,  0,  0,  0,  0, 22,  0,  0, 
     0,  0,  0,  0,  0,  0,  0,  0, 23, 24, 25, 26,  0,  0,  0,  0, 
     0,  0,  0, 27,  0,  0,  0,  0,  0,  0, 28,  0,  0,  0,  0,  0, 
    29,  0,  0,  0,  0,  0,  0,  0, 
};

RE_UINT8 re_other_alphabetic_stage_4[] = {
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0, 
     0,  0,  0,  0,  0,  2,  3,  0,  4,  0,  5,  6,  0,  0,  7,  8, 
     9, 10,  0,  0,  0, 11,  0,  0, 12, 13,  0,  0,  0,  0,  0,  0, 
    14, 15, 16, 17, 18, 19, 20, 17, 18, 19, 21, 22, 18, 19, 23, 17, 
    18, 19, 24, 17, 25, 19, 26,  0, 18, 19, 27, 17, 17, 19, 27, 17, 
    17, 19, 28, 17, 17,  0, 29, 30,  0, 31, 32,  0,  0, 33, 32,  0, 
     0,  0,  0, 34, 35, 36,  0,  0,  0, 37, 38, 39, 40,  0,  0,  0, 
     0,  0, 41,  0,  0,  0,  0,  0, 30, 30, 30, 30,  0, 42, 43,  0, 
     0,  0,  0,  0,  0, 44,  0,  0,  0, 45,  0,  0,  0, 10, 46,  0, 
    47,  0, 48, 49,  0,  0,  0,  0, 50, 51, 14,  0, 52, 53,  0, 54, 
     0, 55,  0,  0,  0,  0,  0, 56,  0,  0,  0,  0,  0, 42, 57, 58, 
     0,  0,  0,  0,  0,  0,  0, 57,  0, 59,  0,  0, 60, 61, 14,  0, 
     0, 62, 63,  0, 14, 61,  0,  0,  0, 64, 65,  0,  0, 66,  0,  0, 
     0,  0,  0,  0,  0,  0,  0, 67, 68,  0,  0,  0,  0,  0,  0,  0, 
    69,  0,  0,  0,  0,  0,  0,  0, 52, 70, 71,  0, 25, 72,  0,  0, 
};

RE_UINT8 re_other_alphabetic_stage_5[] = {
      0,   0,   0,   0,  32,   0,   0,   0,   0,   0, 255, 191, 182,   0,   0,   0, 
      0,   0, 255,   7,   0, 248, 255, 254,   0,   0,   1,   0,   0,   0, 192,  31, 
    158,  33,   0,   0,   0,   0,   2,   0,   0,   0, 255, 255, 192, 255,   1,   0, 
      0,   0, 192, 248, 239,  30,   0,   0,  15,   0,   0,   0,   0,   0,   0, 204, 
    255, 223, 224,   0,  12,   0,   0,   0,  14,   0,   0,   0,   0,   0,   0, 192, 
    159,  25, 128,   0, 135,  25,   2,   0,   0,   0,  35,   0, 191,  27,   0,   0, 
    159,  25, 192,   0,   4,   0,   0,   0, 199,  29, 128,   0, 223,  29,  96,   0, 
    223,  29, 128,   0,   0, 128,  95, 255,   0,   0,  12,   0,   0,   0, 242,   7, 
      0,  32,   0,   0,   0,   0, 242,  27,   0,   0, 254, 255,   3, 224, 255, 254, 
    255, 255, 255,  31,   0, 248, 127, 121,   0,   0, 192, 195, 133,   1,  30,   0, 
    124,   0,   0,  48,   0,   0,   0, 128,   0,   0, 192, 255, 255,   1,   0,   0, 
      0,   2,   0,   0, 255,  15, 255,   1,   1,   3,   0,   0,   0,   0, 128,  15, 
      0,   0, 224, 127, 254, 255,  31,   0,  31,   0,   0,   0,   0,   0, 224, 255, 
      7,   0,   0,   0, 254,   3,   0,   0, 128, 255,   3,   0, 240, 255,  63,   0, 
      0,   0,   4,   0, 255, 255, 255, 255, 255,   3,   0,   0, 248,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 240, 255, 192,   7,   0,   0, 128, 255,   7,   0, 
      0, 254, 127,   0,   8,  48,   0,   0,   0,   0, 157,  65, 248,   7,   0,   0, 
      0,   0,   0,  64, 110, 240,   0,   0,   0,   0,   0, 255,  63,   0,   0,   0, 
      0,   0, 255,   1, 
};

/* Other_Alphabetic: 718 bytes. */

RE_UINT32 re_get_other_alphabetic(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 15;
    code = ch ^ (f << 15);
    pos = ((RE_UINT32)re_other_alphabetic_stage_1[f] << 4);
    f = code >> 11;
    code ^= (f << 11);
    pos = ((RE_UINT32)re_other_alphabetic_stage_2[pos + f] << 3);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_other_alphabetic_stage_3[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_other_alphabetic_stage_4[pos + f] << 5);
    pos += code;
    value = (re_other_alphabetic_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Ideographic. */

RE_UINT8 re_ideographic_stage_1[] = {
    0, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 
};

RE_UINT8 re_ideographic_stage_2[] = {
    0, 0, 0, 1, 2, 3, 3, 3, 3, 4, 0, 0, 0, 0, 0, 5, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 6, 7, 0, 0, 0, 8, 
};

RE_UINT8 re_ideographic_stage_3[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 2, 4, 0, 0, 0, 0, 5, 6, 0, 0, 
    2, 2, 2, 7, 2, 2, 2, 2, 2, 2, 2, 8, 9, 0, 0, 0, 
    0, 0, 0, 0, 2, 9, 0, 0, 
};

RE_UINT8 re_ideographic_stage_4[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 
    2, 2, 2, 2, 2, 2, 2, 4, 0, 0, 0, 0, 2, 2, 2, 2, 
    5, 5, 2, 6, 0, 0, 0, 0, 2, 2, 2, 7, 2, 2, 2, 2, 
    2, 2, 2, 2, 8, 2, 2, 2, 9, 0, 0, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_ideographic_stage_5[] = {
      0,   0,   0,   0,   0,   0,   0,   0, 192,   0,   0,   0, 254,   3,   0,   7, 
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  63,   0, 
    255,  15,   0,   0,   0,   0,   0,   0, 255, 255, 255, 255, 255,  63, 255, 255, 
    255, 255, 255,   3,   0,   0,   0,   0, 255, 255, 127,   0,   0,   0,   0,   0, 
    255, 255, 255, 255, 255, 255,  31,   0, 255, 255, 255,  63,   0,   0,   0,   0, 
};

/* Ideographic: 297 bytes. */

RE_UINT32 re_get_ideographic(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_ideographic_stage_1[f] << 4);
    f = code >> 12;
    code ^= (f << 12);
    pos = ((RE_UINT32)re_ideographic_stage_2[pos + f] << 3);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_ideographic_stage_3[pos + f] << 3);
    f = code >> 6;
    code ^= (f << 6);
    pos = ((RE_UINT32)re_ideographic_stage_4[pos + f] << 6);
    pos += code;
    value = (re_ideographic_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Diacritic. */

RE_UINT8 re_diacritic_stage_1[] = {
    0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 
};

RE_UINT8 re_diacritic_stage_2[] = {
     0,  1,  2,  3,  4,  5,  6,  4,  4,  4,  4,  4,  4,  4,  4,  4, 
     4,  4,  4,  4,  7,  8,  4,  4,  4,  4,  4,  4,  4,  4,  4,  9, 
     4,  4, 10,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4, 
     4,  4,  4,  4,  4,  4,  4,  4,  4,  4, 11,  4,  4,  4,  4,  4, 
     4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4, 
     4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4, 
};

RE_UINT8 re_diacritic_stage_3[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 
    16,  1,  1,  1,  1,  1,  1, 17,  1, 18, 19, 20, 21, 22,  1, 23, 
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 24,  1, 25,  1, 
    26,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 27, 28, 
    29, 30, 31, 32,  1,  1,  1,  1,  1,  1,  1, 33,  1,  1, 34, 35, 
    36,  1,  1,  1,  1,  1,  1,  1,  1, 37,  1,  1,  1,  1,  1,  1, 
};

RE_UINT8 re_diacritic_stage_4[] = {
     0,  0,  1,  2,  0,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  0,  0,  0,  4,  5,  5,  5,  5,  6,  7,  8,  0,  0,  0, 
     0,  0,  0,  0,  9,  0,  0,  0,  0,  0, 10,  0, 11, 12, 13,  0, 
     0,  0, 14,  0,  0,  0, 15, 16,  0,  4, 17,  0,  0, 18,  0, 19, 
    20,  0,  0,  0,  0,  0,  0,  0,  0, 21, 22, 23,  0, 21, 24,  0, 
     0, 21, 24,  0,  0, 21, 24,  0,  0, 21, 24,  0,  0,  0, 24,  0, 
     0,  0, 24,  0,  0, 21, 24,  0,  0,  0, 24,  0,  0,  0, 25,  0, 
     0,  0, 26,  0,  0,  0, 27,  0, 20, 28,  0,  0, 29,  0, 30,  0, 
     0, 31,  0,  0, 32,  0,  0,  0,  0,  0,  0,  0,  0,  0, 33,  0, 
     0, 34,  0,  0,  0,  0,  0,  0,  0,  0,  0, 35,  0,  0,  0,  0, 
     0, 36, 37, 38,  0, 25,  0,  0,  0, 39,  0, 40,  0,  0,  4, 41, 
     0, 42,  5, 17,  0,  0, 43, 44,  0,  0,  0,  0,  0, 45, 46, 47, 
     0,  0,  0,  0,  0,  0,  0, 48,  0, 49,  0,  0,  0,  0,  0,  0, 
     0, 50,  0,  0, 51,  0,  0, 21,  0,  0,  0, 52,  0,  0,  0, 53, 
    54, 55,  0,  0, 56,  0,  0,  0,  0,  0,  0,  0,  0,  0, 37, 57, 
     0, 58, 59,  0,  0, 59,  2,  0,  0,  0,  0, 60,  0, 15, 61,  0, 
     0,  0,  0,  0,  0,  0,  0, 62,  1,  0,  0,  0,  0,  0,  0,  0, 
     0, 63,  0,  0,  0,  0,  0,  0,  0,  1,  2, 64, 65,  0,  0, 66, 
     0,  0,  0,  0,  0, 67,  0,  0,  0,  0,  0, 68, 69, 70,  0,  0, 
};

RE_UINT8 re_diacritic_stage_5[] = {
      0,   0,   0,   0,   0,   0,   0,  64,   1,   0,   0,   0,   0, 129, 144,   1, 
      0,   0, 255, 255, 255, 255, 255, 255, 255, 127, 255, 224,   7,   0,  48,   4, 
     48,   0,   0,   0, 248,   0,   0,   0,   0,   0,   0,   2,   0,   0, 254, 255, 
    251, 255, 255, 191,  22,   0,   0,   0,   0, 248, 135,   1,   0,   0,   0, 128, 
     97,  28,   0,   0, 255,   7,   0,   0, 192, 255,   1,   0,   0, 248,  63,   0, 
      0,   0,   0,   3,   0,   0,   0,  16,   0,  32,  30,   0,   0,   0,   2,   0, 
      0,  32,   0,   0,   0,   4,   0,   0, 128,  95,   0,   0,   0,  31,   0,   0, 
      0,   0, 160, 194, 220,   0,   0,   0,  64,   0,   0,   0,   0,   0, 128,   6, 
    128, 191,   0,  12,   0, 254,  15,  32,   0,   0,   0,  14,   0,   0, 224, 159, 
      0,   0,  16,   0,  16,   0,   0,   0,   0, 248,  15,   0,   0,   0, 192,   0, 
      0,   0,   0,  63, 255,  33,   0,   0,   0, 240, 255, 255, 240, 255,   0,   0, 
      0,   0,   0, 224,   0,   0,   0, 160,   3, 224,   0, 224,   0, 224,   0,  96, 
      0, 128,   3,   0,   0, 128,   0,   0,   0, 252,   0,   0,   0,   0,   0,  30, 
      0, 128,   0, 176,   0,   0,   3,   0,   0,   0, 128, 255,   3,   0,   0,   0, 
      0,   1,   0,   0, 255, 255,   3,   0,   0, 120,   0,   0,   0,   0,   8,   0, 
      0,   0,   0,   8,   7,   0,   0,   0,   0,  48,   0,   0, 127,   0,   0,   0, 
      0,   0,   1,   0,   0,   0,   0, 192,   8,   0,   0,   0,   0,   0,   0,   6, 
    128, 227,   7, 248, 231,  15,   0,   0,   0,  60,   0,   0, 
};

/* Diacritic: 797 bytes. */

RE_UINT32 re_get_diacritic(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_diacritic_stage_1[f] << 5);
    f = code >> 11;
    code ^= (f << 11);
    pos = ((RE_UINT32)re_diacritic_stage_2[pos + f] << 3);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_diacritic_stage_3[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_diacritic_stage_4[pos + f] << 5);
    pos += code;
    value = (re_diacritic_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Extender. */

RE_UINT8 re_extender_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 
};

RE_UINT8 re_extender_stage_2[] = {
    0, 1, 2, 3, 2, 2, 4, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 2, 5, 6, 2, 2, 2, 2, 2, 2, 2, 2, 2, 7, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
};

RE_UINT8 re_extender_stage_3[] = {
     0,  1,  2,  1,  1,  1,  3,  4,  1,  1,  1,  1,  1,  1,  5,  1, 
     1,  1,  1,  1,  1,  1,  1,  1,  6,  1,  7,  1,  8,  1,  1,  1, 
     9,  1,  1,  1,  1,  1,  1,  1, 10,  1,  1,  1,  1,  1, 11,  1, 
     1, 12, 13,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 14, 
};

RE_UINT8 re_extender_stage_4[] = {
     0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  0,  0,  0,  0,  2,  0,  0,  0,  3,  0,  0,  0,  0,  0, 
     0,  0,  0,  0,  0,  0,  0,  4,  0,  0,  5,  0,  0,  0,  5,  0, 
     0,  0,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7,  0,  0, 
     0,  8,  0,  9,  0,  0,  0,  0, 10, 11,  0,  0, 12,  0,  0, 13, 
    14,  0,  0,  0,  0,  0,  0,  0, 15,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  0,  0,  0,  0, 16,  0,  0,  0,  0, 17,  0,  0, 18,  0, 
     0,  0,  0, 17,  0,  0,  0,  0, 
};

RE_UINT8 re_extender_stage_5[] = {
      0,   0,   0,   0,   0,   0, 128,   0,   0,   0,   3,   0,   1,   0,   0,   0, 
      0,   0,   0,   4,  64,   0,   0,   0,   8,   0,   0,   0, 128,   0,   0,   0, 
      0,   0,  64,   0,   0,   0,   0,   8,  32,   0,   0,   0,   0,   0,  62,   0, 
      0,   0,   0,  96,   0,   0,   0, 112,   0,   0,  32,   0,   0,  16,   0,   0, 
      0, 128,   0,   0,   0,   0,   1,   0,   0,   0,   0,  32, 
};

/* Extender: 341 bytes. */

RE_UINT32 re_get_extender(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_extender_stage_1[f] << 5);
    f = code >> 11;
    code ^= (f << 11);
    pos = ((RE_UINT32)re_extender_stage_2[pos + f] << 3);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_extender_stage_3[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_extender_stage_4[pos + f] << 5);
    pos += code;
    value = (re_extender_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Other_Lowercase. */

RE_UINT8 re_other_lowercase_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 
};

RE_UINT8 re_other_lowercase_stage_2[] = {
    0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 3, 
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
};

RE_UINT8 re_other_lowercase_stage_3[] = {
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 
    3, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 6, 0, 0, 0, 0, 
};

RE_UINT8 re_other_lowercase_stage_4[] = {
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  2,  0,  3,  0,  0, 
     0,  0,  0,  0,  4,  5,  6,  0,  0,  0,  7,  0,  0,  8,  0,  0, 
     0,  0,  0,  9,  0,  0,  0,  0,  0, 10,  0,  0,  0,  0,  0,  0, 
     0,  0,  0,  0,  0, 11,  0,  0, 
};

RE_UINT8 re_other_lowercase_stage_5[] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255,   1, 
      3,   0,   0,   0,  31,   0,   0,   0,  32,   0,   0,   0,   0,   0,   0,   4, 
      0,   0,   0,   0,   0, 240, 255, 255, 255, 255, 255, 255,   3,   0,   0,   1, 
      0,   0,   0, 248, 255, 255, 255, 255,   0,   0,  31,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 255, 255,   0,   0, 255, 255, 255,   3,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  32,   0,   0,   0,   0,   0,   0,   1,   0, 
};

/* Other_Lowercase: 241 bytes. */

RE_UINT32 re_get_other_lowercase(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_other_lowercase_stage_1[f] << 4);
    f = code >> 12;
    code ^= (f << 12);
    pos = ((RE_UINT32)re_other_lowercase_stage_2[pos + f] << 3);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_other_lowercase_stage_3[pos + f] << 3);
    f = code >> 6;
    code ^= (f << 6);
    pos = ((RE_UINT32)re_other_lowercase_stage_4[pos + f] << 6);
    pos += code;
    value = (re_other_lowercase_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Other_Uppercase. */

RE_UINT8 re_other_uppercase_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 
};

RE_UINT8 re_other_uppercase_stage_2[] = {
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_other_uppercase_stage_3[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
    0, 1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_other_uppercase_stage_4[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 2, 1, 0, 
};

RE_UINT8 re_other_uppercase_stage_5[] = {
      0,   0,   0,   0, 255, 255,   0,   0,   0,   0, 192, 255, 
};

/* Other_Uppercase: 117 bytes. */

RE_UINT32 re_get_other_uppercase(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_other_uppercase_stage_1[f] << 4);
    f = code >> 12;
    code ^= (f << 12);
    pos = ((RE_UINT32)re_other_uppercase_stage_2[pos + f] << 4);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_other_uppercase_stage_3[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_other_uppercase_stage_4[pos + f] << 5);
    pos += code;
    value = (re_other_uppercase_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Noncharacter_Code_Point. */

RE_UINT8 re_noncharacter_code_point_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 
};

RE_UINT8 re_noncharacter_code_point_stage_2[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
};

RE_UINT8 re_noncharacter_code_point_stage_3[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 
    0, 0, 0, 0, 0, 0, 0, 2, 
};

RE_UINT8 re_noncharacter_code_point_stage_4[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
    0, 0, 0, 0, 0, 0, 0, 2, 
};

RE_UINT8 re_noncharacter_code_point_stage_5[] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 255, 255, 255,   0,   0, 
      0,   0,   0,   0,   0,   0,   0, 192, 
};

/* Noncharacter_Code_Point: 121 bytes. */

RE_UINT32 re_get_noncharacter_code_point(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_noncharacter_code_point_stage_1[f] << 4);
    f = code >> 12;
    code ^= (f << 12);
    pos = ((RE_UINT32)re_noncharacter_code_point_stage_2[pos + f] << 3);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_noncharacter_code_point_stage_3[pos + f] << 3);
    f = code >> 6;
    code ^= (f << 6);
    pos = ((RE_UINT32)re_noncharacter_code_point_stage_4[pos + f] << 6);
    pos += code;
    value = (re_noncharacter_code_point_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Other_Grapheme_Extend. */

RE_UINT8 re_other_grapheme_extend_stage_1[] = {
    0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 
};

RE_UINT8 re_other_grapheme_extend_stage_2[] = {
    0, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
};

RE_UINT8 re_other_grapheme_extend_stage_3[] = {
    0, 0, 0, 0, 1, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
    4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 
    6, 0, 0, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_other_grapheme_extend_stage_4[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 
    0, 0, 0, 0, 1, 2, 1, 2, 0, 0, 0, 3, 1, 2, 0, 4, 
    5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 
    0, 0, 0, 0, 0, 7, 0, 0, 
};

RE_UINT8 re_other_grapheme_extend_stage_5[] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  64, 
      0,   0, 128,   0,   0,   0,   0,   0,   4,   0,  96,   0,   0,   0,   0,   0, 
      0, 128,   0, 128,   0,   0,   0,   0,   0,  48,   0,   0,   0,   0,   0,   0, 
      0,   0,   0, 192,   0,   0,   0,   0,   0,   0,   0,   0,  32, 192,   7,   0, 
};

/* Other_Grapheme_Extend: 225 bytes. */

RE_UINT32 re_get_other_grapheme_extend(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_other_grapheme_extend_stage_1[f] << 4);
    f = code >> 12;
    code ^= (f << 12);
    pos = ((RE_UINT32)re_other_grapheme_extend_stage_2[pos + f] << 3);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_other_grapheme_extend_stage_3[pos + f] << 3);
    f = code >> 6;
    code ^= (f << 6);
    pos = ((RE_UINT32)re_other_grapheme_extend_stage_4[pos + f] << 6);
    pos += code;
    value = (re_other_grapheme_extend_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* IDS_Binary_Operator. */

RE_UINT8 re_ids_binary_operator_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 
};

RE_UINT8 re_ids_binary_operator_stage_2[] = {
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_ids_binary_operator_stage_3[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
};

RE_UINT8 re_ids_binary_operator_stage_4[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
};

RE_UINT8 re_ids_binary_operator_stage_5[] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 243,  15, 
};

/* IDS_Binary_Operator: 97 bytes. */

RE_UINT32 re_get_ids_binary_operator(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_ids_binary_operator_stage_1[f] << 4);
    f = code >> 12;
    code ^= (f << 12);
    pos = ((RE_UINT32)re_ids_binary_operator_stage_2[pos + f] << 3);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_ids_binary_operator_stage_3[pos + f] << 3);
    f = code >> 6;
    code ^= (f << 6);
    pos = ((RE_UINT32)re_ids_binary_operator_stage_4[pos + f] << 6);
    pos += code;
    value = (re_ids_binary_operator_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* IDS_Trinary_Operator. */

RE_UINT8 re_ids_trinary_operator_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 
};

RE_UINT8 re_ids_trinary_operator_stage_2[] = {
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_ids_trinary_operator_stage_3[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
};

RE_UINT8 re_ids_trinary_operator_stage_4[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
};

RE_UINT8 re_ids_trinary_operator_stage_5[] = {
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 12,  0, 
};

/* IDS_Trinary_Operator: 97 bytes. */

RE_UINT32 re_get_ids_trinary_operator(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_ids_trinary_operator_stage_1[f] << 4);
    f = code >> 12;
    code ^= (f << 12);
    pos = ((RE_UINT32)re_ids_trinary_operator_stage_2[pos + f] << 3);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_ids_trinary_operator_stage_3[pos + f] << 3);
    f = code >> 6;
    code ^= (f << 6);
    pos = ((RE_UINT32)re_ids_trinary_operator_stage_4[pos + f] << 6);
    pos += code;
    value = (re_ids_trinary_operator_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Radical. */

RE_UINT8 re_radical_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 
};

RE_UINT8 re_radical_stage_2[] = {
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_radical_stage_3[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
};

RE_UINT8 re_radical_stage_4[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 1, 2, 2, 3, 2, 2, 2, 2, 2, 2, 4, 0, 
};

RE_UINT8 re_radical_stage_5[] = {
      0,   0,   0,   0, 255, 255, 255, 251, 255, 255, 255, 255, 255, 255,  15,   0, 
    255, 255,  63,   0, 
};

/* Radical: 117 bytes. */

RE_UINT32 re_get_radical(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_radical_stage_1[f] << 4);
    f = code >> 12;
    code ^= (f << 12);
    pos = ((RE_UINT32)re_radical_stage_2[pos + f] << 3);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_radical_stage_3[pos + f] << 4);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_radical_stage_4[pos + f] << 5);
    pos += code;
    value = (re_radical_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Unified_Ideograph. */

RE_UINT8 re_unified_ideograph_stage_1[] = {
    0, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 
};

RE_UINT8 re_unified_ideograph_stage_2[] = {
    0, 0, 0, 1, 2, 3, 3, 3, 3, 4, 0, 0, 0, 0, 0, 5, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 6, 7, 0, 0, 0, 0, 
};

RE_UINT8 re_unified_ideograph_stage_3[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 3, 0, 0, 0, 0, 0, 4, 0, 0, 
    1, 1, 1, 5, 1, 1, 1, 1, 1, 1, 1, 6, 7, 0, 0, 0, 
};

RE_UINT8 re_unified_ideograph_stage_4[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 2, 0, 1, 1, 1, 1, 1, 1, 1, 3, 
    4, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 5, 1, 1, 1, 1, 
    1, 1, 1, 1, 6, 1, 1, 1, 7, 0, 0, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_unified_ideograph_stage_5[] = {
      0,   0,   0,   0,   0,   0,   0,   0, 255, 255, 255, 255, 255, 255, 255, 255, 
    255, 255, 255, 255, 255, 255,  63,   0, 255,  15,   0,   0,   0,   0,   0,   0, 
      0, 192,  26, 128, 154,   3,   0,   0, 255, 255, 127,   0,   0,   0,   0,   0, 
    255, 255, 255, 255, 255, 255,  31,   0, 255, 255, 255,  63,   0,   0,   0,   0, 
};

/* Unified_Ideograph: 257 bytes. */

RE_UINT32 re_get_unified_ideograph(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_unified_ideograph_stage_1[f] << 4);
    f = code >> 12;
    code ^= (f << 12);
    pos = ((RE_UINT32)re_unified_ideograph_stage_2[pos + f] << 3);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_unified_ideograph_stage_3[pos + f] << 3);
    f = code >> 6;
    code ^= (f << 6);
    pos = ((RE_UINT32)re_unified_ideograph_stage_4[pos + f] << 6);
    pos += code;
    value = (re_unified_ideograph_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Other_Default_Ignorable_Code_Point. */

RE_UINT8 re_other_default_ignorable_code_point_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 
    1, 
};

RE_UINT8 re_other_default_ignorable_code_point_stage_2[] = {
    0, 1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
    6, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
};

RE_UINT8 re_other_default_ignorable_code_point_stage_3[] = {
    0, 1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 
    3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 
    6, 7, 7, 7, 7, 7, 7, 7, 
};

RE_UINT8 re_other_default_ignorable_code_point_stage_4[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 
    0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 6, 
    7, 0, 8, 8, 0, 0, 0, 9, 8, 8, 8, 8, 8, 8, 8, 8, 
};

RE_UINT8 re_other_default_ignorable_code_point_stage_5[] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0, 128,   0,   0,   0,   0,   0,   0, 
      0,   0,   0, 128,   1,   0,   0,   0,   0,   0,   0,   0, 224,   3,   0,   0, 
      0,   0,   0,   0,  16,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 255,   1, 253, 255, 255, 255,   0,   0,   0,   0, 
    255, 255, 255, 255, 255, 255, 255, 255,   0,   0,   0,   0,   0,   0, 255, 255, 
};

/* Other_Default_Ignorable_Code_Point: 265 bytes. */

RE_UINT32 re_get_other_default_ignorable_code_point(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_other_default_ignorable_code_point_stage_1[f] << 4);
    f = code >> 12;
    code ^= (f << 12);
    pos = ((RE_UINT32)re_other_default_ignorable_code_point_stage_2[pos + f] << 3);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_other_default_ignorable_code_point_stage_3[pos + f] << 3);
    f = code >> 6;
    code ^= (f << 6);
    pos = ((RE_UINT32)re_other_default_ignorable_code_point_stage_4[pos + f] << 6);
    pos += code;
    value = (re_other_default_ignorable_code_point_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Deprecated. */

RE_UINT8 re_deprecated_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 
    1, 1, 
};

RE_UINT8 re_deprecated_stage_2[] = {
    0, 1, 2, 3, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
    5, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
};

RE_UINT8 re_deprecated_stage_3[] = {
    0, 1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 
    0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 
    5, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_deprecated_stage_4[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 
    0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 
    0, 6, 0, 0, 0, 0, 0, 0, 7, 8, 8, 8, 0, 0, 0, 0, 
};

RE_UINT8 re_deprecated_stage_5[] = {
      0,   0,   0,   0,   0,   2,   0,   0,   0,   0,   8,   0,   0,   0, 128,   2, 
     24,   0,   0,   0,   0, 252,   0,   0,   0,   6,   0,   0,   2,   0,   0,   0, 
    255, 255, 255, 255, 
};

/* Deprecated: 230 bytes. */

RE_UINT32 re_get_deprecated(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 15;
    code = ch ^ (f << 15);
    pos = ((RE_UINT32)re_deprecated_stage_1[f] << 4);
    f = code >> 11;
    code ^= (f << 11);
    pos = ((RE_UINT32)re_deprecated_stage_2[pos + f] << 3);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_deprecated_stage_3[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_deprecated_stage_4[pos + f] << 5);
    pos += code;
    value = (re_deprecated_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Soft_Dotted. */

RE_UINT8 re_soft_dotted_stage_1[] = {
    0, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 
};

RE_UINT8 re_soft_dotted_stage_2[] = {
    0, 1, 1, 2, 3, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 1, 1, 1, 1, 1, 
};

RE_UINT8 re_soft_dotted_stage_3[] = {
     0,  1,  2,  3,  4,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5, 
     5,  5,  5,  5,  5,  6,  7,  5,  8,  9,  5,  5,  5,  5,  5,  5, 
     5,  5,  5,  5, 10,  5,  5,  5,  5,  5,  5,  5, 11, 12, 13,  5, 
};

RE_UINT8 re_soft_dotted_stage_4[] = {
     0,  0,  0,  1,  0,  0,  0,  0,  0,  2,  0,  0,  0,  0,  0,  0, 
     0,  0,  3,  4,  5,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7, 
     0,  0,  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  0,  9, 10, 11,  0,  0,  0, 12,  0,  0,  0,  0, 13,  0, 
     0,  0,  0, 14,  0,  0,  0,  0,  0,  0, 15,  0,  0,  0,  0,  0, 
     0,  0,  0, 16,  0,  0,  0,  0,  0, 17, 18,  0, 19, 20,  0, 21, 
     0, 22, 23,  0, 24,  0, 17, 18,  0, 19, 20,  0, 21,  0,  0,  0, 
};

RE_UINT8 re_soft_dotted_stage_5[] = {
      0,   0,   0,   0,   0,   6,   0,   0,   0, 128,   0,   0,   0,   2,   0,   0, 
      0,   1,   0,   0,   0,   0,   0,  32,   0,   0,   4,   0,   0,   0,   8,   0, 
      0,   0,  64,   1,   4,   0,   0,   0,   0,   0,  64,   0,  16,   1,   0,   0, 
      0,  32,   0,   0,   0,   8,   0,   0,   0,   0,   2,   0,   0,   3,   0,   0, 
      0,   0,   0,  16,  12,   0,   0,   0,   0,   0, 192,   0,   0,  12,   0,   0, 
      0,   0,   0, 192,   0,   0,  12,   0, 192,   0,   0,   0,   0,   0,   0,  12, 
      0, 192,   0,   0, 
};

/* Soft_Dotted: 342 bytes. */

RE_UINT32 re_get_soft_dotted(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 15;
    code = ch ^ (f << 15);
    pos = ((RE_UINT32)re_soft_dotted_stage_1[f] << 4);
    f = code >> 11;
    code ^= (f << 11);
    pos = ((RE_UINT32)re_soft_dotted_stage_2[pos + f] << 3);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_soft_dotted_stage_3[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_soft_dotted_stage_4[pos + f] << 5);
    pos += code;
    value = (re_soft_dotted_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Logical_Order_Exception. */

RE_UINT8 re_logical_order_exception_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 
};

RE_UINT8 re_logical_order_exception_stage_2[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
};

RE_UINT8 re_logical_order_exception_stage_3[] = {
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 2, 0, 0, 
};

RE_UINT8 re_logical_order_exception_stage_4[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 
    0, 0, 2, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_logical_order_exception_stage_5[] = {
     0,  0,  0,  0,  0,  0,  0,  0, 31,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  0,  0,  0,  0, 96, 26, 
};

/* Logical_Order_Exception: 121 bytes. */

RE_UINT32 re_get_logical_order_exception(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_logical_order_exception_stage_1[f] << 4);
    f = code >> 12;
    code ^= (f << 12);
    pos = ((RE_UINT32)re_logical_order_exception_stage_2[pos + f] << 3);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_logical_order_exception_stage_3[pos + f] << 3);
    f = code >> 6;
    code ^= (f << 6);
    pos = ((RE_UINT32)re_logical_order_exception_stage_4[pos + f] << 6);
    pos += code;
    value = (re_logical_order_exception_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Other_ID_Start. */

RE_UINT8 re_other_id_start_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 
};

RE_UINT8 re_other_id_start_stage_2[] = {
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_other_id_start_stage_3[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_other_id_start_stage_4[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 
    0, 0, 2, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_other_id_start_stage_5[] = {
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0, 64,  0,  0, 
     0,  0,  0, 24,  0,  0,  0,  0, 
};

/* Other_ID_Start: 113 bytes. */

RE_UINT32 re_get_other_id_start(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_other_id_start_stage_1[f] << 3);
    f = code >> 13;
    code ^= (f << 13);
    pos = ((RE_UINT32)re_other_id_start_stage_2[pos + f] << 4);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_other_id_start_stage_3[pos + f] << 3);
    f = code >> 6;
    code ^= (f << 6);
    pos = ((RE_UINT32)re_other_id_start_stage_4[pos + f] << 6);
    pos += code;
    value = (re_other_id_start_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Other_ID_Continue. */

RE_UINT8 re_other_id_continue_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 
};

RE_UINT8 re_other_id_continue_stage_2[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
};

RE_UINT8 re_other_id_continue_stage_3[] = {
    0, 1, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 4, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
};

RE_UINT8 re_other_id_continue_stage_4[] = {
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 4, 
};

RE_UINT8 re_other_id_continue_stage_5[] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 128,   0, 
    128,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 254,   3,   0, 
      0,   0,   0,   4,   0,   0,   0,   0, 
};

/* Other_ID_Continue: 145 bytes. */

RE_UINT32 re_get_other_id_continue(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_other_id_continue_stage_1[f] << 3);
    f = code >> 13;
    code ^= (f << 13);
    pos = ((RE_UINT32)re_other_id_continue_stage_2[pos + f] << 4);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_other_id_continue_stage_3[pos + f] << 3);
    f = code >> 6;
    code ^= (f << 6);
    pos = ((RE_UINT32)re_other_id_continue_stage_4[pos + f] << 6);
    pos += code;
    value = (re_other_id_continue_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* STerm. */

RE_UINT8 re_sterm_stage_1[] = {
    0, 1, 2, 3, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 
};

RE_UINT8 re_sterm_stage_2[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  8,  3,  3,  9, 10,  3,  3,  3, 
     3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 
     3,  3,  3,  3,  3,  3,  3,  3,  3, 11, 12,  3,  3,  3,  3,  3, 
     3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 13, 
     3,  3, 14,  3, 15,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 
};

RE_UINT8 re_sterm_stage_3[] = {
     0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  2,  3,  4,  5,  6,  7, 
     1,  1,  8,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     9,  1,  1,  1,  1,  1, 10,  1,  1,  1,  1,  1, 11,  1, 12,  1, 
    13,  1, 14,  1,  1, 15, 16,  1, 17,  1,  1,  1,  1,  1,  1,  1, 
    18,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 19,  1,  1,  1, 
    20,  1,  1,  1,  1,  1,  1,  1,  1, 21,  1,  1, 22, 23,  1,  1, 
    24, 25, 26, 27, 28,  1,  1, 29,  1,  1,  1,  1, 30,  1, 31,  1, 
     1,  1,  1,  1, 32,  1,  1,  1, 33, 34,  1,  1,  1,  1,  1,  1, 
};

RE_UINT8 re_sterm_stage_4[] = {
     0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  2,  0,  3,  0,  0,  0, 
     4,  0,  0,  0,  0,  0,  5,  0,  6,  0,  0,  0,  0,  0,  0,  7, 
     0,  0,  0,  8,  0,  0,  9,  0,  0,  0,  0, 10,  0,  0,  0, 11, 
     0, 12,  0,  0, 13,  0,  0,  0,  0,  0,  8,  0,  0, 14,  0,  0, 
     0,  0, 15,  0,  0, 16,  0, 17,  0, 18, 19,  0,  0, 11,  0,  0, 
    20,  0,  0,  0,  0,  0,  0,  4, 21,  0,  0,  0,  0,  0,  0, 22, 
     0,  0,  0, 23,  0,  0, 21,  0,  0, 24,  0,  0,  0,  0, 25,  0, 
     0,  0, 26,  0,  0,  0,  0, 27,  0,  0, 28,  0,  1,  0,  0, 29, 
     0,  0, 23,  0,  0,  0, 30,  0,  0, 17, 31,  0, 
};

RE_UINT8 re_sterm_stage_5[] = {
      0,   0,   0,   0,   2,  64,   0, 128,   0,   0,   0,  80,   0,   2,   0,   0, 
      0,   0,   0, 128,   0,   0,  16,   0,   7,   0,   0,   0,   0,   0,   0,   2, 
     48,   0,   0,   0,   0,  12,   0,   0, 132,   1,   0,   0,   0,  64,   0,   0, 
      0,   0,  96,   0,   8,   2,   0,   0,   0,  15,   0,   0,   0,   0,   0, 204, 
      0,   0,   0,  24,   0,   0,   0, 192,   0,   0,   0,  48, 128,   3,   0,   0, 
      4,   0,   0,   0,   0, 192,   0,   0,   0,   0, 136,   0,   0,   0, 192,   0, 
      0, 128,   0,   0,   0,   3,   0,   0,   0,   0,   0, 224,   0,   8,   0,   0, 
      0,   0, 196,   0,   2,   0,   0,   0, 128,   1,   0,   0,   3,   0,   0,   0, 
};

/* STerm: 544 bytes. */

RE_UINT32 re_get_sterm(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 14;
    code = ch ^ (f << 14);
    pos = ((RE_UINT32)re_sterm_stage_1[f] << 4);
    f = code >> 10;
    code ^= (f << 10);
    pos = ((RE_UINT32)re_sterm_stage_2[pos + f] << 3);
    f = code >> 7;
    code ^= (f << 7);
    pos = ((RE_UINT32)re_sterm_stage_3[pos + f] << 2);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_sterm_stage_4[pos + f] << 5);
    pos += code;
    value = (re_sterm_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Variation_Selector. */

RE_UINT8 re_variation_selector_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 
    1, 
};

RE_UINT8 re_variation_selector_stage_2[] = {
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
    3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_variation_selector_stage_3[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_variation_selector_stage_4[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 4, 
};

RE_UINT8 re_variation_selector_stage_5[] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,  56,   0,   0,   0,   0,   0,   0, 
    255, 255,   0,   0,   0,   0,   0,   0, 255, 255, 255, 255, 255, 255, 255, 255, 
    255, 255, 255, 255, 255, 255,   0,   0, 
};

/* Variation_Selector: 169 bytes. */

RE_UINT32 re_get_variation_selector(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_variation_selector_stage_1[f] << 4);
    f = code >> 12;
    code ^= (f << 12);
    pos = ((RE_UINT32)re_variation_selector_stage_2[pos + f] << 3);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_variation_selector_stage_3[pos + f] << 3);
    f = code >> 6;
    code ^= (f << 6);
    pos = ((RE_UINT32)re_variation_selector_stage_4[pos + f] << 6);
    pos += code;
    value = (re_variation_selector_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Pattern_White_Space. */

RE_UINT8 re_pattern_white_space_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 
};

RE_UINT8 re_pattern_white_space_stage_2[] = {
    0, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
};

RE_UINT8 re_pattern_white_space_stage_3[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    2, 1, 1, 1, 1, 1, 1, 1, 
};

RE_UINT8 re_pattern_white_space_stage_4[] = {
    0, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    3, 1, 1, 1, 1, 1, 1, 1, 
};

RE_UINT8 re_pattern_white_space_stage_5[] = {
      0,  62,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     32,   0,   0,   0,   0,   0,   0,   0,   0, 192,   0,   0,   0,   3,   0,   0, 
};

/* Pattern_White_Space: 129 bytes. */

RE_UINT32 re_get_pattern_white_space(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_pattern_white_space_stage_1[f] << 4);
    f = code >> 12;
    code ^= (f << 12);
    pos = ((RE_UINT32)re_pattern_white_space_stage_2[pos + f] << 3);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_pattern_white_space_stage_3[pos + f] << 3);
    f = code >> 6;
    code ^= (f << 6);
    pos = ((RE_UINT32)re_pattern_white_space_stage_4[pos + f] << 6);
    pos += code;
    value = (re_pattern_white_space_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Pattern_Syntax. */

RE_UINT8 re_pattern_syntax_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 
};

RE_UINT8 re_pattern_syntax_stage_2[] = {
    0, 1, 1, 1, 2, 3, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
};

RE_UINT8 re_pattern_syntax_stage_3[] = {
     0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     2,  3,  4,  4,  5,  4,  4,  6,  4,  4,  4,  4,  1,  1,  7,  1, 
     8,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  9, 10,  1, 
};

RE_UINT8 re_pattern_syntax_stage_4[] = {
     0,  1,  2,  2,  0,  3,  4,  4,  0,  0,  0,  0,  0,  0,  0,  0, 
     5,  6,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  5,  8,  8,  8, 
     8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  0,  0,  0,  0,  0, 
     8,  8,  8,  9, 10,  8,  8,  8,  8,  8,  8,  8,  0,  0,  0,  0, 
    11, 12,  0,  0,  0,  0,  0,  0,  0, 13,  0,  0,  0,  0,  0,  0, 
     0,  0, 14,  0,  0,  0,  0,  0, 
};

RE_UINT8 re_pattern_syntax_stage_5[] = {
      0,   0,   0,   0, 254, 255,   0, 252,   1,   0,   0, 120, 254,  90,  67, 136, 
      0,   0, 128,   0,   0,   0, 255, 255, 255,   0, 255, 127, 254, 255, 239, 127, 
    255, 255, 255, 255, 255, 255,  63,   0,   0,   0, 240, 255,  14, 255, 255, 255, 
      1,   0,   1,   0,   0,   0,   0, 192,  96,   0,   0,   0, 
};

/* Pattern_Syntax: 277 bytes. */

RE_UINT32 re_get_pattern_syntax(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_pattern_syntax_stage_1[f] << 5);
    f = code >> 11;
    code ^= (f << 11);
    pos = ((RE_UINT32)re_pattern_syntax_stage_2[pos + f] << 3);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_pattern_syntax_stage_3[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_pattern_syntax_stage_4[pos + f] << 5);
    pos += code;
    value = (re_pattern_syntax_stage_5[pos >> 3] >> (pos & 0x7)) & 0x1;

    return value;
}

/* Hangul_Syllable_Type. */

RE_UINT8 re_hangul_syllable_type_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 
};

RE_UINT8 re_hangul_syllable_type_stage_2[] = {
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 2, 3, 4, 5, 6, 7, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_hangul_syllable_type_stage_3[] = {
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  1,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  3,  0,  0,  0,  0,  0,  4,  5,  6,  7,  8,  9, 10,  4, 
     5,  6,  7,  8,  9, 10,  4,  5,  6,  7,  8,  9, 10,  4,  5,  6, 
     7,  8,  9, 10,  4,  5,  6,  7,  8,  9, 10,  4,  5,  6,  7,  8, 
     9, 10,  4,  5,  6,  7,  8,  9, 10,  4,  5,  6,  7,  8,  9, 10, 
     4,  5,  6,  7,  8,  9, 10,  4,  5,  6,  7,  8,  9, 10,  4,  5, 
     6,  7,  8,  9, 10,  4,  5,  6,  7,  8,  9, 10,  4,  5,  6, 11, 
};

RE_UINT8 re_hangul_syllable_type_stage_4[] = {
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  2,  2,  2,  2, 
     2,  2,  2,  2,  2,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  4, 
     5,  6,  6,  7,  6,  6,  6,  5,  6,  6,  7,  6,  6,  6,  5,  6, 
     6,  7,  6,  6,  6,  5,  6,  6,  7,  6,  6,  6,  5,  6,  6,  7, 
     6,  6,  6,  5,  6,  6,  7,  6,  6,  6,  5,  6,  6,  7,  6,  6, 
     6,  5,  6,  6,  7,  6,  6,  6,  5,  6,  6,  7,  6,  6,  6,  5, 
     6,  6,  7,  6,  6,  6,  5,  6,  6,  7,  6,  6,  6,  5,  6,  6, 
     7,  6,  6,  6,  5,  6,  6,  7,  6,  6,  6,  5,  6,  6,  7,  6, 
     6,  6,  5,  6,  6,  7,  6,  6,  6,  5,  6,  6,  7,  6,  6,  6, 
     6,  5,  6,  6,  8,  0,  2,  2,  9, 10,  3,  3,  3,  3,  3, 11, 
};

RE_UINT8 re_hangul_syllable_type_stage_5[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 
    2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 
    1, 1, 1, 1, 1, 0, 0, 0, 4, 5, 5, 5, 5, 5, 5, 5, 
    5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 5, 5, 5, 
    5, 5, 5, 5, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 0, 
    0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 
};

/* Hangul_Syllable_Type: 497 bytes. */

RE_UINT32 re_get_hangul_syllable_type(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 16;
    code = ch ^ (f << 16);
    pos = ((RE_UINT32)re_hangul_syllable_type_stage_1[f] << 5);
    f = code >> 11;
    code ^= (f << 11);
    pos = ((RE_UINT32)re_hangul_syllable_type_stage_2[pos + f] << 4);
    f = code >> 7;
    code ^= (f << 7);
    pos = ((RE_UINT32)re_hangul_syllable_type_stage_3[pos + f] << 4);
    f = code >> 3;
    code ^= (f << 3);
    pos = ((RE_UINT32)re_hangul_syllable_type_stage_4[pos + f] << 3);
    value = re_hangul_syllable_type_stage_5[pos + code];

    return value;
}

/* Bidi_Class. */

RE_UINT8 re_bidi_class_stage_1[] = {
     0,  1,  2,  3,  4,  5,  5,  5,  5,  6,  7,  5,  5,  8,  5,  9, 
    10, 11, 12, 13, 14, 14, 15, 14, 14, 14, 14, 16, 14, 17, 18, 19, 
     5,  5,  5,  5,  5,  5,  5,  5,  5,  5, 20, 21, 14, 14, 14, 22, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 23, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 23, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 23, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 23, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 23, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 23, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 23, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 23, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 23, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 23, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 23, 
    24, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 23, 
     5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5, 25, 
     5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5, 25, 
};

RE_UINT8 re_bidi_class_stage_2[] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15, 
     16,   1,  17,  18,  19,   1,  20,  21,  22,  23,  24,  25,  26,  27,   1,  28, 
     29,  30,  31,  32,  33,  34,  35,  36,   1,  34,  34,  37,  38,  39,  40,  41, 
     42,  43,  44,  45,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  46,   1,   1, 
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  47, 
      1,   1,   1,   1,  48,   1,  49,  50,  51,  52,  53,  54,   1,   1,   1,   1, 
      1,   1,   1,   1,   1,   1,   1,  55,  56,  56,  56,  56,  56,  56,  56,  56, 
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  57,  58,  59,  60,  61,  62, 
     63,  64,  65,  66,  67,  56,  56,  56,  68,  69,  70,  71,  68,  68,  72,  68, 
     73,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56, 
      1,   1,   1,  74,  75,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56, 
      1,   1,   1,   1,  76,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56, 
     56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56, 
     56,  56,  56,  56,  56,  56,  56,  56,   1,   1,  77,  56,  56,  56,  56,  56, 
     78,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56, 
     79,  80,  81,  82,  83,  84,  85,  86,  56,  56,  56,  56,  56,  56,  56,  56, 
     56,  56,  56,  56,  56,  56,  56,  56,  68,  68,  68,  68,  68,  68,  68,  68, 
     87,  88,  89,  90,  91,  92,  93,  94,  56,  56,  56,  56,  56,  56,  56,  95, 
      1,   1,   1,   1,   1,   1,  96,   1,   1,   1,   1,   1,   1,   1,   1,   1, 
      1,   1,   1,   1,   1,   1,   1,  97,  98,  56,  56,  56,  56,  56,  56,  56, 
     56,  56,  56,  56,  56,  56,  56,  56,   1,   1,  98,  56,  56,  56,  56,  95, 
     56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  95, 
     99, 100,  99,  99,  99,  99,  99,  99,  99,  99,  99,  99,  99,  99,  99,  99, 
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 101, 
};

RE_UINT16 re_bidi_class_stage_3[] = {
      0,   1,   2,   3,   4,   5,   6,   6,   7,   7,   7,   7,   7,   7,   7,   7, 
      7,   7,   7,   7,   7,   8,   9,  10,  11,  11,  11,  12,  13,  14,   7,  15, 
      7,   7,   7,   7,  16,   7,   7,   7,   7,  17,  18,  19,  20,  21,  22,  23, 
     24,  25,  26,  27,  25,  25,  28,  29,  30,  31,  32,  25,  25,  33,  23,  34, 
     35,  36,  37,  23,  23,  23,  23,  23,  38,  39,  40,  41,  42,  43,  44,  45, 
     46,  47,  48,  49,  50,  51,  52,  53,  42,  54,  55,  56,  57,  58,  59,  60, 
     61,  62,  63,  64,  65,  66,  67,  68,  65,  69,  70,  71,  72,  73,  74,  75, 
     19,  76,  77,  78,  79,  80,  81,  78,  82,  83,  84,  85,  86,  87,  88,  78, 
      7,  89,  90,  91,  92,   7,  93,  94,   7,   7,  95,   7,  96,  97,  98,   7, 
     99,   7, 100,  94, 101,   7,   7, 102, 103,   7,   7,   7,   7,   7,   7,   7, 
      7,   7,   7,   7, 104,   7,   7, 105, 106, 107, 108, 109,   7, 110, 111, 112, 
    113,   7,   7, 114,   7, 115,   7, 116,  94, 117, 118, 119,   7, 120, 121, 122, 
    123,   7, 124, 125, 126, 127,  78,  78, 128, 129, 130, 131, 132, 133,   7, 134, 
      7, 135, 136,   7,  78,  78, 137, 138,   7,   7,   7,   7,   7,   7,  11, 139, 
    140,   7, 141, 142,   7, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 
    154, 155, 156,   7, 157, 122, 122, 122, 158, 122, 122, 122, 122, 122, 122, 122, 
    122, 159,   7, 160, 161, 122, 122, 162, 122, 163, 164, 122, 165,   7,   7, 166, 
    122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 167, 122, 122, 
    168, 122, 122, 122, 122, 122, 169, 122, 122, 122, 170,  78,  78,  78,  78,  78, 
      7, 171, 172,   7,   7,   7,   7, 173,   7,  93,   7, 174, 175, 176, 176,  11, 
    122, 177,  78,  78, 178, 122, 122, 162, 122, 122, 122, 122, 122, 122, 179, 180, 
    181, 182,  19,   7, 183, 103,   7, 184, 185, 186,   7,   7, 171, 187, 122, 188, 
    189,   7, 190, 191,   7, 192, 193, 172,   7,   7,   7, 194,   7,   7, 195, 196, 
      7,   7,   7,   7,   7, 116, 122, 122,   7,   7,   7,   7,   7,   7, 197,  78, 
      7,   7,   7,   7, 198, 122, 199,   7, 200, 197,   7, 201, 114,   7,   7, 202, 
    122, 203,   7,   7, 204, 205,  78, 206, 207, 208,   7, 209,   7,   7, 210, 211, 
      7, 212, 213,  94,  38, 214, 215,  78,   7, 216, 217, 218,   7, 219, 220,  78, 
    221, 222,  78,  78,  78,  78,   7, 223,   7,   7,   7,   7,   7, 224, 225, 218, 
     78,  78,  78,  78,  78,  78,  78,  78,   7, 226,   7, 226,   7,   7, 227,  78, 
    228, 229, 230,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25, 
     25, 231,  25,  25,  25,  25, 232, 233, 234, 235, 236, 237,  25,  25,  25, 238, 
    239,   2,   2, 240,   7, 172, 241, 242, 243, 244, 245,  78,   7,   7,   7, 187, 
    246, 247, 122, 122, 248,  78, 249, 250,  78,  78,  78,  78,  94,   7, 105,  78, 
    172, 224, 251,  78, 252,   7, 253,  78,   7,   7,   7,   7, 142, 205,  78,  78, 
     23,  23,  23,  23,  23,  23,  23,  23, 254,  23,  23,  23,  23,  23,  23,  23, 
    255, 256,  23,  23,  23,  23,  23,  23,  23, 257,  23,  23,  23,  23,  23,  23, 
     23,  23,  23, 258,  23,  23,  23,  23, 259, 260, 261, 262, 132, 263, 264,  78, 
      7,   7,   7, 265,  78,  78,  78,  78,   7,   7,   7, 266,  78,  78,  78,  78, 
      7, 265,  78,  78,  78,  78,  78,  78,   7, 267,  78,  78,  78,  78,  78,  78, 
    264,  78,  78,  78,  78,  78,  78,  78,   7,   7,   7,   7,   7,   7,   7, 116, 
      7, 268,   7, 269, 270, 271, 142,  78, 122, 122, 272,  78,  78,  78,  78,  78, 
    122, 122, 273, 274,  78,  78,  78,  78,   7,   7, 275,   7, 276, 277, 278,   7, 
    279, 280, 281,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7, 282, 184,   7, 
    283,   7, 284,   7, 285,   7, 286, 287, 122, 288, 122, 122, 162, 289, 290,  78, 
    291, 171,   7, 292, 187,  78,  78, 293, 294, 187, 295,  78,  78,  78,  78,  78, 
    122, 296, 122, 297, 162, 122, 298, 299, 122, 300, 301, 122, 167, 122, 122, 302, 
    122, 303, 304, 305,  78,  78,  78, 306, 307, 308, 309,  78, 122, 122, 310,  78, 
    122, 122, 122, 162,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78, 311, 
      7,   7,   7,   7,   7,   7, 175,  78,   7, 102,   7,   7,   7,   7,   7,   7, 
    142,  78,  78,  78,  78,  78,  78,  78, 312, 312, 312, 312, 312, 312, 312, 312, 
     11,  11,  11,  11,  11,  11,  11, 313,   7,   7,   7,   7,   7,   7,   7, 314, 
};

RE_UINT8 re_bidi_class_stage_4[] = {
      0,   0,   1,   2,   0,   0,   0,   3,   4,   5,   6,   7,   8,   8,   9,  10, 
     11,  12,  12,  12,  12,  12,  13,  10,  11,  12,  12,  12,  12,  12,  13,  14, 
      0,  15,   0,   0,   0,   0,   0,   0,  16,   5,  17,  18,  19,  20,  21,  10, 
     12,  12,  12,  12,  12,  13,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12, 
     12,  12,  12,  12,  12,  12,  22,  12,  23,  10,  10,  10,  23,  10,  10,  10, 
     12,  24,  10,  17,  10,  10,  10,  10,  25,  25,  25,  25,  25,  25,  25,  25, 
     25,  25,  25,  25,  12,  26,  27,  28,  29,  17,  30,  31,  12,  12,  12,  12, 
     32,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  33,  12,  12, 
     34,  25,  35,  12,  12,  12,  12,  12,  12,  12,  29,  29,  36,  12,  12,  12, 
     12,  12,  12,  12,  12,  30,  36,  12,  36,  12,  12,  12,  12,  12,  12,  12, 
     12,  12,  37,  29,  38,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  39, 
     40,  39,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41, 
     42,  43,  44,  45,  25,  25,  46,  47,  47,  47,  47,  47,  47,  47,  47,  47, 
     47,  47,  48,  25,  25,  25,  25,  25,  42,  42,  49,  50,  51,  47,  47,  47, 
     47,  47,  47,  47,  47,  52,  25,  53,  25,  54,  55,  56,   8,   8,  57,  47, 
     47,  47,  47,  58,  59,  47,  47,  47,  47,  47,  47,  47,  25,  25,  25,  25, 
     25,  25,  46,  47,  47,  47,  47,  47,  47,  52,  25,  25,  51,  47,  47,  47, 
     41,  41,  60,  25,  25,  61,  62,  41,  41,  41,  41,  41,  41,  63,  39,  25, 
     25,  38,  38,  64,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  38,  41, 
     65,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  66,  67, 
     68,  25,  67,  69,  68,  25,  12,  12,  70,  12,  12,  12,  12,  12,  36,  12, 
     71,  36,  12,  72,  72,  12,  12,  12,  12,  12,  31,  12,  73,  27,  74,  67, 
     68,  75,  72,  76,  29,  77,  29,  32,  70,  27,  12,  12,  78,  12,  79,  29, 
     80,  36,  30,  77,  72,  12,  12,  12,  12,  12,  31,  12,  31,  81,  74,  82, 
     83,  84,  85,  86,  87,  29,  36,  73,  29,  27,  12,  12,  35,  88,  29,  29, 
     80,  36,  12,  32,  32,  12,  12,  12,  12,  12,  31,  12,  31,  36,  74,  67, 
     68,  89,  90,  88,  91,  29,  29,  29,  70,  27,  12,  12,  92,  29,  29,  29, 
     12,  12,  31,  12,  31,  36,  74,  93,  68,  75,  72,  88,  29,  94,  29,  32, 
     70,  27,  12,  12,  12,  12,  29,  29,  94,  36,  30,  27,  31,  74,  81,  31, 
     77,  91,  30,  27,  12,  12,  74,  27,  95,  27,  31,  88,  91,  77,  29,  29, 
     29,  27,  12,  12,  13,  10,  96,  29,  36,  36,  12,  31,  31,  12,  12,  12, 
     12,  12,  31,  12,  12,  36,  74,  97,  67,  98,  99,  86,  29, 100,  74,  29, 
     70,  27,  12,  12,  29,  29,  10, 101,  27,  36,  12,  31,  31,  12,  12,  12, 
     12,  12,  31,  12,  12,  36,  74,  67,  12,  31,  31,  86,  29,  81,  29, 102, 
     70,  27,  12,  12,  81,  29,  29,  29,  12,  12,  12,  12,  12,  12,  30,  36, 
     68,  82,  31,  76,  29,  77,  29,  29,  70,  27,  12,  12,  12,  74,  36,  12, 
     27,  36,  12,  12,  12,  30,  27,  12,  12,  12,  12,  12,  32,  12,  12, 103, 
     12,  30, 104,  77,  70, 105,  12,  12,  29,  29,  29,  29,  27,  91,  29,  29, 
     12,  12,  12,  12,  69,  25, 106, 107,  12,  34,  25,  65,  12,  12,  12,  29, 
     29,  29,  29,  29,  29,  29,  29,  29,  81,  72,  73, 103,  29,  12,  36,  12, 
     36, 108,  27,  36,  69,  25,  89, 109,  12,  73,  25,  86,  12,  12,  74,  74, 
     12,  12,  12,  12,  12,  12,  35,  12,  12,  12,  12,  12,  12, 110, 111,  26, 
     12,  12,  36,  12,  12,  12,  12,  12,  12,  12,  12,  91, 112,  25,  25,  65, 
     25, 113,  12,  68,  25,  25, 112,  25,  25,  25,  25,  25,  25,  25,  25,  82, 
     12,  66,  12,  31,  12,  12,  30,  29,  12,  12,  12,  68, 113,  25, 114, 114, 
     12,  12,  12,  12,  12,  12,  35,  70,  67,  12,  12,  12,  68,  67,  12,  12, 
     66, 114,  12,  69,  12,  12,  12,  69,  12,  74,  29,  29,  12,  12,  12,  12, 
     12,  12,  12,  12,  12,  12,  12,  91,  12,  12,  31,  74,  12,  30,  31,  74, 
     12,  12,  31,  74,  12,  12,  12,  12,  12,  12,  12,  12,  31,  74,  12,  30, 
     31,  74,  12,  12,  12,  30,  12,  12,  12,  12,  12,  12,  31,  74,  12,  12, 
     12,  12,  12,  12,  12,  12,  30, 112,  12,  12,  12,  12,  10,  10, 115,  29, 
     12,  12,  12,  12,  12,  91,  29,  29,  11,  12,  12,  12,  12,  12,  12,  12, 
    116,  12,  12,  12,  12,  12,  13, 117,  12,  12,  12,  12,  91,  29,  29,  29, 
     12,  12,  12,  31,  70, 118,  29,  29,  12,  12,  12,  12,  70,  95,  29,  29, 
     12,  12,  12,  12,  70,  29,  29,  29,  12,  12,  12,  31,  98,  29,  29,  29, 
     12,  12,  12,  12,  12,  34,  25,  35,  12,  66,  68,  25,  25,  12,  79,  88, 
     12,  12,  74,  29,  10,  10, 115,  29,  10,  10, 119, 120,  12,  12,  74,  29, 
     12,  12,  12,  12,  12,  12,  29,  29,  12,  12,  76,  29,  12,  12,  12,  12, 
     12,  12,  12,  12,  12,  74,  29,  29,  65,  34,  67,  29,  66,  12,  68,  29, 
    117,  26,  12,  12,  12,  12,  12,  12,  12,  12,  12,  74,  12,  91,  29,  29, 
     12,  12,  12,  29,  12,  12,  12,  12,  12,  12,  74,  29,  12,  12,  30, 121, 
     10,  10,  10,  10,  10,  10,  10,  10,  12,  12,  12,  12,  12,  34,  67,  27, 
     12,  12,  12,  12,  12,  66,  25, 106, 122,  68,  25,  67,  34,  25,  25,  85, 
     12,  12,  74,  29,  12,  12,  74,  29,  12,  12,  12,  74,  29,  29,  29,  29, 
     25,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12, 113,  65,  67, 
     66,  12,  12,  29,  12,  12,  12,  12,  12,  12,  34,  25,  25,  12,  12,  91, 
     35,  12,  12,  12,  12,  12,  12,  12,  70,  35, 123,  27,  12,  12,  74,  29, 
     12,  66,  35, 110,  35,  29,  29,  12,  12,  12,  12,  25,  25,  70,  77,  12, 
     12,  12,  74,  36,  12,  12,  12,  12,  29,  29,  29,  29,  65,  25,  25,  25, 
    113,  25,  67,  69,  30,  29,  29,  29,  25, 106,  29,  29,  29,  29,  29,  25, 
     12,  12,  12,  12,  12,  74,  12,  74,  12,  74,  12,  74,  12,  12, 108, 108, 
     12,  12,  12,  12,  12,  12,  12,  74,  12,  12,  12,  12,  12,  31,  12, 124, 
     26,  31,  12,  24,  12,  27,  12, 125,  12,  12,  12,  24,  27,  31,  12, 126, 
    127, 127, 128, 129,  10,  10,  10,  10,  10,  10, 130, 131, 132, 133,  10,  10, 
     10, 134,  10,  10,  10,  10,  10, 135,   0,   0,   0,   0, 136,   8, 137, 101, 
      8,   8, 137, 138,  12,  12,  12,  91, 132, 132, 132, 132, 132, 132, 139,  29, 
     29,  29,  29,  29,  25,  25,  25,  25,  25,  25,  25,  25, 118,  29,  29,  29, 
     17, 101,  26,  12,  12,  20,  11,  23,  10, 124, 140, 141,  12,  12,  23,  12, 
     10,  11,  23,  26,  10,  10,  10,  10,  12,  12, 142,  29,  10,  10,  10,  10, 
     10,  10,  10,  10, 143,  10,  10,  10,  10,  10,  10,  10,  10,  26,  12,  12, 
     12,  12,  12,  12,  12,  12,  13,  10,  10,  10,  10,  10,  10,  20,  10,  10, 
     10,  10,  10,  10,  10,  29,  29,  29,  10, 138,  29,  29,  29,  29,  29,  29, 
     10,  10, 138,  29,  29,  29,  29,  29,  10,  10,   8,   8,   8,   8,   8,  12, 
     12,  12,  23,  10,  10,  10,  10,  10,  10,  10,  10,  24,  10,  10,  10,  10, 
    125,  10,  10,  10,  10,  10,  10,  10,  10,  10, 138, 144,  10,  10,  10,  10, 
     10,  10,  10, 117,  10,  10, 115,  29,  12,  12,  12,  30,  12,  12,  12,  12, 
     12,  12,  12,  12,  12,  12,  12,  30,  12,  24, 101,  34,  86,  29, 125,  10, 
     12,  74,  29,  77,  91,  29,  29,  84,  12,  12,  12,  12,  12,  30,  29,  29, 
     12,  30,  12,  30,  12,  30,  12,  30,  10,  10,  10,  10, 115,  29,  29,  29, 
     10,  10,  10,  10,  10,  10, 145,  10,  10,  10,  10,  10,  10, 115,  29,  29, 
     29,  29,  29,  29,  10,  10,  10,  29, 146,  11,  10,  10,  10,  10,  10,  10, 
     11,  12,  70,  25,  11,  23,  12,  24,  12,  12,  12,  12,  12,  30, 147,  11, 
     12,  12,  12,  12,  12,  12,  13,  12,  29,  36,  12,  12,  12,  12,  12,  12, 
     12,  12,  12,  74,  36,  12,  12,  12,  12,  12,  12,  12,  12,  12,  30,  29, 
     10,  29,  29,  29,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12, 126, 
     12,  12,  12,  12,  10,  10,  10,  10,  12,  12,  12,  12,  12,  12,  12, 101, 
     12,  12,  12,  12,  24,  10,  10,  10,  12,  12,  12,  10,  12,  12,  12,  12, 
     12,  12,  12,  12,  12,  13, 101,  12,  12,  12,  12,  12,  12,  12,  12,  23, 
     12,  12,  12,  12,  12,  12,  12,  13,  12,  12,  12,  29,  29,  29,  29,  29, 
     12,  12,  12,  91,  10,  10,  10,  10,  10, 138,  29,  29,  12,  12,  12,  12, 
     12,  12,  12,  24,  12,  12,  12,  12,  12,  12,  12,  34, 148,  29,  29, 149, 
     12,  12,  12,  12,  35,  12,  29,  29,  26,  12,  12,  12,  12,  12,  12,  12, 
     12,  12,  11,  30,  74,  29,  29,  29,  12,  12,  74,  29,  29,  29,  29,  29, 
     29,  29,  29,  29,  29,  29,  27,  12,  66,  66,  34,  12,  12,  12,  12,  12, 
     12, 114,  10,  29,  12,  12, 139,  29,  12,  12,  12,  12,  12,  10,  29,  29, 
     12, 118,  29,  27,  12,  12,  74,  29,  25,  25,  25,  25,  35,  12,  12,  29, 
     12,  70,  25,  35,  12,  12,  12,  12,  12,  34,  25,  25,  35,  29,  29,  77, 
     12,  12,  12,  12,  34,  70,  35,  67,  12,  12,  12,  32,  12,  12,  74,  27, 
     12,  12,  68,  65, 114,  83,  29,  29,  34,  12,  12, 109,  12,  12,  74,  12, 
     12,  12,  12,  12,  12,  12,  12,  29,  12,  12,  12,  12, 113,  93,  67,  70, 
     76,  29,  29,  29,  29,  29,  77,  12,  36,  30,  36,  30,  36,  30,  29,  29, 
     12,  30,  12,  30,  29,  29,  29,  29,  12,  69,  67,  88,  12,  12,  74,  29, 
     12,  29,  29,  29,  12,  12,  12,  12,  12,  30,  77,  12,  12,  12,  12,  12, 
     12,  12,  12,  74,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  74,  29, 
     12,  30,  29,  29,  77,  12,  29, 150,  41,  41, 151,  41,  41,  41,  41,  41, 
     41,  41,  41,  41,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  43, 
     47,  47,  47,  47,   0,   0,   0,   0,   0,   0,   0,   0,  47,  47,  47, 152, 
     25,  25,  25,  25,  10,  10, 115,  29,  25, 106,  29,  29,  10,  10,  10,  10, 
     10,  10,  10,  10, 153, 154,  10, 155, 156, 138, 157,  29,  47,  47,  47,  47, 
     47,  47,  47,  47,  47,  47,  47, 158, 159,   5,   6,   7,   8,   8,   9,  10, 
     10,  26,  12,  12,  12,  12,  12,  12,  27,  12,  27,  12,  27,  12,  27,  91, 
      5, 160,  10, 138,   0,   0, 161, 162,  12,  12,  12,  36,  12,  12,  12,  12, 
     12,  30,  12,  12,  12,  12,  30,  32,  12,  12,  12,  74,  12,  12,  12,  74, 
    163,  77,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  77,  12,  12, 
     10,  10, 138,  29,  10,  10,  10,  29,  29,  29,  29,  29,  12,  12,  12,  12, 
     12,  12,  12,  12,  12,  12,  12,  88,  12,  12,  30,  29,  29,  29,  29,  29, 
     12,  12,  12,  12,  12,  12,  12,  32,  12,  29,  12,  12,  12,  74,  29,  29, 
     41,  41,  41,  41,  41,  41,  41, 164,  38,  40,  41,  25,  41,  41,  41,  41, 
     41,  41,  41,  41,  41,  41, 165,  60,  41,  41,  41,  41,  41,  41, 166,  10, 
     42,  42,  42,  42,  42,  42,  42, 167,  69,  12,  12,  12,  12,  12,  12,  12, 
     12,  12,  12,  12,  12,  12,  25,  25,  25,  65,  12,  74, 121,  10,  10,  10, 
     10,  26,  12,  12,  29,  29,  29,  29,  12,  12,  12,  12,  34,  65, 114,  12, 
     74,  29,  29,  29,  29,  29,  29,  29,  12,  12,  12,  30,  29,  29,  29,  29, 
     30,  29,  29,  29,  12,  29,  29,  29,  12,  12,  12,  12,  12,  12,  91,  29, 
     12,  30,  36,  12,  12,  12,  12,  12,  12,  34,  35,  12, 168,   0, 169,  25, 
     65,  68,  25,  12,  12,  12,  12,  12,  12,  12,  70,  35,  12,  12,  12,  12, 
    170, 171,  29,  29,  29,  29,  29,  29,  10,  10,  10,  10,  10, 138,  29,  29, 
     12,  12,  12,  12,  74,  29,  29,  29,  12,  12,  12,  12,  12,  31,  12,  12, 
     12,  12,  12,  12,  12,  12,  12,  31, 102,  81,  36,  31,  12,  12,  32,  36, 
     12,  36,  12,  12,  12,  12,  12,  12,  12,  32,  30,  36,  12,  31,  12,  31, 
     12,  12,  12,  12,  12,  12,  32,  30,  12,  73,  27,  12,  31,  12,  12,  12, 
     12,  74,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12, 140,  12,  12, 
     12,  12,  12,  13,  12,  12,  12,  12,  12,  12, 140,  12,  12,  12,  12,  12, 
     13,  12,  12, 172,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8, 
     10,  10,  10,  29,  10,  10,  10,  10,  10,  10,  10, 138, 125,  10,  10, 138, 
    125,  10,  10,  10, 125,  10,  10,  10,   8,   8, 173,  29,  12,  12,  12,  12, 
     12,  12,  74,  29,  12,  12,  12,  12,  29,  27,  12,  12,  12,  12,  12,  12, 
     30,  29,  29,  29,  12,  12,  12,  12,  12,  12,  91,  29,  74,  29,  29,  29, 
    117,  29,  29,  29,  10, 145,  10,  10,  10,  10,  10,  10,  10,  10,  10, 117, 
     10, 144, 138,  29,  29,  29,  29,  29,  10,  10,  10,  10, 117,  29,  29,  29, 
     10,  10,  10,  10,  10,  10,  10, 138, 144,  10,  10,  10,  10,  10,  10,  10, 
     10,  10,  10,  10,  10,  10, 125, 117,  10,  24,  10,  10,  10,  10,  10, 115, 
     29,  29,  29,  29,  10,  10,  10,  10,  10,  10,  29,  29,  29,  29,  29,  29, 
     29,  29,  29,  29,  29,  29, 174,  10, 125,  10,  10,  10, 144, 175, 175, 138, 
     10, 115,  10, 176,  10, 125,  10,  10, 117, 125,  10,  10,  29,  29,  29,  29, 
     10, 115,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29, 177, 
      0,   0,   0,   0,   0,   0,   0,   0,  25,  25,  25,  25,   0,   0,   0,   0, 
     12,  12,  12,  12,  12,  12,  12, 178, 
};

RE_UINT8 re_bidi_class_stage_5[] = {
    12, 12, 12, 12, 12,  9,  8,  9, 10,  8, 12, 12,  8,  8,  8,  9, 
    10, 11, 11,  5,  5,  5, 11, 11, 11, 11, 11,  4,  7,  4,  7,  7, 
     3,  3,  3,  3,  3,  3,  7, 11, 11, 11, 11, 11, 11,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1, 11, 11, 11, 11, 12, 12,  8, 12, 12, 
     7, 11,  5,  5, 11, 11,  1, 11, 11, 12, 11, 11,  5,  5,  3,  3, 
    11,  1, 11, 11, 11,  3,  1, 11,  1, 11, 11,  1,  1,  1, 11, 11, 
     1, 11, 11, 11, 13, 13, 13, 13, 11, 11,  1,  1,  0,  0,  1,  1, 
     1,  1, 11,  0,  0,  0,  0,  0,  1,  1,  1,  0,  1,  0,  1,  1, 
     1,  1,  0,  1,  1,  1, 11,  1,  1,  1,  1, 13, 13, 13,  1,  1, 
     0,  1,  1,  1,  0,  1, 11,  0,  2, 13, 13, 13, 13, 13,  2, 13, 
     2, 13, 13,  2,  2,  2,  2,  2,  6,  6,  6,  6, 14, 14, 11, 11, 
    14,  5,  5, 14,  7, 14, 11, 11, 13, 13, 13, 14, 14, 14, 14, 14, 
    14, 14, 14, 13,  6,  6,  5,  6,  6, 14, 14, 14, 13, 14, 14, 14, 
    14, 14, 13, 13, 13,  6, 11, 13, 13, 14, 14, 13, 13, 11, 13, 13, 
    13, 13, 14, 14,  3,  3, 14, 14, 14, 14, 14,  6, 14, 13, 14, 14, 
     2,  2,  2, 13,  2,  2, 11, 11, 11, 11,  2,  2,  2,  2, 13, 13, 
    13, 13,  2,  2, 13, 13, 13,  1,  1,  1, 13,  1, 13,  1,  1,  1, 
     1, 13, 13, 13,  1, 13,  1,  1,  1,  1, 13, 13,  0, 13,  1,  1, 
     1,  0,  0,  1,  1,  0,  1,  0,  1,  1,  0,  0, 13,  0,  0,  1, 
     1, 13,  1,  0,  0,  0,  0,  1,  1,  1,  5,  5,  1,  1,  1,  5, 
     0, 13, 13,  1,  0,  1,  1,  0, 13,  0,  1,  1,  1, 13, 13,  0, 
     0,  0,  0, 13, 13,  0,  0, 13, 13, 13,  0,  0,  0, 13,  0,  0, 
     1, 13,  0,  0, 13, 13,  0, 13, 13,  1,  0,  1,  1,  0,  0,  0, 
     0,  5,  0,  0, 13,  1,  1, 13,  0,  0, 13,  1, 13,  1,  1,  0, 
    11,  5, 11,  0,  0,  1, 13, 13,  1,  0, 13, 13, 13,  0, 13, 13, 
     0, 13, 13,  0, 11, 11, 11,  1,  0,  0,  1,  0,  0,  1,  0,  0, 
     0,  0, 13,  0, 13,  0, 13,  0, 13, 13, 13,  0,  0,  0,  0,  5, 
     0,  1,  0,  1, 13,  1,  0,  0,  1, 13,  1, 13,  1, 13, 11, 11, 
     0, 13, 13, 13, 13,  1, 13, 13,  1, 13, 13,  1, 11, 11,  0,  0, 
    10,  1,  1,  1, 11,  0,  0,  0, 13,  0,  0,  0, 11, 11, 11, 13, 
    13, 13, 10,  0,  0,  0, 11, 11, 13,  1, 13,  1, 13, 13,  1,  0, 
     1, 11,  1, 11,  0, 11, 11, 11,  1, 11, 11,  0, 10, 10, 10, 10, 
    10, 10, 10, 12, 12, 12,  1,  2, 10,  8, 17, 18, 19, 15, 16,  7, 
     5,  5,  5,  5,  5, 11, 11, 11,  7, 11, 11, 11, 11, 11, 11, 10, 
     3,  1,  0,  0,  3,  3,  4,  4, 11, 11, 11,  0,  5,  5,  0,  0, 
     1, 11,  1,  1,  1,  1,  5,  1,  1, 11,  0,  0, 11, 11,  4,  5, 
    11,  0, 11, 11, 11, 11,  0, 11, 10, 11, 11, 11,  0, 13, 13, 11, 
    13, 13, 13, 11, 13, 13, 11, 11,  0,  2, 13,  2,  2,  4,  2,  2, 
    14, 11, 14, 14,  7, 11,  7,  0, 11,  7, 11, 11, 11, 11, 11,  5, 
    11, 11,  4,  4, 11,  5,  5, 11, 14, 14, 14, 12,  0, 11, 11,  5, 
    11,  5,  5,  0, 12, 11, 11, 11, 11, 11, 12, 12,  1, 11,  1,  0, 
     2,  2,  2, 11, 13, 13, 13,  2,  2, 11, 11, 11,  6,  6,  6,  2, 
     1,  1,  1, 12, 12, 12, 12, 13, 11, 11, 13, 13, 13, 11,  0,  0, 
     0,  0,  3,  3,  3,  3,  3,  0,  0,  0,  0, 11, 11,  0, 11,  0, 
     0, 11,  0,  0,  0,  0, 12, 12,  1,  1, 12, 12, 
};

/* Bidi_Class: 5556 bytes. */

RE_UINT32 re_get_bidi_class(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 12;
    code = ch ^ (f << 12);
    pos = ((RE_UINT32)re_bidi_class_stage_1[f] << 4);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_bidi_class_stage_2[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_bidi_class_stage_3[pos + f] << 3);
    f = code >> 2;
    code ^= (f << 2);
    pos = ((RE_UINT32)re_bidi_class_stage_4[pos + f] << 2);
    value = re_bidi_class_stage_5[pos + code];

    return value;
}

/* Canonical_Combining_Class. */

RE_UINT8 re_canonical_combining_class_stage_1[] = {
     0,  1,  2,  3,  4,  5,  5,  5,  5,  6,  7,  5,  5,  8,  5,  9, 
    10, 11, 12, 13, 14, 14, 15, 14, 14, 14, 14, 16, 14, 17, 14, 18, 
     5,  5,  5,  5,  5,  5,  5,  5,  5,  5, 19, 20, 14, 14, 14, 21, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    22, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
     5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5, 23, 
     5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5, 23, 
};

RE_UINT8 re_canonical_combining_class_stage_2[] = {
     0,  0,  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 
    14,  0, 15, 16,  0,  0, 17, 18, 19, 20, 21, 22, 23, 24,  0, 25, 
    26, 27,  0, 28, 29,  0,  0, 30,  0,  0,  0, 31, 32, 33, 34, 35, 
    36, 37, 38,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 39,  0,  0, 
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 
     0,  0,  0,  0, 41,  0, 42, 43, 44, 45, 46, 47,  0,  0,  0,  0, 
     0,  0,  0,  0,  0,  0,  0, 48, 49, 49, 49, 49, 49, 49, 49, 49, 
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 50, 51,  0, 52, 53, 54, 
    55, 56, 57, 58, 59, 49, 49, 49, 60, 61, 62, 63, 64, 49, 65, 49, 
    66, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 
     0,  0,  0, 67, 68, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 
     0,  0,  0,  0, 69, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 
    49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 
    49, 49, 49, 49, 49, 49, 49, 49,  0,  0, 70, 49, 49, 49, 49, 49, 
    71, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 
    72, 73, 74, 75, 76, 77, 78, 79, 49, 49, 49, 49, 49, 49, 49, 49, 
    80, 81, 82, 83, 84, 85, 86, 87, 49, 49, 49, 49, 49, 49, 49, 49, 
     0,  0,  0,  0,  0,  0, 88,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  0,  0,  0,  0,  0, 89, 90, 49, 49, 49, 49, 49, 49, 49, 
    49, 49, 49, 49, 49, 49, 49, 49,  0,  0, 90, 49, 49, 49, 49, 49, 
    91, 92, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 93, 
};

RE_UINT8 re_canonical_combining_class_stage_3[] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      1,   2,   3,   4,   5,   6,   7,   8,   9,   0,  10,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,  11,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,  12,  13,   0,  14,  13,   0,  15,  16,  17,  18,  19,   0,  20,  21, 
     22,  23,   0,   0,  24,  25,   0,  26,   0,   0,   0,   0,   0,  27,  28,   0, 
     29,  30,   0,  31,  32,   0,   0,   0,   0,   0,   0,  33,   0,   0,  34,  35, 
      0,  36,  37,  38,   0,  39,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40, 
      0,   0,   0,  41,  42,  43,   0,  44,  45,  46,  47,  48,  49,  50,  22,  51, 
     52,  46,  47,  53,  54,  55,  56,  57,  58,  10,  47,  59,  60,  61,  22,  62, 
     45,  46,  47,  59,  63,  64,  22,  12,  65,  66,  67,  68,  69,  70,  56,  20, 
     71,  72,  47,  73,  74,  75,  22,  76,  77,  72,  47,  78,  74,  79,  22,  80, 
     77,  72,   0,  81,  82,  83,  22,  84,  85,  86,   0,  87,  88,  89,  40,  90, 
     13,   0,   0,  91,  92,  51,  40,  40,  93,  94,  95,  96,  97,  98,  40,  40, 
      0,  99,   0, 100,  44,   0, 101, 102, 103,  44,   0, 104, 105,  20,  40,  40, 
      0,   0,   0, 106,   0,   0,   0,   0, 107,   0,   0,   0,  57,   0,   0, 101, 
      0,   0,   0,   0, 108, 109,   0,   0, 108,   0,   0, 110, 111, 112,   0,   0, 
      0, 111,   0,   0,   0, 113,   0, 101,   0, 114,   0,   0,   0,   0,   0,  21, 
      0,   0,   0,   0,   0,   0,   0,   0,   0, 101,   0,   0,   0,   0,   0,  61, 
    104, 115,   0, 116,   0, 117, 104, 118,   0,   0,   0,   0,   0, 119, 114, 114, 
     38, 114,   0,   0,   0,   0,   0,  12,   0,   0, 120,   0,   0,   0,   0,  57, 
      0, 101,  51, 121, 122,   0, 123,  21,   0,   0,  51,   0, 114, 124,   0,   0, 
      0, 125,   0,   0,   0,  38, 126, 127, 114, 114, 123,  40,  40,  40,  40,  40, 
      0,   0,   0, 128, 129,   0, 130, 131,   0,   0, 132, 114,   0,   0, 133, 134, 
      0,   0,   0, 135, 136,   0,   0,   0,  40,  40,  40,  40,  40, 137, 138, 139, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 140, 141, 142, 143, 
      0, 144,   0,   0, 144, 145,   0, 123,   0,   0,   0, 146, 146, 147,   0, 148, 
      0,   0,   0,   0,   0,   0, 149, 150,  38, 101,   0, 114,  40, 151, 152, 153, 
      0,   0,   0,   0,   0,   0,   0,   0, 114,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 117, 
      0,   0, 154,  40,  20,  40,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     13,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 155,   0,   0,   0, 
      0,   0,   0,   0, 101, 114,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40, 
      0,   0,  38,   0,   0,  38,   0,   0,   0,   0,   0,   0,   0,   0, 156, 157, 
      0,   0,  57,   0,   0,   0, 158, 159,   0, 154, 160, 160, 160, 160,   1,   1, 
      0,   0,   0,  33,  40,  40,  40,  40,   0, 161,   0,   0,   0,   0,   0, 117, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57,  40,  51, 
      0,   0, 162,   0,  13,   0,   0,   0,   0, 163,   0,   0,   0,   0,   0,   0, 
    164,   0, 123,  13,   0,   0,   0,   0,  38,   0,   0,  20,   0,   0, 117,   0, 
      0,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  38, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  51,  40,  40,  40, 
      0,   0,   0,   0,   0,   0,   0,   0, 101,   0,   0,   0, 154,   0,   0,   0, 
      0,   0,  51,  40,   0,   0, 156, 165,   0,  12,   0,   0,   0,   0,   0, 166, 
      0,   0,   0,   0,   0,   0,   0,   0,  38,  33, 114,  40,  40,  40,  40, 167, 
    168,   0,  51, 114,   0,   0,   0,  12,   0,   0,   0,   0, 169, 114,   1, 170, 
      0,   0, 171,   0,   0, 172,   0, 101,   0,   0,   0, 173, 174,  68,  40,  40, 
      0,   0,   0, 154, 123, 175,   0,  51,   0,   0,   0, 176, 177, 178,  40,  40, 
    179, 180, 160,  40,  40,  40,  40,  40,  40,  40,  40,  40,   0,   0, 181, 114, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 117,   0, 182,   0,   0,  51, 
     40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40, 
      0,   0, 123,   0,   0,   0, 123,   0,   0,   0,   0,   0,   0, 114,  40,  40, 
    154, 183,   0, 184, 185,   0,   0,   0,   0,   0,   0,   0,  33, 186,   0,   0, 
      0,   0,   0,   0,  40,   0,   0,   0,   0, 187,   0,   0,  12,  40,  40, 123, 
      0, 114, 142,   0,   0, 188, 189, 146,   0,   0,   0,   0,   0,   0,   0, 190, 
     13,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  38, 191, 192, 160, 193, 
    194,   0, 112, 195, 123, 123,  40,  40,   0,   0,   0,   0,   0,   0,   0,  20, 
    196,   0,   0, 197,   0,   0,   0,   0,  20,  51,  40,  40,  40,   0,   0, 198, 
     40,  40,  40,  40,  40,  40,  40,  40,   0, 101,   0,   0,   0,  61,  40,  40, 
      0,  38, 117,   0,  20,  40,  40,  40,   0,  29,   0,   0, 199,  57,  40,  40, 
      0,   0,   0,   0,   0,   0,   0,   0,   0, 123, 114,  40,  40,  40,  40,  40, 
    200,   0,   0, 201,   0, 202,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40, 
      0, 203,   0, 204,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40, 
    205, 206,   0, 207,  12, 208,   0,   0,  40,  40,  40,  40,  40,  40,  40,  40, 
      0,   0,   0,  84,   0, 209,   0, 210,  40,  40,  40,  40,  40,  40,  40,  40, 
      0,   0,   0,   0, 208,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40, 
     40,  40,  40,  40,  40,  40,   0,  38,  40,  40,  40,  40,  40,  40,  40,  40, 
      0,   0,   0,   0, 211, 187,   0,  40,   0,   0,   0, 212,  33,  40,  40,  40, 
      0,   0,   0,   0,   0,   0,  38,  40,  40,  40,  40,  40,  40,  40,  40,  40, 
      0,   0,   0,   0,   0,   0, 139, 117,  40,  40,  40,  40,  40,  40,  40,  40, 
      0,   0,  38,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40, 
      0,   0,   0, 208,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40, 
     33,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 
      0,   0,  14,   0,   0,   0, 213, 214, 215,   0, 216,   0,   0, 123,  40,  40, 
      0,   0,   0,   0, 217,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40, 
      0,   0,   0,   0,   0, 154,   0,  33,  40,  40,  40,  40,  40,  40,  40,  40, 
      0,   0,   0,   0,   0, 146,   0,   0,   0, 104, 218, 219, 220,   0,   0,   0, 
    221, 222,   0, 223, 224,  72,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 209,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 225,   0,   0,   0, 
      0,   0,  51,   0,   0,   0,   0,   0,   0, 117,  38, 226,  13,  13,  40,  40, 
     20,   0,  38,   0,   0,   0, 114,   0,   0,  20,  40,  40,  40,  40,  56,   0, 
    139,   0,   0,  20, 208,  33,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40, 
      0,   0,  61, 202,   0,   0,   0, 101,   0, 117,   0,   0, 227,  40,   0,  61, 
      0,   0,   0,  38,  72,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 228, 
      0,   0,   0, 123,  40,   0,  12,  40,  40,  40,  40,  40,  40,  40,  40, 178, 
     13, 229, 230, 220, 231,  40,  40,  40,   0,   0,   0,   0,  57,  40,  40,  40, 
      0,   0,   0,   0,   0,   0,   0, 117,  40,  40,  40,  40,  40,  40,  40,  40, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 154,  40,  40, 
      0,   0,   0,  21,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0, 123,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40, 
     62,  40,   0,   0,   0,   0,   0,   0,  40,  40,  40,  40,  40,  40,  40,  40, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  40, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 123, 
};

RE_UINT8 re_canonical_combining_class_stage_4[] = {
      0,   0,   0,   0,   1,   1,   1,   1,   1,   2,   3,   4,   5,   6,   7,   4, 
      4,   8,   9,  10,   1,  11,  12,  13,  14,  15,  16,  17,  18,   1,   1,   1, 
      0,   0,  19,  20,  21,   0,  20,  22,  23,   0,   0,   0,  24,   1,   0,   0, 
      0,   0,  21,  21,  25,   0,   0,   0,   0,  20,  25,   0,   0,   0,  26,  21, 
     27,  28,  29,   1,  30,   4,  28,  31,  32,  33,  34,  35,  36,  37,  21,  21, 
      0,   0,  20,  21,   0,  38,  21,  21,   0,  19,   0,   0,   1,   1,  39,  19, 
      0,   0,  40,  41,  42,  43,   1,  44,  45,   0,   0,   0,   0,  46,   1,  47, 
     14,  47,  48,  49,   0,   0,   0,  23,  50,   0,   0,   0,  51,  44,  52,  53, 
     28,  53,  54,  25,  55,  21,  21,  21,   0,   0,  24,   1,  28,   0,  20,  21, 
      0,  46,  56,   1,   1,  57,  57,  58,   0,   0,   0,  20,   0,   0,  59,  60, 
     21,  21,  21,  21,   0,   0,   0,  61,   0,   0,   0,  62,  63,  64,   0,   0, 
      0,   0,  25,   0,  25,  25,   0,  65,  65,   0,   0,   0,   0,   0,  22,   0, 
     66,  19,  55,  61,   0,  65,  65,  67,  21,  68,  21,  23,   0,   0,   0,  21, 
     25,  25,  20,  68,  22,  26,  55,  69,  20,  68,  65,  70,  71,  21,  25,  66, 
     21,  19,   0,   0,   0,  55,  21,  21,  25,  25,   0,  23,  22,  25,  55,  61, 
      0,  23,  23,  70,  38,  21,  21,  21,  71,  21,  21,  21,   0,  65,  65,  70, 
     21,  19,  21,  23,  19,  25,  20,  19,  22,  55,  26,  22,  68,  38,  20,  19, 
      0,   0,  55,  19,  20,  19,  22,  70,  38,  68,  21,  21,  25,  25,   0,  22, 
     22,   0,   0,   0,   0,  25,  55,  25,   0,  22,  22,  70,  21,  72,  55,  21, 
     21,  21,   0,   0,  19,  25,   0,  22,   0,  25,  55,  61,  21,  26,  21,  60, 
     26,  21,  21,  21,   0,   0,  20,  25,   0,  22,  22,  67,  21,  68,  21,  21, 
      0,  55,  25,   0,  19,  25,   0,   0,   0,  20,  19,   0,  23,   0,   0,  71, 
      0,  20,  73,  68,   0,  66,   0,   0,  19,  38,  21,  21,   0,   0,  74,  68, 
      0,   0,  75,   0,  26,  65,  66,  71,  21,   0,  25,   0,  25,  76,  19,  25, 
      0,   0,  77,  55,   0,  66,  78,  55,   0,   0,  55,  55,   0,   0,  79,   0, 
      0,  80,  81,   0,   0,   0,   0,  38,  82,  83,  84,  85,  86,  87,   0,   0, 
      0,   0,   0,  22,   0,  88,   0,  22,   0,  89,  90,   0,   0,   0,   0,  91, 
      0,   0,  22,  55,   0,  20,  22,  55,  22,  55,   0,  20,  22,  55,   0,   0, 
      0,  20,   0,   0,   0,   0,  20,  92,   0,   0,  55,  21,   0,  93,  21,  21, 
      0,  94,  21,  21,   0,  21,  21,  21,  22,  21,  21,  21,  95,   0,   0,  96, 
      0,   0,  97,  21,   0,   0,  98,  21,  38,   0,   0,   0,   0,   0,   0,  55, 
      0,   0,  20,  19,   0,  24,  99,  19, 100,   0,   0,   0,   0,  57,   1, 101, 
      0,  61,   0,   0,   0, 100,   0,  21,   0,   0,  24,  10,   1,   0,   0,  38, 
      0,   0, 102,  19,   0, 103,   0,   0, 104,  21,  21,   0,   0,  89,  68,   0, 
      0,   0,  55,  25, 105,   9,  12,   4, 106,   8, 107,  91,  20,  21,  21,  21, 
     28,   1,  28, 108, 109,   1,   1,   1,   1, 110,  21,  21,  21,  21,  21, 111, 
      0,  55,   0,  55,   0,   0,  76,  76,   0,  22,   0,   0,   0,  19,   0,  25, 
     19,  22,   0,  20,   0,  38,  19,   0,  55,   0,   0,   0, 112,   1, 113,  64, 
    114, 115, 116,   4, 117,  21,  21,  21,   0,  20,  21,  21,   0,   0,  20,  22, 
      0,   0,   0,  24,  58,  21,  25,   0,   0,  55,  21,  68,  38,  21,  21, 118, 
      0,  20,   0,  20,   0,   0,  23,   0,   0,   0, 119, 120,   0,  20, 121,   0, 
     21,  25,   0,   0,   0,  21,  21, 122, 122,   0,  21,  21,  21,  21,  19,   0, 
      0,  95,   0,   0,   0,  93,  21,  19, 122,   0,   0,  21,   0,   0, 123,  79, 
    124,  21,  21,  68,  89,   0,   0,   0, 100,   0,   0,  23,   0,   0,  55,   0, 
    125, 126,  64,  46, 127,  21,  21,  21,  21,  21,  68,   0,  25,  20,  25,  20, 
     25,  20,  21,  21,   0,   0,   0,  70,   0,  20,  68,   0,  68,   0,  21, 128, 
      0,  20,   0,  66,  23,  22,   0,   0,  68,   0,   0,   0,  19,   0,   0,   0, 
     20,   0,   0,   0,   0,  20,   0,  21,   0,   0,   0,  65,  19,   0,  19,   0, 
     19,   0,  19,  38,  21,  21,  25,  55,   0,   0,   0,  25,   0,   0,  20,  23, 
     20,  68,   0,   0,   0,  68,   0,   0,   0,   0,   0, 129,   0,  21,   0,   0, 
      0,  55,  22,   0,   0,  23,  38,  65,   0,  23,   0,   0,   0,   0,   0,  68, 
      0,   0,  55,  68,   0,  26,  21, 130,   0,  25,  25,   0,   0,  21, 131, 118, 
      0,   0,  38,  21,   0,  55,   0,   0,  20,  21,   0,   0,   0,  95,   0,  55, 
      0,   0, 132,   0,   0, 133, 134, 135, 136,   0, 123,   4, 137,  57,  30,   0, 
      0,   0,  46, 122,  46, 138,  21,  21,  60,  26,  25,  22,   0,   0,  23,  25, 
      0,  25,   0,   0,   0,  23,  20,  25,   0,  22,   0,  22,   0,   0,  23,  20, 
      0,  66,  19,   0,   0,   0,   0,  19,  25,   0,   0,  20,   0,  22,  20,  21, 
      0,   0,  25,  38,  22,  66,  66,  20,   0,  55,   0,  71,  38,  25,   0,   0, 
};

RE_UINT8 re_canonical_combining_class_stage_5[] = {
     1,  1,  1,  1, 51, 51, 51, 51, 51, 52, 46, 46, 46, 46, 52, 44, 
    46, 46, 46, 46, 46, 42, 42, 46, 46, 46, 46, 42, 42, 46, 46, 46, 
     2,  2,  2,  2,  2, 46, 46, 46, 46, 51, 51, 51, 51, 55, 51, 46, 
    46, 46, 51, 51, 51, 46, 46,  1, 51, 51, 51, 46, 46, 46, 46, 51, 
    52, 46, 46, 51, 53, 54, 54, 53, 54, 54, 53, 51,  0,  0,  1,  1, 
     1,  1,  1,  0,  0,  0,  0,  0,  1,  0,  1,  1,  1,  1,  0,  1, 
     1,  1,  1, 51,  0,  1,  1,  1,  0,  1,  1,  0,  0, 46, 51, 51, 
    51, 51, 46, 51, 51, 51, 47, 46, 51, 51, 46, 46, 51, 47, 50, 51, 
     6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 15, 16, 17, 18,  1, 19, 
     1, 20, 21,  1, 51, 46,  1, 14,  1,  0,  0,  0, 26, 27, 28,  1, 
     1,  1,  1, 23, 24, 25, 26, 27, 28, 29, 30, 51, 51, 46, 46, 51, 
    46, 51, 51, 46, 31,  1,  1,  1,  1,  1, 51, 51, 51,  1,  1, 51, 
    51,  1, 46, 51, 51, 46,  1,  1,  1, 32,  1,  1, 51, 46, 51, 51, 
    46, 46, 51, 46, 46, 51, 46, 51, 46, 51, 51,  0,  1,  1,  0,  0, 
    51, 51,  1, 51,  1, 51, 51, 51, 51, 51,  0,  0,  1, 46, 46, 46, 
     0,  0,  1,  0,  3,  1,  1,  1,  1,  5,  1,  1,  1, 51, 46, 51, 
    51,  1,  1,  1,  1,  0,  0,  1,  1,  0,  1,  0,  1,  5,  1,  0, 
     0,  0,  0,  1,  3,  0,  1,  1,  1,  5,  0,  0,  0,  1,  0,  0, 
     0, 33, 34,  0,  0,  0,  5,  0, 35, 35,  5,  0, 36, 36, 36, 36, 
     0,  1,  0,  1, 37, 37,  0,  1, 38, 38, 38, 38, 46, 46,  1,  1, 
     1, 46,  1, 46,  1, 44,  1,  1,  0, 39, 40,  1, 41,  1,  1,  1, 
     1,  1, 40, 40, 40, 40,  1,  1, 40,  1, 51, 51,  5,  1, 51, 51, 
     1,  1, 46,  1,  1,  1,  1,  3,  1,  5,  5,  1,  1, 46,  1,  1, 
     0, 51, 51, 51,  5,  0,  0,  0,  5,  1,  1,  0,  1,  1,  5,  1, 
     1, 51,  0,  0,  1, 50,  1,  0,  1, 47, 51, 46, 46,  1,  1,  1, 
     5,  1,  1,  1, 51,  0,  0, 46,  1,  1,  5,  0,  1,  1,  3,  1, 
     1,  1,  5,  5, 51, 51, 51,  1, 51,  1,  2,  2,  2,  1,  1,  1, 
    51, 54, 43, 46, 42, 51, 51, 51, 51, 51, 51,  0, 53, 46, 51, 46, 
    51, 51,  2,  2,  2,  2,  2, 51,  1, 51,  1,  1,  1,  2,  2, 51, 
    46, 51,  2,  2, 51,  0,  0,  0,  0,  0,  0,  5,  1,  1, 45, 50, 
    52, 47, 48, 48,  0,  4,  4,  1, 51, 51,  1,  1,  1,  1,  1, 46, 
     1,  1,  1,  5, 51,  1, 51, 51, 46,  1,  1, 51,  1, 51,  1,  0, 
     0,  1, 22,  1,  1, 46,  0,  0,  1, 46,  1, 51, 51,  2, 46,  0, 
     1,  5,  3,  1,  1, 44, 44,  2,  2,  2,  1,  1,  1, 49, 44, 44, 
    44, 44, 44,  1, 46, 46, 46,  1, 51,  1,  0,  0, 
};

/* Canonical_Combining_Class: 3644 bytes. */

RE_UINT32 re_get_canonical_combining_class(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 12;
    code = ch ^ (f << 12);
    pos = ((RE_UINT32)re_canonical_combining_class_stage_1[f] << 4);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_canonical_combining_class_stage_2[pos + f] << 4);
    f = code >> 4;
    code ^= (f << 4);
    pos = ((RE_UINT32)re_canonical_combining_class_stage_3[pos + f] << 2);
    f = code >> 2;
    code ^= (f << 2);
    pos = ((RE_UINT32)re_canonical_combining_class_stage_4[pos + f] << 2);
    value = re_canonical_combining_class_stage_5[pos + code];

    return value;
}

/* Decomposition_Type. */

RE_UINT8 re_decomposition_type_stage_1[] = {
    0, 1, 2, 2, 2, 3, 4, 5, 6, 2, 2, 2, 2, 2, 7, 8, 
    2, 2, 2, 2, 2, 2, 2, 9, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 
};

RE_UINT8 re_decomposition_type_stage_2[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  7,  8,  9, 10, 11, 12, 13, 14, 
    15,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 16,  7, 17, 18, 19, 
    20, 21, 22, 23, 24,  7,  7,  7,  7,  7, 25,  7, 26, 27, 28, 29, 
    30, 31, 32, 33,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  7,  7,  7,  7, 34,  7,  7,  7,  7, 35, 35, 35, 35, 
    35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 
    35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 
    35, 35, 35, 35, 35, 35, 35, 36,  7,  7,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  7,  7,  7,  7,  7,  7, 35, 37, 38, 39, 40, 41, 42, 
     7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 
    43,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 
     7, 44,  7,  7, 45, 46, 47, 48,  7,  7,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 
     7, 49, 50,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 
     7,  7,  7,  7,  7,  7,  7,  7, 35, 35, 51,  7,  7,  7,  7,  7, 
};

RE_UINT8 re_decomposition_type_stage_3[] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   2,   3,   4,   3,   5, 
      6,   7,   8,   9,  10,  11,   8,  12,   0,   0,  13,  14,  15,  16,  17,  18, 
      6,  19,  20,  21,   0,   0,   0,   0,   0,   0,   0,  22,   0,  23,  24,   0, 
      0,   0,   0,   0,  25,   0,   0,  26,  27,  14,  28,  14,  29,  30,   0,  31, 
     32,  33,   0,  33,   0,  32,   0,  34,   0,   0,   0,   0,  35,  36,  37,  38, 
      0,   0,   0,   0,   0,   0,   0,   0,  39,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,  40,   0,   0,   0,   0,  41,   0,   0,   0,   0,  42,  43,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,  33,  44,   0,  45,   0,   0,   0,   0,   0,   0,  46,  47,   0,   0, 
      0,   0,   0,  48,   0,  49,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  50,  51,   0,   0,   0,  52,   0,   0,  53,   0,   0,   0, 
      0,   0,   0,   0,  54,   0,   0,   0,   0,   0,   0,   0,  55,   0,   0,   0, 
      0,   0,   0,   0,  53,   0,   0,   0,   0,   0,   0,   0,   0,  56,   0,   0, 
      0,   0,   0,  57,   0,   0,   0,   0,   0,   0,   0,  57,   0,  58,   0,   0, 
     59,   0,   0,   0,  60,  61,  33,  62,  63,  60,  61,  33,   0,   0,   0,   0, 
      0,   0,  64,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  65, 
     66,  67,   0,  68,  69,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,  70,  71,  72,  73,  74,  75,   0,  76,  73,  73,   0,   0,   0,   0, 
      6,   6,   6,   6,   6,   6,   6,   6,   6,  77,   6,   6,   6,   6,   6,  78, 
      6,  79,   6,   6,  79,  80,   6,  81,   6,   6,   6,  82,  83,  84,   6,  85, 
     86,  87,  88,  89,  90,  91,   0,  92,  93,  94,  95,   0,   0,   0,   0,   0, 
     96,  97,  98,  99, 100, 101, 102, 102, 103, 104, 105,   0, 106,   0,   0,   0, 
    107,   0, 108, 109, 110,   0, 111, 112, 112,   0, 113,   0,   0,   0, 114,   0, 
      0,   0, 115,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 116, 117, 102, 102, 102, 118, 116, 116, 119,   0, 
    120,   0,   0,   0,   0,   0,   0, 121,   0,   0,   0,   0,   0, 122,   0,   0, 
      0,   0,   0,   0,   0,   0,   0, 123,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 124,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0, 125,   0,   0,   0,   0,   0,  57, 
    102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 126,   0,   0, 
    127,   0,   0, 128, 129, 130, 131, 132,   0, 133, 129, 130, 131, 132,   0, 134, 
      0,   0,   0, 135, 102, 102, 102, 102, 136, 137,   0,   0,   0,   0,   0,   0, 
    102, 136, 102, 102, 138, 139, 116, 140, 116, 116, 116, 116, 141, 116, 116, 140, 
    142, 142, 142, 142, 142, 143, 102, 144, 142, 142, 142, 142, 142, 142, 102, 145, 
      0,   0,   0,   0,   0,   0,   0, 146,   0,   0,   0,   0,   0,   0,   0,   0, 
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  21,   0,   0,   0,   0,   0, 
     81, 147, 148,   6,   6,   6,  81,   6,   6,   6,   6,   6,   6,  78,   0,   0, 
    149, 150, 151, 152, 153, 154, 155, 155, 156, 155, 157, 158,   0, 159, 160, 161, 
    162, 162, 162, 162, 162, 162, 163, 164, 164, 165, 166, 166, 166, 167, 168, 169, 
    162, 170, 171, 172,   0, 173, 174, 175, 176, 177, 164, 178, 179,   0,   0, 180, 
      0, 181,   0, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 191, 192, 193, 
    194, 195, 195, 195, 195, 195, 196, 197, 197, 197, 197, 198, 199, 200, 201,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0, 202, 203,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0, 204, 205,   0,   0,   0,   0, 206,  14,   0,   0,   0, 
    207, 207, 207, 207, 207, 208, 207, 207, 207, 209, 210, 211, 212, 207, 207, 207, 
    213, 214, 207, 215, 216, 217, 207, 207, 207, 207, 207, 207, 207, 207, 207, 207, 
    207, 207, 207, 207, 207, 207, 207, 207, 207, 207, 218, 207, 207, 207, 207, 207, 
    207, 207, 207, 207, 207, 207, 207, 207, 207, 207, 207, 207, 219, 207, 207, 207, 
    220, 102, 221, 142, 142,   0,   0,   0,   0, 222,   0,   0,   0,   0,   0,   0, 
    223, 142, 142, 224, 225, 226,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      6,  81,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
};

RE_UINT8 re_decomposition_type_stage_4[] = {
      0,   0,   0,   0,   1,   0,   2,   3,   4,   5,   6,   7,   8,   9,   8,   8, 
     10,  11,  10,  12,  10,  11,  10,   9,   8,   8,   8,   8,  13,   8,   8,   8, 
      8,  12,   8,   8,  14,   8,  10,  15,  16,   8,  17,   8,  12,   8,   8,   8, 
      8,   8,   8,  15,  12,   0,   0,  18,  19,   0,   0,   0,   0,  20,  20,  21, 
      8,   8,   8,  22,   8,  13,   8,   8,  23,  12,   8,   8,   8,   8,   8,  13, 
      0,  13,   8,   8,   8,   0,   0,   0,  24,  24,  25,   0,   0,   0,  20,   5, 
     24,  25,   0,   0,   9,  19,   0,   0,   0,  19,  26,  27,   0,  21,  11,  22, 
      0,   0,  13,   8,   0,   0,  13,  11,  28,  29,   0,   0,  30,   5,  31,   0, 
      9,  18,   0,  11,   0,   0,  32,   0,   0,  13,   0,   0,  33,   0,   0,   0, 
      8,  13,  13,   8,  13,   8,  13,   8,   8,  12,  12,   0,   0,   3,   0,   0, 
     13,  11,   0,   0,   0,  34,  35,   0,  36,   0,   0,   0,  18,   0,   0,   0, 
     32,  19,   0,   0,   0,   0,   8,   8,   0,   0,  18,  19,   0,   0,   0,   9, 
     18,  27,   0,   0,   0,   0,  10,  27,   0,   0,  37,  19,   0,   0,   0,  12, 
      0,  19,   0,   0,   0,   0,  13,  19,   0,   0,  19,   0,  19,  18,  22,   0, 
      0,   0,  27,  11,   3,   0,   0,   0,   0,   0,   0,   5,   0,   0,   0,   1, 
     18,   0,   0,  32,  27,  18,   0,  19,  18,  38,  17,   0,  32,   0,   0,   0, 
      0,  27,   0,   0,   0,   0,   0,  25,   0,  27,  36,  36,  27,   0,   0,   0, 
      0,   0,  18,  32,   9,   0,   0,   0,   0,   0,   0,  39,  24,  24,  39,  24, 
     24,  24,  24,  40,  24,  24,  24,  24,  41,  42,  43,   0,   0,   0,  25,   0, 
      0,   0,  44,  24,   8,   8,  45,   0,   8,   8,  12,   0,   8,  12,   8,  12, 
      8,   8,  46,  46,   8,   8,   8,  12,   8,  22,   8,  47,  21,  22,   8,   8, 
      8,  13,   8,  10,  13,  22,   8,  48,  49,  50,  30,   0,  51,   3,   0,   0, 
      0,  30,   0,  52,   3,  53,   0,  54,   0,   3,   5,   0,   0,   3,   0,   3, 
     55,  24,  24,  24,  42,  42,  42,  43,  42,  42,  42,  56,   0,   0,  35,   0, 
     57,  34,  58,  59,  59,  60,  61,  62,  63,  64,  65,  66,  66,  67,  68,  59, 
     69,  61,  62,   0,  70,  70,  70,  70,  20,  20,  20,  20,   0,   0,  71,   0, 
      0,   0,  13,   0,   0,   0,   0,  27,   0,   0,   0,  10,   0,  19,  32,  19, 
      0,  36,   0,  72,  35,   0,   0,   0,  32,  37,  32,   0,  36,   0,   0,  10, 
     12,  12,  12,   0,   0,   0,   0,   8,   8,   0,  13,  12,   0,   0,  33,   0, 
     73,  73,  73,  73,  73,  20,  20,  20,  20,  74,  73,  73,  73,  73,  75,   0, 
      0,   0,   0,  35,   0,  30,   0,   0,   0,   0,   0,  19,   0,   0,   0,  76, 
      0,   0,   0,  44,   0,   0,   0,   3,  20,   5,   0,   0,  77,   0,   0,   0, 
      0,  26,  30,   0,   0,   0,   0,  36,  36,  36,  36,  36,  36,  46,  32,   0, 
      9,  22,  33,  12,   0,  19,   3,  78,   0,  37,  11,  79,  34,  20,  20,  20, 
     20,  20,  20,  30,   4,  24,  24,  24,  20,  73,   0,   0,  80,  73,  73,  73, 
     73,  73,  73,  75,  20,  20,  20,  81,  81,  81,  81,  81,  81,  81,  20,  20, 
     82,  81,  81,  81,  20,  20,  20,  83,  25,   0,   0,   0,  36,  10,   8,  11, 
     36,  33,  13,  12,  20,  30,   0,   0,   3,  20,   0,  46,  59,  59,  84,   8, 
      8,  11,   8,  36,   9,  22,   8,  15,  85,  86,  86,  86,  86,  86,  86,  86, 
     86,  85,  85,  85,  87,  85,  86,  86,  88,   0,   0,   0,  89,  90,  91,  92, 
     85,  87,  86,  85,  85,  85,  93,  87,  94,  94,  94,  94,  94,  95,  95,  95, 
     95,  95,  95,  95,  95,  96,  97,  97,  97,  97,  97,  97,  97,  97,  97,  98, 
     99,  99,  99,  99,  99, 100,  94,  94, 101,  95,  95,  95,  95,  95,  95, 102, 
     97,  99,  99, 103, 104,  97, 105, 106, 107, 105, 108, 105, 104,  96,  95, 105, 
     96, 109, 110,  97, 111, 106, 112, 105,  95, 106, 113,  95,  96, 106,   0,   0, 
     94,  94,  94, 114, 115, 115, 116,   0, 115, 115, 115, 115, 115, 117, 118,  20, 
    119, 120, 120, 120, 120, 119, 120,   0, 121, 122, 123, 123, 124,  91, 125, 126, 
     90, 125, 127, 127, 127, 127, 126,  91, 125, 127, 127, 127, 127, 127, 127, 127, 
    127, 127, 127, 126, 125, 126,  91, 128, 129, 130, 130, 130, 130, 130, 130, 130, 
    131, 132, 132, 132, 132, 132, 132, 132, 132, 132, 132, 133, 134, 132, 134, 132, 
    134, 132, 134, 135, 130, 136, 132, 133,   0,   0,  27,  19,   0,   0,  18,   0, 
      0,   0,   0,  13,   8,  19,   0,   0,   0,   0,  18,   8,  59,  59,  59,  59, 
     59, 137,  59,  59,  59,  59,  59, 137, 138, 139,  61, 137,  59,  59,  66,  61, 
     59,  61,  59,  59,  59,  66, 140,  61,  59, 137,  59, 137,  59,  59,  66, 140, 
     59, 141, 142,  59, 137,  59,  59,  59,  59,  62,  59,  59,  59,  59,  59, 142, 
     20,  20,  30,   0,  20,  20, 143,  75, 144,   0,   0,   0, 145,   0,   0,   0, 
     81,  81, 145,   0,  20,  20,  35,   0, 146,   0,   0,   0, 
};

RE_UINT8 re_decomposition_type_stage_5[] = {
     0,  0,  0,  0,  4,  0,  0,  0,  2,  0, 10,  0,  0,  0,  0,  2, 
     0,  0, 10, 10,  2,  2,  0,  0,  2, 10, 10,  0, 17, 17, 17,  0, 
     1,  1,  1,  1,  1,  1,  0,  1,  0,  1,  1,  1,  1,  1,  1,  0, 
     1,  1,  0,  0,  0,  0,  1,  1,  1,  0,  2,  2,  1,  1,  1,  2, 
     2,  0,  0,  1,  1,  2,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0, 
     2,  2,  2,  2,  2,  1,  1,  1,  1,  0,  1,  1,  1,  2,  2,  2, 
    10, 10, 10, 10, 10,  0,  0,  0,  0,  0,  2,  0,  0,  0,  1,  0, 
     2,  2,  2,  1,  1,  2,  2,  0,  2,  2,  2,  0,  0,  2,  0,  0, 
     0,  1,  0,  0,  0,  1,  1,  0,  0,  2,  2,  2,  2,  0,  0,  0, 
     1,  0,  1,  0,  1,  0,  0,  1,  0,  1,  1,  2, 10, 10, 10,  0, 
    10, 10,  0, 10, 10, 10, 11, 11, 11, 11, 11, 11, 11, 11, 11,  0, 
     0,  0,  0, 10,  1,  1,  2,  1,  0,  1,  0,  1,  1,  2,  1,  2, 
     1,  1,  2,  0,  1,  1,  2,  2,  2,  2,  2,  4,  0,  4,  0,  0, 
     0,  0,  0,  4,  2,  0,  2,  2,  2,  0,  2,  0, 10, 10,  0,  0, 
    11,  0,  0,  0,  2,  2,  3,  2,  0,  2,  3,  3,  3,  3,  3,  3, 
     0,  3,  2,  0,  0,  3,  3,  3,  3,  3,  0,  0, 10,  2, 10,  0, 
     3,  0,  1,  0,  3,  0,  1,  1,  3,  3,  0,  3,  3,  2,  2,  2, 
     2,  3,  0,  2,  3,  0,  0,  0, 17, 17, 17, 17,  0, 17,  0,  0, 
     2,  2,  0,  2,  9,  9,  9,  9,  2,  2,  9,  9,  9,  9,  9,  0, 
    11, 10,  0,  0, 13,  0,  0,  0,  2,  0,  1, 12,  0,  0,  1, 12, 
    16,  9,  9,  9, 16, 16, 16, 16,  2, 16, 16, 16,  2,  2,  2, 16, 
     3,  3,  1,  1,  8,  7,  8,  7,  5,  6,  8,  7,  8,  7,  5,  6, 
     8,  7,  0,  0,  0,  0,  0,  8,  7,  5,  6,  8,  7,  8,  7,  8, 
     7,  8,  8,  7,  5,  8,  7,  5,  8,  8,  8,  8,  7,  7,  7,  7, 
     7,  7,  7,  5,  5,  5,  5,  5,  5,  5,  5,  6,  6,  6,  6,  6, 
     6,  8,  8,  8,  8,  7,  7,  7,  7,  5,  5,  5,  7,  8,  0,  0, 
     5,  7,  5,  5,  7,  5,  7,  7,  5,  5,  7,  7,  5,  5,  7,  5, 
     5,  7,  7,  5,  7,  7,  5,  7,  5,  5,  5,  7,  0,  0,  5,  5, 
     5,  7,  7,  7,  5,  7,  5,  7,  8,  0,  0,  0, 12, 12, 12, 12, 
    12, 12,  0,  0, 12,  0,  0, 12, 12,  2,  2,  2, 15, 15, 15,  0, 
    15, 15, 15, 15,  8,  6,  8,  0,  8,  0,  8,  6,  8,  6,  8,  6, 
     8,  8,  7,  8,  7,  8,  7,  5,  6,  8,  7,  8,  6,  8,  7,  5, 
     7,  0,  0,  0,  0, 13, 13, 13, 13, 13, 13, 13, 13, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14,  0,  0,  0, 14, 14, 14,  0,  0,  0, 
    13, 13, 13,  0,  3,  0,  3,  3,  0,  0,  3,  0,  0,  3,  3,  0, 
     3,  3,  3,  0,  3,  0,  3,  0,  0,  0,  3,  3,  2,  2,  2,  9, 
    16,  0,  0,  0, 16, 16, 16,  0,  9,  9,  0,  0, 
};

/* Decomposition_Type: 2784 bytes. */

RE_UINT32 re_get_decomposition_type(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 13;
    code = ch ^ (f << 13);
    pos = ((RE_UINT32)re_decomposition_type_stage_1[f] << 5);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_decomposition_type_stage_2[pos + f] << 4);
    f = code >> 4;
    code ^= (f << 4);
    pos = ((RE_UINT32)re_decomposition_type_stage_3[pos + f] << 2);
    f = code >> 2;
    code ^= (f << 2);
    pos = ((RE_UINT32)re_decomposition_type_stage_4[pos + f] << 2);
    value = re_decomposition_type_stage_5[pos + code];

    return value;
}

/* East_Asian_Width. */

RE_UINT8 re_east_asian_width_stage_1[] = {
     0,  1,  2,  3,  4,  5,  5,  5,  5,  5,  6,  5,  5,  7,  8,  9, 
    10, 11, 12, 13, 14, 14, 15, 14, 14, 14, 14, 16, 14, 17, 14, 18, 
     5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5, 19, 
     5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5, 19, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    20, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
     8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8, 21, 
     8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8, 21, 
};

RE_UINT8 re_east_asian_width_stage_2[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 
    16, 17, 18, 19, 20, 20, 21, 22, 23, 24, 25, 26, 27, 28, 20, 29, 
    30, 31, 32, 33, 34, 35, 36, 37, 20, 38, 20, 39, 40, 41, 42, 43, 
    44, 45, 46, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 
    47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 48, 47, 47, 
    47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 
    47, 47, 47, 47, 49, 20, 50, 51, 52, 53, 54, 55, 47, 47, 47, 47, 
    47, 47, 47, 47, 47, 47, 47, 56, 57, 57, 57, 57, 57, 57, 57, 57, 
    58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 
    58, 58, 58, 58, 58, 58, 58, 58, 58, 47, 47, 59, 20, 60, 61, 62, 
    63, 64, 65, 66, 67, 57, 57, 57, 68, 69, 70, 71, 72, 57, 73, 57, 
    74, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 
    20, 20, 20, 75, 76, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 
    20, 20, 20, 20, 77, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 
    57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 
    57, 57, 57, 57, 57, 57, 57, 57, 20, 20, 78, 57, 57, 57, 57, 57, 
    79, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 
    80, 81, 82, 83, 84, 85, 86, 87, 57, 57, 57, 57, 57, 57, 57, 57, 
    88, 89, 90, 91, 92, 93, 94, 95, 57, 57, 57, 57, 57, 57, 57, 57, 
    47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 96, 
    97, 98, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 
    58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 99, 
};

RE_UINT8 re_east_asian_width_stage_3[] = {
      0,   0,   1,   1,   1,   1,   1,   2,   0,   0,   3,   4,   5,   6,   7,   8, 
      9,  10,  11,  12,  13,  14,  11,   0,   0,   0,   0,   0,  15,  16,   0,   0, 
      0,   0,   0,   0,   0,   9,   9,   0,   0,   0,   0,   0,  17,  18,   0,   0, 
     19,  19,  19,  19,  19,  19,  19,  20,  21,  22,  23,  22,  24,   0,   0,   0, 
      9,  19,  19,  19,  19,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,  25,  26,   0,  27,  26,   0,  28,  26,   0,   0,  25,   0,  29,  30, 
     31,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     33,   0,   0,   0,  34,   0,   0,   0,   0,   0,   0,  35,   0,   0,   0,  29, 
      0,   0,  36,  37,   0,  38,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39, 
      0,   0,   0,   0,   0,   0,   0,  40,  41,  42,  43,  44,  45,  46,  31,  47, 
     48,  42,  43,  49,  50,  51,  52,  53,  54,  55,  43,  56,  57,  58,  31,  59, 
     41,  42,  43,  56,  60,  61,  31,  25,  62,  63,  64,  65,  66,  67,  52,  29, 
     68,  69,  43,  70,  71,  72,  31,  73,  74,  69,  43,  75,  71,  76,  31,  77, 
     74,  69,   0,  34,  78,  79,  31,  80,  81,  82,   0,  83,  84,  85,  39,  86, 
     26,   0,   0,  87,   0,  47,  39,  39,  88,  89,  90,  91,  92,  93,  39,  39, 
      0,   0,   0,   0,  40,   0,  94,  26,   0,  40,   0,  95,  95,  29,  39,  39, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  53,   0,   0,  94, 
     96,  96,  96,  96,  96,  96,   0,   0,   0,   0,  97,   0,   0,   0,   0,  98, 
      0,   0,   0,   0,  99, 100,   0,   0,  99,   0,   0, 101, 102, 103,   0,   0, 
      0, 102,   0,   0,   0,  34,   0,  94,   0, 104,   0,   0,   0,   0,   0,  30, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  94,   0,   0,   0,   0,   0,  58, 
     95,  30,   0, 105,   0, 106,  95, 107,   0,   0,   0,   0,   0,  36, 104, 104, 
     37, 104,   0,   0,   0,   0,   0,  25,   0,   0,  29,   0,   0,   0,   0,  53, 
      0,  94,  47,  47, 108,   0,  36,  30,   0,   0,  47,   0, 104, 109,   0,   0, 
      0,  32,   0,   0,   0,  37,   0, 110, 104, 104,  36,  39,  39,  39,  39,  39, 
      0,   0,   0,   0,  47,   0,   0,  94,   0,   0, 109, 104,   0,   0,   0, 111, 
      0,   0,   0, 112, 113,   0,   0,   0,  39,  39,  39,  39,  39,   0,   0, 114, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 105, 115, 
      0, 116,   0,   0, 116, 117,   0,  36,   0,   0,   0, 118, 118, 119,   0, 120, 
      0, 121, 122, 123,   0,   0, 124, 125, 126,  94, 127, 104,  39,   0,   0,  58, 
    128, 129, 130,   0,   0, 131, 132, 133, 134, 133,   0, 135,   0, 136, 137,   0, 
    138, 139, 140, 141, 142, 143, 144,   0, 145, 146, 147, 148,   0,   0,   0,   0, 
      0, 143, 149,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 106, 
      0,   0, 105,  39,  29,  39,  19,  19,  19,  19,  19,  19,  19,  19, 150,  19, 
     19,  19,  19,  19, 132,  19,  19, 151,  19, 152,  24, 153, 154, 155, 156,   0, 
    157, 158,   0,   0, 159,   0, 160,   0,   0, 161,   0, 161, 162,  19, 163,  19, 
     26,   0,   0, 164,   0, 137,   0, 165,   0,   0,   0,   0, 166,   0, 167,   0, 
      0,   0,   0,   0,   0,   0,   0,   0, 168,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  94, 169,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39, 
      0,   0,  37,   0,   0,  37,   0,   0,   0,   0,   0,   0,   0,   0,   0, 170, 
      0,   0,  53,   0,   0,   0, 171, 172,   0, 105, 173, 173, 173, 173,   0,   0, 
      0,   0,   0,  35,  39,  39,  39,  39,  96, 174,  96,  96,  96,  96,  96, 175, 
     96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96, 176,  39, 177, 
    178,  96,  96, 179, 180,  96,  96,  96,  96, 181,  96,  96,  96,  96,  96,  96, 
    182,  96, 183, 180,  96,  96,  96,  96, 184,  96,  96, 185,  96,  96, 175,  96, 
     96, 184,  96,  96, 186,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96, 184, 
     96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96, 
     96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,   0,   0,   0,   0, 
     96,  96,  96,  96,  96,  96,  96,  96, 187,  96,  96,  96, 188,   0,   0,   0, 
      0,   0,  47,  39,   0,   0,   0, 111,   0,  25,   0,   0,   0,   0,   0,  25, 
      0,   0,   0,   0,   0,   0,   0,   0,  37,  35, 104,  39,  39,  39,  39, 189, 
      0,   0,  47, 104,   0,   0,   0,  25,   0,   0,   0,   0, 190, 104,   0,  47, 
      0,   0,   0,   0,   0, 191,  96, 187,   0,   0,   0,   0,  33,  65,  39,  39, 
      0,   0,   0, 105,  36, 192,   0,  47,   0,   0,   0,   0, 114, 193,  39,  39, 
    194, 195, 173,  39,  39,  39,  39,  39,  39,  39,  39,  39,   0,   0,  36, 104, 
     96,  96,  96,  96,  96,  96,  96,  96,  96,  96, 175,  96, 196,  96,  96, 177, 
     39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39, 
     19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19, 
    105, 197,   0, 198, 199,   0,   0,   0,   0,   0,   0,   0,  35, 200,   0,   0, 
      0,   0,   0,   0,  39,   0,   0,   0,   0, 201,   0,   0,  25,  39,  39,  36, 
     19, 202, 105,  96,  96, 203, 204, 118,   0,   0,   0,   0,   0,   0,   0, 110, 
    205, 206, 206, 206, 206, 206, 207, 208, 208, 208, 208, 209, 210, 211, 212, 213, 
    214,   0, 103, 215,  36,  36,  39,  39,   0,   0,   0,   0,   0,   0,   0,  29, 
    216,   0,   0, 217,   0,   0,   0,   0,  29,  47,  39,  39,  39,   0,   0,  36, 
     39,  39,  39,  39,  39,  39,  39,  39,   0,  94,   0,   0,   0,  58,  39,  39, 
      0,  37, 106,   0,  29,  39,  39,  39,   0,  33,   0,   0, 218,  53,  39,  39, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  36, 104,  39,  39,  39,  39,  39, 
    219,   0,   0, 220,   0, 221,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39, 
      0, 222,   0, 223,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39, 
    224, 225,   0, 226,  25, 227,   0,   0,  39,  39,  39,  39,  39,  39,  39,  39, 
      0,   0,   0,  80,   0, 228,   0, 229,  39,  39,  39,  39,  39,  39,  39,  39, 
      0,   0,   0,   0, 227,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39, 
     39,  39,  39,  39,  39,  39,   0,  37,  39,  39,  39,  39,  39,  39,  39,  39, 
      0,   0,   0,   0,  36, 201,   0,  39,   0,   0,   0,   0,  35,  39,  39,  39, 
      0,   0,   0,   0,   0,   0,  37,  39,  39,  39,  39,  39,  39,  39,  39,  39, 
      0,   0,   0,   0,   0,   0, 114, 106,  39,  39,  39,  39,  39,  39,  39,  39, 
      0,   0,  37,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39, 
      0,   0,   0, 227,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39, 
    230,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  53, 
      0,   0,  27,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  36,  39,  39, 
      0,   0,   0,   0,  53,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39, 
      0,   0,   0,   0,   0, 105,   0,  35,  39,  39,  39,  39,  39,  39,  39,  39, 
      0,   0,   0,   0,   0, 118,   0,   0,   0,  95, 231, 232, 233,   0,   0,   0, 
    234, 235,   0, 236, 237,  69,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 228,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32,   0,   0,   0, 
      0,   0,  47,   0,   0,   0,   0,   0,   0, 106,  37, 238,  26,  26,  39,  39, 
    239,  19, 240,  19,  19,  19, 241,  19,  19, 239,  39,  39,  39,  39,  52,   0, 
    242,  96,  96, 185, 243, 230,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39, 
      0,   0,  58, 221,   0,   0,   0,  94,   0, 106,   0,   0, 244,  39,   0,  58, 
      0,   0,   0,  37,  69,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 245, 
      0,   0,   0,  36,  39,   0,  25,  39,  39,  39,  39,  39,  39,  39,  39, 193, 
     26, 246, 247, 233, 248,  39,  39,  39,   0,   0,   0,   0,  53,  39,  39,  39, 
      0,   0,   0,   0,   0,   0,   0, 106,  39,  39,  39,  39,  39,  39,  39,  39, 
     96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96, 183, 
     59,  39,   0,   0,   0,   0,   0,   0,  39,  39,  39,  39,  39,  39,  39,  39, 
     19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  39, 
     19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19, 249, 
};

RE_UINT8 re_east_asian_width_stage_4[] = {
     0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  2,  3,  4,  5,  6, 
     7,  8,  9,  7,  0, 10,  0,  0, 11, 12, 11, 13, 14, 10,  9, 14, 
     8, 12,  9,  5, 15,  0,  0,  0, 16,  0, 12,  0,  0, 13, 12,  0, 
    17,  0, 11, 12,  9, 11,  7, 15, 13,  0,  0,  0,  0,  0,  0, 10, 
     5,  5,  5, 11,  0, 18, 17, 15, 11,  0,  7, 16,  7,  7,  7,  7, 
     0,  0, 19, 20, 21,  0, 20, 22, 17,  7,  7,  7, 23,  7, 14,  0, 
    24,  7, 14,  0,  0,  0, 21, 21, 25,  0,  0,  0,  0, 20, 25,  0, 
     0,  0, 26, 21,  0,  0, 20, 21,  0, 27, 21, 21,  0, 19,  0,  0, 
     0,  0,  0, 19,  0,  0,  0, 28,  0,  0, 20, 25, 29, 21, 21, 21, 
     0,  0,  0, 29,  0,  0,  0, 20,  0,  0,  0, 30, 21, 21, 21, 21, 
     0,  0, 25,  0, 25, 25,  0, 31, 31,  0,  0,  0,  0,  0, 22,  0, 
    32, 19, 29,  0,  0, 31, 31, 20, 21, 33, 21, 28,  0,  0,  0, 21, 
    25, 25, 20, 33, 22, 26, 29, 22, 20, 33, 31, 29, 34, 21, 25, 32, 
    21, 19,  0,  0,  0, 29, 21, 21, 25, 25,  0, 28, 28,  0,  0,  0, 
    22, 25, 29,  0,  0, 28, 28, 29, 27, 21, 21, 21, 34, 21, 21, 21, 
     0, 31, 31, 29, 21, 19, 21, 28, 19, 25, 20, 19, 22, 29, 26, 22, 
    33, 27, 20, 19,  0,  0, 29, 19, 20, 19, 22, 29, 27, 33, 21, 21, 
    25, 25,  0, 22, 22,  0,  0,  0,  0, 25, 29, 25,  0, 22, 22, 29, 
    21, 26, 29, 21, 21, 21,  0,  0, 19, 25,  0, 22,  0, 25, 29,  0, 
    21, 26, 21, 30, 26, 21, 21, 21,  0, 22, 22, 20, 21, 33, 21, 21, 
     0, 29, 25,  0, 19, 25,  0,  0,  0, 20, 19,  0, 28,  0,  0, 34, 
     0, 20, 30, 33,  0, 32,  0,  0, 19, 27, 21, 21,  0,  0, 20, 33, 
    26, 31, 32, 34, 21,  0, 25,  0, 25, 35, 19, 25,  0,  0, 28, 29, 
     0, 32,  0, 29,  0,  0, 29, 29,  0,  0,  0, 27,  0,  0,  0, 22, 
    36, 36, 36, 36, 37, 36,  0,  0,  0,  0, 38, 36,  0,  0, 22, 29, 
     0, 20, 22, 29, 22, 29,  0, 20, 22, 29,  0,  0,  0, 20,  0,  0, 
     0,  0, 29, 21,  0, 20, 21, 21,  0, 21, 21, 21, 22, 21, 21, 21, 
    27,  0,  0,  0,  0,  0, 20, 19,  0,  0,  0, 31,  0, 21, 21,  0, 
     0,  0, 33,  0,  0,  0, 29, 25, 20, 21, 21, 21, 21, 21, 21,  0, 
     0, 29,  0, 29,  0,  0, 35, 35,  0, 22,  0,  0,  0, 19,  0, 25, 
    19, 22,  0, 20, 18,  9, 14, 14,  9,  7,  0,  0,  8, 15, 12, 10, 
     0, 27, 19,  0, 29, 11,  0, 12, 17, 11,  0, 20,  0,  0, 39, 11, 
    12, 15, 15,  0, 12, 10,  0,  0, 40, 10, 12,  0, 12, 11, 12,  9, 
     7,  7,  7,  0,  7,  7, 14,  0,  0,  0, 41, 21,  0,  0, 14,  0, 
    10, 11,  0,  0,  0, 12,  0,  0,  8, 12, 18, 12, 15, 15, 10, 17, 
    18, 16,  7,  5,  0,  7,  0, 14,  0,  0, 11, 11, 10,  0,  0,  0, 
    14,  7, 13, 13, 13, 13,  0,  0,  0, 15, 15,  0,  0, 15,  0,  0, 
     0,  0,  0, 12,  0,  0, 42,  0,  7,  7, 24,  7,  7,  0,  0,  0, 
    13, 14,  0,  0, 13, 13,  0, 14, 14, 13, 18, 13, 14,  0,  0,  0, 
    13, 14,  0, 12,  0, 40, 15, 13,  0, 14,  0,  5,  5,  0,  0,  0, 
    24, 24,  9, 24,  0,  0,  0, 13,  0,  7,  7, 24, 24,  0,  7,  7, 
     0,  0,  0, 15,  0, 13,  7,  7,  0,  0, 20, 22,  0, 43,  1, 44, 
     0, 45,  0,  0,  0, 17, 46, 21, 29, 21, 25,  0,  0, 29, 21, 33, 
    27, 21, 21, 33,  0, 20,  0, 20, 36, 36, 47, 36, 36, 21, 21, 21, 
    36, 48, 21, 21, 36, 36, 36, 21, 49, 36, 36, 36, 36, 36, 36, 50, 
    51, 36, 36, 36, 36, 52, 51, 36, 21, 51, 36, 36, 36, 36, 36, 48, 
    36, 36, 36, 52, 36, 36, 52, 21, 36, 36,  7,  7, 36, 36, 36, 53, 
    36, 52, 21, 21, 21, 21, 19,  0,  0, 27, 21, 19,  0, 21, 21, 33, 
     0,  0, 29,  0, 21, 21, 33,  0, 25, 20, 25, 20, 25, 20, 21, 21, 
    36, 52, 54, 36, 33,  0, 21, 25,  0, 20,  0, 32, 28, 22,  0,  0, 
    33,  0,  0,  0, 19,  0,  0,  0, 36, 36, 48, 21, 52, 36, 36, 36, 
    36, 52, 36, 21, 55, 56, 56, 56, 56, 56, 56, 56, 57, 58, 58, 58, 
    58, 58, 58, 58, 58, 58, 58, 59, 60, 58, 60, 58, 60, 58, 60, 61, 
    56, 62, 58, 59, 21, 21, 25, 41,  0,  0,  0, 25,  0,  0, 20, 28, 
    20, 33,  0,  0,  0, 33,  0,  0,  0, 21,  0,  0,  0, 29, 22,  0, 
     0, 28, 27, 31,  0, 28,  0,  0,  0,  0,  0, 33,  0,  0, 29, 33, 
     0, 26, 21,  0,  0, 25, 25,  0,  0, 21, 20, 33,  0,  0, 27, 21, 
     0, 29,  0,  0, 20, 21,  0,  0, 48, 21, 21, 21, 30, 26, 25, 22, 
     0,  0, 28, 25,  0, 25,  0,  0,  0, 28, 20, 25,  0, 22,  0, 22, 
     0,  0, 28, 20,  0, 32, 19,  0, 25,  0,  0, 20,  7,  7, 63, 21, 
     7,  7,  7, 64,  7,  7, 46, 21, 52, 21, 21, 21, 36, 36, 53, 21, 
     0, 22, 20, 21,  0,  0, 25, 27, 22, 32, 32, 20,  0, 29,  0, 34, 
    27, 25,  0,  0,  7,  7,  7, 46, 
};

RE_UINT8 re_east_asian_width_stage_5[] = {
    1, 1, 1, 1, 6, 6, 6, 6, 6, 6, 6, 1, 1, 2, 6, 6, 
    2, 6, 6, 2, 2, 1, 2, 1, 6, 2, 2, 6, 2, 2, 2, 2, 
    2, 1, 2, 2, 2, 2, 2, 1, 1, 1, 2, 1, 2, 1, 1, 1, 
    1, 1, 1, 2, 1, 1, 2, 2, 2, 2, 1, 1, 1, 2, 1, 1, 
    1, 2, 1, 2, 1, 2, 2, 2, 2, 1, 1, 2, 0, 0, 1, 1, 
    1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 2, 2, 0, 2, 
    2, 2, 1, 2, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 
    1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 
    1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 
    4, 4, 4, 4, 1, 1, 1, 4, 1, 1, 4, 4, 1, 3, 1, 1, 
    1, 2, 2, 1, 1, 2, 0, 0, 1, 4, 4, 1, 1, 1, 6, 6, 
    6, 6, 1, 1, 1, 6, 6, 1, 2, 2, 0, 0, 4, 4, 0, 4, 
    4, 4, 0, 0, 5, 4, 4, 4, 4, 4, 4, 1, 0, 4, 4, 4, 
    4, 4, 4, 0, 4, 0, 0, 0, 0, 0, 0, 4, 0, 5, 5, 5, 
    5, 5, 5, 5, 5, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 
    0, 0, 3, 3, 3, 0, 0, 0, 5, 5, 5, 0, 2, 2, 2, 0, 
    2, 2, 1, 0, 
};

/* East_Asian_Width: 3484 bytes. */

RE_UINT32 re_get_east_asian_width(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 12;
    code = ch ^ (f << 12);
    pos = ((RE_UINT32)re_east_asian_width_stage_1[f] << 4);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_east_asian_width_stage_2[pos + f] << 4);
    f = code >> 4;
    code ^= (f << 4);
    pos = ((RE_UINT32)re_east_asian_width_stage_3[pos + f] << 2);
    f = code >> 2;
    code ^= (f << 2);
    pos = ((RE_UINT32)re_east_asian_width_stage_4[pos + f] << 2);
    value = re_east_asian_width_stage_5[pos + code];

    return value;
}

/* Joining_Group. */

RE_UINT8 re_joining_group_stage_1[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 
};

RE_UINT8 re_joining_group_stage_2[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
};

RE_UINT8 re_joining_group_stage_3[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};

RE_UINT8 re_joining_group_stage_4[] = {
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  0,  0,  1,  2,  3,  4,  5,  6,  0,  0,  0,  7,  8,  9, 
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,  0,  0, 21,  0, 22, 
     0,  0, 23, 24, 25, 26,  0,  0,  0, 27, 28, 29, 30, 31, 32, 33, 
};

RE_UINT8 re_joining_group_stage_5[] = {
     0,  0,  0,  0,  0,  0,  0,  0, 45,  0,  3,  3, 43,  3, 45,  3, 
     4, 41,  4,  4, 13, 13, 13,  6,  6, 31, 31, 35, 35, 33, 33, 39, 
    39,  1,  1, 11, 11, 55, 55, 55,  0,  9, 29, 19, 22, 24, 26, 16, 
    43, 45, 45,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  4, 29, 
     0,  3,  3,  3,  0,  3, 43, 43, 45,  4,  4,  4,  4,  4,  4,  4, 
     4, 13, 13, 13, 13, 13, 13, 13,  6,  6,  6,  6,  6,  6,  6,  6, 
     6, 31, 31, 31, 31, 31, 31, 31, 31, 31, 35, 35, 35, 33, 33, 39, 
     1,  9,  9,  9,  9,  9,  9, 29, 29, 11, 38, 11, 19, 19, 19, 11, 
    11, 11, 11, 11, 11, 22, 22, 22, 22, 26, 26, 26, 26, 56, 21, 13, 
    41, 17, 17, 14, 43, 43, 43, 43, 43, 43, 43, 43, 55, 47, 55, 43, 
    45, 45, 46, 46,  0, 41,  0,  0,  0,  0,  0,  0,  0,  0,  6, 31, 
     0,  0, 35, 33,  1,  0,  0, 21,  2,  0,  5, 12, 12,  7,  7, 15, 
    44, 50, 18, 42, 42, 48, 49, 20, 23, 25, 27, 36, 10,  8, 28, 32, 
    34, 30,  7, 37, 40,  5, 12,  7,  0,  0,  0,  0,  0, 51, 52, 53, 
     4,  4,  4,  4,  4,  4,  4, 13, 13,  6,  6, 31, 35,  1,  1,  1, 
     9,  9, 11, 11, 11, 24, 24, 26, 26, 26, 22, 31, 31, 35, 13, 13, 
    35, 31, 13,  3,  3, 55, 55, 45, 43, 43, 54, 54, 13, 35, 35, 19, 
};

/* Joining_Group: 434 bytes. */

RE_UINT32 re_get_joining_group(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 15;
    code = ch ^ (f << 15);
    pos = ((RE_UINT32)re_joining_group_stage_1[f] << 4);
    f = code >> 11;
    code ^= (f << 11);
    pos = ((RE_UINT32)re_joining_group_stage_2[pos + f] << 4);
    f = code >> 7;
    code ^= (f << 7);
    pos = ((RE_UINT32)re_joining_group_stage_3[pos + f] << 4);
    f = code >> 3;
    code ^= (f << 3);
    pos = ((RE_UINT32)re_joining_group_stage_4[pos + f] << 3);
    value = re_joining_group_stage_5[pos + code];

    return value;
}

/* Joining_Type. */

RE_UINT8 re_joining_type_stage_1[] = {
    0, 1, 2, 2, 2, 3, 2, 4, 5, 2, 2, 2, 2, 2, 6, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    7, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 
};

RE_UINT8 re_joining_type_stage_2[] = {
     0,  1,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 
    15,  1,  1, 16,  1,  1,  1, 17, 18, 19, 20, 21, 22, 23,  1,  1, 
    24,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 25, 26,  1,  1, 
    27,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1, 28,  1, 29, 30, 31, 32,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 33,  1,  1, 34, 35, 
     1, 36,  1,  1,  1,  1,  1,  1,  1,  1, 37,  1,  1,  1,  1,  1, 
    38,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1, 39, 40,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
    41, 42,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
};

RE_UINT8 re_joining_type_stage_3[] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      2,   2,   2,   2,   2,   2,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   3,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   4,   2,   5,   6,   0,   0,   0, 
      0,   7,   8,   9,  10,   2,  11,  12,  13,  14,  15,  15,  16,  17,  18,  19, 
     20,  21,  22,   2,  23,  24,  25,  26,   0,   0,  27,  28,  29,  15,  30,  31, 
      0,  32,  33,   0,   0,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     35,   0,   0,  36,  37,  38,  39,   0,  40,   0,   0,  41,  42,   0,  39,   0, 
     43,   0,   0,  41,  44,  40,   0,  45,  43,   0,   0,  41,  46,   0,  39,   0, 
     40,   0,   0,  47,  42,  48,  39,   0,  49,   0,   0,   0,  50,   0,   0,   0, 
      0,   0,   0,  51,  52,  53,  39,   0,   0,   0,   0,  47,  54,   0,  39,   0, 
      0,   0,   0,   0,  42,   0,  39,   0,   0,   0,   0,   0,  55,  56,   0,   0, 
      0,   0,   0,  57,  58,   0,   0,   0,   0,   0,   0,  59,  60,   0,   0,   0, 
      0,  61,   0,  62,   0,   0,   0,  63,  64,  65,   2,  66,  48,   0,   0,   0, 
      0,   0,  67,  68,   0,  69,  28,  70,  71,   1,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  67,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,  72,   0,  72,   0,  39,   0,  39,   0,   0,   0,  73,  74,  75,   0,   0, 
     76,   0,   0,   0,   0,   0,   0,   0,   0,   0,  77,   0,   0,   0,   0,   0, 
      0,   0,  78,  79,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,  80,   0,   0,   0,  81,  82,  83,   0,   0,   0,   0,   0,   0,   0,   0, 
     84,   0,   0,  85,  49,   0,  86,  84,  87,   0,  88,   0,   0,   0,  89,  87, 
      0,   0,  90,  91,   0,   0,   0,   0,   0,   0,   0,   0,   0,  92,  93,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   2,  94,  90, 
     95,   0,  96,   0,   0,   0,  97,   0,   0,   0,   0,   0,   0,   2,   2,  28, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  20,  87, 
      0,   0,   0,   0,   0,   0,   0,  20,   0,   0,   0,   0,   0,   0,   2,   2, 
      0,   0,  98,   0,   0,   0,   0,   0,   0,  99,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 100,   0,   0,   0,   0,   0,   0,   0,  87, 
    101,   0,  53,   0,   0,   0,   0,   0,   0,   0,   0,   0, 102,   0,   2,  87, 
      0,   0, 103,   0, 104,  87,   0,   0,  35,   0,   0, 105,   0,   0,   0,   0, 
      0,   0, 106, 107, 108,   0,   0,   0,   0,   0,   0, 109,  40,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 110,   0, 
      0, 111,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      2,   0,  94,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  20, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  34, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1, 
    112,   0,   0, 113,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     40,   0,   0, 114,  94,   0,   0,   0,  87,   0,   0, 115,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 116, 117, 118,   0, 119,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  72,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     40,   0,   2,   2,   2,   2,   2,   2,   0,   0,   0,   0,   0,   0,   0,   0, 
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   0, 
};

RE_UINT8 re_joining_type_stage_4[] = {
     0,  0,  0,  0,  0,  0,  0,  1,  2,  2,  2,  2,  3,  2,  4,  0, 
     5,  2,  2,  2,  2,  2,  2,  6,  7,  6,  0,  0,  2,  2,  8,  0, 
     9, 10, 11, 12, 13, 14, 14, 14, 15, 14, 16,  2,  0,  0,  0, 17, 
    18, 19, 14, 14, 14, 14, 20, 20, 20, 20, 21, 14, 14, 14, 14, 14, 
    22, 20, 20, 23, 24, 25,  2, 26,  2, 26, 27, 28,  0,  0, 17, 29, 
     0,  0,  0,  3, 30, 31, 21, 32, 14, 14, 33, 22,  2,  2,  8, 34, 
    14, 14, 31, 14, 14, 14, 12, 35, 23, 35, 21, 14,  0, 36,  2,  2, 
    37,  0,  0,  0,  0,  0, 17, 14, 14, 14, 38,  2,  2,  0, 39,  0, 
     0, 36,  6,  2,  2,  5,  5,  4,  0,  0,  5,  0,  8,  0,  0,  0, 
     0,  0, 40, 37,  5,  2, 37,  1,  5,  2,  0,  0, 36,  0,  0,  0, 
     1,  0,  0,  0,  0,  0,  0, 37,  5, 37,  0,  1,  7,  0,  0,  0, 
     7,  3, 26,  4,  4,  1,  0,  0,  5,  6, 37,  1,  0,  0,  0, 26, 
     0, 40,  0,  0, 40,  0,  0,  0, 37,  0,  0,  1,  0,  0,  0, 36, 
    37, 36, 27,  4,  0,  7,  0,  0,  0, 40,  0,  4,  0,  0, 40,  0, 
    36, 41,  0,  0,  1,  2,  8,  0,  0,  3,  2,  8,  1,  2,  6, 37, 
     0,  0,  2,  4,  0,  0,  4,  0,  0, 42,  1,  0,  5,  2,  2,  8, 
     2, 27,  0,  5,  2,  2,  5,  2,  2,  2,  2, 37,  0,  0,  0,  5, 
    27,  2,  7,  7,  0,  0,  4, 36,  5, 37,  0,  0, 40,  7,  0,  1, 
    36, 37,  0,  0,  0,  6,  2,  4,  0, 40,  5,  2,  2,  0,  0,  1, 
     0,  0,  3,  4,  0,  0,  1,  0,  8,  3, 37,  0, 40,  0,  5,  0, 
     0,  3, 37,  0,  0, 40,  2,  8, 41,  5,  2, 37,  3,  2,  2, 26, 
     2,  0,  0,  0,  0, 27,  8, 37,  0,  0,  3,  2,  4,  0,  0,  0, 
    36,  4,  4,  0,  0, 40,  4, 42,  0,  0,  0,  2,  2, 36,  0,  0, 
     8,  2,  2,  2, 27,  2, 37,  1,  2,  8,  0,  0,  0,  0,  3, 43, 
     0,  0, 36,  8,  2, 37, 36,  2,  0,  0, 36,  2,  0,  0,  7,  0, 
     8,  0,  0,  4, 40, 40,  3,  0,  0, 37,  0,  0,  0, 36,  2,  4, 
     0,  3,  2,  2,  3, 36,  4, 37,  0,  0,  5,  8,  7,  7,  0,  0, 
     3,  0,  0, 37, 27, 26, 37, 36,  0,  1, 37,  1,  0,  0,  0, 40, 
     5,  7,  0,  2,  0,  0,  8,  3,  0,  0,  2,  2,  3,  8,  7,  1, 
     0,  3,  4,  0,  3,  2,  2,  2,  8,  5,  2,  0,  0,  0, 36,  4, 
};

RE_UINT8 re_joining_type_stage_5[] = {
    0, 0, 0, 0, 0, 4, 0, 0, 4, 4, 4, 4, 0, 0, 0, 4, 
    4, 4, 0, 0, 0, 4, 4, 4, 4, 4, 0, 4, 0, 4, 4, 0, 
    4, 4, 4, 0, 2, 0, 3, 3, 3, 3, 2, 3, 2, 3, 2, 2, 
    2, 2, 2, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1, 2, 2, 2, 
    3, 2, 2, 4, 0, 0, 2, 2, 4, 3, 3, 3, 0, 3, 3, 3, 
    3, 3, 3, 3, 3, 3, 2, 2, 3, 2, 2, 3, 2, 3, 2, 3, 
    2, 2, 3, 3, 0, 3, 4, 4, 4, 0, 0, 4, 4, 0, 4, 4, 
    4, 4, 3, 3, 2, 0, 0, 2, 3, 4, 2, 2, 2, 3, 3, 3, 
    2, 2, 3, 2, 3, 2, 3, 2, 0, 3, 2, 2, 3, 2, 2, 2, 
    0, 0, 4, 4, 4, 0, 0, 0, 2, 2, 2, 4, 0, 0, 1, 0, 
    0, 0, 4, 0, 4, 0, 4, 0, 0, 4, 0, 4, 0, 1, 4, 4, 
};

/* Joining_Type: 1736 bytes. */

RE_UINT32 re_get_joining_type(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 13;
    code = ch ^ (f << 13);
    pos = ((RE_UINT32)re_joining_type_stage_1[f] << 5);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_joining_type_stage_2[pos + f] << 4);
    f = code >> 4;
    code ^= (f << 4);
    pos = ((RE_UINT32)re_joining_type_stage_3[pos + f] << 2);
    f = code >> 2;
    code ^= (f << 2);
    pos = ((RE_UINT32)re_joining_type_stage_4[pos + f] << 2);
    value = re_joining_type_stage_5[pos + code];

    return value;
}

/* Line_Break. */

RE_UINT8 re_line_break_stage_1[] = {
     0,  1,  2,  3,  4,  5,  5,  5,  5,  5,  6,  7,  8,  9, 10, 11, 
    12, 13, 14, 15, 16, 16, 17, 16, 16, 16, 16, 18, 16, 19, 16, 20, 
     5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5, 21, 
     5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5, 21, 
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
    22, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 23, 
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 23, 
};

RE_UINT8 re_line_break_stage_2[] = {
      0,   1,   2,   2,   2,   3,   4,   5,   2,   6,   7,   8,   9,  10,  11,  12, 
     13,  14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28, 
     29,  30,  31,  32,  33,  34,  35,  36,  37,   2,   2,   2,   2,  38,  39,  40, 
     41,  42,  43,  44,  45,  46,  47,  48,  49,  50,   2,  51,   2,   2,  52,  53, 
     54,  55,  56,  57,  58,  59,  60,  61,  62,  63,  64,  65,  66,  67,  68,  69, 
      2,   2,   2,  70,   2,   2,  71,  14,  72,  73,  74,  75,  76,  77,  78,  79, 
     80,  81,  82,  83,  84,  85,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78, 
     78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78, 
     78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78, 
     78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  86,  78,  78,  78,  78, 
     78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78, 
     78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78, 
     87,  78,  78,  78,  78,  78,  78,  78,  78,  88,   2,   2,  89,  90,   2,  91, 
     92,  93,  94,  95,  96,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106, 100, 
    101, 102, 103, 104, 105, 106, 100, 101, 102, 103, 104, 105, 106, 100, 101, 102, 
    103, 104, 105, 106, 100, 101, 102, 103, 104, 105, 106, 100, 101, 102, 103, 104, 
    105, 106, 100, 101, 102, 103, 104, 105, 106, 100, 101, 102, 103, 104, 105, 106, 
    100, 101, 102, 103, 104, 105, 106, 100, 101, 102, 103, 104, 105, 106, 100, 101, 
    102, 103, 104, 105, 106, 100, 101, 102, 103, 104, 105, 106, 100, 101, 102, 107, 
    108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 
    109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 
    109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 
    109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 
    109, 109,  78,  78,  78,  78, 110, 111,   2,   2, 112, 113, 114, 115, 116, 117, 
    118, 119, 120, 121,  14, 122, 123, 124,   2, 125,  14,  14,  14,  14,  14,  14, 
    126,  14, 127,  14, 128,  14, 129,  14, 130,  14,  14,  14, 131,  14,  14,  14, 
    132, 133,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14, 
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14, 
      2,   2,   2,   2,   2,   2, 134,  14, 135,  14,  14,  14,  14,  14,  14,  14, 
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14, 
      2,   2,   2,   2, 136, 137, 138,   2, 139,  14,  14,  14,  14,  14,  14,  14, 
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14, 
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14, 
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14, 
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14, 
      2,   2,   2,   2, 140,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14, 
    141,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14, 
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14, 
      2, 142, 143, 144, 145,  14, 146,  14, 147, 148, 149,   2,   2, 150,   2, 151, 
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14, 
    152, 153, 154, 155, 156,  14, 157, 158, 159, 160, 161, 162, 163, 164,  61,  14, 
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14, 
     78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78, 
     78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78, 165, 
    166,  14, 167, 168,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14, 
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14, 
    109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 
    109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 169, 
};

RE_UINT16 re_line_break_stage_3[] = {
      0,   1,   2,   3,   4,   5,   4,   6,   7,   1,   8,   9,   4,  10,   4,  10, 
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,  11,  12,   4,   4, 
      1,   1,   1,   1,  13,  14,  15,  16,  17,   4,  18,   4,   4,   4,   4,   4, 
     19,   4,   4,   4,   4,   4,   4,   4,   4,   4,  20,  21,   4,  22,  21,   4, 
     23,  24,   1,  25,  26,   4,  27,  28,  29,  30,   4,   4,  31,   1,  32,  33, 
      4,   4,   4,   4,   4,  34,  35,  36,  37,  38,   4,   1,  39,   4,   4,   4, 
      4,   4,  40,  41,  36,   4,  31,  42,   4,  43,  44,  45,   4,  46,  47,  47, 
     47,  47,  47,  47,  47,  47,  47,  47,  48,   4,   4,  49,   1,  50,  51,  52, 
     53,  54,  55,  56,  57,  58,  59,  60,  61,  54,  55,  62,  63,  64,  65,  66, 
     67,  18,  55,  68,  69,  70,  59,  71,  53,  54,  55,  68,  72,  73,  59,  20, 
     74,  75,  76,  77,  78,  79,  65,  80,  81,  82,  55,  83,  84,  85,  59,  86, 
     87,  82,  55,  88,  84,  89,  59,  90,  87,  82,   4,  91,  92,  93,  59,  94, 
     95,  96,   4,  97,  98,  99,  47, 100, 101, 102, 102, 103, 104, 105,  47,  47, 
    106, 107, 108, 109, 110, 111,  47,  47, 112, 113,  36, 114,  52,   4, 115, 116, 
    117, 118,   1, 119, 120, 121,  47,  47, 102, 102, 102, 102, 122, 102, 102, 102, 
    102, 123,   4,   4, 124,   4,   4, 115, 125, 125, 125, 125, 125, 125, 126, 126, 
    126, 126, 127, 128, 128, 128, 128, 128,   4,   4,   4,   4, 129, 130,   4,   4, 
    129,   4,   4, 131, 132, 133,   4,   4,   4, 132,   4,   4,   4, 134, 135, 115, 
      4, 136,   4,   4,   4,   4,   4,  28, 137,   4,   4,   4,   4,   4,   4,   4, 
    137, 138,   4,   4,   4,   4, 139,  70, 140, 141,   4, 142,   4, 143, 140, 144, 
    102, 102, 102, 102, 102, 145, 146, 136, 147, 146,   4,   4,   4,   4,   4,  20, 
      4,   4, 148,   4,   4,   4,   4, 124,   4, 115, 149, 149, 150, 102, 151, 152, 
    102, 102, 153, 102, 154, 155,   4,   4,   4, 156, 102, 102, 102, 157, 102, 158, 
    146, 146, 151,  47,  47,  47,  47,  47, 159,   4,   4, 160, 161, 162, 163, 164, 
    165,   4, 166, 146,   4,   4,  40, 167,   4,   4, 160, 168, 169,  36,   4, 170, 
     47,  47,  47,  47,  47, 171, 172, 173,   4,   4,   4,   4,   1,   1, 174, 175, 
      4, 176,   4,   4, 176, 177,   4, 178,   4,   4,   4, 179, 179, 180,   4, 181, 
    182, 183, 184, 185, 186, 187, 188, 189, 190, 115, 191, 192,  47,   1,   1, 193, 
    194, 195, 196,   4,   4, 197, 198, 199, 200, 199,   4,   4,   4, 201,   4,   4, 
    202, 203, 204, 205, 206, 207, 208,   4, 209, 210, 211, 212,   4,   4,   4,   4, 
      4, 207, 213,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4, 214, 
      4,   4, 215,  47,  27,  47, 216, 216, 216, 216, 216, 216, 216, 216, 216, 217, 
    216, 216, 216, 216, 198, 216, 216, 218, 216, 219, 220, 221, 222, 223, 224,   4, 
    225, 226,   4,   4, 227,   4, 228,   4,   4, 229,   4, 229, 230, 216, 231, 216, 
     21,   4,   4,   4,   4, 232, 233, 234, 216, 235,   4,   4, 236,   4, 237,   4, 
    238, 239,   4,   4,   4, 240,   4, 241,   4,   4,   4,   4, 115, 242,  47,  47, 
      4,   4,  45,   4,   4,  45,   4,   4,   4,   4,   4,   4,   4,   4, 243, 244, 
      4,   4, 124,   4,   4,   4, 245, 246,   4, 215, 247, 247, 247, 247,   1,   1, 
    248, 249, 250, 251,  47,  47,  47,  47, 252, 253, 252, 252, 252, 252, 252, 254, 
    252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 255,  47, 256, 
    257, 258, 259, 260, 261, 252, 262, 252, 263, 264, 265, 252, 262, 252, 263, 266, 
    267, 252, 268, 269, 252, 252, 252, 252, 270, 252, 252, 271, 252, 252, 254, 272, 
    252, 270, 252, 252, 273, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 270, 
    252, 252, 252, 252,   4,   4,   4,   4, 252, 274, 252, 252, 252, 252, 252, 252, 
    275, 252, 252, 252, 276,   4,   4, 170, 277,   4, 278,  47,   4,   4, 243, 279, 
      4,  20,   4,   4,   4,   4,   4, 280,  45, 281, 136,  47,  47,  47,  47, 282, 
    283,   4, 284, 285,   4,   4,   4, 286, 287,   4,   4, 160, 288, 146,   1, 289, 
     36,   4, 290,   4, 291, 292, 125, 293,  48,   4,   4, 294, 295, 296,  47,  47, 
      4,   4, 297, 174, 298, 299, 102, 153, 102, 102, 102, 102, 300, 301,  47,  47, 
    302, 303, 247,  47,  47,  47,  47,  47,  47,  47,  47,  47,   4,   4, 304, 146, 
    305, 306, 307, 308, 307, 309, 307, 305, 306, 307, 308, 307, 309, 307, 305, 306, 
    307, 308, 307, 309, 307, 305, 306, 307, 308, 307, 309, 307, 305, 306, 307, 308, 
    307, 309, 307, 305, 306, 307, 308, 307, 309, 307, 305, 306, 307, 308, 307, 309, 
    307, 305, 306, 307, 308, 307, 309, 307, 308, 307, 310, 126, 311, 128, 128, 312, 
    313, 313, 313, 313, 313, 313, 313, 313, 314, 314, 314, 314, 314, 314, 314, 314, 
    215, 315,   4, 316, 317,   4,   4,   4,   4,   4,   4,   4, 281, 318,   4,   4, 
      4,   4,   4, 319,  47,   4,   4,   4,   4, 320,   4,   4,  20,  47,  47, 321, 
      1, 322, 174, 323, 324, 325, 326, 179,   4,   4,   4,   4,   4,   4,   4, 327, 
    328, 329, 252, 330, 252, 331, 332, 333,   4, 334,   4,  45, 335, 336, 337, 338, 
    339,   4, 133, 340, 178, 178,  47,  47,   4,   4,   4,   4,   4,   4,   4,  27, 
    341,   4,   4, 342,   4,   4,   4,   4,  27, 343,  47,  47,  47,   4,   4, 344, 
      4, 115,   4,   4,   4,  70,  47,  47,   4,  45, 214,   4,  27,  47,  47,  47, 
      4, 345,   4,   4, 346, 347,  47,  47,   4, 178, 146,  47,  47,  47,  47,  47, 
    348,   4,   4, 349,   4, 350,  47,  47,   4, 351,   4, 352,  47,  47,  47,  47, 
    353, 354,   4, 355,  20, 356,   4,   4,   4,   4,   4, 357,   4, 358,   4, 359, 
      4,   4,   4,   4, 360,  47,  47,  47,  47,  47,  47,  47,  47,  47,   4,  45, 
    165,   4,   4, 361, 362, 320, 363,  47, 165,   4,   4, 364, 251,  47,  47,  47, 
      4,   4,   4,   4,   4,   4,  45,  47,   4,   4,   4,   4,   4,   4, 365, 366, 
      4,   4,   4,   4,   4, 367,   4,   4, 368,   4,   4,   4,   4,   4,   4,   4, 
      4,   4,   4,   4,   4,   4,   4, 369,   4,   4,  45,  47,  47,  47,  47,  47, 
      4,   4,   4, 360,  47,  47,  47,  47, 370,  47,  47,  47,  47,  47,  47,  47, 
      4,   4,   4,   4,   4,   4,   4, 124,   4,   4,  22,   4,   4,   4, 371,   1, 
    372,   4, 373,   4,   4, 178,  47,  47,   4,   4,   4,   4, 374,  47,  47,  47, 
      4,   4,   4,   4,   4, 215,   4, 281,   4,   4,   4,   4,   4, 179,   4,   4, 
      4, 140, 375, 376, 377,   4,   4,   4, 378, 379,   4, 380, 381,  82,   4,   4, 
      4,   4, 358,   4,   4,   4,   4,   4,   4,   4,   4,   4, 382, 383, 383, 383, 
      4,   4, 343,   4,   4,   4,   4,   4,   4, 214,  45, 384,  21,  21,  47,  47, 
    385, 216, 386, 216, 216, 216, 387, 216, 216, 385,  47,  47,  47,  47, 388,   4, 
    389, 252, 252, 271, 390, 370,  47,  47,   4,   4,  70, 391,   4,   4,   4, 115, 
      4, 214,   4,   4, 392,  47,   4,  70,   4,   4,   4,  45,  82,   4,   4,   4, 
      4,   4,   4,   4,   4,   4,   4, 393,   4,   4,   4, 178,  47,   4,  20,  47, 
     47,  47,  47,  47,  47,  47,  47, 394,  21, 395, 396, 377, 397,  47,  47,  47, 
      4,   4,   4,   4, 124,  47,  47,  47, 252, 252, 252, 252, 252, 252, 252, 268, 
    398,  47,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 
      1,   1,   1,   1,   1,   1,   1,  47, 314, 314, 314, 314, 314, 314, 314, 399, 
};

RE_UINT16 re_line_break_stage_4[] = {
      0,   0,   1,   2,   0,   0,   0,   0,   3,   4,   5,   6,   7,   7,   8,   9, 
     10,  10,  10,  10,  10,  10,  11,  12,  10,  10,  11,  13,   0,  14,   0,   0, 
     15,  16,  17,  18,  19,  20,  21,  22,  10,  23,  10,  10,  10,  23,  24,  25, 
     26,  10,  27,  28,   0,   0,   0,  29,   0,   0,   0,  30,  31,   0,   0,   0, 
     10,  10,  32,  33,  34,  10,  35,  36,  37,  10,  10,  10,  38,   0,  39,  10, 
     10,  10,  34,  34,  40,  10,  10,  10,  10,  35,  40,  10,  10,  10,  41,  34, 
     42,   0,   0,   0,   0,   0,   0,  43,  44,  45,  34,  34,  10,  10,  35,  34, 
     10,  46,  34,  34,  10,  32,  47,  48,   0,   0,  49,  50,  10,  10,  38,   0, 
      7,   7,  51,  52,  53,  10,  10,  10,  10,  54,   0,  55,   0,  55,  56,  39, 
      7,   7,  57,  10,  10,  10,  10,  37,  58,  10,  10,  10,   0,   0,  59,  40, 
     10,  60,   0,   0,  61,  34,  34,  34,   0,  10,  62,  34,  10,  60,  63,   0, 
      0,  64,  64,  65,  10,  10,  10,  35,  10,  10,  64,  66,  34,  34,  34,  34, 
      0,  10,  10,  10,  10,  10,  60,  56,  64,   0,  10,  10,  60,  67,   7,   7, 
     10,  10,  40,  10,  42,  40,  10,  68,  68,  10,  10,  10,  10,  10,  36,  10, 
     69,  32,  70,  56,   0,  71,  71,  72,  34,  73,  34,  37,  60,  74,   7,   7, 
     75,  10,  76,  34,  42,  40,  35,  77,  36,  78,  70,  79,  59,  73,  71,  65, 
     80,  34,  40,  69,  34,  74,   7,   7,  39,  81,  34,  34,  42,  40,  10,  37, 
     36,  40,  70,  56,   0,  82,  82,  65,  46,  34,  34,  34,  83,  34,  34,  34, 
      0,  71,  71,  65,  34,  84,  34,  37,  85,  40,  35,  32,  36,  70,  78,  36, 
     77,  46,  35,  32,  10,  10,  70,  84,  59,  84,  79,  65,  46,  73,  34,  34, 
     10,  10,  86,  34,  42,  40,  10,  36,  36,  10,  10,  10,  10,  40,  70,  87, 
      0,  79,  79,  65,  34,  88,  70,  34,  34,  34,  10,  10,  84,  40,  10,  36, 
     10,  40,  70,  56,  34,  88,  34,  66,  78,  34,  34,  34,  10,  10,  35,  87, 
      0,  79,  79,  72,  34,  73,  34,  34,  10,  70,  89,  10,  84,  40,  10,  10, 
     10,  35,  32,  10,  37,  10,  10,  90,  10,  35,  91,  73,   0,  92,   0,   0, 
     84,  46,  34,  34,  93,  94,  94,  94,  94,  94,  94,  94,  94,  94,  95,  96, 
     94,  94,  94,  97,   7,   7,  98,  34,  99, 100, 101, 102,  34,  94,  93,  94, 
     93, 103, 104,  93,  94,  94, 105, 106,  94, 101,  94, 106,   7,   7, 107, 106, 
    108, 109, 110, 111, 112, 113,  39,  10,  10, 114, 115, 116,  10,  10,  10,  46, 
     42,   0,   0, 117,   0, 118,  10,  64,   0,   0,  42,   0,   0,   0,   0, 119, 
     10, 120,  10,  36, 121,  10, 122,  34,   7,   7,  98,  10,   7,   7, 123,  94, 
     10,  70,  34,  34, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 126, 126, 
    126, 126, 126, 126,  10,  10,  36,  70,  10,  35,  36,  70,  36,  70,  10,  35, 
     36,  70,  10,  10,  10,  35,  10,  10,  10,  10,  35,  42,  18,  10,  10,  10, 
     10,  10,  70,  34, 127,  10,  10,  10,  10,  10,  11, 128,  10,  10, 129, 130, 
     10,  10,  10,  36,  60, 131,  34,  34,  60, 132,  34,  34,  60,  34,  34,  34, 
    133,  34,  34,  34,  94, 134, 135, 106,   7,   7, 107,  34, 136, 137, 138, 139, 
     10,  10, 140,  34,   0,   0,   0,  34,  46, 141,   7,   7,  94,  94,  94, 106, 
     94, 142,  34,  34,  94,  94,  94,  34,  94,  94, 106,  34,   7,   7, 143, 104, 
     10,  38,   0,  32,  94,  94,  94,  95,  94,  94,  94, 144,   0,  53,  10,  10, 
     10,   0,   0,   0,   0,  53,  10,  34,   7,   7,  98, 145, 127,  10,  38,   0, 
      0,  10,  10,  46, 146,  10,  10,  10,  64,   0,  59,  32,   0,  34,  34,  10, 
      0,   0, 147, 148,   7,   7, 107,  40,  10,  10,  10, 149, 146,   0,   0,   0, 
      0,   0,  53,  58, 150,  34,  34,  34,   0,  59,  34,  34,  34,  34,  34,   0, 
     10,  70,  10,  70,  10,  10, 151, 151,  10,  10,  10,  70,  10,  36,  10,  10, 
     10,  32,  10,  40,  32,  36,  10, 152, 148, 153, 154,   0, 155, 156, 157, 157, 
    158, 159, 160,  29, 161, 161, 162, 163,  10, 164, 163,  10,  10, 165, 148, 145, 
    166,  46,  84,   0,  70,  26,  10, 167, 168,  26,  10, 169, 170, 171, 170, 170, 
    170, 172, 173,  34, 131,  34,  34,  34, 174, 175, 176,  10,  23, 177,  10,  10, 
    178,  10,  23,  10,  10, 158,  23, 179,  27,  27,  27,  10,  27,  27, 158,  10, 
     10,  10, 180,  34, 179,  26,  10,  10, 181,  23, 182,  23, 183, 175, 179, 168, 
    182, 184,  27, 185,  10,  27,  10, 158,  10,  10,  26,  26, 179,  10,  10,  10, 
    158,  27, 186, 186, 186, 186,  10,  10,  10, 175, 175,  10,  10, 175,  10,  10, 
     10,  10,  10,  23,  10,  10, 187,  10,  10,  34,  34,  34,  10,  35,  34,  34, 
     27,  27,  27,  27,  27,  27,  27, 188,  27,  26,  10,  10, 186, 158,  10,  10, 
    189,  27, 158,  10, 186, 186,  10, 158, 158, 186, 182, 186, 158,  10,  10,  10, 
    186, 158,  10,  23,  10, 178, 175, 186,  10,  27,  10, 185, 185,  10,  10,  10, 
    189, 189, 188, 189,  10,  10,  10, 186,  10,  27,  27, 189, 189,  10,  27,  27, 
     10,  23, 190, 191, 136,  10, 192, 192, 192, 193,  27,  27,  27,  10,  10,  10, 
     10, 187,  35,  36,  10, 194, 192, 192,  11, 195, 195, 195, 195, 195, 196,  10, 
     10,  10, 192,  10,  10,  10,  10, 197,  10, 168, 198,  34,  10,  10,  10,  38, 
     65,  34, 199, 200,  10,  70,  34,  77, 201,  34,  34,  73,  10,  35,  10,  35, 
    202, 202, 202, 203, 148, 204, 205, 206, 207, 192, 208, 209, 210,  34,  34,  34, 
    211, 211, 211, 211, 211, 211, 212, 211, 211,  34,  34,  34, 211, 213,  34,  34, 
    211, 211, 211,  34, 214, 215, 192, 192, 216, 192, 192, 217, 211, 211, 218,   0, 
    211, 211, 219, 220, 221, 222, 215, 211, 219, 211, 211, 211, 219, 222, 211, 223, 
    211, 224, 225, 226, 227, 222, 215, 211, 211, 228, 219, 226,  34, 229, 211, 211, 
    211, 211, 211, 213, 229, 211, 211, 211, 211, 211, 211, 230, 211, 211, 230,  34, 
    231, 231, 231, 231, 211, 211,  27,  27, 211, 215, 211, 211, 211, 211, 211, 232, 
    211, 230,  34,  34,  10,  10,  10, 233,   7,   7,  57,  34, 146,  34,  34,  39, 
    234, 148,  34,  34,  70,  34,  34,  34,  34,  34,  32,  10, 120, 120,  38,  10, 
     38,   0,  10,  34,  10,  10, 235,  34,  10, 236,  34,  34,  39,  10,  10,  10, 
      0, 131,  34, 237,  39,  10,  10,  34,  10,  60,   0, 238,  10,  38,   0,   0, 
      0,  34,  34,  77, 124, 124, 124, 239,  38,   0,   0,   0,  53, 129, 130,  37, 
      7,   7, 107,  32,  10,  10,  64,   0,  38,  10,  10,  65,   7,   7, 107, 145, 
     95,  34,  34,  34,  34,  34, 240,  94,  40,  35,  40,  35,  40,  35,  34,  34, 
     38,   0, 117,  65, 241, 242, 242, 242, 242, 242, 242, 241, 242, 242, 242, 242, 
    242, 242, 241, 242, 242, 241, 242, 242, 242,  34,  34,  34, 125, 243, 244, 126, 
    126, 126, 126,  34, 245, 245, 245, 245, 246, 246, 246, 246,  77,  10,  34, 247, 
     10,  35,  10,  69,  37,  36,  10,  10,  77,  10,  10,  10,  10,  10,  10, 194, 
     32,  10,  10,  10,  10,  10,  10, 235, 248, 249, 250,  34, 211, 251, 195, 195, 
    195, 252, 253, 211, 254, 255, 251, 256, 211, 230, 257,  34,  10,  10,  10, 258, 
    259, 260, 216, 261, 211, 211, 262, 263, 211, 211, 264, 265, 211, 211, 264, 266, 
    267, 268, 231, 231, 269,  10,  10,  10,  10,  10,  10, 270,  32,  10,  32,  10, 
     32,  10,  32,  46, 271, 272,  10,  35,  34,  34,  42, 273,  10,  10,  10,  40, 
     10,  10,  35,  37, 274,  77,  10,  10,  10,  77,  10,  10,  10,  10,  10,  34, 
     10,  10,  10,  81,  10,  10,  10, 275,  10,  34,  10,  10, 127,  70,  34,  34, 
     10,  70,  36,  10,  10,  37,  46,  68,  10, 275,  10,  10,  10,  10,  10, 147, 
     10,  10,  70,  77,  64,  88,  34,   0,  10,  40,  40,  10,  10,  34,  59,  73, 
    148, 148,  46,  34,  10,  70, 276, 148,  10,  70,  10,  10,  35,  34,  10,  10, 
     10,  10,  46,  34,  10,  10,   0,   0,   0, 117, 127,  70,  10, 277,   7,   7, 
      0,   0, 146, 149,  35,  34,  34,  34, 148,  34,  34,  34,  10,  10, 278, 279, 
    280, 194, 197,  10,  10,  10, 281,  10, 213,  34,  34,  34,  10,  64,  39,  64, 
    146,  64,   0,  10,  10,  10,  60,  39,  60,  61,  34,  34,  66,  78,  40,  36, 
     10,  10,  37,  40,  10,  40,  10,  10,  10,  37,  35,  40,  10,  36,  10,  36, 
     10,  10,  37,  35,  10,  69,  32,  10,  10,  10,  10,  74,   7,   7,   7,   7, 
     40,  10,  10,  35,  27,  27, 282,  34,  27,  27,  27, 283,  27,  27, 198,  34, 
     34,  32,  10,  10, 230,  34,  34,  34, 211, 211, 232,  34,  10,  37,  10,  10, 
     10,  36,  35,  34,  10,  10,  40,  46,  34,  34,  77,  10,  36,  69,  69,  35, 
     10,  70,  10,  90,  46,  40,  10,  10,  80,  34,  34,  34, 246, 246, 246, 284, 
};

RE_UINT8 re_line_break_stage_5[] = {
    17, 17, 17, 17, 17, 19, 23, 21, 21, 22, 17, 17, 20,  7,  4, 13, 
    10, 11, 13,  4,  2, 37, 13, 10,  9, 16,  9,  8, 12, 12, 12, 12, 
    12, 12,  9,  9, 13, 13, 13,  7, 13, 13, 13, 13, 13, 13, 13,  2, 
    10, 37, 13, 13, 19,  3, 13, 17, 17, 30, 17, 17,  5,  2, 11, 10, 
    10, 10, 13, 26, 26, 13, 26,  4, 13, 19, 13, 13, 11, 10, 26, 26, 
    18, 13, 26, 26, 26, 26, 26,  4, 26, 26, 26,  2, 13, 13, 13, 26, 
    18, 26, 26, 26, 18, 26, 13, 13, 26, 13, 13, 13, 26, 26, 26, 26, 
    13, 26, 13, 18, 17, 17, 17,  5,  5,  5,  5,  5,  5,  5,  5, 17, 
     0,  0, 13, 13, 13, 13,  9,  0,  0,  0,  0,  0, 13, 13, 13,  0, 
    13,  0, 13, 13, 13, 13,  0, 13, 13, 13, 13, 17, 17, 17, 13, 13, 
     0, 13, 13, 13,  0,  9, 19,  0,  0, 17, 17, 17, 17, 17, 19, 17, 
    13, 17, 17, 13, 17, 17,  7, 17, 13,  0,  0,  0, 13, 11, 11, 11, 
     9,  9, 13, 13, 17, 17, 17,  7,  0,  0,  7,  7, 12, 12, 11, 12, 
    12, 13, 13, 13, 17, 13, 13, 13,  7, 13, 17, 17, 17, 13, 13, 17, 
    17, 13, 17, 17, 12, 12, 13, 13, 13, 17, 13, 13, 17, 17, 17,  0, 
    13, 13, 17, 17, 17, 13,  0,  0,  9,  7, 13,  0, 17, 17, 13, 17, 
    13, 17, 17, 17, 17, 17,  0,  0,  0,  0, 13,  0, 19, 19, 12, 12, 
    13,  0,  0, 13, 13,  0, 13,  0, 13, 13,  0,  0, 17,  0,  0, 17, 
    17, 17, 13,  0,  0,  0,  0, 17,  0,  0, 12, 12, 13, 13, 11, 11, 
    13, 11, 13, 10,  0,  0,  0, 13,  0, 13, 13,  0, 17,  0, 17, 17, 
     0, 17,  0,  0, 13, 17,  0,  0, 17, 17,  0, 17,  0, 10,  0,  0, 
     0,  0, 17, 17,  0,  0, 17, 13, 13, 10, 13,  0,  0, 13, 17, 17, 
     0, 17, 17,  0,  0, 11, 13, 13,  0, 13,  0,  0,  0,  0, 17,  0, 
    17,  0, 17,  0,  0, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25,  0, 
     0,  0,  0, 10, 25, 25, 25, 13, 12, 12, 19, 19,  0, 25, 25,  0, 
    25,  0,  0, 25, 25,  0, 25,  0,  0, 25,  0,  0,  0, 25,  0, 25, 
     0,  0, 25, 25, 25, 25,  0, 25, 25, 25,  0,  0, 12, 12,  0,  0, 
    13, 18, 18, 18, 18, 13, 18, 18,  5, 18, 18, 19,  5,  7,  7,  7, 
     7,  7,  5, 13,  7, 13, 13, 13, 19, 17, 13, 17, 13, 17,  2,  3, 
     2,  3, 17, 17, 17, 17, 17, 19, 17, 19, 17, 17, 17,  0, 19, 19, 
    13, 13, 17, 13, 18, 18, 19, 18, 13,  5,  5,  0, 12, 12, 25, 25, 
    32, 32, 32, 32, 33, 33, 33, 33, 34, 34, 34, 34, 19, 13, 13, 13, 
     3,  0,  0,  0, 13, 13, 13, 19, 19, 19, 13, 13, 17,  0,  0,  0, 
    17, 19, 19,  0, 13,  0, 17, 17, 19, 19,  6, 25, 19, 13, 19, 10, 
    13, 13,  7,  7, 19, 19, 18, 13,  7,  7, 13, 17, 17, 17,  5,  0, 
    13, 17, 13,  0,  7,  7, 12, 12, 25,  0,  0,  0, 12, 12, 25,  0, 
    25,  0,  0, 17, 13, 19, 19, 19, 17, 17, 17, 13,  0,  0,  0, 19, 
    19, 19, 19, 19, 13, 13, 19, 19, 13, 13, 17,  0,  0, 13,  0, 13, 
    13, 18, 13,  0, 19, 19, 19,  5, 19, 19, 19, 29, 19,  5, 19, 19, 
    27, 26, 26, 13,  4,  4,  2,  4, 26, 26, 13, 13, 15, 15, 15, 19, 
    21, 21, 17, 17, 11, 11, 11, 11, 13,  4,  4, 26,  6,  6, 13, 13, 
     9,  2,  3,  6, 13, 13, 19, 13, 31, 13, 13, 13, 13,  2,  3, 26, 
    13, 26, 26, 26, 13,  2,  3,  0, 10, 10, 10, 10, 10, 10, 10, 11, 
    10, 10, 11, 10, 10, 10,  0,  0, 13, 13, 13, 11, 13, 26, 13, 13, 
    13, 11, 13, 13, 13, 13, 10, 13, 13, 26, 26, 13, 13, 13, 26, 13, 
    13, 26,  0,  0, 26, 13, 26, 26, 26, 13, 13, 26, 13, 26, 10, 10, 
    13, 26, 13, 26, 26, 13, 26, 13, 13, 13, 26, 26, 13,  2,  3, 13, 
    26, 26, 26, 13, 26, 26, 13, 26, 13, 13, 13,  4,  4,  4,  4, 13, 
     2,  3,  2,  3,  2,  3, 26, 26, 13, 13,  2,  3,  3,  2,  3,  2, 
     3, 13, 13, 13,  2,  3, 13, 13, 26, 26,  0,  0,  0,  7, 19, 19, 
    19, 13,  7, 19, 19,  0,  0,  0,  4,  4,  4,  4,  4,  4, 19, 19, 
    19, 19, 13, 19,  2, 19, 13, 13,  4,  4, 13, 13,  4,  4,  2,  3, 
     2,  3, 19, 19, 19, 19,  7, 13, 19, 19,  0,  0, 14, 14, 14, 14, 
    14, 14,  0, 14, 14, 14,  0,  0, 14,  3,  3, 14, 14,  6, 14, 14, 
     2,  3, 14, 14,  6,  2,  3,  3, 14, 14, 17, 17, 14, 14, 14,  6, 
     6, 14, 14, 14,  0,  6, 14,  6, 14,  6, 14,  6, 14, 14,  6, 14, 
    14,  6,  6,  0,  0, 17, 17,  6,  6,  6,  6, 14,  6,  6, 14,  6, 
    14,  6,  6, 14,  0, 14, 14, 14, 14, 14, 14,  0,  6,  6,  6,  6, 
    14,  0,  0,  0, 13, 19,  7, 19, 17, 17, 13, 19, 11, 13,  0,  0, 
    18, 18,  7,  7,  0,  0, 19, 19, 17, 17, 19, 19, 32,  0,  0,  0, 
     0,  0,  0, 25, 35, 36, 36, 36, 36, 36, 36, 36, 33, 33, 33,  0, 
     0,  0,  0, 34, 28, 28, 28, 28,  1,  1,  1,  1,  0, 13, 17, 13, 
     9,  3,  3,  9,  9,  7,  7,  2,  3, 15,  0,  0, 14,  2,  3,  2, 
     3, 14, 14,  2,  3, 14, 14, 14,  3, 14,  3,  0,  6,  6,  7,  7, 
     3,  2,  3, 14, 14, 10, 11, 14, 13,  0,  0, 31,  0,  7, 14, 14, 
    10, 11, 14, 14,  3, 14,  3, 14, 14, 14,  6,  6, 14, 14, 14,  7, 
    14, 14, 14,  2, 14,  3, 14, 14, 14,  3, 14,  2,  3,  3,  2,  3, 
     3,  6, 13,  6,  6, 13, 13, 13, 13, 13,  6,  6, 11, 10, 14, 14, 
    14, 10, 10,  0, 24, 26,  0,  0, 19, 19, 19,  0, 13, 13,  0, 19, 
     0, 19, 19, 19, 13, 13, 12, 12,  2,  2,  2,  3,  3,  3, 13, 13, 
    13, 13,  3, 13, 13,  2,  3,  3, 26, 26, 26,  0, 26, 26, 13,  0, 
     1,  1,  0,  0, 
};

/* Line_Break: 8100 bytes. */

RE_UINT32 re_get_line_break(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 12;
    code = ch ^ (f << 12);
    pos = ((RE_UINT32)re_line_break_stage_1[f] << 5);
    f = code >> 7;
    code ^= (f << 7);
    pos = ((RE_UINT32)re_line_break_stage_2[pos + f] << 3);
    f = code >> 4;
    code ^= (f << 4);
    pos = ((RE_UINT32)re_line_break_stage_3[pos + f] << 2);
    f = code >> 2;
    code ^= (f << 2);
    pos = ((RE_UINT32)re_line_break_stage_4[pos + f] << 2);
    value = re_line_break_stage_5[pos + code];

    return value;
}

/* Numeric_Type. */

RE_UINT8 re_numeric_type_stage_1[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 11, 11, 11, 12, 
    13, 14, 15, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 16, 11, 17, 
    18, 11, 19, 20, 11, 11, 21, 11, 11, 11, 11, 11, 11, 11, 11, 22, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
};

RE_UINT8 re_numeric_type_stage_2[] = {
     0,  1,  1,  1,  1,  1,  2,  3,  1,  4,  5,  6,  7,  8,  9, 10, 
    11,  1,  1, 12,  1,  1, 13, 14, 15, 16, 17, 18, 19,  1,  1,  1, 
    20, 21,  1,  1, 22,  1,  1, 23,  1,  1,  1,  1, 24,  1,  1,  1, 
    25, 26, 27,  1, 28,  1,  1,  1, 29,  1,  1, 30,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 31, 32, 
     1, 33,  1, 34,  1,  1, 35,  1, 36,  1,  1,  1,  1,  1, 37, 38, 
     1,  1, 39, 40,  1,  1,  1, 41,  1,  1,  1,  1,  1,  1,  1, 42, 
     1,  1,  1, 43,  1,  1, 44,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
    45,  1,  1,  1, 46,  1,  1,  1,  1,  1,  1,  1, 47, 48,  1,  1, 
     1,  1,  1,  1,  1,  1, 49,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1, 50,  1, 51, 52, 53, 54,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1,  1,  1, 55,  1,  1,  1,  1,  1, 15, 
     1, 56,  1, 57, 58,  1,  1,  1, 59, 60, 61, 62,  1,  1, 63,  1, 
    64,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1, 65,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1, 66,  1,  1,  1, 67,  1,  1,  1,  1,  1,  1,  1,  1, 
     1, 68,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
    69, 70,  1,  1,  1,  1,  1,  1,  1, 71, 72, 73,  1,  1,  1,  1, 
     1,  1,  1, 74,  1,  1,  1,  1,  1, 75,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 76,  1,  1,  1,  1, 
     1,  1, 77,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1,  1, 74,  1,  1,  1,  1,  1,  1,  1, 
};

RE_UINT8 re_numeric_type_stage_3[] = {
     0,  1,  0,  0,  0,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  0,  3,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  3,  0, 
     0,  0,  0,  4,  0,  0,  0,  5,  0,  0,  0,  4,  0,  0,  0,  4, 
     0,  0,  0,  6,  0,  0,  0,  7,  0,  0,  0,  8,  0,  0,  0,  4, 
     0,  0,  0,  9,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  1,  0, 
     0, 10,  0,  0,  0,  0,  0,  0,  0,  0,  3,  0,  1,  0,  0,  0, 
     0,  0,  0, 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 12, 
     0,  0,  0,  0,  0,  0,  0, 13,  1,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  4,  0,  0,  0, 14,  0,  0,  0,  0,  0, 15,  0,  0,  0, 
     0,  0,  1,  0,  0,  1,  0,  0,  0,  0, 15,  0,  0,  0,  0,  0, 
     0,  0,  0, 16, 17,  0,  0,  0,  0,  0, 18, 19, 20,  0,  0,  0, 
     0,  0,  0, 21, 22,  0,  0, 23,  0,  0,  0, 24, 25,  0,  0,  0, 
     0,  0,  0,  0,  0,  0,  0, 26, 27, 28,  0,  0,  0,  0,  0,  0, 
     0,  0,  0,  0, 29,  0,  0,  0,  0, 30, 31,  0, 30, 31,  0,  0, 
    32,  0,  0,  0, 33,  0,  0,  0,  0, 34,  0,  0,  0,  0,  0,  0, 
     0,  0, 35,  0,  0,  0,  0,  0, 36,  0, 26,  0, 37, 38, 39, 40, 
    35,  0,  0, 41,  0,  0,  0,  0, 42,  0, 43, 44,  0,  0,  0,  0, 
     0,  0, 45,  0,  0,  0, 46,  0,  0,  0,  0,  0,  0,  0, 47,  0, 
     0,  0,  0,  0,  0,  0,  0, 48,  0,  0,  0, 49,  0,  0,  0, 50, 
    51,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 52, 
     0,  0, 53,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 54,  0, 
    43,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 55,  0,  0,  0, 
     0,  0,  0, 52,  0,  0,  0,  0,  0,  0,  0,  0, 43,  0,  0,  0, 
     0, 53,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 56,  0,  0, 
     0, 41,  0,  0,  0,  0,  0,  0,  0, 57, 58, 59,  0,  0,  0, 55, 
     0,  3,  0,  0,  0,  0,  0, 60,  0, 61,  0,  0,  0,  0,  1,  0, 
     3,  0,  0,  0,  0,  0,  1,  0,  0,  0,  1,  0,  0,  0,  0,  0, 
     0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0, 62,  0, 54, 63, 26, 
    64, 65, 19, 66, 34,  0,  0,  0,  0, 67, 68,  0,  0,  0, 69,  0, 
     0,  0,  0,  0,  0,  3,  0,  0,  0,  0, 70,  0,  0,  0,  0,  0, 
    71,  0,  0,  0,  0,  0,  0,  0,  0,  0, 72, 73,  0,  0,  0,  0, 
     0,  0, 70, 70,  0,  0,  0,  0,  0,  0,  0, 74,  0,  0,  0,  0, 
     0,  0, 75, 76,  0,  0,  0,  0, 19, 77, 78, 79,  0,  0,  0,  0, 
     0,  0,  0, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 81, 82, 
    83,  0,  0,  0,  0,  0,  0,  0, 57,  0,  0, 42,  0,  0,  0, 84, 
     0, 57,  0,  0,  0,  0,  0,  0,  0, 34,  0,  0, 85,  0,  0,  0, 
     0,  0,  0,  0,  0,  0,  0, 86, 87,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  0,  0, 41,  0,  0,  0,  0,  0,  0,  0, 59,  0,  0,  0, 
    47,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 35,  0,  0,  0,  0, 
};

RE_UINT8 re_numeric_type_stage_4[] = {
     0,  0,  0,  0,  0,  0,  1,  2,  0,  0,  3,  4,  1,  2,  0,  0, 
     5,  1,  0,  0,  5,  1,  6,  7,  5,  1,  8,  0,  5,  1,  9,  0, 
     5,  1,  0, 10,  5,  1, 11,  0,  1, 12, 13,  0,  0, 14, 15, 16, 
     0, 17, 18,  0,  1,  2, 19,  7,  0,  0,  1, 20,  1,  2,  1,  2, 
     0,  0, 21, 22, 23, 22,  0,  0,  0,  0, 19, 19, 19, 19, 19, 19, 
    24,  7,  0,  0, 23, 25, 26, 27, 19, 23, 25, 13,  0, 28, 29, 30, 
     0,  0, 31, 32, 23, 33, 34,  0,  0,  0,  0, 35, 36,  0,  0,  0, 
    37,  7,  0,  9,  0,  0, 38,  0, 19,  7,  0,  0,  0,  0, 37, 19, 
    35,  0,  0,  0, 39,  0,  0,  0,  0, 40,  0,  0,  0, 35,  0,  0, 
    41, 42,  0,  0,  0, 43, 44,  0,  0,  0,  0, 36, 18,  0,  0, 36, 
     0, 18,  0,  0,  0,  0, 18,  0, 43,  0,  0,  0, 45,  0,  0,  0, 
     0, 46,  0,  0, 47, 43,  0,  0, 48,  0,  0,  0,  0,  0,  0, 39, 
     0,  0, 42, 42,  0,  0,  0, 40,  0,  0,  0, 17,  0, 49, 18,  0, 
     0,  0,  0, 45,  0, 43,  0,  0,  0,  0, 40,  0,  0,  0, 45,  0, 
     0, 45, 39,  0, 42,  0,  0,  0, 45, 43,  0,  0,  0,  0,  0, 18, 
    17, 19,  0,  0,  0,  0, 11,  0,  0, 39, 39, 18,  0,  0, 50,  0, 
    36, 19, 19, 19, 19, 19, 13,  0, 19, 19, 19, 18, 13,  0,  0,  0, 
    42, 40,  0,  0,  0,  0, 51,  0,  0,  0,  0, 19,  0,  0, 17, 13, 
    52,  0,  0,  0,  0,  0,  0, 53, 23, 25, 19, 10,  0,  0, 54, 55, 
    56,  1,  0,  0, 19, 19, 57, 19, 19, 19, 11, 19,  9,  0,  0,  0, 
    19, 19,  7,  0,  0,  5,  1,  1,  1,  1,  1,  1, 23, 58,  0,  0, 
    40,  0,  0,  0, 39, 43,  0, 43,  0, 40,  0, 35,  0,  0,  0, 42, 
};

RE_UINT8 re_numeric_type_stage_5[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 
    3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 0, 0, 0, 0, 
    0, 2, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 3, 3, 
    0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 
    0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 
    1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 
    3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 
    0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 
    1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 
    3, 3, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 2, 2, 2, 
    2, 2, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 
    1, 1, 1, 0, 0, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 
    0, 0, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 
    2, 2, 2, 2, 2, 2, 1, 2, 0, 0, 0, 0, 0, 0, 2, 2, 
    2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 2, 2, 2, 2, 2, 2, 
    2, 2, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 
    0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 
    0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 
    0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 
    0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 
    0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 
    0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 
    2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 
    0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 3, 3, 1, 1, 0, 0, 1, 1, 1, 1, 
    2, 2, 2, 0, 0, 0, 0, 0, 
};

/* Numeric_Type: 2088 bytes. */

RE_UINT32 re_get_numeric_type(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 12;
    code = ch ^ (f << 12);
    pos = ((RE_UINT32)re_numeric_type_stage_1[f] << 4);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_numeric_type_stage_2[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_numeric_type_stage_3[pos + f] << 2);
    f = code >> 3;
    code ^= (f << 3);
    pos = ((RE_UINT32)re_numeric_type_stage_4[pos + f] << 3);
    value = re_numeric_type_stage_5[pos + code];

    return value;
}

/* Numeric_Value. */

RE_UINT8 re_numeric_value_stage_1[] = {
     0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 11, 11, 11, 12, 
    13, 14, 15, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 16, 11, 17, 
    18, 11, 19, 20, 11, 11, 21, 11, 11, 11, 11, 11, 11, 11, 11, 22, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
};

RE_UINT8 re_numeric_value_stage_2[] = {
     0,  1,  1,  1,  1,  1,  2,  3,  1,  4,  5,  6,  7,  8,  9, 10, 
    11,  1,  1, 12,  1,  1, 13, 14, 15, 16, 17, 18, 19,  1,  1,  1, 
    20, 21,  1,  1, 22,  1,  1, 23,  1,  1,  1,  1, 24,  1,  1,  1, 
    25, 26, 27,  1, 28,  1,  1,  1, 29,  1,  1, 30,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 31, 32, 
     1, 33,  1, 34,  1,  1, 35,  1, 36,  1,  1,  1,  1,  1, 37, 38, 
     1,  1, 39, 40,  1,  1,  1, 41,  1,  1,  1,  1,  1,  1,  1, 42, 
     1,  1,  1, 43,  1,  1, 44,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
    45,  1,  1,  1, 46,  1,  1,  1,  1,  1,  1,  1, 47, 48,  1,  1, 
     1,  1,  1,  1,  1,  1, 49,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1, 50,  1, 51, 52, 53, 54,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1,  1,  1, 55,  1,  1,  1,  1,  1, 15, 
     1, 56,  1, 57, 58,  1,  1,  1, 59, 60, 61, 62,  1,  1, 63,  1, 
    64,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1, 65,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1, 66,  1,  1,  1, 67,  1,  1,  1,  1,  1,  1,  1,  1, 
     1, 68,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
    69, 70,  1,  1,  1,  1,  1,  1,  1, 71, 72, 73,  1,  1,  1,  1, 
     1,  1,  1, 74,  1,  1,  1,  1,  1, 75,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 76,  1,  1,  1,  1, 
     1,  1, 77,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 
     1,  1,  1,  1,  1,  1,  1,  1, 78,  1,  1,  1,  1,  1,  1,  1, 
};

RE_UINT8 re_numeric_value_stage_3[] = {
      0,   1,   0,   0,   0,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   3,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   3,   0, 
      0,   0,   0,   4,   0,   0,   0,   5,   0,   0,   0,   4,   0,   0,   0,   4, 
      0,   0,   0,   6,   0,   0,   0,   7,   0,   0,   0,   8,   0,   0,   0,   4, 
      0,   0,   0,   9,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   1,   0, 
      0,  10,   0,   0,   0,   0,   0,   0,   0,   0,   3,   0,   1,   0,   0,   0, 
      0,   0,   0,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12, 
      0,   0,   0,   0,   0,   0,   0,  13,   1,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   4,   0,   0,   0,  14,   0,   0,   0,   0,   0,  13,   0,   0,   0, 
      0,   0,   1,   0,   0,   1,   0,   0,   0,   0,  13,   0,   0,   0,   0,   0, 
      0,   0,   0,  15,   3,   0,   0,   0,   0,   0,  16,  17,  18,   0,   0,   0, 
      0,   0,   0,  19,  20,   0,   0,  21,   0,   0,   0,  22,  23,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  24,  25,  26,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  27,   0,   0,   0,   0,  28,  29,   0,  28,  30,   0,   0, 
     31,   0,   0,   0,  32,   0,   0,   0,   0,  33,   0,   0,   0,   0,   0,   0, 
      0,   0,  34,   0,   0,   0,   0,   0,  35,   0,  36,   0,  37,  38,  39,  40, 
     41,   0,   0,  42,   0,   0,   0,   0,  43,   0,  44,  45,   0,   0,   0,   0, 
      0,   0,  46,   0,   0,   0,  47,   0,   0,   0,   0,   0,   0,   0,  48,   0, 
      0,   0,   0,   0,   0,   0,   0,  49,   0,   0,   0,  50,   0,   0,   0,  51, 
     52,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  53, 
      0,   0,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  55,   0, 
     56,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57,   0,   0,   0, 
      0,   0,   0,  58,   0,   0,   0,   0,   0,   0,   0,   0,  59,   0,   0,   0, 
      0,  60,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  61,   0,   0, 
      0,  62,   0,   0,   0,   0,   0,   0,   0,  63,  64,  65,   0,   0,   0,  66, 
      0,   3,   0,   0,   0,   0,   0,  67,   0,  68,   0,   0,   0,   0,   1,   0, 
      3,   0,   0,   0,   0,   0,   1,   0,   0,   0,   1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,  69,   0,  70,  71,  72, 
     73,  74,  75,  76,  77,   0,   0,   0,   0,  78,  79,   0,   0,   0,  80,   0, 
      0,   0,   0,   0,   0,   3,   0,   0,   0,   0,  81,   0,   0,   0,   0,   0, 
     82,   0,   0,   0,   0,   0,   0,   0,   0,   0,  83,  84,   0,   0,   0,   0, 
      0,   0,  85,  85,   0,   0,   0,   0,   0,   0,   0,  86,   0,   0,   0,   0, 
      0,   0,  87,  88,   0,   0,   0,   0,  89,  90,  91,  92,   0,   0,   0,   0, 
      0,   0,   0,  93,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  94,  95, 
     96,   0,   0,   0,   0,   0,   0,   0,  97,   0,   0,  98,   0,   0,   0,  99, 
      0, 100,   0,   0,   0,   0,   0,   0,   0, 101,   0,   0, 102,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0, 103, 104,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  62,   0,   0,   0,   0,   0,   0,   0, 105,   0,   0,   0, 
    106,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 107,   0,   0,   0,   0, 
      0,   0,   0,   0, 108,   0,   0,   0, 
};

RE_UINT8 re_numeric_value_stage_4[] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   2,   3,   0, 
      0,   0,   0,   0,   4,   0,   5,   6,   1,   2,   3,   0,   0,   0,   0,   0, 
      0,   7,   8,   9,   0,   0,   0,   0,   0,   7,   8,   9,   0,  10,  11,   0, 
      0,   7,   8,   9,  12,  13,   0,   0,   0,   7,   8,   9,  14,   0,   0,   0, 
      0,   7,   8,   9,   0,   0,   1,  15,   0,   7,   8,   9,  16,  17,   0,   0, 
      1,   2,  18,  19,  20,   0,   0,   0,   0,   0,  21,   2,  22,  23,  24,  25, 
      0,   0,   0,  26,  27,   0,   0,   0,   1,   2,   3,   0,   1,   2,   3,   0, 
      0,   0,   0,   0,   1,   2,  28,   0,   0,   0,   0,   0,  29,   2,   3,   0, 
      0,   0,   0,   0,  30,  31,  32,  33,  34,  35,  36,  37,  34,  35,  36,  37, 
     38,  39,  40,   0,   0,   0,   0,   0,  34,  35,  36,  41,  42,  34,  35,  36, 
     41,  42,  34,  35,  36,  41,  42,   0,   0,   0,  43,  44,  45,  46,   2,  47, 
      0,   0,   0,   0,   0,  48,  49,  50,  34,  35,  51,  49,  50,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  52,   0,  53,   0,   0,   0,   0,   0,   0, 
     21,   2,   3,   0,   0,   0,  54,   0,   0,   0,   0,   0,  48,  55,   0,   0, 
     34,  35,  56,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57,  58,  59,  60, 
      0,   0,   0,   0,  61,  62,  63,  64,   0,  65,   0,   0,   0,   0,   0,   0, 
     66,   0,   0,   0,   0,   0,   0,   0,   0,   0,  67,   0,   0,   0,   0,   0, 
      0,   0,   0,  68,   0,   0,   0,   0,  69,  70,  71,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  72,   0,   0,   0,  73,   0,  74,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  75,  76,   0,   0,   0,   0,   0,   0,  77, 
      0,   0,  78,   0,   0,   0,   0,   0,   0,   0,   0,  65,   0,   0,   0,   0, 
      0,   0,   0,   0,  79,   0,   0,   0,   0,  80,   0,   0,   0,   0,   0,   0, 
      0,  81,   0,   0,   0,   0,   0,   0,   0,   0,  82,  83,   0,   0,   0,   0, 
     84,  85,   0,  86,   0,   0,   0,   0,  87,  78,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  88,   0,   0,   0,   0,   0,   5,   0,   5,   0, 
      0,   0,   0,   0,   0,   0,  89,   0,   0,   0,   0,   0,   0,   0,   0,  90, 
      0,   0,   0,  15,  73,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  91, 
      0,   0,   0,  92,   0,   0,   0,   0,   0,   0,   0,   0,  93,   0,   0,   0, 
      0,  93,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  94,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  95,   0,  96,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,  25,   0,   0,   0,   0,   0,   0,   0,  97,  66,   0,   0,   0, 
      0,   0,   0,   0,  73,   0,   0,   0,  98,   0,   0,   0,   0,   0,   0,   0, 
      0,  99,   0,  79,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 100,   0, 
      0,   0,   0,   0,   0, 101,   0,   0,   0,  48,  49, 102,   0,   0,   0,   0, 
      0,   0,   0,   0, 103, 104,   0,   0,   0,   0, 105,   0, 106,   0,  73,   0, 
      0,   0,   0,   0, 101,   0,   0,   0,   0,   0,   0,   0, 107,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0, 108,   0, 109,   8,   9, 110, 111, 112, 113, 
    114, 115, 116, 117, 118,   0,   0,   0, 119, 120, 121, 122, 123, 124, 125, 126, 
    127, 128, 129, 130, 122, 131, 132,   0,   0,   0, 101,   0,   0,   0,   0,   0, 
    133,   0,   0,   0,   0,   0,   0,   0, 134,   0, 135,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 136, 137,   0,   0,   0,   0,   0,   0,   0,   0, 138, 139, 
      0,   0,   0,   0,   0, 140, 141,   0,  34, 142,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0, 143,   0,   0,   0,   0,   0,   0,  34, 142, 
     34,  35, 144, 145, 146, 147, 148, 149,   0,   0,   0,   0,  48,  49,  50, 150, 
    151, 152,   8,   9,   0,   0,   0,   0,   8,   9,  49, 153,  35, 154,   2, 155, 
    156, 157,   9, 158, 159, 158, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 
    170,   0,   0,   0,   0,   0,   0,   0,  34,  35, 144, 145, 171,   0,   0,   0, 
      0,   0,   0,   7,   8,   9,   1,   2, 172,   8,   9,   1,   2, 172,   8,   9, 
    173,  49, 174,   0,   0,   0,   0,   0,  68,   0,   0,   0,   0,   0,   0,   0, 
      0, 175,   0,   0,   0,   0,   0,   0,  96,   0,   0,   0,   0,   0,   0,   0, 
     65,   0,   0,   0,   0,   0,   0,   0,   0,   0,  89,   0,   0,   0,   0,   0, 
    176,   0,   0,  86,   0,   0,   0,  86,   0,   0,  99,   0,   0,   0,   0,  71, 
      0,   0,   0,   0,   0,   0,  71,   0,   0,   0,   0,   0,   0,   0,  78,   0, 
      0,   0,   0,   0,   0,   0, 105,   0,   0,   0,   0, 177,   0,   0,   0,   0, 
      0,   0,   0,   0, 178,   0,   0,   0, 
};

RE_UINT8 re_numeric_value_stage_5[] = {
      0,   0,   0,   0,   2,  23,  25,  27,  29,  31,  33,  35,  37,  39,   0,   0, 
      0,   0,  25,  27,   0,  23,   0,   0,  11,  15,  19,   0,   0,   0,   2,  23, 
     25,  27,  29,  31,  33,  35,  37,  39,   3,   6,   9,  11,  19,  46,   0,   0, 
      0,   0,  11,  15,  19,   3,   6,   9,  40,  85,  94,   0,  23,  25,  27,   0, 
     40,  85,  94,  11,  15,  19,   0,   0,  37,  39,  15,  24,  26,  28,  30,  32, 
     34,  36,  38,   1,   0,  23,  25,  27,  37,  39,  40,  50,  60,  70,  80,  81, 
     82,  83,  84,  85, 103,   0,   0,   0,   0,   0,  47,  48,  49,   0,   0,   0, 
     37,  39,  23,   0,   2,   0,   0,   0,   7,   5,   4,  12,  18,  10,  14,  16, 
     20,   8,  21,   6,  13,  17,  22,  23,  23,  25,  27,  29,  31,  33,  35,  37, 
     39,  40,  41,  42,  80,  85,  89,  94,  94,  98, 103,   0,   0,  33,  80, 107, 
    112,   2,   0,   0,  43,  44,  45,  46,  47,  48,  49,  50,   0,   0,   2,  41, 
     42,  43,  44,  45,  46,  47,  48,  49,  50,  23,  25,  27,  37,  39,  40,   2, 
      0,   0,  23,  25,  27,  29,  31,  33,  35,  37,  39,  40,  39,  40,  23,  25, 
      0,  15,   0,   0,   0,   0,   0,   2,  40,  50,  60,   0,  27,  29,   0,   0, 
     39,  40,   0,   0,   0,  51,  52,  53,  54,  55,  56,  57,  58,  59,  60,  61, 
     62,  63,  64,  65,   0,  66,  67,  68,  69,  70,  71,  72,  73,  74,  75,  76, 
     77,  78,  79,  80,   0,  31,   0,   0,   0,   0,   0,  25,   0,   0,  31,   0, 
      0,  35,   0,   0,  23,   0,   0,  35,   0,   0,   0, 103,   0,  27,   0,   0, 
      0,  39,   0,   0,  25,   0,   0,   0,  31,   0,  29,   0,   0,   0,   0, 113, 
     40,   0,   0,   0,   0,   0,   0,  94,  27,   0,   0,   0,  85,   0,   0,   0, 
    113,   0,   0,   0,   0,   0, 114,   0,   0,  25,   0,  37,   0,  33,   0,   0, 
      0,  40,   0,  94,  50,  60,   0,   0,  70,   0,   0,   0,   0,  27,  27,  27, 
      0,   0,   0,  29,   0,   0,  23,   0,   0,   0,  39,  50,   0,   0,  40,   0, 
     37,   0,   0,   0,   0,   0,  35,   0,   0,   0,  39,   0,   0,   0,  85,   0, 
      0,   0,  29,   0,   0,   0,  25,   0,   0,  94,   0,   0,   0,   0,  33,   0, 
     33,   0,   0,   0,   0,   0,   2,   0,  35,  37,  39,   2,  11,  15,  19,   3, 
      6,   9,   0,   0,   0,   0,   0,  27,   0,   0,   0,  40,   0,  33,   0,  33, 
      0,  40,   0,   0,   0,   0,   0,  23,  40,  50,  60,  70,  80,  81,  82,  83, 
     84,  85,  86,  87,  88,  89,  90,  91,  92,  93,  94,  95,  96,  97,  98,  99, 
    100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111,  11,  15,  23,  31, 
     80,  89,  98, 107,  31,  40,  80,  85,  89,  94,  98,  31,  40,  80,  85,  89, 
     94, 103, 107,  40,  23,  23,  23,  25,  25,  25,  25,  31,  40,  40,  40,  40, 
     40,  60,  80,  80,  80,  80,  85,  87,  89,  89,  89,  89,  80,  15,  15,  18, 
     19,   0,   0,   0,  23,  31,  40,  80,   0,  84,   0,   0,   0,   0,  93,   0, 
      0,  23,  25,  40,  50,  85,   0,   0,  23,  25,  27,  40,  50,  85,  94, 103, 
      0,   0,  23,  40,  50,  85,  25,  27,  40,  50,  85,  94,   0,  23,  80,   0, 
     39,  40,  50,  60,  70,  80,  81,  82,  83,  84,  85,  86,  87,  88,  89,  90, 
     91,  92,  93,  15,  11,  12,  18,   0,  50,  60,  70,  80,  81,  82,  83,  84, 
     85,  94,   2,  23,  35,  37,  39,  29,  39,  23,  25,  27,  37,  39,  23,  25, 
     27,  29,  31,  25,  27,  27,  29,  31,  23,  25,  27,  27,  29,  31,   0,   0, 
     29,  31,  27,  27,  29,  29,  29,  29,  33,  35,  35,  35,  37,  37,  39,  39, 
     39,  39,  25,  27,  29,  31,  33,  23,  25,  27,  29,  29,  31,  31,   0,   0, 
     23,  25,  12,  18,  21,  12,  18,   6,  11,   8,  11,   0,  83,  84,   0,   0, 
     37,  39,   2,  23,   2,   2,  23,  25,  35,  37,  39,   0,  29,   0,   0,   0, 
      0,   0,   0,  60,   0,  29,   0,   0,  39,   0,   0,   0, 
};

/* Numeric_Value: 2860 bytes. */

RE_UINT32 re_get_numeric_value(RE_UINT32 ch) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;

    f = ch >> 12;
    code = ch ^ (f << 12);
    pos = ((RE_UINT32)re_numeric_value_stage_1[f] << 4);
    f = code >> 8;
    code ^= (f << 8);
    pos = ((RE_UINT32)re_numeric_value_stage_2[pos + f] << 3);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_numeric_value_stage_3[pos + f] << 3);
    f = code >> 2;
    code ^= (f << 2);
    pos = ((RE_UINT32)re_numeric_value_stage_4[pos + f] << 2);
    value = re_numeric_value_stage_5[pos + code];

    return value;
}

RE_UINT32 re_get_alphanumeric(RE_UINT32 ch) {
    RE_UINT32 v;

    v = re_get_alphabetic(ch);
    if (v == 1)
        return 1;

    v = re_get_general_category(ch);
    if (v == RE_PROP_ND)
        return 1;

    return 0;
}

RE_UINT32 re_get_any(RE_UINT32 ch) {
    return 1;
}

RE_UINT32 re_get_ascii(RE_UINT32 ch) {
    if (ch <= RE_ASCII_MAX)
        return 1;

    return 0;
}

RE_UINT32 re_get_assigned(RE_UINT32 ch) {
    if (re_get_general_category(ch) != RE_PROP_CN)
        return 1;

    return 0;
}

#define RE_BLANK_MASK ((1 << RE_PROP_ZL) | (1 << RE_PROP_ZP))

RE_UINT32 re_get_blank(RE_UINT32 ch) {
    RE_UINT32 v;

    if (0x0A <= ch && ch <= 0x0D || ch == 0x85)
        return 0;

    v = re_get_white_space(ch);
    if (v == 0)
        return 0;

    v = re_get_general_category(ch);
    if ((RE_BLANK_MASK & (1 << v)) != 0)
        return 0;

    return 1;
}

#define RE_GRAPH_MASK ((1 << RE_PROP_CC) | (1 << RE_PROP_CS) | (1 << RE_PROP_CN))

RE_UINT32 re_get_graph(RE_UINT32 ch) {
    RE_UINT32 v;

    v = re_get_white_space(ch);
    if (v == 1)
        return 0;

    v = re_get_general_category(ch);
    if ((RE_GRAPH_MASK & (1 << v)) != 0)
        return 0;

    return 1;
}

RE_UINT32 re_get_print(RE_UINT32 ch) {
    RE_UINT32 v;

    v = re_get_general_category(ch);
    if (v == RE_PROP_CC)
        return 0;

    v = re_get_graph(ch);
    if (v == 1)
        return 1;

    v = re_get_blank(ch);
    if (v == 1)
        return 1;

    return 0;
}

#define RE_WORD_MASK (RE_PROP_M_MASK | (1 << RE_PROP_ND) | (1 << RE_PROP_PC))

RE_UINT32 re_get_word(RE_UINT32 ch) {
    RE_UINT32 v;

    v = re_get_alphabetic(ch);
    if (v == 1)
        return 1;

    v = re_get_general_category(ch);
    if ((RE_WORD_MASK & (1 << v)) != 0)
        return 1;

    return 0;
}

RE_UINT32 re_get_xdigit(RE_UINT32 ch) {
    RE_UINT32 v;

    v = re_get_general_category(ch);
    if (v == RE_PROP_ND)
        return 1;

    v = re_get_hex_digit(ch);
    if (v == 1)
        return 1;

    return 0;
}

RE_GetPropertyFunc re_get_property[] = {
    re_get_general_category,
    re_get_block,
    re_get_script,
    re_get_word_break,
    re_get_grapheme_cluster_break,
    re_get_sentence_break,
    re_get_math,
    re_get_alphabetic,
    re_get_lowercase,
    re_get_uppercase,
    re_get_cased,
    re_get_case_ignorable,
    re_get_changes_when_lowercased,
    re_get_changes_when_uppercased,
    re_get_changes_when_titlecased,
    re_get_changes_when_casefolded,
    re_get_changes_when_casemapped,
    re_get_id_start,
    re_get_id_continue,
    re_get_xid_start,
    re_get_xid_continue,
    re_get_default_ignorable_code_point,
    re_get_grapheme_extend,
    re_get_grapheme_base,
    re_get_grapheme_link,
    re_get_white_space,
    re_get_bidi_control,
    re_get_join_control,
    re_get_dash,
    re_get_hyphen,
    re_get_quotation_mark,
    re_get_terminal_punctuation,
    re_get_other_math,
    re_get_hex_digit,
    re_get_ascii_hex_digit,
    re_get_other_alphabetic,
    re_get_ideographic,
    re_get_diacritic,
    re_get_extender,
    re_get_other_lowercase,
    re_get_other_uppercase,
    re_get_noncharacter_code_point,
    re_get_other_grapheme_extend,
    re_get_ids_binary_operator,
    re_get_ids_trinary_operator,
    re_get_radical,
    re_get_unified_ideograph,
    re_get_other_default_ignorable_code_point,
    re_get_deprecated,
    re_get_soft_dotted,
    re_get_logical_order_exception,
    re_get_other_id_start,
    re_get_other_id_continue,
    re_get_sterm,
    re_get_variation_selector,
    re_get_pattern_white_space,
    re_get_pattern_syntax,
    re_get_hangul_syllable_type,
    re_get_bidi_class,
    re_get_canonical_combining_class,
    re_get_decomposition_type,
    re_get_east_asian_width,
    re_get_joining_group,
    re_get_joining_type,
    re_get_line_break,
    re_get_numeric_type,
    re_get_numeric_value,
    re_get_alphanumeric,
    re_get_any,
    re_get_ascii,
    re_get_assigned,
    re_get_blank,
    re_get_graph,
    re_get_print,
    re_get_word,
    re_get_xdigit,
};

typedef RE_INT32 RE_CaseDiffs[3];

RE_CaseDiffs case_diffs[] = {
    {     0,     0,     0},
    {    32,     0,     0},
    {    32,   232,     0},
    {    32,  8415,     0},
    {    32,   300,     0},
    {   -32,     0,     0},
    {   -32,   199,     0},
    {   -32,  8383,     0},
    {   -32,   268,     0},
    {   743,   775,     0},
    {    32,  8294,     0},
    {  7615,     0,     0},
    {   -32,  8262,     0},
    {   121,     0,     0},
    {     1,     0,     0},
    {    -1,     0,     0},
    {  -199,     0,     0},
    {  -232,     0,     0},
    {  -121,     0,     0},
    {  -300,  -268,     0},
    {   195,     0,     0},
    {   210,     0,     0},
    {   206,     0,     0},
    {   205,     0,     0},
    {    79,     0,     0},
    {   202,     0,     0},
    {   203,     0,     0},
    {   207,     0,     0},
    {    97,     0,     0},
    {   211,     0,     0},
    {   209,     0,     0},
    {   163,     0,     0},
    {   213,     0,     0},
    {   130,     0,     0},
    {   214,     0,     0},
    {   218,     0,     0},
    {   217,     0,     0},
    {   219,     0,     0},
    {    56,     0,     0},
    {     1,     2,     0},
    {    -1,     1,     0},
    {    -2,    -1,     0},
    {   -79,     0,     0},
    {   -97,     0,     0},
    {   -56,     0,     0},
    {  -130,     0,     0},
    { 10795,     0,     0},
    {  -163,     0,     0},
    { 10792,     0,     0},
    { 10815,     0,     0},
    {  -195,     0,     0},
    {    69,     0,     0},
    {    71,     0,     0},
    { 10783,     0,     0},
    { 10780,     0,     0},
    { 10782,     0,     0},
    {  -210,     0,     0},
    {  -206,     0,     0},
    {  -205,     0,     0},
    {  -202,     0,     0},
    {  -203,     0,     0},
    {  -207,     0,     0},
    { 42280,     0,     0},
    {  -209,     0,     0},
    {  -211,     0,     0},
    { 10743,     0,     0},
    { 10749,     0,     0},
    {  -213,     0,     0},
    {  -214,     0,     0},
    { 10727,     0,     0},
    {  -218,     0,     0},
    {   -69,     0,     0},
    {  -217,     0,     0},
    {   -71,     0,     0},
    {  -219,     0,     0},
    {    84,   116,  7289},
    {    38,     0,     0},
    {    37,     0,     0},
    {    64,     0,     0},
    {    63,     0,     0},
    {    32,    62,     0},
    {    32,    96,     0},
    {    32,    57,    92},
    {   -84,    32,  7205},
    {    32,    86,     0},
    {  -743,    32,     0},
    {    32,    54,     0},
    {    32,    80,     0},
    {    31,    32,     0},
    {    32,    47,     0},
    {    32,  7549,     0},
    {   -38,     0,     0},
    {   -37,     0,     0},
    {   -32,    30,     0},
    {   -32,    64,     0},
    {   -32,    25,    60},
    {  -116,   -32,  7173},
    {   -32,    54,     0},
    {  -775,   -32,     0},
    {   -32,    22,     0},
    {   -32,    48,     0},
    {   -31,     1,     0},
    {   -32,    -1,     0},
    {   -32,    15,     0},
    {   -32,  7517,     0},
    {   -64,     0,     0},
    {   -63,     0,     0},
    {     8,     0,     0},
    {   -62,   -30,     0},
    {   -57,   -25,    35},
    {   -47,   -15,     0},
    {   -54,   -22,     0},
    {    -8,     0,     0},
    {   -86,   -54,     0},
    {   -80,   -48,     0},
    {     7,     0,     0},
    {   -92,   -60,   -35},
    {   -96,   -64,     0},
    {    -7,     0,     0},
    {    80,     0,     0},
    {   -80,     0,     0},
    {    15,     0,     0},
    {   -15,     0,     0},
    {    48,     0,     0},
    {   -48,     0,     0},
    {  7264,     0,     0},
    { 35332,     0,     0},
    {  3814,     0,     0},
    {     1,    59,     0},
    {    -1,    58,     0},
    {   -59,   -58,     0},
    { -7615,     0,     0},
    {    74,     0,     0},
    {    86,     0,     0},
    {   100,     0,     0},
    {   128,     0,     0},
    {   112,     0,     0},
    {   126,     0,     0},
    {     9,     0,     0},
    {   -74,     0,     0},
    {    -9,     0,     0},
    { -7289, -7205, -7173},
    {   -86,     0,     0},
    {  -100,     0,     0},
    {  -112,     0,     0},
    {  -128,     0,     0},
    {  -126,     0,     0},
    { -7549, -7517,     0},
    { -8415, -8383,     0},
    { -8294, -8262,     0},
    {    28,     0,     0},
    {   -28,     0,     0},
    {    16,     0,     0},
    {   -16,     0,     0},
    {    26,     0,     0},
    {   -26,     0,     0},
    {-10743,     0,     0},
    { -3814,     0,     0},
    {-10727,     0,     0},
    {-10795,     0,     0},
    {-10792,     0,     0},
    {-10780,     0,     0},
    {-10749,     0,     0},
    {-10783,     0,     0},
    {-10782,     0,     0},
    {-10815,     0,     0},
    { -7264,     0,     0},
    {-35332,     0,     0},
    {-42280,     0,     0},
    {    40,     0,     0},
    {   -40,     0,     0},
};

/* Case diffs: 2052 bytes. */

/* cases. */

RE_UINT8 re_cases_stage_1[] = {
    0, 1, 2, 3, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    1, 1, 1, 1, 
};

RE_UINT8 re_cases_stage_2[] = {
     0,  1,  2,  3,  3,  3,  3,  3,  4,  3,  3,  3,  3,  3,  5,  6, 
     7,  3,  8,  3,  3,  3,  9,  3,  3,  3,  3,  3,  3,  3,  3,  3, 
     3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 
     3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 
     3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 
     3,  3,  3, 10,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 
     3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 
     3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 11, 
     3,  3, 12,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 
     3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 
};

RE_UINT8 re_cases_stage_3[] = {
     0,  0,  1,  2,  0,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 
     6, 14, 15, 16, 17,  0,  0,  0,  0,  0, 18, 19, 20, 21, 22, 23, 
    24, 25, 26,  6, 27,  6, 28,  6,  6, 29, 30, 31, 32,  0,  0,  0, 
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  0,  0,  0, 33, 34,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 35,  0,  0,  0,  0, 
     6,  6,  6, 36, 37,  6,  6,  6, 38, 39, 40, 41, 39, 42, 43, 44, 
     0,  0,  0,  0,  0,  0,  0,  0,  0, 45, 46, 47, 48,  0,  0,  0, 
     0,  0,  0,  0,  0, 49, 50, 51,  0,  0,  0,  0,  0,  0,  0,  0, 
    52, 53, 54, 55,  6,  6,  6, 56, 57, 58,  0,  0,  0,  0,  0,  0, 
     0,  0,  6, 59, 60,  0,  0,  0,  0, 61,  6, 62, 63, 64,  0,  0, 
     0,  0,  0,  0,  0,  0,  0,  0,  0, 65, 66,  0,  0,  0,  0,  0, 
    67, 68, 69,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
};

RE_UINT8 re_cases_stage_4[] = {
      0,   0,   0,   0,   0,   0,   0,   0,   1,   2,   3,   2,   4,   2,   5,   0, 
      6,   7,   8,   7,   9,   7,  10,   0,   0,   0,   0,   0,   0,  11,   0,   0, 
      2,  12,   2,   2,   2,   5,   2,  13,   7,  14,   7,   7,   7,  10,   7,  15, 
     16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  17,  16,  18,  19, 
     19,  19,  20,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  21,  22, 
     23,  24,  25,  26,  27,  28,  29,  30,  16,  31,  32,  31,  33,  34,  35,  36, 
      0,  37,  38,  39,  19,  19,  19,  40,  16,  16,  16,  16,  41,  42,  16,  16, 
     43,  16,  16,  16,  16,   0,  44,  45,  46,  47,  16,  16,  48,  49,  50,   0, 
     51,  52,  53,  54,  55,  56,   0,  57,  58,   0,  59,  60,  61,   0,   0,   0, 
      0,  62,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,  63,  64,  65, 
      0,  66,  67,  68,  69,  70,  71,  72,  73,  74,  75,  76,  77,  78,  79,  80, 
     81,  82,  83,  84,  85,  86,  16,  16,  16,  16,  16,  16,  87,  88,  89,  90, 
     91,  91,  91,  91,   2,   2,   2,   2,   2,   2,   2,   2,   7,   7,   7,   7, 
      7,   7,   7,   7,  92,  92,  92,  92,  35,   0,  63,  16,  16,  16,  16,  16, 
     93,  19,  19,  94,  16,  16,  16,  16,  16,  16,   0,   0,  95,  96,  96,  96, 
     96,  96,  96,  96,  96,  97,   0,   0,  98,  99,  99,  99,  99,  99,  99,  99, 
     99, 100,   0,   0,   0,   0,   0,   0, 101, 101, 101, 101, 101, 101, 101, 101, 
    101, 102,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 103, 104, 
    105,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  35, 106, 107, 
    108, 108, 109, 109, 108, 110, 109, 111, 108, 108, 109, 109, 108, 108, 109, 109, 
    108, 110, 109, 111, 112, 112, 113, 113, 108, 108, 109, 109, 114, 115, 116, 117, 
    108, 108, 109, 109, 118,   0, 119, 120, 121,   0, 122, 123, 110,   0, 124,   0, 
    110, 125, 126, 127, 121,   0, 128, 123,   0, 129, 130,   0, 131,   0,   0,   0, 
      0,   0,   0, 132,   0,   0,   0,   0, 133, 133, 133, 133, 134, 134, 134, 134, 
    135, 136,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 137, 138, 138, 
    138, 138, 138, 138, 139, 139, 139, 139, 139, 139, 140,   0,   0,   0,   0,   0, 
     96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  97,  99,  99,  99,  99, 
     99,  99,  99,  99,  99,  99,  99, 100, 141, 142,  19, 143, 144, 145,   0, 146, 
     16,   0, 135, 147,   0,   0,   0,   0, 148, 148, 148, 148, 148, 148, 148, 148, 
    148, 149,   0,   0,   0,   0,   0,   0,  16,  16,  16,  35,   0,   0,   0,   0, 
     16,  16,  16,  16,  16,  16,   0,   0,  63,  16,  16,  16,  63,  16,  16,  16, 
     16,  16,  16,  16,   0,   0,  18, 150,  16,  16, 135, 151,  35,   0,   0,   0, 
     16,  16,  35,   0,   0,   0,   0,   0,   1,   2,   2,   2,   2,   2,   5,   0, 
      6,   7,   7,   7,   7,   7,  10,   0, 152, 152, 152, 152, 152, 152, 152, 152, 
    152, 152, 153, 153, 153, 153, 153, 153, 153, 153, 153, 153,   0,   0,   0,   0, 
};

RE_UINT8 re_cases_stage_5[] = {
      0,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1,   1,   1,   2,   1,   3, 
      1,   1,   1,   4,   1,   1,   1,   0,   0,   5,   5,   5,   5,   5,   5,   5, 
      5,   6,   5,   7,   5,   5,   5,   8,   5,   5,   5,   0,   0,   9,   0,   0, 
      1,  10,   1,   1,   1,   1,   1,  11,   5,  12,   5,   5,   5,   5,   5,  13, 
     14,  15,  14,  15,  16,  17,  14,  15,   0,  14,  15,  14,  15,  14,  15,  14, 
     15,   0,  14,  15,  18,  14,  15,  14,  15,  14,  15,  19,  20,  21,  14,  15, 
     14,  15,  22,  14,  15,  23,  23,  14,  15,   0,  24,  25,  26,  14,  15,  23, 
     27,  28,  29,  30,  14,  15,  31,   0,  29,  32,  33,  34,  14,  15,  35,  14, 
     15,  35,   0,   0,  15,  36,  36,  14,  15,  14,  15,  37,  14,  15,   0,   0, 
     14,  15,   0,  38,  39,  40,  41,  39,  40,  41,  39,  40,  41,  14,  15,  14, 
     15,  42,  14,  15,   0,  39,  40,  41,  14,  15,  43,  44,  45,   0,  14,  15, 
      0,   0,  46,  14,  15,  47,  48,  49,  49,  14,  15,  50,  51,  52,  14,  15, 
     53,  54,  55,  56,  57,   0,  58,  58,   0,  59,   0,  60,  58,   0,   0,  61, 
      0,  62,   0,   0,  63,  64,   0,  65,   0,   0,   0,  64,   0,  66,  67,   0, 
      0,  68,   0,   0,   0,  69,   0,   0,  70,   0,   0,  70,  70,  71,  72,  72, 
     73,   0,   0,   0,   0,   0,  74,   0,   0,  75,   0,   0,   0,   0,  14,  15, 
      0,   0,   0,  33,  33,  33,   0,   0,   0,   0,  76,   0,  77,  77,  77,   0, 
     78,   0,  79,  79,   0,   1,  80,   1,   1,  81,   1,   1,  82,  83,  84,   1, 
     85,   1,   1,   1,  86,  87,   0,  88,   1,   1,  89,   1,   1,  90,   1,   1, 
     91,  92,  92,  92,   0,   5,  93,   5,   5,  94,   5,   5,  95,  96,  97,   5, 
     98,   5,   5,   5,  99, 100, 101, 102,   5,   5, 103,   5,   5, 104,   5,   5, 
    105, 106, 106, 107, 108, 109,   0,   0,   0, 110, 111, 112, 113, 114, 115,   0, 
    116, 117,   0,  14,  15, 118,  14,  15,   0,  45,  45,  45, 119, 119, 119, 119, 
    120, 120, 120, 120, 121,  14,  15,  14,  15,  14,  15, 122,   0, 123, 123, 123, 
    123, 123, 123, 123, 123, 123, 123,   0,   0, 124, 124, 124, 124, 124, 124, 124, 
    124, 124, 124,   0, 125, 125, 125, 125, 125, 125,   0,   0,   0, 126,   0,   0, 
      0, 127,   0,   0, 128, 129,  14,  15,   0,   0,   0, 130,   0,   0, 131,   0, 
    107, 107, 107, 107, 112, 112, 112, 112, 107, 107,   0,   0, 112, 112,   0,   0, 
      0, 107,   0, 107,   0, 112,   0, 112, 132, 132, 133, 133, 133, 133, 134, 134, 
    135, 135, 136, 136, 137, 137,   0,   0, 107, 107,   0, 138, 112, 112, 139, 139, 
    140,   0, 141,   0,   0,   0,   0, 138, 142, 142, 142, 142, 140,   0,   0,   0, 
    112, 112, 143, 143,   0, 115,   0,   0, 112, 112, 144, 144, 118,   0,   0,   0, 
    145, 145, 146, 146,   0,   0, 147,   0,   0,   0, 148, 149,   0,   0, 150,   0, 
      0,   0, 151,   0, 152, 152, 152, 152, 153, 153, 153, 153,   0,   0,   0,  14, 
     15,   0,   0,   0,   0,   0, 154, 154, 154, 154, 154, 154, 155, 155, 155, 155, 
    155, 155,   0,   0,  14,  15, 156, 157, 158, 159, 160,  14,  15, 161, 162, 163, 
    164,   0,  14,  15,   0,  14,  15,   0,   0,   0, 165, 165,  15,  14,  15,   0, 
    166, 166, 166, 166, 166, 166,   0,   0,  15, 167,  14,  15,  15, 168,   0,   0, 
    169, 169, 169, 169, 170, 170, 170, 170, 
};

/* cases: 1612 bytes. */

BOOL re_is_same_char_ign(RE_UINT32 ch1, RE_UINT32 ch2) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;
    RE_INT32 diff;
    RE_INT32* diffs;

    if (ch1 == ch2)
        return TRUE;

    diff = ch2 - ch1;

    f = ch1 >> 14;
    code = ch1 ^ (f << 14);
    pos = ((RE_UINT32)re_cases_stage_1[f] << 5);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_cases_stage_2[pos + f] << 4);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_cases_stage_3[pos + f] << 3);
    f = code >> 2;
    code ^= (f << 2);
    pos = ((RE_UINT32)re_cases_stage_4[pos + f] << 2);
    value = re_cases_stage_5[pos + code];

    if (value == 0)
        return FALSE;

    diffs = case_diffs[value];

    return diff == diffs[0] || diff == diffs[1] || diff == diffs[2];
}

int re_get_all_cases(RE_UINT32 ch, RE_UINT32* cases) {
    RE_UINT32 code;
    RE_UINT32 f;
    RE_UINT32 pos;
    RE_UINT32 value;
    int count;
    RE_INT32* diffs;
    int i;

    count = 0;

    f = ch >> 14;
    code = ch ^ (f << 14);
    pos = ((RE_UINT32)re_cases_stage_1[f] << 5);
    f = code >> 9;
    code ^= (f << 9);
    pos = ((RE_UINT32)re_cases_stage_2[pos + f] << 4);
    f = code >> 5;
    code ^= (f << 5);
    pos = ((RE_UINT32)re_cases_stage_3[pos + f] << 3);
    f = code >> 2;
    code ^= (f << 2);
    pos = ((RE_UINT32)re_cases_stage_4[pos + f] << 2);
    value = re_cases_stage_5[pos + code];

    diffs = case_diffs[value];

    cases[count++] = ch;

    for (i = 0; i < RE_MAX_CASE_DIFFS; i++) {
        if (diffs[i] != 0)
            cases[count++] = ch + diffs[i];
    }

    return count;
}
