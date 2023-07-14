#include "charDraw.h"
#include <string>
#include <ncurses.h>

charDraw::charDraw(void)
{
}

charDraw::~charDraw(void)
{
	if(input != 0)
	{
		delete[] input;
	}
}

void charDraw::setSize(short strLength)
{
	size = strLength;
}

void charDraw::setName(void) 
{ 
	input = new char[size];
	cout << "Express yourself! Type something: ";
	cin.getline(input,size);
	//Dont forget to delete this pointer
	
}


void charDraw::draw(void)
{
	
	//loop for cmd
	for(index = 0; index < size; index++)
	{
		letter = input[(int)index];
		
		if(letter == 'a' || letter == 'A')
		{
			cout << endl;
			cout << "      a      " << endl;
			cout << "     aaa     " << endl;
			cout << "    aa aa    " << endl;
			cout << "   aa   aa   " << endl;
			cout << "  aaaaaaaaa  " << endl;
			cout << " aa       aa " << endl;
			cout << "aa         aa" << endl; 
			
		}
		else if(letter == 'b' || letter == 'B')
		{
			cout << endl;
			cout << " bbbbbbbbbb  " << endl;
			cout << " bb       bb " << endl;
			cout << " bb       bb " << endl;
			cout << " bbbbbbbbbb  " << endl;
			cout << " bb       bb " << endl;
			cout << " bb       bb " << endl;
			cout << " bbbbbbbbbb  " << endl;
		}
		else if(letter == 'c' || letter == 'C')
		{
			cout << endl;
			cout << "    ccccc    " << endl;
			cout << "  ccccccccc  " << endl;
			cout << " cc      cc " << endl;
			cout << " cc         " << endl;
			cout << " cc         " << endl;
			cout << " cc      cc " << endl;
			cout << "  ccccccccc  " << endl;
			cout << "   cccccc    " << endl;
		}
		else if(letter == 'd' || letter == 'D')
		{
			cout << endl;
			cout << " dddddddddd" << endl;
			cout << " dd        d " << endl;
			cout << " dd        dd" << endl;
			cout << " dd        dd" << endl;
			cout << " dd        dd" << endl;
			cout << " dd        d " << endl;
			cout << " dddddddddd  " << endl;
		}
		else if(letter == 'e' || letter == 'E')
		{
			cout << endl;
			cout << " eeeeeeeeee " << endl;
			cout << " ee         " << endl;
			cout << " ee         " << endl;
			cout << " eeeeeeeeee " << endl;
			cout << " ee         " << endl;
			cout << " ee         " << endl;
			cout << " eeeeeeeeee " << endl;	
		}
		else if(letter == 'f' || letter == 'F')
		{
			cout << endl;
			cout << " ffffffffff" << endl;
			cout << " ff        " << endl;
			cout << " ff        " << endl;
			cout << " fffffffff " << endl;
			cout << " ff        " << endl;
			cout << " ff        " << endl;
			cout << " ff        " << endl;
		}
		else if(letter == 'g' || letter == 'G')
		{
			cout << endl;
			cout << " gggggggggg" << endl;
			cout << " gg      gg" << endl;
			cout << " gg      gg" << endl;
			cout << " gg        " << endl;
			cout << " gg     gggg" << endl;
			cout << " gg      gg" << endl;
			cout << " gggggggggg" << endl;
			
		}
		else if(letter == 'h' || letter == 'H')
		{
			cout << endl;
			cout << " hh      hh" << endl;
			cout << " hh      hh" << endl;
			cout << " hh      hh" << endl;
			cout << " hhhhhhhhhh" << endl;
			cout << " hh      hh" << endl;
			cout << " hh      hh" << endl;
			cout << " hh      hh" << endl;
		}
		else if(letter == 'i' || letter == 'I')
		{
			cout << endl;
			cout << " iiiiiiiiii" << endl;
			cout << "     ii    " << endl;
			cout << "     ii    " << endl;
			cout << "     ii    " << endl;
			cout << "     ii    " << endl;
			cout << "     ii    " << endl;
			cout << " iiiiiiiiii" << endl;
		}
		else if(letter == 'j' || letter == 'J')
		{
			cout << endl;
			cout << " jjjjjjjjjj" << endl;
			cout << "     jj    " << endl;
			cout << "     jj    " << endl;
			cout << "     jj    " << endl;
			cout << "     jj    " << endl;
			cout << " jj  jj    " << endl;
			cout << " jjjjjj    " << endl;
		}
		else if(letter =='k' || letter == 'K')
		{
				cout << endl;
			cout << " kk     kkk" << endl;
			cout << " kk   kkk  " << endl;
			cout << " kk  kk    " << endl;
			cout << " kkkk      " << endl;
			cout << " kk  kk    " << endl;
			cout << " kk   kkk  " << endl;
			cout << " kk     kkk" << endl;
			cout << " kk      kkk" << endl;
		}
		else if(letter == 'l' || letter == 'L')
		{
			cout << endl;
			cout << " ll        " << endl;
			cout << " ll        " << endl;
			cout << " ll        " << endl;
			cout << " ll        " << endl;
			cout << " ll        " << endl;
			cout << " ll        " << endl;
			cout << " llllllllll" << endl;
		}
		else if(letter == 'm' || letter == 'M')
		{
			cout << endl;
			cout << " mm        mm" << endl;
			cout << " mmm       mm" << endl;
			cout << " mm m    m mm" << endl;
			cout << " mm  m  m  mm" << endl;
			cout << " mm   mm   mm" << endl;
			cout << " mm        mm" << endl;
			cout << " mm        mm" << endl;
		}
		else if(letter == 'n' || letter == 'N')
		{
			cout << endl;
			cout << " nn       nn     " << endl;
			cout << " nnn      nn     " << endl;
			cout << " nn nn    nn     " << endl;
			cout << " nn  nn   nn     " << endl;
			cout << " nn   nn  nn     " << endl;
			cout << " nn     nnnn     " << endl;
			cout << " nn       nn     " << endl;
		}
		else if(letter == 'o' || letter == 'O')
		{
			cout << endl;
			cout << "    ooooo    " << endl;
			cout << "  oo     oo  " << endl;
			cout << " oo       oo " << endl;
			cout << " oo       oo " << endl;
			cout << " oo       oo " << endl;
			cout << " oo       oo " << endl;
			cout << "  oo     oo  " << endl;
			cout << "    ooooo    " << endl;
		}
		else if(letter == 'p' || letter == 'P')
		{
			cout << endl;
			cout << " pppppppppp " << endl;
			cout << " pp      pp " << endl;
			cout << " pp      pp " << endl;
			cout << " pppppppppp " << endl;
			cout << " pp         " << endl;
			cout << " pp         " << endl;
			cout << " pp         " << endl;
			cout << " pp         " << endl;			
		}
		else if(letter == 'q' || letter == 'Q')
		{
			cout << endl;
			cout << "    qqqqq    " << endl;
			cout << "  qqqqqqqqq  " << endl;
			cout << " qq       qq " << endl;
			cout << " qq       qq " << endl;
			cout << " qq       qq " << endl;
			cout << " qq       qq " << endl;
			cout << "  qqqqqqqqqq " << endl;
			cout << "    qqqqq  qq" << endl;
		}
		else if(letter == 'r' || letter == 'R')
		{
			cout << endl;
			cout << " rrrrrrrrrr " << endl;
			cout << " rr      rr " << endl;
			cout << " rr      rr " << endl;
			cout << " rrrrrrrrrr " << endl;
			cout << " rr rr      " << endl;
			cout << " rr   rr    " << endl;
			cout << " rr     rr  " << endl;
			cout << " rr      rr " << endl;		
		}
		else if(letter == 's' || letter == 'S')
		{
			cout << endl;
			cout << "    sssss    " << endl;
			cout << "  sssssssss  " << endl;
			cout << "  sss    sss " << endl;
			cout << "    sss      " << endl;
			cout << "      sss    " << endl;
			cout << " sss    sss  " << endl;
			cout << "  sssssssss  " << endl;
			cout << "    sssss    " << endl;
		}
		else if(letter == 't' || letter == 'T')
		{
			cout << endl;
			cout << " tttttttttt" << endl;
			cout << "     tt    " << endl;
			cout << "     tt    " << endl;
			cout << "     tt    " << endl;
			cout << "     tt    " << endl;
			cout << "     tt    " << endl;
			cout << "     tt    " << endl;
		}
		else if(letter == 'u' || letter == 'U')
		{
			cout << endl;
			cout << "uu        uu     " << endl;
			cout << "uu        uu     " << endl;
			cout << "uu        uu     " << endl;
			cout << "uu        uu     " << endl;
			cout << "uu        uu     " << endl;
			cout << " uu      uuu     " << endl;
			cout << "  uuuuuuuuuu     " << endl;
		}
		else if(letter == 'v' || letter == 'V')
		{
			cout << endl;
			cout << " vv        vv " << endl;
			cout << "  vv      vv  " << endl;
			cout << "   vv    vv   " << endl;
			cout << "    vv  vv    " << endl;
			cout << "     vvvv     " << endl;
			cout << "      vv      " << endl;
		}
		else if(letter == 'w' || letter == 'W')
		{
			cout << endl;
			cout << " ww        ww" << endl;
			cout << " ww        ww" << endl;
			cout << " ww        ww" << endl;
			cout << " ww   w    ww" << endl;
			cout << " ww  www   ww" << endl;
			cout << " ww w   w  ww" << endl;
			cout << " www      www" << endl;
		}
		else if(letter == 'x' || letter == 'X')
		{
			cout << endl;
			cout << " xx       xx " << endl;
			cout << "  xx     xx  " << endl;
			cout << "    xx xx    " << endl;
			cout << "     xxx     " << endl;
			cout << "   xx   xx   " << endl;
			cout << " xx       xx " << endl;
			cout << "xx         xx" << endl;
		}
		else if(letter == 'y' || letter == 'Y')
		{
			cout << endl;
			cout << " yy       yy   " << endl;
			cout << "   yy    yy    " << endl;
			cout << "    yy yy     " << endl;
			cout << "     yy       " << endl;
			cout << "    yy       " << endl;
			cout << "   yy       " << endl;
			cout << "  yy       " << endl; 
		}
		else if(letter == 'z' || letter == 'Z')
		{
		    cout << endl;
			cout << "  zzzzzzzzzzz" << endl;
			cout << "          zz " << endl;
			cout << "        zz   " << endl;
			cout << "      zz     " << endl;
			cout << "    zz       " << endl;
			cout << "  zz         " << endl;
			cout << " zzzzzzzzzzz " << endl;
		}
		else if(letter == ' ')
		{
			cout << endl;
			cout << "             " << endl;
			cout << "             " << endl;
			cout << "             " << endl;
			cout << "             " << endl;
			cout << "             " << endl;
		}
	    else if(letter == '0')
		{
			cout << endl;
			cout << " 00000000000" << endl;
			cout << " 0         0" << endl;
			cout << " 0         0" << endl;
			cout << " 0         0" << endl;
			cout << " 0         0" << endl;
			cout << " 0         0" << endl;
			cout << " 00000000000" << endl;
		}
		else if(letter == '1')
		{
			cout << endl;
			cout << "    111      " << endl;
			cout << "     11      " << endl;
			cout << "     11      " << endl;
			cout << "     11      " << endl;
			cout << "     11      " << endl;
			cout << "     11      " << endl;
			cout << " 11111111111 " << endl;
		}

		else if(letter == '2')
		{
			cout << endl;
			cout << "  22222222   " << endl;
			cout << " 22      22  " << endl;
			cout << "        22   " << endl;
			cout << "      22     " << endl;
			cout << "    22       " << endl;
			cout << "  22         " << endl;
			cout << " 22222222222 " << endl;
		}

		else if(letter == '3')
		{
			cout << endl;
			cout << "  333333333     " << endl;
			cout << " 33       33    " << endl;
			cout << "          33    " << endl;
			cout << "    3333333     " << endl;
			cout << "          33    " << endl;
			cout << " 33       33    " << endl;
			cout << "  333333333     " << endl;
		}

		else if(letter == '4')
		{
			cout << endl;
			cout << " 44       44" << endl;
			cout << " 44       44" << endl;
			cout << " 44       44" << endl;
			cout << " 44444444444" << endl;
			cout << "          44" << endl;
			cout << "          44" << endl;
			cout << "          44" << endl;
		}

		else if(letter == '5')
		{
			cout << endl;
			cout << " 55555555555" << endl;
			cout << " 55         " << endl;
			cout << " 55         " << endl;
			cout << " 5555555555 " << endl;
			cout << "          55" << endl;
			cout << "          55" << endl;
			cout << " 5555555555 " << endl;
		}

		else if(letter == '6')
		{
			cout << endl;
			cout << " 66666666666" << endl;
			cout << " 66         " << endl;
			cout << " 66         " << endl;
			cout << " 6666666666 " << endl;
			cout << " 66       66" << endl;
			cout << " 66       66" << endl;
			cout << " 6666666666 " << endl;
		}

		else if(letter == '7')
		{
			cout << endl;
			cout << " 77777777777" << endl;
			cout << "         77 " << endl;
			cout << "        77  " << endl;
			cout << "       77   " << endl;
			cout << "      77    " << endl;
			cout << "     77     " << endl;
			cout << "    77      " << endl;
		}

		else if(letter == '8')
		{
			cout << endl;
			cout << "  888888888 " << endl;
			cout << " 88       88" << endl;
			cout << " 88       88" << endl;
			cout << "  888888888 " << endl;
			cout << " 88       88" << endl;
			cout << " 88       88" << endl;
			cout << "  888888888 " << endl;
		}

		else if(letter == '9')
		{
			cout << endl;
			cout << "  999999999" << endl;
			cout << " 99      99" << endl;
			cout << " 99      99" << endl;
			cout << "  999999999" << endl;
			cout << "         99" << endl;
			cout << "         99" << endl;
			cout << "         99" << endl;
		}
		else if(letter == '.')
		{
			outStream << endl;
			outStream << "...        " << endl;
			outStream << "...        " << endl;
		}
		else if(letter == '\0')
		{
			break;
		}
	}
	cout << endl;
}

