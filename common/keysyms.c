/* Key Activity On-Screen display - Shady Input Events Voyeur keysyms
 *
 * (C) Copyright 2010-2014 Przemyslaw Pawelczyk <przemoc@gmail.com>
 *
 * This file is released under the GPLv2.
 * See the file COPYING for more details.
 */

#include <keysyms.h>


/*
 * Below array is based on the part of include/linux/input.h (Linux 2.6.34),
 * which is mainly written by Vojtech Pavlik and Dmitry Torokhov.
 */
struct keysym keysyms[] = {
	{ SIEV_KEY, "RESERVED"        , ""                },
	{ SIEV_KEY, "ESC"             , "Esc"             },
	{ SIEV_KEY, "1"               , "1"               },
	{ SIEV_KEY, "2"               , "2"               },
	{ SIEV_KEY, "3"               , "3"               },
	{ SIEV_KEY, "4"               , "4"               },
	{ SIEV_KEY, "5"               , "5"               },
	{ SIEV_KEY, "6"               , "6"               },
	{ SIEV_KEY, "7"               , "7"               },
	{ SIEV_KEY, "8"               , "8"               },
	{ SIEV_KEY, "9"               , "9"               },
	{ SIEV_KEY, "0"               , "0"               },
	{ SIEV_KEY, "MINUS"           , "-"               },
	{ SIEV_KEY, "EQUAL"           , "="               },
	{ SIEV_KEY, "BACKSPACE"       , "Backspace"       },
	{ SIEV_KEY, "TAB"             , "Tab"             },
	{ SIEV_KEY, "Q"               , "Q"               },
	{ SIEV_KEY, "W"               , "W"               },
	{ SIEV_KEY, "E"               , "E"               },
	{ SIEV_KEY, "R"               , "R"               },
	{ SIEV_KEY, "T"               , "T"               },
	{ SIEV_KEY, "Y"               , "Y"               },
	{ SIEV_KEY, "U"               , "U"               },
	{ SIEV_KEY, "I"               , "I"               },
	{ SIEV_KEY, "O"               , "O"               },
	{ SIEV_KEY, "P"               , "P"               },
	{ SIEV_KEY, "LEFTBRACE"       , "{"               },
	{ SIEV_KEY, "RIGHTBRACE"      , "}"               },
	{ SIEV_KEY, "ENTER"           , "Enter"           },
	{ SIEV_KEY, "LEFTCTRL"        , "Ctrl"            },
	{ SIEV_KEY, "A"               , "A"               },
	{ SIEV_KEY, "S"               , "S"               },
	{ SIEV_KEY, "D"               , "D"               },
	{ SIEV_KEY, "F"               , "F"               },
	{ SIEV_KEY, "G"               , "G"               },
	{ SIEV_KEY, "H"               , "H"               },
	{ SIEV_KEY, "J"               , "J"               },
	{ SIEV_KEY, "K"               , "K"               },
	{ SIEV_KEY, "L"               , "L"               },
	{ SIEV_KEY, "SEMICOLON"       , ";"               },
	{ SIEV_KEY, "APOSTROPHE"      , "'"               },
	{ SIEV_KEY, "GRAVE"           , "`"               },
	{ SIEV_KEY, "LEFTSHIFT"       , "Shift"           },
	{ SIEV_KEY, "BACKSLASH"       , "\\"              },
	{ SIEV_KEY, "Z"               , "Z"               },
	{ SIEV_KEY, "X"               , "X"               },
	{ SIEV_KEY, "C"               , "C"               },
	{ SIEV_KEY, "V"               , "V"               },
	{ SIEV_KEY, "B"               , "B"               },
	{ SIEV_KEY, "N"               , "N"               },
	{ SIEV_KEY, "M"               , "M"               },
	{ SIEV_KEY, "COMMA"           , ","               },
	{ SIEV_KEY, "DOT"             , "."               },
	{ SIEV_KEY, "SLASH"           , "/"               },
	{ SIEV_KEY, "RIGHTSHIFT"      , "Shift"           },
	{ SIEV_KEY, "KPASTERISK"      , "*"               },
	{ SIEV_KEY, "LEFTALT"         , "Alt"             },
	{ SIEV_KEY, "SPACE"           , "Space"           },
	{ SIEV_KEY, "CAPSLOCK"        , "CapsLock"        },
	{ SIEV_KEY, "F1"              , "F1"              },
	{ SIEV_KEY, "F2"              , "F2"              },
	{ SIEV_KEY, "F3"              , "F3"              },
	{ SIEV_KEY, "F4"              , "F4"              },
	{ SIEV_KEY, "F5"              , "F5"              },
	{ SIEV_KEY, "F6"              , "F6"              },
	{ SIEV_KEY, "F7"              , "F7"              },
	{ SIEV_KEY, "F8"              , "F8"              },
	{ SIEV_KEY, "F9"              , "F9"              },
	{ SIEV_KEY, "F10"             , "F10"             },
	{ SIEV_KEY, "NUMLOCK"         , "NumLock"         },
	{ SIEV_KEY, "SCROLLLOCK"      , "ScrollLock"      },
	{ SIEV_KEY, "KP7"             , "7"               },
	{ SIEV_KEY, "KP8"             , "8"               },
	{ SIEV_KEY, "KP9"             , "9"               },
	{ SIEV_KEY, "KPMINUS"         , "-"               },
	{ SIEV_KEY, "KP4"             , "4"               },
	{ SIEV_KEY, "KP5"             , "5"               },
	{ SIEV_KEY, "KP6"             , "6"               },
	{ SIEV_KEY, "KPPLUS"          , "+"               },
	{ SIEV_KEY, "KP1"             , "1"               },
	{ SIEV_KEY, "KP2"             , "2"               },
	{ SIEV_KEY, "KP3"             , "3"               },
	{ SIEV_KEY, "KP0"             , "0"               },
	{ SIEV_KEY, "KPDOT"           , "."               },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_KEY, "ZENKAKUHANKAKU"  , ""                },
	{ SIEV_KEY, "102ND"           , ""                },
	{ SIEV_KEY, "F11"             , "F11"             },
	{ SIEV_KEY, "F12"             , "F12"             },
	{ SIEV_KEY, "RO"              , ""                },
	{ SIEV_KEY, "KATAKANA"        , ""                },
	{ SIEV_KEY, "HIRAGANA"        , ""                },
	{ SIEV_KEY, "HENKAN"          , ""                },
	{ SIEV_KEY, "KATAKANAHIRAGANA", ""                },
	{ SIEV_KEY, "MUHENKAN"        , ""                },
	{ SIEV_KEY, "KPJPCOMMA"       , ""                },
	{ SIEV_KEY, "KPENTER"         , "Enter"           },
	{ SIEV_KEY, "RIGHTCTRL"       , "Ctrl"            },
	{ SIEV_KEY, "KPSLASH"         , "/"               },
	{ SIEV_KEY, "SYSRQ"           , "SysRq"           },
	{ SIEV_KEY, "RIGHTALT"        , "Alt"             },
	{ SIEV_KEY, "LINEFEED"        , ""                },
	{ SIEV_KEY, "HOME"            , "Home"            },
	{ SIEV_KEY, "UP"              , "Up"              },
	{ SIEV_KEY, "PAGEUP"          , "PageUp"          },
	{ SIEV_KEY, "LEFT"            , "Left"            },
	{ SIEV_KEY, "RIGHT"           , "Right"           },
	{ SIEV_KEY, "END"             , "End"             },
	{ SIEV_KEY, "DOWN"            , "Down"            },
	{ SIEV_KEY, "PAGEDOWN"        , "PageDown"        },
	{ SIEV_KEY, "INSERT"          , "Insert"          },
	{ SIEV_KEY, "DELETE"          , "Delete"          },
	{ SIEV_KEY, "MACRO"           , ""                },
	{ SIEV_KEY, "MUTE"            , "Mute"            },
	{ SIEV_KEY, "VOLUMEDOWN"      , "Volume Down"     },
	{ SIEV_KEY, "VOLUMEUP"        , "Volume Up"       },
	{ SIEV_KEY, "POWER"           , ""                },
	{ SIEV_KEY, "KPEQUAL"         , "="               },
	{ SIEV_KEY, "KPPLUSMINUS"     , ""                },
	{ SIEV_KEY, "PAUSE"           , "Pause"           },
	{ SIEV_KEY, "SCALE"           , ""                },
	{ SIEV_KEY, "KPCOMMA"         , ","               },
	{ SIEV_KEY, "HANGEUL"         , ""                },
	{ SIEV_KEY, "HANJA"           , ""                },
	{ SIEV_KEY, "YEN"             , ""                },
	{ SIEV_KEY, "LEFTMETA"        , "Win"             },
	{ SIEV_KEY, "RIGHTMETA"       , "Win"             },
	{ SIEV_KEY, "COMPOSE"         , "Menu"            },
	{ SIEV_KEY, "STOP"            , ""                },
	{ SIEV_KEY, "AGAIN"           , ""                },
	{ SIEV_KEY, "PROPS"           , ""                },
	{ SIEV_KEY, "UNDO"            , ""                },
	{ SIEV_KEY, "FRONT"           , ""                },
	{ SIEV_KEY, "COPY"            , ""                },
	{ SIEV_KEY, "OPEN"            , ""                },
	{ SIEV_KEY, "PASTE"           , ""                },
	{ SIEV_KEY, "FIND"            , ""                },
	{ SIEV_KEY, "CUT"             , ""                },
	{ SIEV_KEY, "HELP"            , ""                },
	{ SIEV_KEY, "MENU"            , ""                },
	{ SIEV_KEY, "CALC"            , ""                },
	{ SIEV_KEY, "SETUP"           , ""                },
	{ SIEV_KEY, "SLEEP"           , ""                },
	{ SIEV_KEY, "WAKEUP"          , "Wake Up"         },
	{ SIEV_KEY, "FILE"            , ""                },
	{ SIEV_KEY, "SENDFILE"        , ""                },
	{ SIEV_KEY, "DELETEFILE"      , ""                },
	{ SIEV_KEY, "XFER"            , ""                },
	{ SIEV_KEY, "PROG1"           , "Prog 1"          },
	{ SIEV_KEY, "PROG2"           , "Prog 2"          },
	{ SIEV_KEY, "WWW"             , ""                },
	{ SIEV_KEY, "MSDOS"           , ""                },
	{ SIEV_KEY, "SCREENLOCK"      , "Screen Lock"     },
	{ SIEV_KEY, "DIRECTION"       , ""                },
	{ SIEV_KEY, "CYCLEWINDOWS"    , ""                },
	{ SIEV_KEY, "MAIL"            , ""                },
	{ SIEV_KEY, "BOOKMARKS"       , ""                },
	{ SIEV_KEY, "COMPUTER"        , ""                },
	{ SIEV_KEY, "BACK"            , "Back"            },
	{ SIEV_KEY, "FORWARD"         , "Forward"         },
	{ SIEV_KEY, "CLOSECD"         , ""                },
	{ SIEV_KEY, "EJECTCD"         , ""                },
	{ SIEV_KEY, "EJECTCLOSECD"    , ""                },
	{ SIEV_KEY, "NEXTSONG"        , "Next"            },
	{ SIEV_KEY, "PLAYPAUSE"       , "Play/Pause"      },
	{ SIEV_KEY, "PREVIOUSSONG"    , "Previous"        },
	{ SIEV_KEY, "STOPCD"          , "Stop"            },
	{ SIEV_KEY, "RECORD"          , ""                },
	{ SIEV_KEY, "REWIND"          , ""                },
	{ SIEV_KEY, "PHONE"           , ""                },
	{ SIEV_KEY, "ISO"             , ""                },
	{ SIEV_KEY, "CONFIG"          , ""                },
	{ SIEV_KEY, "HOMEPAGE"        , ""                },
	{ SIEV_KEY, "REFRESH"         , ""                },
	{ SIEV_KEY, "EXIT"            , ""                },
	{ SIEV_KEY, "MOVE"            , ""                },
	{ SIEV_KEY, "EDIT"            , ""                },
	{ SIEV_KEY, "SCROLLUP"        , ""                },
	{ SIEV_KEY, "SCROLLDOWN"      , ""                },
	{ SIEV_KEY, "KPLEFTPAREN"     , ""                },
	{ SIEV_KEY, "KPRIGHTPAREN"    , ""                },
	{ SIEV_KEY, "NEW"             , ""                },
	{ SIEV_KEY, "REDO"            , ""                },
	{ SIEV_KEY, "F13"             , ""                },
	{ SIEV_KEY, "F14"             , ""                },
	{ SIEV_KEY, "F15"             , ""                },
	{ SIEV_KEY, "F16"             , ""                },
	{ SIEV_KEY, "F17"             , ""                },
	{ SIEV_KEY, "F18"             , ""                },
	{ SIEV_KEY, "F19"             , ""                },
	{ SIEV_KEY, "F20"             , ""                },
	{ SIEV_KEY, "F21"             , ""                },
	{ SIEV_KEY, "F22"             , "F22"             },
	{ SIEV_KEY, "F23"             , ""                },
	{ SIEV_KEY, "F24"             , "F24"             },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_KEY, "PLAYCD"          , ""                },
	{ SIEV_KEY, "PAUSECD"         , ""                },
	{ SIEV_KEY, "PROG3"           , ""                },
	{ SIEV_KEY, "PROG4"           , ""                },
	{ SIEV_KEY, "DASHBOARD"       , ""                },
	{ SIEV_KEY, "SUSPEND"         , "Suspend"         },
	{ SIEV_KEY, "CLOSE"           , ""                },
	{ SIEV_KEY, "PLAY"            , ""                },
	{ SIEV_KEY, "FASTFORWARD"     , ""                },
	{ SIEV_KEY, "BASSBOOST"       , ""                },
	{ SIEV_KEY, "PRINT"           , "Print Screen"    },
	{ SIEV_KEY, "HP"              , ""                },
	{ SIEV_KEY, "CAMERA"          , ""                },
	{ SIEV_KEY, "SOUND"           , ""                },
	{ SIEV_KEY, "QUESTION"        , ""                },
	{ SIEV_KEY, "EMAIL"           , ""                },
	{ SIEV_KEY, "CHAT"            , ""                },
	{ SIEV_KEY, "SEARCH"          , ""                },
	{ SIEV_KEY, "CONNECT"         , ""                },
	{ SIEV_KEY, "FINANCE"         , ""                },
	{ SIEV_KEY, "SPORT"           , ""                },
	{ SIEV_KEY, "SHOP"            , ""                },
	{ SIEV_KEY, "ALTERASE"        , ""                },
	{ SIEV_KEY, "CANCEL"          , ""                },
	{ SIEV_KEY, "BRIGHTNESSDOWN"  , "Brightness Down" },
	{ SIEV_KEY, "BRIGHTNESSUP"    , "Brightness Up"   },
	{ SIEV_KEY, "MEDIA"           , ""                },
	{ SIEV_KEY, "SWITCHVIDEOMODE" , "Video Mode"      },
	{ SIEV_KEY, "KBDILLUMTOGGLE"  , "Keyb Illum"      },
	{ SIEV_KEY, "KBDILLUMDOWN"    , ""                },
	{ SIEV_KEY, "KBDILLUMUP"      , ""                },
	{ SIEV_KEY, "SEND"            , ""                },
	{ SIEV_KEY, "REPLY"           , ""                },
	{ SIEV_KEY, "FORWARDMAIL"     , ""                },
	{ SIEV_KEY, "SAVE"            , ""                },
	{ SIEV_KEY, "DOCUMENTS"       , ""                },
	{ SIEV_KEY, "BATTERY"         , "Battery"         },
	{ SIEV_KEY, "BLUETOOTH"       , ""                },
	{ SIEV_KEY, "WLAN"            , "WLAN"            },
	{ SIEV_KEY, "UWB"             , ""                },
	{ SIEV_KEY, "UNKNOWN"         , ""                },
	{ SIEV_KEY, "VIDEO_NEXT"      , ""                },
	{ SIEV_KEY, "VIDEO_PREV"      , ""                },
	{ SIEV_KEY, "BRIGHTNESS_CYCLE", ""                },
	{ SIEV_KEY, "BRIGHTNESS_ZERO" , ""                },
	{ SIEV_KEY, "DISPLAY_OFF"     , ""                },
	{ SIEV_KEY, "WIMAX"           , ""                },
	{ SIEV_KEY, "RFKILL"          , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_RES, ""                , ""                },
	{ SIEV_BTN, "0"               , "0"               },
	{ SIEV_BTN, "1"               , "1"               },
	{ SIEV_BTN, "2"               , "2"               },
	{ SIEV_BTN, "3"               , "3"               },
	{ SIEV_BTN, "4"               , "4"               },
	{ SIEV_BTN, "5"               , "5"               },
	{ SIEV_BTN, "6"               , "6"               },
	{ SIEV_BTN, "7"               , "7"               },
	{ SIEV_BTN, "8"               , "8"               },
	{ SIEV_BTN, "9"               , "9"               },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_BTN, "LEFT"            , "LMB"             },
	{ SIEV_BTN, "RIGHT"           , "RMB"             },
	{ SIEV_BTN, "MIDDLE"          , "MMB"             },
	{ SIEV_BTN, "SIDE"            , ""                },
	{ SIEV_BTN, "EXTRA"           , ""                },
	{ SIEV_BTN, "FORWARD"         , ""                },
	{ SIEV_BTN, "BACK"            , ""                },
	{ SIEV_BTN, "TASK"            , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_BTN, "TRIGGER"         , ""                },
	{ SIEV_BTN, "THUMB"           , ""                },
	{ SIEV_BTN, "THUMB2"          , ""                },
	{ SIEV_BTN, "TOP"             , ""                },
	{ SIEV_BTN, "TOP2"            , ""                },
	{ SIEV_BTN, "PINKIE"          , ""                },
	{ SIEV_BTN, "BASE"            , ""                },
	{ SIEV_BTN, "BASE2"           , ""                },
	{ SIEV_BTN, "BASE3"           , ""                },
	{ SIEV_BTN, "BASE4"           , ""                },
	{ SIEV_BTN, "BASE5"           , ""                },
	{ SIEV_BTN, "BASE6"           , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_BTN, "DEAD"            , ""                },
	{ SIEV_BTN, "A"               , "A"               },
	{ SIEV_BTN, "B"               , "B"               },
	{ SIEV_BTN, "C"               , "C"               },
	{ SIEV_BTN, "X"               , "X"               },
	{ SIEV_BTN, "Y"               , "Y"               },
	{ SIEV_BTN, "Z"               , "Z"               },
	{ SIEV_BTN, "TL"              , ""                },
	{ SIEV_BTN, "TR"              , ""                },
	{ SIEV_BTN, "TL2"             , ""                },
	{ SIEV_BTN, "TR2"             , ""                },
	{ SIEV_BTN, "SELECT"          , ""                },
	{ SIEV_BTN, "START"           , ""                },
	{ SIEV_BTN, "MODE"            , ""                },
	{ SIEV_BTN, "THUMBL"          , ""                },
	{ SIEV_BTN, "THUMBR"          , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_BTN, "TOOL_PEN"        , ""                },
	{ SIEV_BTN, "TOOL_RUBBER"     , ""                },
	{ SIEV_BTN, "TOOL_BRUSH"      , ""                },
	{ SIEV_BTN, "TOOL_PENCIL"     , ""                },
	{ SIEV_BTN, "TOOL_AIRBRUSH"   , ""                },
	{ SIEV_BTN, "TOOL_FINGER"     , ""                },
	{ SIEV_BTN, "TOOL_MOUSE"      , ""                },
	{ SIEV_BTN, "TOOL_LENS"       , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_BTN, "TOUCH"           , ""                },
	{ SIEV_BTN, "STYLUS"          , ""                },
	{ SIEV_BTN, "STYLUS2"         , ""                },
	{ SIEV_BTN, "TOOL_DOUBLETAP"  , ""                },
	{ SIEV_BTN, "TOOL_TRIPLETAP"  , ""                },
	{ SIEV_BTN, "TOOL_QUADTAP"    , ""                },
	{ SIEV_BTN, "GEAR_DOWN"       , ""                },
	{ SIEV_BTN, "GEAR_UP"         , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_KEY, "OK"              , ""                },
	{ SIEV_KEY, "SELECT"          , ""                },
	{ SIEV_KEY, "GOTO"            , ""                },
	{ SIEV_KEY, "CLEAR"           , ""                },
	{ SIEV_KEY, "POWER2"          , ""                },
	{ SIEV_KEY, "OPTION"          , ""                },
	{ SIEV_KEY, "INFO"            , ""                },
	{ SIEV_KEY, "TIME"            , ""                },
	{ SIEV_KEY, "VENDOR"          , ""                },
	{ SIEV_KEY, "ARCHIVE"         , ""                },
	{ SIEV_KEY, "PROGRAM"         , ""                },
	{ SIEV_KEY, "CHANNEL"         , ""                },
	{ SIEV_KEY, "FAVORITES"       , ""                },
	{ SIEV_KEY, "EPG"             , ""                },
	{ SIEV_KEY, "PVR"             , ""                },
	{ SIEV_KEY, "MHP"             , ""                },
	{ SIEV_KEY, "LANGUAGE"        , ""                },
	{ SIEV_KEY, "TITLE"           , ""                },
	{ SIEV_KEY, "SUBTITLE"        , ""                },
	{ SIEV_KEY, "ANGLE"           , ""                },
	{ SIEV_KEY, "ZOOM"            , ""                },
	{ SIEV_KEY, "MODE"            , ""                },
	{ SIEV_KEY, "KEYBOARD"        , ""                },
	{ SIEV_KEY, "SCREEN"          , ""                },
	{ SIEV_KEY, "PC"              , ""                },
	{ SIEV_KEY, "TV"              , ""                },
	{ SIEV_KEY, "TV2"             , ""                },
	{ SIEV_KEY, "VCR"             , ""                },
	{ SIEV_KEY, "VCR2"            , ""                },
	{ SIEV_KEY, "SAT"             , ""                },
	{ SIEV_KEY, "SAT2"            , ""                },
	{ SIEV_KEY, "CD"              , ""                },
	{ SIEV_KEY, "TAPE"            , ""                },
	{ SIEV_KEY, "RADIO"           , ""                },
	{ SIEV_KEY, "TUNER"           , ""                },
	{ SIEV_KEY, "PLAYER"          , ""                },
	{ SIEV_KEY, "TEXT"            , ""                },
	{ SIEV_KEY, "DVD"             , ""                },
	{ SIEV_KEY, "AUX"             , ""                },
	{ SIEV_KEY, "MP3"             , ""                },
	{ SIEV_KEY, "AUDIO"           , ""                },
	{ SIEV_KEY, "VIDEO"           , ""                },
	{ SIEV_KEY, "DIRECTORY"       , ""                },
	{ SIEV_KEY, "LIST"            , ""                },
	{ SIEV_KEY, "MEMO"            , ""                },
	{ SIEV_KEY, "CALENDAR"        , ""                },
	{ SIEV_KEY, "RED"             , ""                },
	{ SIEV_KEY, "GREEN"           , ""                },
	{ SIEV_KEY, "YELLOW"          , ""                },
	{ SIEV_KEY, "BLUE"            , ""                },
	{ SIEV_KEY, "CHANNELUP"       , ""                },
	{ SIEV_KEY, "CHANNELDOWN"     , ""                },
	{ SIEV_KEY, "FIRST"           , ""                },
	{ SIEV_KEY, "LAST"            , ""                },
	{ SIEV_KEY, "AB"              , ""                },
	{ SIEV_KEY, "NEXT"            , ""                },
	{ SIEV_KEY, "RESTART"         , ""                },
	{ SIEV_KEY, "SLOW"            , ""                },
	{ SIEV_KEY, "SHUFFLE"         , ""                },
	{ SIEV_KEY, "BREAK"           , ""                },
	{ SIEV_KEY, "PREVIOUS"        , ""                },
	{ SIEV_KEY, "DIGITS"          , ""                },
	{ SIEV_KEY, "TEEN"            , ""                },
	{ SIEV_KEY, "TWEN"            , ""                },
	{ SIEV_KEY, "VIDEOPHONE"      , ""                },
	{ SIEV_KEY, "GAMES"           , ""                },
	{ SIEV_KEY, "ZOOMIN"          , ""                },
	{ SIEV_KEY, "ZOOMOUT"         , ""                },
	{ SIEV_KEY, "ZOOMRESET"       , ""                },
	{ SIEV_KEY, "WORDPROCESSOR"   , ""                },
	{ SIEV_KEY, "EDITOR"          , ""                },
	{ SIEV_KEY, "SPREADSHEET"     , ""                },
	{ SIEV_KEY, "GRAPHICSEDITOR"  , ""                },
	{ SIEV_KEY, "PRESENTATION"    , ""                },
	{ SIEV_KEY, "DATABASE"        , ""                },
	{ SIEV_KEY, "NEWS"            , ""                },
	{ SIEV_KEY, "VOICEMAIL"       , ""                },
	{ SIEV_KEY, "ADDRESSBOOK"     , ""                },
	{ SIEV_KEY, "MESSENGER"       , ""                },
	{ SIEV_KEY, "DISPLAYTOGGLE"   , ""                },
	{ SIEV_KEY, "SPELLCHECK"      , ""                },
	{ SIEV_KEY, "LOGOFF"          , ""                },
	{ SIEV_KEY, "DOLLAR"          , ""                },
	{ SIEV_KEY, "EURO"            , ""                },
	{ SIEV_KEY, "FRAMEBACK"       , ""                },
	{ SIEV_KEY, "FRAMEFORWARD"    , ""                },
	{ SIEV_KEY, "CONTEXT_MENU"    , ""                },
	{ SIEV_KEY, "MEDIA_REPEAT"    , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_KEY, "DEL_EOL"         , ""                },
	{ SIEV_KEY, "DEL_EOS"         , ""                },
	{ SIEV_KEY, "INS_LINE"        , ""                },
	{ SIEV_KEY, "DEL_LINE"        , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_KEY, "FN"              , ""                },
	{ SIEV_KEY, "FN_ESC"          , ""                },
	{ SIEV_KEY, "FN_F1"           , ""                },
	{ SIEV_KEY, "FN_F2"           , ""                },
	{ SIEV_KEY, "FN_F3"           , ""                },
	{ SIEV_KEY, "FN_F4"           , ""                },
	{ SIEV_KEY, "FN_F5"           , ""                },
	{ SIEV_KEY, "FN_F6"           , ""                },
	{ SIEV_KEY, "FN_F7"           , ""                },
	{ SIEV_KEY, "FN_F8"           , ""                },
	{ SIEV_KEY, "FN_F9"           , ""                },
	{ SIEV_KEY, "FN_F10"          , ""                },
	{ SIEV_KEY, "FN_F11"          , ""                },
	{ SIEV_KEY, "FN_F12"          , ""                },
	{ SIEV_KEY, "FN_1"            , ""                },
	{ SIEV_KEY, "FN_2"            , ""                },
	{ SIEV_KEY, "FN_D"            , ""                },
	{ SIEV_KEY, "FN_E"            , ""                },
	{ SIEV_KEY, "FN_F"            , ""                },
	{ SIEV_KEY, "FN_S"            , ""                },
	{ SIEV_KEY, "FN_B"            , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_KEY, "BRL_DOT1"        , ""                },
	{ SIEV_KEY, "BRL_DOT2"        , ""                },
	{ SIEV_KEY, "BRL_DOT3"        , ""                },
	{ SIEV_KEY, "BRL_DOT4"        , ""                },
	{ SIEV_KEY, "BRL_DOT5"        , ""                },
	{ SIEV_KEY, "BRL_DOT6"        , ""                },
	{ SIEV_KEY, "BRL_DOT7"        , ""                },
	{ SIEV_KEY, "BRL_DOT8"        , ""                },
	{ SIEV_KEY, "BRL_DOT9"        , ""                },
	{ SIEV_KEY, "BRL_DOT10"       , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_KEY, "NUMERIC_0"       , ""                },
	{ SIEV_KEY, "NUMERIC_1"       , ""                },
	{ SIEV_KEY, "NUMERIC_2"       , ""                },
	{ SIEV_KEY, "NUMERIC_3"       , ""                },
	{ SIEV_KEY, "NUMERIC_4"       , ""                },
	{ SIEV_KEY, "NUMERIC_5"       , ""                },
	{ SIEV_KEY, "NUMERIC_6"       , ""                },
	{ SIEV_KEY, "NUMERIC_7"       , ""                },
	{ SIEV_KEY, "NUMERIC_8"       , ""                },
	{ SIEV_KEY, "NUMERIC_9"       , ""                },
	{ SIEV_KEY, "NUMERIC_STAR"    , ""                },
	{ SIEV_KEY, "NUMERIC_POUND"   , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_UND, ""                , ""                },
	{ SIEV_KEY, "CAMERA_FOCUS"    , ""                }
};
