// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2018, The WrkzCoin developers
// Copyright (c) 2019, The DyngeCoin developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
      "\n ______                                 \n"
	" |  _  \                                \n"
	" | | | |  _   _   _ __     __ _    ___  \n"
	" | | | | | | | | | '_ \   / _` |  / _ \ \n"
	" | |/ /  | |_| | | | | | | (_| | |  __/ \n"
	" |___/    \__, | |_| |_|  \__, |  \___| \n"
	"           __/ |           __/ |        \n"
	"          |___/           |___/         \n"                              


;
const std::string nonWindowsAsciiArt = 
      "\n                                             \n"
	"██████╗ ██╗   ██╗███╗   ██╗ ██████╗ ███████╗\n"
	"██╔══██╗╚██╗ ██╔╝████╗  ██║██╔════╝ ██╔════╝\n"
	"██║  ██║ ╚████╔╝ ██╔██╗ ██║██║  ███╗█████╗  \n"
	"██║  ██║  ╚██╔╝  ██║╚██╗██║██║   ██║██╔══╝  \n"
	"██████╔╝   ██║   ██║ ╚████║╚██████╔╝███████╗\n"
	"╚═════╝    ╚═╝   ╚═╝  ╚═══╝ ╚═════╝ ╚══════╝\n"

;

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
