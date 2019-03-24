// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2018, The WrkzCoin developers
// Copyright (c) 2018, The DyngeCoin developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
      "\n \n"
"\n       ....                                                            \n"
"\n   .xH888888Hx.        ..                                              \n"
"\n .H8888888888888:     @L             u.    u.                          \n"
"\n 888*"""?""*88888X   9888i   .dL   x@88k u@88c.      uL          .u    \n"
"\n'f     d8x.   ^%88k  `Y888k:*888. ^"8888""8888"  .ue888Nc..   ud8888.  \n"
"\n'>    <88888X   '?8    888E  888I   8888  888R  d88E`"888E` :888'8888. \n"
"\n `:..:`888888>    8>   888E  888I   8888  888R  888E  888E  d888 '88%" \n"
"\n        `"*88     X    888E  888I   8888  888R  888E  888E  8888.+"    \n"
"\n   .xHHhx.."      !    888E  888I   8888  888R  888E  888E  8888L      \n"
"\n  X88888888hx. ..!    x888N><888'  "*88*" 8888" 888& .888E  '8888c. .+ \n"
"\n !   "*888888888"      "88"  888     ""   'Y"   *888" 888&   "88888%   \n"
"\n        ^"***"`              88F                 `"   "888E    "YP'    \n"
"\n                            98"                 .dWi   `88E            \n"
"\n                          ./"                   4888~  J8%             \n"
"\n                         ~`                      ^"===*"`              \n"
"\n\n"


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
