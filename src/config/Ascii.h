// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2018, The WrkzCoin developers
// Copyright (c) 2018, The DyngeCoin developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
"\n ______                                 \n"
"\n |  _  \                                \n"
"\n | | | |  _   _   _ __     __ _    ___  \n"
"\n | | | | | | | | | '_ \   / _` |  / _ \ \n"
"\n | |/ /  | |_| | | | | | | (_| | |  __/ \n"
"\n |___/    \__, | |_| |_|  \__, |  \___| \n"
"\n           __/ |           __/ |        \n"
"\n          |___/           |___/         \n"                              



const std::string nonWindowsAsciiArt = 
      "\n                                             \n"
	"██████╗ ██╗   ██╗███╗   ██╗ ██████╗ ███████╗\n"
	"██╔══██╗╚██╗ ██╔╝████╗  ██║██╔════╝ ██╔════╝\n"
	"██║  ██║ ╚████╔╝ ██╔██╗ ██║██║  ███╗█████╗  \n"
	"██║  ██║  ╚██╔╝  ██║╚██╗██║██║   ██║██╔══╝  \n"
	"██████╔╝   ██║   ██║ ╚████║╚██████╔╝███████╗\n"
	"╚═════╝    ╚═╝   ╚═╝  ╚═══╝ ╚═════╝ ╚══════╝\n"
        "                                    \n"
;

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
