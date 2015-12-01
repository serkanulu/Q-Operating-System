#include "me.h"

// for some reason when I tried to put this in a seperate file then me.c couldn't access it :(
char *months[] = {
    "JANUARY",
    "FEBUARY",
    "MARCH",
    "APRIL",
    "MAY",
    "JUNE",
    "JULY",
    "AUGUST",
    "SEPTEMBER",
    "OCTOBER",
    "NOVEMBER",
    "DECEMBER",
};

char *continents[] = {
    "AUSTRALIA",
    "AFRICA",
    "ANTARCTICA",
    "EUROPE",
    "NORTH AMERICA",
    "SOUTH AMERICA",
    "ASIA",
};

// Thanks to https://www.countries-ofthe-world.com/all-countries.html
// For a list of countries that I have turned into an array here
char *countries[] = {
    "AFGHANISTAN",
    "ALBANIA",
    "ALGERIA",
    "ANDORRA",
    "ANGOLA",
    "ANTIGUA AND BARBUDA",
    "ARGENTINA",
    "ARMENIA",
    "AUSTRALIA",
    "AUSTRIA",
    "AZERBAIJAN",
    "BAHAMAS",
    "BAHRAIN",
    "BANGLADESH",
    "BARBADOS",
    "BELARUS",
    "BELGIUM",
    "BELIZE",
    "BENIN",
    "BHUTAN",
    "BOLIVIA",
    "BOSNIA AND HERZEGOVINA",
    "BOTSWANA",
    "BRAZIL",
    "BRUNEI",
    "BULGARIA",
    "BURKINA FASO",
    "BURUNDI",
    "CABO VERDE",
    "CAMBODIA",
    "CAMEROON",
    "CANADA",
    "CENTRAL AFRICAN REPUBLIC",
    "CHAD",
    "CHILE",
    "CHINA",
    "COLOMBIA",
    "COMOROS",
    "CONGO, REPUBLIC OF THE",
    "CONGO, DEMOCRATIC REPUBLIC OF THE",
    "COSTA RICA",
    "COTE D'IVOIRE",
    "CROATIA",
    "CUBA",
    "CYPRUS",
    "CZECH REPUBLIC",
    "DENMARK",
    "DJIBOUTI",
    "DOMINICA",
    "DOMINICAN REPUBLIC",
    "ECUADOR",
    "EGYPT",
    "EL SALVADOR",
    "EQUATORIAL GUINEA",
    "ERITREA",
    "ESTONIA",
    "ETHIOPIA",
    "FIJI",
    "FINLAND",
    "FRANCE",
    "GABON",
    "GAMBIA",
    "GEORGIA",
    "GERMANY",
    "GHANA",
    "GREECE",
    "GRENADA",
    "GUATEMALA",
    "GUINEA",
    "GUINEA-BISSAU",
    "GUYANA"
    "HAITI",
    "HONDURAS",
    "HUNGARY",
    "ICELAND",
    "INDIA",
    "INDONESIA",
    "IRAN",
    "IRAQ",
    "IRELAND",
    "ISRAEL",
    "ITALY",
    "JAMAICA",
    "JAPAN",
    "JORDAN",
    "KAZAKHSTAN",
    "KENYA",
    "KIRIBATI",
    "KOSOVO",
    "KUWAIT",
    "KYRGYZSTAN",
    "LAOS",
    "LATVIA",
    "LEBANON",
    "LESOTHO",
    "LIBERIA",
    "LIBYA",
    "LIECHTENSTEIN",
    "LITHUANIA",
    "LUXEMBOURG",
    "MACEDONIA",
    "MADAGASCAR",
    "MALAWI",
    "MALAYSIA",
    "MALDIVES",
    "MALI",
    "MALTA",
    "MARSHALL ISLANDS",
    "MAURITANIA",
    "MAURITIUS",
    "MEXICO",
    "MICRONESIA",
    "MOLDOVA",
    "MONACO",
    "MONGOLIA",
    "MONTENEGRO",
    "MOROCCO",
    "MOZAMBIQUE",
    "MYANMAR (BURMA)",
    "NAMIBIA",
    "NAURU",
    "NEPAL",
    "HONDURAS",
    "HUNGARY",
    "ICELAND",
    "INDIA",
    "INDONESIA",
    "IRAN",
    "IRAQ",
    "IRELAND",
    "ISRAEL",
    "ITALY",
    "JAMAICA",
    "JAPAN",
    "JORDAN",
    "KAZAKHSTAN",
    "KENYA",
    "KIRIBATI",
    "KOSOVO",
    "KUWAIT",
    "KYRGYZSTAN",
    "LAOS",
    "LATVIA",
    "LEBANON",
    "LESOTHO",
    "LIBERIA",
    "LIBYA",
    "LIECHTENSTEIN",
    "LITHUANIA",
    "LUXEMBOURG",
    "MACEDONIA",
    "MADAGASCAR",
    "MALAWI",
    "MALAYSIA",
    "MALDIVES",
    "MALI",
    "MALTA",
    "MARSHALL ISLANDS",
    "MAURITANIA",
    "MAURITIUS",
    "MEXICO",
    "MICRONESIA",
    "MOLDOVA",
    "MONACO",
    "MONGOLIA",
    "MONTENEGRO",
    "MOROCCO",
    "MOZAMBIQUE",
    "MYANMAR (BURMA)",
    "NAMIBIA",
    "NAURU",
    "NEPAL",
    "NETHERLANDS",
    "NEW ZEALAND",
    "NICARAGUA",
    "NIGER",
    "NIGERIA",
    "NORTH KOREA",
    "NORWAY",
    "OMAN",
    "PAKISTAN",
    "PALAU",
    "PALESTINE",
    "PANAMA",
    "PAPUA NEW GUINEA",
    "PARAGUAY",
    "PERU",
    "PHILIPPINES",
    "POLAND",
    "PORTUGAL",
    "QATAR",
    "ROMANIA",
    "RUSSIA",
    "RWANDA",
    "ST. KITTS AND NEVIS",
    "ST. LUCIA",
    "ST. VINCENT AND THE GRENADINES",
    "SAMOA",
    "SAN MARINO",
    "SAO TOME AND PRINCIPE",
    "SAUDI ARABIA",
    "SENEGAL",
    "SERBIA",
    "SEYCHELLES",
    "SIERRA LEONE",
    "SLOVAKIA",
    "SINGAPORE",
    "SLOVENIA",
    "SOLOMON ISLANDS",
    "SOMALIA",
    "SOUTH AFRICA",
    "SOUTH KOREA",
    "SOUTH SUDAN",
    "SPAIN",
    "SRI LANKA",
    "SURINAME",
    "SUDAN",
    "SWAZILAND",
    "SWEDEN",
    "SWITZERLAND",
    "SYRIA",
    "TAIWAN",
    "TAJIKISTAN",
    "TANZANIA",
    "THAILAND",
    "TIMOR-LESTE",
    "TOGO",
    "TONGA",
    "TRINIDAD AND TOBAGO",
    "TUNISIA",
    "TURKEY",
    "TURKMENISTAN",
    "TUVALU",
    "UGANDA",
    "UKRAINE",
    "UNITED ARAB EMIRATES",
    "UK (UNITED KINGDOM)",
    "USA (UNITED STATES OF AMERICA)",
    "URUGUAY",
    "UZBEKISTAN",
    "VANUATU",
    "VATICAN CITY (HOLY SEE)",
    "VENEZUELA",
    "VIETNAM",
    "YEMEN",
    "ZAMBIA",
    "ZIMBABWE"
    "NETHERLANDS",
    "NEW ZEALAND",
    "NICARAGUA",
    "NIGER",
    "NIGERIA",
    "NORTH KOREA",
    "NORWAY",
    "OMAN",
    "PAKISTAN",
    "PALAU",
    "PALESTINE",
    "PANAMA",
    "PAPUA NEW GUINEA",
    "PARAGUAY",
    "PERU",
    "PHILIPPINES",
    "POLAND",
    "PORTUGAL",
    "QATAR",
    "ROMANIA",
    "RUSSIA",
    "RWANDA",
    "ST. KITTS AND NEVIS",
    "ST. LUCIA",
    "ST. VINCENT AND THE GRENADINES",
    "SAMOA",
    "SAN MARINO",
    "SAO TOME AND PRINCIPE",
    "SAUDI ARABIA",
    "SENEGAL",
    "SERBIA",
    "SEYCHELLES",
    "SIERRA LEONE",
    "SLOVAKIA",
    "SINGAPORE",
    "SLOVENIA",
    "SOLOMON ISLANDS",
    "SOMALIA",
    "SOUTH AFRICA",
    "SOUTH KOREA",
    "SOUTH SUDAN",
    "SPAIN",
    "SRI LANKA",
    "SURINAME",
    "SUDAN",
    "SWAZILAND",
    "SWEDEN",
    "SWITZERLAND",
    "SYRIA",
    "TAIWAN",
    "TAJIKISTAN",
    "TANZANIA",
    "THAILAND",
    "TIMOR-LESTE",
    "TOGO",
    "TONGA",
    "TRINIDAD AND TOBAGO",
    "TUNISIA",
    "TURKEY",
    "TURKMENISTAN",
    "TUVALU",
    "UGANDA",
    "UKRAINE",
    "UNITED ARAB EMIRATES",
    "UK (UNITED KINGDOM)",
    "USA (UNITED STATES OF AMERICA)",
    "URUGUAY",
    "UZBEKISTAN",
    "VANUATU",
    "VATICAN CITY (HOLY SEE)",
    "VENEZUELA",
    "VIETNAM",
    "YEMEN",
    "ZAMBIA",
    "ZIMBABWE",
};