void charDraw::toText(void)
{
	outStream.open("result.txt");
	for(index = 0; index < size; index++)
	{
	
		letter = input[(int)index];
		
		if(letter == 'a' || letter == 'A')
		{
			outStream  << endl;
			outStream  << "      a      " << endl;
			outStream  << "     aaa     " << endl;
			outStream  << "    aa aa    " << endl;
			outStream  << "   aa   aa   " << endl;
			outStream  << "  aaaaaaaaa  " << endl;
			outStream  << " aa       aa " << endl;
			outStream  << "aa         aa" << endl; 
		}

		else if(letter == 'b' || letter == 'B')
		{
			outStream  << endl;
			outStream  << " bbbbbbbbbb  " << endl;
			outStream  << " bb       bb " << endl;
			outStream  << " bb       bb " << endl;
			outStream  << " bbbbbbbbbb  " << endl;
			outStream  << " bb       bb " << endl;
			outStream  << " bb       bb " << endl;
			outStream  << " bbbbbbbbbb  " << endl;
		}

		else if(letter == 'c' || letter == 'C')
		{
			outStream << endl;
			outStream << "    ccccc    " << endl;
			outStream << "  ccccccccc  " << endl;
			outStream << " cc      cc " << endl;
			outStream << " cc         " << endl;
			outStream << " cc         " << endl;
			outStream << " cc      cc " << endl;
			outStream << "  ccccccccc  " << endl;
			outStream << "   cccccc    " << endl;
		}

		else if(letter == 'd' || letter == 'D')
		{
			outStream << endl;
			outStream << " dddddddddd" << endl;
			outStream << " dd        d " << endl;
			outStream << " dd        dd" << endl;
			outStream << " dd        dd" << endl;
			outStream << " dd        dd" << endl;
			outStream << " dd        d " << endl;
			outStream << " dddddddddd  " << endl;
		}

		else if(letter == 'e' || letter == 'E')
		{
			outStream << endl;
			outStream << " eeeeeeeeee " << endl;
			outStream << " ee         " << endl;
			outStream << " ee         " << endl;
			outStream << " eeeeeeeeee " << endl;
			outStream << " ee         " << endl;
			outStream << " ee         " << endl;
			outStream << " eeeeeeeeee " << endl;	
		}

		else if(letter == 'f' || letter == 'F')
		{
			outStream << endl;
			outStream << " ffffffffff" << endl;
			outStream << " ff        " << endl;
			outStream << " ff        " << endl;
			outStream << " fffffffff " << endl;
			outStream << " ff        " << endl;
			outStream << " ff        " << endl;
			outStream << " ff        " << endl;
		}

		else if(letter == 'g' || letter == 'G')
		{
			outStream << endl;
			outStream << " gggggggggg" << endl;
			outStream << " gg      gg" << endl;
			outStream << " gg      gg" << endl;
			outStream << " gg        " << endl;
			outStream << " gg     gggg" << endl;
			outStream << " gg      gg" << endl;
			outStream << " gggggggggg" << endl;
			
		}

		else if(letter == 'h' || letter == 'H')
		{
			outStream << endl;
			outStream << " hh      hh" << endl;
			outStream << " hh      hh" << endl;
			outStream << " hh      hh" << endl;
			outStream << " hhhhhhhhhh" << endl;
			outStream << " hh      hh" << endl;
			outStream << " hh      hh" << endl;
			outStream << " hh      hh" << endl;
		}

		else if(letter == 'i' || letter == 'I')
		{
			outStream << endl;
			outStream << " iiiiiiiiii" << endl;
			outStream << "     ii    " << endl;
			outStream << "     ii    " << endl;
			outStream << "     ii    " << endl;
			outStream << "     ii    " << endl;
			outStream << "     ii    " << endl;
			outStream << " iiiiiiiiii" << endl;
		}

		else if(letter == 'j' || letter == 'J')
		{
			outStream << endl;
			outStream << " jjjjjjjjjj" << endl;
			outStream << "     jj    " << endl;
			outStream << "     jj    " << endl;
			outStream << "     jj    " << endl;
			outStream << "     jj    " << endl;
			outStream << " jj  jj    " << endl;
			outStream << " jjjjjj    " << endl;
		}

		else if(letter =='k' || letter == 'K')
		{
			outStream << endl;
			outStream << " kk     kkk" << endl;
			outStream << " kk   kkk  " << endl;
			outStream << " kk  kk    " << endl;
			outStream << " kkkk      " << endl;
			outStream << " kk  kk    " << endl;
			outStream << " kk   kkk  " << endl;
			outStream << " kk     kkk" << endl;
			outStream << " kk      kkk" << endl;
		}

		else if(letter == 'l' || letter == 'L')
		{
			outStream << endl;
			outStream << " ll        " << endl;
			outStream << " ll        " << endl;
			outStream << " ll        " << endl;
			outStream << " ll        " << endl;
			outStream << " ll        " << endl;
			outStream << " ll        " << endl;
			outStream << " llllllllll" << endl;
		}

		else if(letter == 'm' || letter == 'M')
		{
			outStream << endl;
			outStream << " mm        mm" << endl;
			outStream << " mmm       mm" << endl;
			outStream << " mm m    m mm" << endl;
			outStream << " mm  m  m  mm" << endl;
			outStream << " mm   mm   mm" << endl;
			outStream << " mm        mm" << endl;
			outStream << " mm        mm" << endl;
		}
		
		else if(letter == 'n' || letter == 'N')
		{
			outStream << endl;
			outStream << " nn       nn     " << endl;
			outStream << " nnn      nn     " << endl;
			outStream << " nn nn    nn     " << endl;
			outStream << " nn  nn   nn     " << endl;
			outStream << " nn   nn  nn     " << endl;
			outStream << " nn     nnnn     " << endl;
			outStream << " nn       nn     " << endl;
		}

		else if(letter == 'o' || letter == 'O')
		{
			outStream << endl;
			outStream << "    ooooo    " << endl;
			outStream << "  oo     oo  " << endl;
			outStream << " oo       oo " << endl;
			outStream << " oo       oo " << endl;
			outStream << " oo       oo " << endl;
			outStream << " oo       oo " << endl;
			outStream << "  oo     oo  " << endl;
			outStream << "    ooooo    " << endl;
		}

		else if(letter == 'p' || letter == 'P')
		{
			outStream << endl;
			outStream << " pppppppppp " << endl;
			outStream << " pp      pp " << endl;
			outStream << " pp      pp " << endl;
			outStream << " pppppppppp " << endl;
			outStream << " pp         " << endl;
			outStream << " pp         " << endl;
			outStream << " pp         " << endl;
			outStream << " pp         " << endl;			
		}

		else if(letter == 'q' || letter == 'Q')
		{
			outStream << endl;
			outStream << "    qqqqq    " << endl;
			outStream << "  qqqqqqqqq  " << endl;
			outStream << " qq       qq " << endl;
			outStream << " qq       qq " << endl;
			outStream << " qq       qq " << endl;
			outStream << " qq       qq " << endl;
			outStream << "  qqqqqqqqqq " << endl;
			outStream << "    qqqqq  qq" << endl;
		}

		else if(letter == 'r' || letter == 'R')
		{
			outStream << endl;
			outStream << " rrrrrrrrrr " << endl;
			outStream << " rr      rr " << endl;
			outStream << " rr      rr " << endl;
			outStream << " rrrrrrrrrr " << endl;
			outStream << " rr rr      " << endl;
			outStream << " rr   rr    " << endl;
			outStream << " rr     rr  " << endl;
			outStream << " rr      rr " << endl;		
		}

		else if(letter == 's' || letter == 'S')
		{
			outStream << endl;
			outStream << "    sssss    " << endl;
			outStream << "  sssssssss  " << endl;
			outStream << "  sss    sss " << endl;
			outStream << "    sss      " << endl;
			outStream << "      sss    " << endl;
			outStream << " sss    sss  " << endl;
			outStream << "  sssssssss  " << endl;
			outStream << "    sssss    " << endl;
		}

		else if(letter == 't' || letter == 'T')
		{
			outStream << endl;
			outStream << " tttttttttt" << endl;
			outStream << "     tt    " << endl;
			outStream << "     tt    " << endl;
			outStream << "     tt    " << endl;
			outStream << "     tt    " << endl;
			outStream << "     tt    " << endl;
			outStream << "     tt    " << endl;
		}

		else if(letter == 'u' || letter == 'U')
		{
			outStream << endl;
			outStream << "uu        uu     " << endl;
			outStream << "uu        uu     " << endl;
			outStream << "uu        uu     " << endl;
			outStream << "uu        uu     " << endl;
			outStream << "uu        uu     " << endl;
			outStream << " uu      uuu     " << endl;
			outStream << "  uuuuuuuuuu     " << endl;
		}

		else if(letter == 'v' || letter == 'V')
		{
			outStream << endl;
			outStream << " vv        vv " << endl;
			outStream << "  vv      vv  " << endl;
			outStream << "   vv    vv   " << endl;
			outStream << "    vv  vv    " << endl;
			outStream << "     vvvv     " << endl;
			outStream << "      vv      " << endl;
		}

		else if(letter == 'w' || letter == 'W')
		{
			outStream << endl;
			outStream << " ww        ww" << endl;
			outStream << " ww        ww" << endl;
			outStream << " ww        ww" << endl;
			outStream << " ww   w    ww" << endl;
			outStream << " ww  www   ww" << endl;
			outStream << " ww w   w  ww" << endl;
			outStream << " www      www" << endl;
		}

		else if(letter == 'x' || letter == 'X')
		{
			outStream << endl;
			outStream << " xx       xx " << endl;
			outStream << "  xx     xx  " << endl;
			outStream << "    xx xx    " << endl;
			outStream << "     xxx     " << endl;
			outStream << "   xx   xx   " << endl;
			outStream << " xx       xx " << endl;
			outStream << "xx         xx" << endl;
		}

		else if(letter == 'y' || letter == 'Y')
		{
			outStream << endl;
			outStream << " yy       yy   " << endl;
			outStream << "   yy    yy    " << endl;
			outStream << "    yy yy     " << endl;
			outStream << "     yy       " << endl;
			outStream << "    yy       " << endl;
			outStream << "   yy       " << endl;
			outStream << "  yy       " << endl; 
		}

		else if(letter == 'z' || letter == 'Z')
		{
		    outStream << endl;
			outStream << "  zzzzzzzzzzz" << endl;
			outStream << "          zz " << endl;
			outStream << "        zz   " << endl;
			outStream << "      zz     " << endl;
			outStream << "    zz       " << endl;
			outStream << "  zz         " << endl;
			outStream << " zzzzzzzzzzz " << endl;
		}

		else if(letter == ' ')
		{
			outStream << endl;
			outStream << "             " << endl;
			outStream << "             " << endl;
			outStream << "             " << endl;
			outStream << "             " << endl;
			outStream << "             " << endl;
		}
		
	    else if(letter == '0')
		{
			cout << endl;
			cout << " 00000000000" << endl;
			cout << " 0         0" << endl;
			cout << " 0         0" << endl;
			cout << " 0         0" << endl;
			cout << " 0         0" << endl;
			cout << " 0         0" << endl;
			cout << " 00000000000" << endl;
		}

		else if(letter == '1')
		{
			outStream << endl;
			outStream << "    111      " << endl;
			outStream << "     11      " << endl;
			outStream << "     11      " << endl;
			outStream << "     11      " << endl;
			outStream << "     11      " << endl;
			outStream << "     11      " << endl;
			outStream << " 11111111111 " << endl;
		}

		else if(letter == '2')
		{
			outStream << endl;
			outStream << "  22222222   " << endl;
			outStream << " 22      22  " << endl;
			outStream << "        22   " << endl;
			outStream << "      22     " << endl;
			outStream << "    22       " << endl;
			outStream << "  22         " << endl;
			outStream << " 22222222222 " << endl;
		}

		else if(letter == '3')
		{
			outStream << endl;
			outStream << "  333333333     " << endl;
			outStream << " 33       33    " << endl;
			outStream << "          33    " << endl;
			outStream << "    3333333     " << endl;
			outStream << "          33    " << endl;
			outStream << " 33       33    " << endl;
			outStream << "  333333333     " << endl;
		}

		else if(letter == '4')
		{
			outStream << endl;
			outStream << " 44       44" << endl;
			outStream << " 44       44" << endl;
			outStream << " 44       44" << endl;
			outStream << " 44444444444" << endl;
			outStream << "          44" << endl;
			outStream << "          44" << endl;
			outStream << "          44" << endl;
		}

		else if(letter == '5')
		{
			outStream << endl;
			outStream << " 55555555555" << endl;
			outStream << " 55         " << endl;
			outStream << " 55         " << endl;
			outStream << " 5555555555 " << endl;
			outStream << "          55" << endl;
			outStream << "          55" << endl;
			outStream << " 5555555555 " << endl;
		}

		else if(letter == '6')
		{
			outStream << endl;
			outStream << " 66666666666" << endl;
			outStream << " 66         " << endl;
			outStream << " 66         " << endl;
			outStream << " 6666666666 " << endl;
			outStream << " 66       66" << endl;
			outStream << " 66       66" << endl;
			outStream << " 6666666666 " << endl;
		}

		else if(letter == '7')
		{
			outStream << endl;
			outStream << " 77777777777" << endl;
			outStream << "         77 " << endl;
			outStream << "        77  " << endl;
			outStream << "       77   " << endl;
			outStream << "      77    " << endl;
			outStream << "     77     " << endl;
			outStream << "    77      " << endl;
		}

		else if(letter == '8')
		{
			outStream << endl;
			outStream << "  888888888 " << endl;
			outStream << " 88       88" << endl;
			outStream << " 88       88" << endl;
			outStream << "  888888888 " << endl;
			outStream << " 88       88" << endl;
			outStream << " 88       88" << endl;
			outStream << "  888888888 " << endl;
		}

		else if(letter == '9')
		{
			outStream << endl;
			outStream << "  999999999" << endl;
			outStream << " 99      99" << endl;
			outStream << " 99      99" << endl;
			outStream << "  999999999" << endl;
			outStream << "         99" << endl;
			outStream << "         99" << endl;
			outStream << "         99" << endl;
		}
		else if(letter == '.')
		{
			outStream << endl;
			outStream << " ...       " << endl;
			outStream << " ...       " << endl;
		}
		else if(letter == '\0')
			break;
	}
	outStream << endl;
	outStream.flush();
	outStream.close();
}