char *verbs[] = {
    "ACCEPT",
    "ACHE",
    "ACKNOWLEDGE",
    "ACT",
    "ADD",
    "ADMIRE",
    "ADMIT",
    "ADMONISH",
    "ADVISE",
    "ADOPT",
    "AFFIRM",
    "AFFORD",
    "AGREE",
    "AIL",
    "ALERT",
    "ALLEGE",
    "ALLOW",
    "ALLUDE",
    "AMUSE",
    "ANALYZE",
    "ANNOUNCE",
    "ANNOY",
    "ANSWER",
    "APOLOGIZE",
    "APPEAL",
    "APPEAR",
    "APPLAUD",
    "APPRECIATE",
    "APPROVE",
    "ARGUE",
    "ARRANGE",
    "ARREST",
    "ARRIVE",
    "ARTICULATE",
    "ASK",
    "ASSERT",
    "ASSURE",
    "ATTACH",
    "ATTACK",
    "ATTEMPT",
    "ATTEND",
    "ATTRACT",
    "AUCTION",
    "AVOID",
    "AVOW",
    "AWAKE",
    "BABBLE",
    "BACK",
    "BAKE",
    "BALANCE",
    "BALK",
    "BAN",
    "BANG",
    "BANDAGE",
    "BAR",
    "BARE",
    "BARGAIN",
    "BARK",
    "BARRAGE",
    "BARTER",
    "BASTE",
    "BAT",
    "BATHE",
    "BATTLE",
    "BAWL",
    "BE",
    "BEAM",
    "BEAR",
    "BEAT",
    "BECOME",
    "BEFRIEND",
    "BEG",
    "BEGIN",
    "BEHAVE",
    "BELIEVE",
    "BELLOW",
    "BELONG",
    "BEND",
    "BERATE",
    "BESIEGE",
    "BESTOW",
    "BET",
    "BID",
    "BITE",
    "BLEACH",
    "BLEED",
    "BLESS",
    "BLIND",
    "BLINK",
    "BLOT",
    "BLOW",
    "BLURT",
    "BLUSH",
    "BOAST",
    "BOB",
    "BOIL",
    "BOLT",
    "BOMB",
    "BOOK",
    "BORE",
    "BORROW",
    "BOUNCE",
    "BOW",
    "BOX",
    "BRAG",
    "BRAKE",
    "BRANCH",
    "BRAND",
    "BREAK",
    "BREATHE",
    "BREED",
    "BRING",
    "BROADCAST",
    "BROIL",
    "BRUISE",
    "BRUSH",
    "BUBBLE",
    "BUILD",
    "BUMP",
    "BURN",
    "BURNISH",
    "BURY",
    "BUY",
    "BUZZ",
    "CAJOLE",
    "CALCULATE",
    "CALL",
    "CAMP",
    "CARE",
    "CARRY",
    "CARVE",
    "CAUSE",
    "CAUTION",
    "CATCH",
    "CHALLENGE",
    "CHANGE",
    "CHANT",
    "CHARGE",
    "CHASE",
    "CHEAT",
    "CHECK",
    "CHEER",
    "CHEW",
    "CHIDE",
    "CHIP",
    "CHOKE",
    "CHOMP",
    "CHOOSE",
    "CHOP",
    "CLAIM",
    "CLAP",
    "CLEAN",
    "CLEAR",
    "CLIMB",
    "CLIP",
    "CLOSE",
    "COACH",
    "COIL",
    "COLLECT",
    "COLOR",
    "COMB",
    "COME",
    "COMFORT",
    "COMMAND",
    "COMMENT",
    "COMMUNICATE",
    "COMPARE",
    "COMPETE",
    "COMPLAIN",
    "COMPLETE",
    "CONCEDE",
    "CONCENTRATE",
    "CONCERN",
    "CONCLUDE",
    "CONCUR",
    "CONFESS",
    "CONFIDE",
    "CONFIRM",
    "CONNECT",
    "CONSENT",
    "CONSIDER",
    "CONSIST",
    "CONTAIN",
    "CONTEND",
    "CONTINUE",
    "COOK",
    "COPY",
    "CORRECT",
    "COST",
    "COUGH",
    "COUNT",
    "COUNTER",
    "COVER",
    "COVET",
    "CRACK",
    "CRASH",
    "CRAVE",
    "CRAWL",
    "CROCHET",
    "CROSS",
    "CRITICIZE",
    "CROAK",
    "CROSS-EXAMINE",
    "CROWD",
    "CRUSH",
    "CRY",
    "CURE",
    "CURL",
    "CURSE",
    "CURVE",
    "CUT",
    "CYCLE",
    "DAM",
    "DAMAGE",
    "DANCE",
    "DARE",
    "DEAL",
    "DEBATE",
    "DECAY",
    "DECEIVE",
    "DECIDE",
    "DECIPHER",
    "DECLARE",
    "DECORATE",
    "DELAY",
    "DELIGHT",
    "DELIVER",
    "DEMAND",
    "DENY",
    "DEPEND",
    "DESCRIBE",
    "DESERT",
    "DESERVE",
    "DESIRE",
    "DETER",
    "DEVELOP",
    "DIAL",
    "DICTATE",
    "DIE",
    "DIG",
    "DIGRESS",
    "DIRECT",
    "DISCLOSE",
    "DISLIKE",
    "DIVE",
    "DIVIDE",
    "DIVORCE",
    "DIVULGE",
    "DO",
    "DOCK",
    "DOLE",
    "DOTE",
    "DOUBLE",
    "DOUBT",
    "DRAG",
    "DRAIN",
    "DRAW",
    "DREAM",
    "DRESS",
    "DRIP",
    "DRILL",
    "DRINK",
    "DRIVE",
    "DRONE",
    "DROP",
    "DROWN",
    "DRY",
    "DUPE",
    "DUMP",
    "DUST",
    "DYE",
    "EARN",
    "EAT",
    "ECHO",
    "EDIT",
    "EDUCATE",
    "ELOPE",
    "EMBARRASS",
    "EMIGRATE",
    "EMIT",
    "EMPHASIZE",
    "EMPLOY",
    "EMPTY",
    "ENCHANT",
    "ENCODE",
    "ENCOURAGE",
    "END",
    "ENJOIN",
    "ENJOY",
    "ENTER",
    "ENTERTAIN",
    "ENUNCIATE",
    "ENVY",
    "EQUIVOCATE",
    "ESCAPE",
    "EVACUATE",
    "EVAPORATE",
    "EXAGGERATE",
    "EXAMINE",
    "EXCITE",
    "EXCLAIM",
    "EXCUSE",
    "EXERCISE",
    "EXIST",
    "EXPAND",
    "EXPECT",
    "EXPEL",
    "EXHORT",
    "EXPLAIN",
    "EXPLODE",
    "EXPLORE",
    "EXTEND",
    "EXTOLL",
    "FACE",
    "FADE",
    "FAIL",
    "FALL",
    "FALTER",
    "FASTEN",
    "FAVOR",
    "FAX",
    "FEAR",
    "FEED",
    "FEEL",
    "FENCE",
    "FETCH",
    "FIGHT",
    "FILE",
    "FILL",
    "FILM",
    "FIND",
    "FIRE",
    "FISH",
    "FIT",
    "FIX",
    "FLAP",
    "FLASH",
    "FLEE",
    "FLOAT",
    "FLOOD",
    "FLOSS",
    "FLOW",
    "FLOWER",
    "FLY",
    "FOLD",
    "FOLLOW",
    "FOOL",
    "FORCE",
    "FORETELL",
    "FORGET",
    "FORGIVE",
    "FORM",
    "FOUND",
    "FRAME",
    "FREEZE",
    "FRET",
    "FRIGHTEN",
    "FRY",
    "FUME",
    "GARDEN",
    "GASP",
    "GATHER",
    "GAZE",
    "GEL",
    "GET",
    "GILD",
    "GIVE",
    "GLIDE",
    "GLUE",
    "GNAW",
    "GO",
    "GRAB",
    "GRATE",
    "GREASE",
    "GREET",
    "GRILL",
    "GRIN",
    "GRIP",
    "GROAN",
    "GROW",
    "GROWL",
    "GRUMBLE",
    "GRUNT",
    "GUARANTEE",
    "GUARD",
    "GUESS",
    "GUIDE",
    "GURGLE",
    "GUSH",
    "HAIL",
    "HAMMER",
    "HAND",
    "HANDLE",
    "HANG",
    "HAPPEN",
    "HARASS",
    "HARM",
    "HARNESS",
    "HATE",
    "HAUNT",
    "HAVE",
    "HEAD",
    "HEAL",
    "HEAP",
    "HEAR",
    "HEAT",
    "HELP",
    "HIDE",
    "HIGHLIGHT",
    "HIJACK",
    "HINDER",
    "HINT",
    "HISS",
    "HIT",
    "HOLD",
    "HOOK",
    "HOOT",
    "HOP",
    "HOPE",
    "HOVER",
    "HOWL",
    "HUG",
    "HUM",
    "HUNT",
    "HURRY",
    "HURT",
    "ICE",
    "IDENTIFY",
    "IGNORE",
    "IMAGINE",
    "IMMIGRATE",
    "IMPLY",
    "IMPLORE",
    "IMPRESS",
    "IMPROVE",
    "INCLUDE",
    "INCREASE",
    "INFECT",
    "INFLATE",
    "INFLUENCE",
    "INFORM",
    "INFUSE",
    "INJECT",
    "INJURE",
    "INQUIRE",
    "INSIST",
    "INSPECT",
    "INSPIRE",
    "INSTRUCT",
    "INTEND",
    "INTEREST",
    "INTERFERE",
    "INTERJECT",
    "INTERRUPT",
    "INTRODUCE",
    "INVENT",
    "INVEST",
    "INVITE",
    "IRRITATE",
    "IRON",
    "ITCH",
    "JAB",
    "JABBER",
    "JAIL",
    "JAM",
    "JEER",
    "JEST",
    "JOG",
    "JOIN",
    "JOKE",
    "JOLT",
    "JUDGE",
    "JUGGLE",
    "JUMP",
    "KEEP",
    "KICK",
    "KILL",
    "KISS",
    "KNEEL",
    "KNIT",
    "KNOCK",
    "KNOT",
    "KNOW",
    "LABEL",
    "LAMENT",
    "LAND",
    "LAST",
    "LAUGH",
    "LAY",
    "LEAD",
    "LEAN",
    "LEARN",
    "LEAVE",
    "LECTURE",
    "LEND",
    "LET",
    "LEVEL",
    "LICENSE",
    "LICK",
    "LIE",
    "LIFT",
    "LIGHT",
    "LIGHTEN",
    "LIKE",
    "LIST",
    "LISTEN",
    "LIVE",
    "LOAD",
    "LOAN",
    "LOCK",
    "LONG",
    "LOOK",
    "LOOSEN",
    "LOSE",
    "LOVE",
    "LOWER",
    "MAIL",
    "MAINTAIN",
    "MAKE",
    "MAN",
    "MANAGE",
    "MAR",
    "MARCH",
    "MARK",
    "MARRY",
    "MARVEL",
    "MATE",
    "MATTER",
    "MEAN",
    "MEASURE",
    "MEET",
    "MELT",
    "MEMORIZE",
    "MEND",
    "MENTION",
    "MERGE",
    "MILK",
    "MINE",
    "MISS",
    "MIX",
    "MOAN",
    "MOOR",
    "MOURN",
    "MOLT",
    "MOVE",
    "MOW",
    "MUG",
    "MULTIPLY",
    "MUMBLE",
    "MURDER",
    "MUTTER",
    "NAG",
    "NAIL",
    "NAME",
    "NAP",
    "NEED",
    "NEST",
    "NOD",
    "NOTE",
    "NOTICE",
    "NUMBER",
    "OBEY",
    "OBJECT",
    "OBSERVE",
    "OBTAIN",
    "OCCUR",
    "OFFEND",
    "OFFER",
    "OGLE",
    "OIL",
    "OMIT",
    "OPEN",
    "OPERATE",
    "ORDER",
    "OVERFLOW",
    "OVERRUN",
    "OWE",
    "OWN",
    "PACK",
    "PAD",
    "PADDLE",
    "PAINT",
    "PANT",
    "PARK",
    "PART",
    "PASS",
    "PASTE",
    "PAT",
    "PAUSE",
    "PAY",
    "PECK",
    "PEDAL",
    "PEEL",
    "PEEP",
    "PEER",
    "PEG",
    "PELT",
    "PERFORM",
    "PERMIT",
    "PESTER",
    "PET",
    "PHONE",
    "PICK",
    "PINCH",
    "PINE",
    "PLACE",
    "PLAN",
    "PLANT",
    "PLAY",
    "PLEAD",
    "PLEASE",
    "PLEDGE",
    "PLOW",
    "PLUG",
    "POINT",
    "POKE",
    "POLISH",
    "PONDER",
    "POP",
    "POSSESS",
    "POST",
    "POSTULATE",
    "POUR",
    "PRACTICE",
    "PRAY",
    "PREACH",
    "PRECEDE",
    "PREDICT",
    "PREFER",
    "PREPARE",
    "PRESENT",
    "PRESERVE",
    "PRESS",
    "PRETEND",
    "PREVENT",
    "PRICK",
    "PRINT",
    "PROCEED",
    "PROCLAIM",
    "PRODUCE",
    "PROFESS",
    "PROGRAM",
    "PROMISE",
    "PROPOSE",
    "PROTECT",
    "PROTEST",
    "PROVIDE",
    "PRY",
    "PULL",
    "PUMP",
    "PUNCH",
    "PUNCTURE",
    "PUNISH",
    "PUSH",
    "PUT",
    "QUESTION",
    "QUILT",
    "QUIT",
    "QUIZ",
    "QUOTE",
    "RACE",
    "RADIATE",
    "RAIN",
    "RAISE",
    "RANT",
    "RAIN",
    "RATE",
    "RAVE",
    "REACH",
    "REALIZE",
    "READ",
    "REBUFF",
    "RECALL",
    "RECEIVE",
    "RECITE",
    "RECOGNIZE",
    "RECOMMEND",
    "RECORD",
    "REDUCE",
    "REFLECT",
    "REFUSE",
    "REGRET",
    "REIGN",
    "REITERATE",
    "REJECT",
    "REJOICE",
    "RELATE",
    "RELAX",
    "RELEASE",
    "RELY",
    "REMAIN",
    "REMEMBER",
    "REMIND",
    "REMOVE",
    "REPAIR",
    "REPEAT",
    "REPLACE",
    "REPLY",
    "REPORT",
    "REPRIMAND",
    "REPRODUCE",
    "REQUEST",
    "RESCUE",
    "RETIRE",
    "RETORT",
    "RETURN",
    "REVEAL",
    "REVERSE",
    "RHYME",
    "RIDE",
    "RING",
    "RINSE",
    "RISE",
    "RISK",
    "ROAR",
    "ROB",
    "ROCK",
    "ROLL",
    "ROT",
    "ROW",
    "RUB",
    "RUIN",
    "RULE",
    "RUN",
    "RUSH",
    "SACK",
    "SAIL",
    "SATISFY",
    "SAVE",
    "SAVOR",
    "SAW",
    "SAY",
    "SCARE",
    "SCATTER",
    "SCOFF",
    "SCOLD",
    "SCOOT",
    "SCORCH",
    "SCRAPE",
    "SCRATCH",
    "SCREAM",
    "SCREECH",
    "SCREW",
    "SCRIBBLE",
    "SEAL",
    "SEARCH",
    "SEE",
    "SELL",
    "SEND",
    "SENSE",
    "SEPARATE",
    "SERVE",
    "SET",
    "SETTLE",
    "SEVER",
    "SEW",
    "SHADE",
    "SHAMPOO",
    "SHARE",
    "SHAVE",
    "SHELTER",
    "SHIFT",
    "SHIVER",
    "SHOCK",
    "SHOOT",
    "SHOP",
    "SHOUT",
    "SHOW",
    "SHRIEK",
    "SHRUG",
    "SHUT",
    "SIGH",
    "SIGN",
    "SIGNAL",
    "SIN",
    "SING",
    "SINGE",
    "SIP",
    "SIT",
    "SKATE",
    "SKATEBOARD",
    "SKETCH",
    "SKI",
    "SKIP",
    "SLAP",
    "SLEEP",
    "SLICE",
    "SLIDE",
    "SLIP",
    "SLOW",
    "SMASH",
    "SMELL",
    "SMILE",
    "SMOKE",
    "SNAP",
    "SNARL",
    "SNATCH",
    "SNEAK",
    "SNEER",
    "SNEEZE",
    "SNICKER",
    "SNIFF",
    "SNORE",
    "SNORT",
    "SNOOP",
    "SNOOZE",
    "SNOW",
    "SOAK",
    "SOB",
    "SOOTHE",
    "SOUND",
    "SOW",
    "SPAN",
    "SPARE",
    "SPARK",
    "SPARKLE",
    "SPEAK",
    "SPECULATE",
    "SPELL",
    "SPEND",
    "SPILL",
    "SPIN",
    "SPOIL",
    "SPOT",
    "SPRAY",
    "SPROUT",
    "SPUTTER",
    "SQUASH",
    "SQUEEZE",
    "STAB",
    "STAIN",
    "STAMMER",
    "STAMP",
    "STAND",
    "STAR",
    "STARE",
    "START",
    "STASH",
    "STATE",
    "STAY",
    "STEER",
    "STEP",
    "STIPULATE",
    "STIR",
    "STITCH",
    "STOP",
    "STORE",
    "STRAP",
    "STORM",
    "STOW",
    "STRENGTHEN",
    "STRESS",
    "STRETCH",
    "STRIP",
    "STROKE",
    "STUFF",
    "STUTTER",
    "STRAY",
    "STRUM",
    "STRUT",
    "STUN",
    "STUNT",
    "SUBMERGE",
    "SUCCEED",
    "SUFFER",
    "SUGGEST",
    "SUIT",
    "SUPPLY",
    "SUPPORT",
    "SUPPOSE",
    "SURMISE",
    "SURPRISE",
    "SURROUND",
    "SUSPECT",
    "SUSPEND",
    "SWAY",
    "SWEAR",
    "SWIM",
    "SWING",
    "SWITCH",
    "SWOOP",
    "SYMPATHIZE",
    "TALK",
    "TAKE",
    "TAME",
    "TAP",
    "TASTE",
    "TAUNT",
    "TEACH",
    "TEAR",
    "TEASE",
    "TELEPHONE",
    "TELL",
    "TEMPT",
    "TERRIFY",
    "TEST",
    "TESTIFY",
    "THANK",
    "THAW",
    "THEORIZE",
    "THINK",
    "THREATEN",
    "THROW",
    "THUNDER",
    "TICK",
    "TICKLE",
    "TIE",
    "TIME",
    "TIP",
    "TIRE",
    "TOAST",
    "TOSS",
    "TOUCH",
    "TOUR",
    "TOW",
    "TRACE",
    "TRACK",
    "TRADE",
    "TRAIN",
    "TRANSLATE",
    "TRANSPORT",
    "TRAP",
    "TRAVEL",
    "TREAT",
    "TREMBLE",
    "TRICK",
    "TRICKLE",
    "TRIM",
    "TRIP",
    "TROT",
    "TROUBLE",
    "TRUST",
    "TROUNCE",
    "TRY",
    "TUG",
    "TUMBLE",
    "TURN",
    "TWIST",
    "TYPE",
    "UNDERSTAND",
    "UNDRESS",
    "UNFASTEN",
    "UNITE",
    "UNLOCK",
    "UNPACK",
    "UPHOLD",
    "UPSET",
    "UPSTAGE",
    "URGE",
    "UNTIE",
    "USE",
    "USURP",
    "UTTER",
    "VACUUM",
    "VALUE",
    "VANISH",
    "VANQUISH",
    "VENTURE",
    "VISIT",
    "VOICE",
    "VOLUNTEER",
    "VOTE",
    "VOUCH",
    "WAIL",
    "WAIT",
    "WAKE",
    "WALK",
    "WALLOW",
    "WANDER",
    "WANT",
    "WARM",
    "WARN",
    "WASH",
    "WASTE",
    "WATCH",
    "WATER",
    "WAVE",
    "WAVER",
    "WEAR",
    "WEAVE",
    "WED",
    "WEIGH",
    "WELCOME",
    "WHIMPER",
    "WHINE",
    "WHIP",
    "WHIRL",
    "WHISPER",
    "WHISTLE",
    "WIN",
    "WINK",
    "WIPE",
    "WISH",
    "WOBBLE",
    "WONDER",
    "WORK",
    "WORRY",
    "WRAP",
    "WRECK",
    "WRESTLE",
    "WRIGGLE",
    "WRITE",
    "WRITHE",
    "X-RAY",
    "YAWN",
    "YELL",
    "YELP",
    "YIELD",
    "YODEL",
    "ZIP",
    "ZOOM",
};


// Here we setup all the boolean values that we need for Me
// We should probably move this to another file soon when it gets longer
bool hasSetup = false;

bool birthYearValid = false;
bool birthDateValid = false;
bool birthMonthValid = false;

bool continentValid = false;
bool countryValid = false;
bool stateValid = false;
bool cityValid = false;
bool zipValid = false;

void me(string args) {
    if (strEql(splitArg(args, 1), "setup") || !hasSetup)
    {
        if (strEql(splitArg(args, 2), "skipper") && !hasSetup)
        {
            hasSetup = true;
            print("\nYou have skipped the Me setup process, some answers may be strange :D",0x06);
        }
        else if (!hasSetup)
        {
            print("\nWelcome to Me.",0x03);
            print("\nMe is the worlds first truly rubbish personal assistant.",0x03);
            print("\nTo use me, simply ask it a question.",0x03);
            print("\nFor example, type 'me what is the time?'",0x03);
            print("\nTo start using Me, please enter some basic information below when prompted.",0x03);
            newline();

            newline();
            print("What is your name: ",0x0B);
            readStr(name,128);

            newline();
            print("What year were you born in: ",0x0B);
            readStr(birthYear,5);

            while (!birthDateValid)
            {
                newline();
                print("What day of the month were you born in: ",0x0B);
                readStr(birthDate,3);
                birthDateInt = stoi(birthDate);

                if (birthDateInt < 32)
                {
                    birthDateValid = true;
                    print(" Good",0x02);
                }

                if (!birthDateValid)
                {
                    print(" Invalid",0x0C);
                }
            }

            while (!birthMonthValid)
            {
                newline();
                print("What month were you born in: ",0x0B);
                readStr(birthMonth,128);
                birthMonth = toUpper(birthMonth);

                for(int tmp = 0; tmp < arrLength(months); tmp++)
                {
                    if (strEql(months[tmp],birthMonth))
                    {
                        birthMonthValid = true;
                        print(" Good",0x02);
                    }
                }

                if (!birthMonthValid)
                {
                    print(" Invalid",0x0C);
                }
            }

            while (!continentValid)
            {

                newline();
                print("What continent do you live in: ",0x0B);
                readStr(continent,128);
                continent = toUpper(continent);

                for(int tmp = 0; tmp < arrLength(continents); tmp++)
                {
                    if (strEql(continents[tmp],continent))
                    {
                        continentValid = true;
                        print(" Good",0x02);
                    }
                }

                if (!continentValid)
                {
                    print(" Invalid",0x0C);
                }
            }


            while (!countryValid)
            {
                newline();
                print("What country do you live in: ",0x0B);
                readStr(country,128);
                country = toUpper(country);

                for(int tmp = 0; tmp < arrLength(countries); tmp++)
                {
                    if (strEql(countries[tmp],country))
                    {
                        countryValid = true;
                        print(" Good",0x02);
                    }
                }

                if (!countryValid)
                {
                    print(" Invalid",0x0C);
                }
            }

            newline();
            print("What state do you currently live in: ",0x0B);
            readStr(state,128);

            newline();
            print("What city do you live in: ",0x0B);
            readStr(city,128);

            newline();
            print("What is the zip code in your area: ",0x0B);
            readStr(zip,128);

            newline();
            hasSetup = "true";
            print("Me is now ready to use!",0x03);

            newline();
            print("When Me dosen't know information, it can ask you for help.",0x03);
        }
        else
        {
            print("\nYou have already completed the setup process for Me!",0x05);
        }
    }
    else
    {
        for(int tmp = 1; tmp < 10; tmp++)
        {
            newline();
            printint(tmp,0x0A);
            print(" : ",0x0B);
            print(splitArg(args, tmp),0x0A);
        }
    }
}
