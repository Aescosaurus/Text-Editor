#include "LetterCodex.h"

void LetterCodex::DrawLetter( int x,int y,int letter,Color c,Graphics& gfx ) const
{

	if( letter == 65 )
	{
		gfx.PutPixel( 3 + x,0 + y,c );
		gfx.PutPixel( 4 + x,0 + y,c );
		gfx.PutPixel( 3 + x,1 + y,c );
		gfx.PutPixel( 4 + x,1 + y,c );
		gfx.PutPixel( 3 + x,2 + y,c );
		gfx.PutPixel( 4 + x,2 + y,c );
		gfx.PutPixel( 2 + x,3 + y,c );
		gfx.PutPixel( 5 + x,3 + y,c );
		gfx.PutPixel( 2 + x,4 + y,c );
		gfx.PutPixel( 5 + x,4 + y,c );
		gfx.PutPixel( 2 + x,5 + y,c );
		gfx.PutPixel( 5 + x,5 + y,c );
		gfx.PutPixel( 1 + x,6 + y,c );
		gfx.PutPixel( 6 + x,6 + y,c );
		gfx.PutPixel( 1 + x,7 + y,c );
		gfx.PutPixel( 6 + x,7 + y,c );
		gfx.PutPixel( 1 + x,8 + y,c );
		gfx.PutPixel( 2 + x,8 + y,c );
		gfx.PutPixel( 3 + x,8 + y,c );
		gfx.PutPixel( 4 + x,8 + y,c );
		gfx.PutPixel( 5 + x,8 + y,c );
		gfx.PutPixel( 6 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 7 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 7 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 66 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 1 + x,0 + y,c );
		gfx.PutPixel( 2 + x,0 + y,c );
		gfx.PutPixel( 3 + x,0 + y,c );
		gfx.PutPixel( 4 + x,0 + y,c );
		gfx.PutPixel( 0 + x,1 + y,c );
		gfx.PutPixel( 5 + x,1 + y,c );
		gfx.PutPixel( 0 + x,2 + y,c );
		gfx.PutPixel( 6 + x,2 + y,c );
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 6 + x,3 + y,c );
		gfx.PutPixel( 0 + x,4 + y,c );
		gfx.PutPixel( 5 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 1 + x,5 + y,c );
		gfx.PutPixel( 2 + x,5 + y,c );
		gfx.PutPixel( 3 + x,5 + y,c );
		gfx.PutPixel( 4 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 5 + x,6 + y,c );
		gfx.PutPixel( 6 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 6 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 7 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 7 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 6 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 1 + x,11 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		return 7;

	}
	if( letter == 67 )
	{
		gfx.PutPixel( 2 + x,0 + y,c );
		gfx.PutPixel( 3 + x,0 + y,c );
		gfx.PutPixel( 4 + x,0 + y,c );
		gfx.PutPixel( 5 + x,0 + y,c );
		gfx.PutPixel( 1 + x,1 + y,c );
		gfx.PutPixel( 6 + x,1 + y,c );
		gfx.PutPixel( 0 + x,2 + y,c );
		gfx.PutPixel( 7 + x,2 + y,c );
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 0 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 7 + x,9 + y,c );
		gfx.PutPixel( 1 + x,10 + y,c );
		gfx.PutPixel( 6 + x,10 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		return 7;

	}
	if( letter == 68 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 1 + x,0 + y,c );
		gfx.PutPixel( 2 + x,0 + y,c );
		gfx.PutPixel( 3 + x,0 + y,c );
		gfx.PutPixel( 4 + x,0 + y,c );
		gfx.PutPixel( 5 + x,0 + y,c );
		gfx.PutPixel( 0 + x,1 + y,c );
		gfx.PutPixel( 5 + x,1 + y,c );
		gfx.PutPixel( 6 + x,1 + y,c );
		gfx.PutPixel( 0 + x,2 + y,c );
		gfx.PutPixel( 6 + x,2 + y,c );
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 7 + x,3 + y,c );
		gfx.PutPixel( 0 + x,4 + y,c );
		gfx.PutPixel( 7 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 7 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 7 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 7 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 7 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 6 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 5 + x,10 + y,c );
		gfx.PutPixel( 6 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 1 + x,11 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		return 7;

	}
	if( letter == 69 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 1 + x,0 + y,c );
		gfx.PutPixel( 2 + x,0 + y,c );
		gfx.PutPixel( 3 + x,0 + y,c );
		gfx.PutPixel( 4 + x,0 + y,c );
		gfx.PutPixel( 5 + x,0 + y,c );
		gfx.PutPixel( 6 + x,0 + y,c );
		gfx.PutPixel( 7 + x,0 + y,c );
		gfx.PutPixel( 0 + x,1 + y,c );
		gfx.PutPixel( 0 + x,2 + y,c );
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 0 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 1 + x,5 + y,c );
		gfx.PutPixel( 2 + x,5 + y,c );
		gfx.PutPixel( 3 + x,5 + y,c );
		gfx.PutPixel( 4 + x,5 + y,c );
		gfx.PutPixel( 5 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 1 + x,11 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		gfx.PutPixel( 6 + x,11 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 70 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 1 + x,0 + y,c );
		gfx.PutPixel( 2 + x,0 + y,c );
		gfx.PutPixel( 3 + x,0 + y,c );
		gfx.PutPixel( 4 + x,0 + y,c );
		gfx.PutPixel( 5 + x,0 + y,c );
		gfx.PutPixel( 6 + x,0 + y,c );
		gfx.PutPixel( 7 + x,0 + y,c );
		gfx.PutPixel( 0 + x,1 + y,c );
		gfx.PutPixel( 0 + x,2 + y,c );
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 0 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 1 + x,5 + y,c );
		gfx.PutPixel( 2 + x,5 + y,c );
		gfx.PutPixel( 3 + x,5 + y,c );
		gfx.PutPixel( 4 + x,5 + y,c );
		gfx.PutPixel( 5 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		return 7;

	}
	if( letter == 71 )
	{
		gfx.PutPixel( 1 + x,0 + y,c );
		gfx.PutPixel( 2 + x,0 + y,c );
		gfx.PutPixel( 3 + x,0 + y,c );
		gfx.PutPixel( 4 + x,0 + y,c );
		gfx.PutPixel( 5 + x,0 + y,c );
		gfx.PutPixel( 6 + x,0 + y,c );
		gfx.PutPixel( 1 + x,1 + y,c );
		gfx.PutPixel( 7 + x,1 + y,c );
		gfx.PutPixel( 0 + x,2 + y,c );
		gfx.PutPixel( 7 + x,2 + y,c );
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 0 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 5 + x,6 + y,c );
		gfx.PutPixel( 6 + x,6 + y,c );
		gfx.PutPixel( 7 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 7 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 7 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 6 + x,9 + y,c );
		gfx.PutPixel( 7 + x,9 + y,c );
		gfx.PutPixel( 1 + x,10 + y,c );
		gfx.PutPixel( 5 + x,10 + y,c );
		gfx.PutPixel( 7 + x,10 + y,c );
		gfx.PutPixel( 1 + x,11 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 72 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 7 + x,0 + y,c );
		gfx.PutPixel( 0 + x,1 + y,c );
		gfx.PutPixel( 7 + x,1 + y,c );
		gfx.PutPixel( 0 + x,2 + y,c );
		gfx.PutPixel( 7 + x,2 + y,c );
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 7 + x,3 + y,c );
		gfx.PutPixel( 0 + x,4 + y,c );
		gfx.PutPixel( 7 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 1 + x,5 + y,c );
		gfx.PutPixel( 2 + x,5 + y,c );
		gfx.PutPixel( 3 + x,5 + y,c );
		gfx.PutPixel( 4 + x,5 + y,c );
		gfx.PutPixel( 5 + x,5 + y,c );
		gfx.PutPixel( 6 + x,5 + y,c );
		gfx.PutPixel( 7 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 7 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 7 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 7 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 7 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 7 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 73 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 1 + x,0 + y,c );
		gfx.PutPixel( 2 + x,0 + y,c );
		gfx.PutPixel( 3 + x,0 + y,c );
		gfx.PutPixel( 4 + x,0 + y,c );
		gfx.PutPixel( 5 + x,0 + y,c );
		gfx.PutPixel( 6 + x,0 + y,c );
		gfx.PutPixel( 7 + x,0 + y,c );
		gfx.PutPixel( 4 + x,1 + y,c );
		gfx.PutPixel( 4 + x,2 + y,c );
		gfx.PutPixel( 4 + x,3 + y,c );
		gfx.PutPixel( 4 + x,4 + y,c );
		gfx.PutPixel( 4 + x,5 + y,c );
		gfx.PutPixel( 4 + x,6 + y,c );
		gfx.PutPixel( 4 + x,7 + y,c );
		gfx.PutPixel( 4 + x,8 + y,c );
		gfx.PutPixel( 4 + x,9 + y,c );
		gfx.PutPixel( 4 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 1 + x,11 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		gfx.PutPixel( 6 + x,11 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 74 )
	{
		gfx.PutPixel( 3 + x,0 + y,c );
		gfx.PutPixel( 4 + x,0 + y,c );
		gfx.PutPixel( 5 + x,0 + y,c );
		gfx.PutPixel( 6 + x,0 + y,c );
		gfx.PutPixel( 7 + x,0 + y,c );
		gfx.PutPixel( 7 + x,1 + y,c );
		gfx.PutPixel( 7 + x,2 + y,c );
		gfx.PutPixel( 7 + x,3 + y,c );
		gfx.PutPixel( 7 + x,4 + y,c );
		gfx.PutPixel( 7 + x,5 + y,c );
		gfx.PutPixel( 7 + x,6 + y,c );
		gfx.PutPixel( 7 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 7 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 7 + x,9 + y,c );
		gfx.PutPixel( 1 + x,10 + y,c );
		gfx.PutPixel( 6 + x,10 + y,c );
		gfx.PutPixel( 7 + x,10 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		gfx.PutPixel( 6 + x,11 + y,c );
		return 7;

	}
	if( letter == 75 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 7 + x,0 + y,c );
		gfx.PutPixel( 0 + x,1 + y,c );
		gfx.PutPixel( 6 + x,1 + y,c );
		gfx.PutPixel( 0 + x,2 + y,c );
		gfx.PutPixel( 5 + x,2 + y,c );
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 3 + x,3 + y,c );
		gfx.PutPixel( 4 + x,3 + y,c );
		gfx.PutPixel( 0 + x,4 + y,c );
		gfx.PutPixel( 2 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 1 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 1 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 2 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 3 + x,8 + y,c );
		gfx.PutPixel( 4 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 5 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 6 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 76 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 0 + x,1 + y,c );
		gfx.PutPixel( 0 + x,2 + y,c );
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 0 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 1 + x,11 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		gfx.PutPixel( 6 + x,11 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 77 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 7 + x,0 + y,c );
		gfx.PutPixel( 0 + x,1 + y,c );
		gfx.PutPixel( 1 + x,1 + y,c );
		gfx.PutPixel( 6 + x,1 + y,c );
		gfx.PutPixel( 7 + x,1 + y,c );
		gfx.PutPixel( 0 + x,2 + y,c );
		gfx.PutPixel( 2 + x,2 + y,c );
		gfx.PutPixel( 5 + x,2 + y,c );
		gfx.PutPixel( 7 + x,2 + y,c );
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 2 + x,3 + y,c );
		gfx.PutPixel( 5 + x,3 + y,c );
		gfx.PutPixel( 7 + x,3 + y,c );
		gfx.PutPixel( 0 + x,4 + y,c );
		gfx.PutPixel( 3 + x,4 + y,c );
		gfx.PutPixel( 4 + x,4 + y,c );
		gfx.PutPixel( 7 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 3 + x,5 + y,c );
		gfx.PutPixel( 4 + x,5 + y,c );
		gfx.PutPixel( 7 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 7 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 7 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 7 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 7 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 7 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 78 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 7 + x,0 + y,c );
		gfx.PutPixel( 0 + x,1 + y,c );
		gfx.PutPixel( 1 + x,1 + y,c );
		gfx.PutPixel( 7 + x,1 + y,c );
		gfx.PutPixel( 0 + x,2 + y,c );
		gfx.PutPixel( 1 + x,2 + y,c );
		gfx.PutPixel( 7 + x,2 + y,c );
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 2 + x,3 + y,c );
		gfx.PutPixel( 7 + x,3 + y,c );
		gfx.PutPixel( 0 + x,4 + y,c );
		gfx.PutPixel( 3 + x,4 + y,c );
		gfx.PutPixel( 7 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 3 + x,5 + y,c );
		gfx.PutPixel( 7 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 4 + x,6 + y,c );
		gfx.PutPixel( 7 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 4 + x,7 + y,c );
		gfx.PutPixel( 7 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 5 + x,8 + y,c );
		gfx.PutPixel( 7 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 6 + x,9 + y,c );
		gfx.PutPixel( 7 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 6 + x,10 + y,c );
		gfx.PutPixel( 7 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 79 )
	{
		gfx.PutPixel( 3 + x,0 + y,c );
		gfx.PutPixel( 4 + x,0 + y,c );
		gfx.PutPixel( 1 + x,1 + y,c );
		gfx.PutPixel( 2 + x,1 + y,c );
		gfx.PutPixel( 5 + x,1 + y,c );
		gfx.PutPixel( 6 + x,1 + y,c );
		gfx.PutPixel( 1 + x,2 + y,c );
		gfx.PutPixel( 6 + x,2 + y,c );
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 7 + x,3 + y,c );
		gfx.PutPixel( 0 + x,4 + y,c );
		gfx.PutPixel( 7 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 7 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 7 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 7 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 7 + x,8 + y,c );
		gfx.PutPixel( 1 + x,9 + y,c );
		gfx.PutPixel( 6 + x,9 + y,c );
		gfx.PutPixel( 1 + x,10 + y,c );
		gfx.PutPixel( 2 + x,10 + y,c );
		gfx.PutPixel( 5 + x,10 + y,c );
		gfx.PutPixel( 6 + x,10 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		return 7;

	}
	if( letter == 80 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 1 + x,0 + y,c );
		gfx.PutPixel( 2 + x,0 + y,c );
		gfx.PutPixel( 3 + x,0 + y,c );
		gfx.PutPixel( 4 + x,0 + y,c );
		gfx.PutPixel( 5 + x,0 + y,c );
		gfx.PutPixel( 0 + x,1 + y,c );
		gfx.PutPixel( 6 + x,1 + y,c );
		gfx.PutPixel( 0 + x,2 + y,c );
		gfx.PutPixel( 7 + x,2 + y,c );
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 7 + x,3 + y,c );
		gfx.PutPixel( 0 + x,4 + y,c );
		gfx.PutPixel( 7 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 6 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 1 + x,6 + y,c );
		gfx.PutPixel( 2 + x,6 + y,c );
		gfx.PutPixel( 3 + x,6 + y,c );
		gfx.PutPixel( 4 + x,6 + y,c );
		gfx.PutPixel( 5 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		return 7;

	}
	if( letter == 81 )
	{
		gfx.PutPixel( 3 + x,0 + y,c );
		gfx.PutPixel( 4 + x,0 + y,c );
		gfx.PutPixel( 1 + x,1 + y,c );
		gfx.PutPixel( 2 + x,1 + y,c );
		gfx.PutPixel( 5 + x,1 + y,c );
		gfx.PutPixel( 6 + x,1 + y,c );
		gfx.PutPixel( 1 + x,2 + y,c );
		gfx.PutPixel( 6 + x,2 + y,c );
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 7 + x,3 + y,c );
		gfx.PutPixel( 0 + x,4 + y,c );
		gfx.PutPixel( 7 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 7 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 7 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 7 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 4 + x,8 + y,c );
		gfx.PutPixel( 7 + x,8 + y,c );
		gfx.PutPixel( 1 + x,9 + y,c );
		gfx.PutPixel( 5 + x,9 + y,c );
		gfx.PutPixel( 6 + x,9 + y,c );
		gfx.PutPixel( 1 + x,10 + y,c );
		gfx.PutPixel( 2 + x,10 + y,c );
		gfx.PutPixel( 5 + x,10 + y,c );
		gfx.PutPixel( 6 + x,10 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 82 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 1 + x,0 + y,c );
		gfx.PutPixel( 2 + x,0 + y,c );
		gfx.PutPixel( 3 + x,0 + y,c );
		gfx.PutPixel( 4 + x,0 + y,c );
		gfx.PutPixel( 5 + x,0 + y,c );
		gfx.PutPixel( 0 + x,1 + y,c );
		gfx.PutPixel( 6 + x,1 + y,c );
		gfx.PutPixel( 0 + x,2 + y,c );
		gfx.PutPixel( 7 + x,2 + y,c );
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 7 + x,3 + y,c );
		gfx.PutPixel( 0 + x,4 + y,c );
		gfx.PutPixel( 7 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 6 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 1 + x,6 + y,c );
		gfx.PutPixel( 2 + x,6 + y,c );
		gfx.PutPixel( 3 + x,6 + y,c );
		gfx.PutPixel( 4 + x,6 + y,c );
		gfx.PutPixel( 5 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 1 + x,7 + y,c );
		gfx.PutPixel( 2 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 3 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 4 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 5 + x,10 + y,c );
		gfx.PutPixel( 6 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 83 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 1 + x,0 + y,c );
		gfx.PutPixel( 2 + x,0 + y,c );
		gfx.PutPixel( 3 + x,0 + y,c );
		gfx.PutPixel( 4 + x,0 + y,c );
		gfx.PutPixel( 5 + x,0 + y,c );
		gfx.PutPixel( 6 + x,0 + y,c );
		gfx.PutPixel( 7 + x,0 + y,c );
		gfx.PutPixel( 0 + x,1 + y,c );
		gfx.PutPixel( 0 + x,2 + y,c );
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 0 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 1 + x,5 + y,c );
		gfx.PutPixel( 2 + x,5 + y,c );
		gfx.PutPixel( 3 + x,5 + y,c );
		gfx.PutPixel( 4 + x,5 + y,c );
		gfx.PutPixel( 5 + x,5 + y,c );
		gfx.PutPixel( 6 + x,5 + y,c );
		gfx.PutPixel( 7 + x,5 + y,c );
		gfx.PutPixel( 7 + x,6 + y,c );
		gfx.PutPixel( 7 + x,7 + y,c );
		gfx.PutPixel( 7 + x,8 + y,c );
		gfx.PutPixel( 7 + x,9 + y,c );
		gfx.PutPixel( 7 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 1 + x,11 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		gfx.PutPixel( 6 + x,11 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 84 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 1 + x,0 + y,c );
		gfx.PutPixel( 2 + x,0 + y,c );
		gfx.PutPixel( 3 + x,0 + y,c );
		gfx.PutPixel( 4 + x,0 + y,c );
		gfx.PutPixel( 5 + x,0 + y,c );
		gfx.PutPixel( 6 + x,0 + y,c );
		gfx.PutPixel( 7 + x,0 + y,c );
		gfx.PutPixel( 4 + x,1 + y,c );
		gfx.PutPixel( 4 + x,2 + y,c );
		gfx.PutPixel( 4 + x,3 + y,c );
		gfx.PutPixel( 4 + x,4 + y,c );
		gfx.PutPixel( 4 + x,5 + y,c );
		gfx.PutPixel( 4 + x,6 + y,c );
		gfx.PutPixel( 4 + x,7 + y,c );
		gfx.PutPixel( 4 + x,8 + y,c );
		gfx.PutPixel( 4 + x,9 + y,c );
		gfx.PutPixel( 4 + x,10 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		return 7;

	}
	if( letter == 85 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 7 + x,0 + y,c );
		gfx.PutPixel( 0 + x,1 + y,c );
		gfx.PutPixel( 7 + x,1 + y,c );
		gfx.PutPixel( 0 + x,2 + y,c );
		gfx.PutPixel( 7 + x,2 + y,c );
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 7 + x,3 + y,c );
		gfx.PutPixel( 0 + x,4 + y,c );
		gfx.PutPixel( 7 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 7 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 7 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 7 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 7 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 7 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 7 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 1 + x,11 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		gfx.PutPixel( 6 + x,11 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 86 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 7 + x,0 + y,c );
		gfx.PutPixel( 0 + x,1 + y,c );
		gfx.PutPixel( 7 + x,1 + y,c );
		gfx.PutPixel( 1 + x,2 + y,c );
		gfx.PutPixel( 6 + x,2 + y,c );
		gfx.PutPixel( 1 + x,3 + y,c );
		gfx.PutPixel( 6 + x,3 + y,c );
		gfx.PutPixel( 1 + x,4 + y,c );
		gfx.PutPixel( 6 + x,4 + y,c );
		gfx.PutPixel( 1 + x,5 + y,c );
		gfx.PutPixel( 6 + x,5 + y,c );
		gfx.PutPixel( 2 + x,6 + y,c );
		gfx.PutPixel( 5 + x,6 + y,c );
		gfx.PutPixel( 2 + x,7 + y,c );
		gfx.PutPixel( 5 + x,7 + y,c );
		gfx.PutPixel( 2 + x,8 + y,c );
		gfx.PutPixel( 5 + x,8 + y,c );
		gfx.PutPixel( 2 + x,9 + y,c );
		gfx.PutPixel( 5 + x,9 + y,c );
		gfx.PutPixel( 3 + x,10 + y,c );
		gfx.PutPixel( 4 + x,10 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		return 7;

	}
	if( letter == 87 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 7 + x,0 + y,c );
		gfx.PutPixel( 0 + x,1 + y,c );
		gfx.PutPixel( 7 + x,1 + y,c );
		gfx.PutPixel( 0 + x,2 + y,c );
		gfx.PutPixel( 7 + x,2 + y,c );
		gfx.PutPixel( 1 + x,3 + y,c );
		gfx.PutPixel( 3 + x,3 + y,c );
		gfx.PutPixel( 4 + x,3 + y,c );
		gfx.PutPixel( 6 + x,3 + y,c );
		gfx.PutPixel( 1 + x,4 + y,c );
		gfx.PutPixel( 3 + x,4 + y,c );
		gfx.PutPixel( 4 + x,4 + y,c );
		gfx.PutPixel( 6 + x,4 + y,c );
		gfx.PutPixel( 1 + x,5 + y,c );
		gfx.PutPixel( 3 + x,5 + y,c );
		gfx.PutPixel( 4 + x,5 + y,c );
		gfx.PutPixel( 6 + x,5 + y,c );
		gfx.PutPixel( 1 + x,6 + y,c );
		gfx.PutPixel( 3 + x,6 + y,c );
		gfx.PutPixel( 4 + x,6 + y,c );
		gfx.PutPixel( 6 + x,6 + y,c );
		gfx.PutPixel( 1 + x,7 + y,c );
		gfx.PutPixel( 3 + x,7 + y,c );
		gfx.PutPixel( 4 + x,7 + y,c );
		gfx.PutPixel( 6 + x,7 + y,c );
		gfx.PutPixel( 1 + x,8 + y,c );
		gfx.PutPixel( 3 + x,8 + y,c );
		gfx.PutPixel( 4 + x,8 + y,c );
		gfx.PutPixel( 6 + x,8 + y,c );
		gfx.PutPixel( 2 + x,9 + y,c );
		gfx.PutPixel( 5 + x,9 + y,c );
		gfx.PutPixel( 2 + x,10 + y,c );
		gfx.PutPixel( 5 + x,10 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		return 7;

	}
	if( letter == 88 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 7 + x,0 + y,c );
		gfx.PutPixel( 1 + x,1 + y,c );
		gfx.PutPixel( 6 + x,1 + y,c );
		gfx.PutPixel( 1 + x,2 + y,c );
		gfx.PutPixel( 6 + x,2 + y,c );
		gfx.PutPixel( 2 + x,3 + y,c );
		gfx.PutPixel( 5 + x,3 + y,c );
		gfx.PutPixel( 3 + x,4 + y,c );
		gfx.PutPixel( 4 + x,4 + y,c );
		gfx.PutPixel( 3 + x,5 + y,c );
		gfx.PutPixel( 4 + x,5 + y,c );
		gfx.PutPixel( 3 + x,6 + y,c );
		gfx.PutPixel( 4 + x,6 + y,c );
		gfx.PutPixel( 3 + x,7 + y,c );
		gfx.PutPixel( 4 + x,7 + y,c );
		gfx.PutPixel( 2 + x,8 + y,c );
		gfx.PutPixel( 5 + x,8 + y,c );
		gfx.PutPixel( 1 + x,9 + y,c );
		gfx.PutPixel( 6 + x,9 + y,c );
		gfx.PutPixel( 1 + x,10 + y,c );
		gfx.PutPixel( 6 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 89 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 7 + x,0 + y,c );
		gfx.PutPixel( 1 + x,1 + y,c );
		gfx.PutPixel( 6 + x,1 + y,c );
		gfx.PutPixel( 2 + x,2 + y,c );
		gfx.PutPixel( 5 + x,2 + y,c );
		gfx.PutPixel( 3 + x,3 + y,c );
		gfx.PutPixel( 4 + x,3 + y,c );
		gfx.PutPixel( 3 + x,4 + y,c );
		gfx.PutPixel( 4 + x,4 + y,c );
		gfx.PutPixel( 4 + x,5 + y,c );
		gfx.PutPixel( 4 + x,6 + y,c );
		gfx.PutPixel( 4 + x,7 + y,c );
		gfx.PutPixel( 4 + x,8 + y,c );
		gfx.PutPixel( 4 + x,9 + y,c );
		gfx.PutPixel( 4 + x,10 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		return 7;

	}
	if( letter == 90 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 1 + x,0 + y,c );
		gfx.PutPixel( 2 + x,0 + y,c );
		gfx.PutPixel( 3 + x,0 + y,c );
		gfx.PutPixel( 4 + x,0 + y,c );
		gfx.PutPixel( 5 + x,0 + y,c );
		gfx.PutPixel( 6 + x,0 + y,c );
		gfx.PutPixel( 7 + x,0 + y,c );
		gfx.PutPixel( 6 + x,1 + y,c );
		gfx.PutPixel( 6 + x,2 + y,c );
		gfx.PutPixel( 5 + x,3 + y,c );
		gfx.PutPixel( 4 + x,4 + y,c );
		gfx.PutPixel( 4 + x,5 + y,c );
		gfx.PutPixel( 3 + x,6 + y,c );
		gfx.PutPixel( 3 + x,7 + y,c );
		gfx.PutPixel( 2 + x,8 + y,c );
		gfx.PutPixel( 1 + x,9 + y,c );
		gfx.PutPixel( 1 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 1 + x,11 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		gfx.PutPixel( 6 + x,11 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 91 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 1 + x,0 + y,c );
		gfx.PutPixel( 2 + x,0 + y,c );
		gfx.PutPixel( 3 + x,0 + y,c );
		gfx.PutPixel( 4 + x,0 + y,c );
		gfx.PutPixel( 5 + x,0 + y,c );
		gfx.PutPixel( 0 + x,1 + y,c );
		gfx.PutPixel( 0 + x,2 + y,c );
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 0 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 1 + x,11 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		return 5;

	}
	if( letter == 92 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 1 + x,1 + y,c );
		gfx.PutPixel( 1 + x,2 + y,c );
		gfx.PutPixel( 2 + x,3 + y,c );
		gfx.PutPixel( 3 + x,4 + y,c );
		gfx.PutPixel( 3 + x,5 + y,c );
		gfx.PutPixel( 4 + x,6 + y,c );
		gfx.PutPixel( 4 + x,7 + y,c );
		gfx.PutPixel( 5 + x,8 + y,c );
		gfx.PutPixel( 6 + x,9 + y,c );
		gfx.PutPixel( 6 + x,10 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 93 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 1 + x,0 + y,c );
		gfx.PutPixel( 2 + x,0 + y,c );
		gfx.PutPixel( 3 + x,0 + y,c );
		gfx.PutPixel( 4 + x,0 + y,c );
		gfx.PutPixel( 5 + x,0 + y,c );
		gfx.PutPixel( 0 + x,1 + y,c );
		gfx.PutPixel( 0 + x,2 + y,c );
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 0 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 1 + x,11 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		return 5;

	}
	if( letter == 94 )
	{
		gfx.PutPixel( 3 + x,0 + y,c );
		gfx.PutPixel( 2 + x,1 + y,c );
		gfx.PutPixel( 4 + x,1 + y,c );
		gfx.PutPixel( 1 + x,2 + y,c );
		gfx.PutPixel( 5 + x,2 + y,c );
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 6 + x,3 + y,c );
		return 6;

	}
	if( letter == 95 )
	{
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 1 + x,11 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		gfx.PutPixel( 6 + x,11 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 96 )
	{
		gfx.PutPixel( 1 + x,0 + y,c );
		gfx.PutPixel( 2 + x,1 + y,c );
		gfx.PutPixel( 3 + x,2 + y,c );
		gfx.PutPixel( 4 + x,3 + y,c );
		return 4;

	}
	if( letter == 97 )
	{
		gfx.PutPixel( 1 + x,2 + y,c );
		gfx.PutPixel( 2 + x,2 + y,c );
		gfx.PutPixel( 3 + x,2 + y,c );
		gfx.PutPixel( 4 + x,2 + y,c );
		gfx.PutPixel( 5 + x,2 + y,c );
		gfx.PutPixel( 6 + x,3 + y,c );
		gfx.PutPixel( 7 + x,4 + y,c );
		gfx.PutPixel( 7 + x,5 + y,c );
		gfx.PutPixel( 1 + x,6 + y,c );
		gfx.PutPixel( 2 + x,6 + y,c );
		gfx.PutPixel( 3 + x,6 + y,c );
		gfx.PutPixel( 4 + x,6 + y,c );
		gfx.PutPixel( 5 + x,6 + y,c );
		gfx.PutPixel( 6 + x,6 + y,c );
		gfx.PutPixel( 7 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 7 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 7 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 7 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 7 + x,10 + y,c );
		gfx.PutPixel( 1 + x,11 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		gfx.PutPixel( 6 + x,11 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 98 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 0 + x,1 + y,c );
		gfx.PutPixel( 0 + x,2 + y,c );
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 0 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 1 + x,5 + y,c );
		gfx.PutPixel( 2 + x,5 + y,c );
		gfx.PutPixel( 3 + x,5 + y,c );
		gfx.PutPixel( 4 + x,5 + y,c );
		gfx.PutPixel( 5 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 6 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 7 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 7 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 7 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 6 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 1 + x,11 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		return 7;

	}
	if( letter == 99 )
	{
		gfx.PutPixel( 2 + x,4 + y,c );
		gfx.PutPixel( 3 + x,4 + y,c );
		gfx.PutPixel( 4 + x,4 + y,c );
		gfx.PutPixel( 5 + x,4 + y,c );
		gfx.PutPixel( 6 + x,4 + y,c );
		gfx.PutPixel( 1 + x,5 + y,c );
		gfx.PutPixel( 7 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 1 + x,10 + y,c );
		gfx.PutPixel( 7 + x,10 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		gfx.PutPixel( 6 + x,11 + y,c );
		return 7;

	}
	if( letter == 100 )
	{
		gfx.PutPixel( 7 + x,0 + y,c );
		gfx.PutPixel( 7 + x,1 + y,c );
		gfx.PutPixel( 7 + x,2 + y,c );
		gfx.PutPixel( 7 + x,3 + y,c );
		gfx.PutPixel( 7 + x,4 + y,c );
		gfx.PutPixel( 2 + x,5 + y,c );
		gfx.PutPixel( 3 + x,5 + y,c );
		gfx.PutPixel( 4 + x,5 + y,c );
		gfx.PutPixel( 5 + x,5 + y,c );
		gfx.PutPixel( 6 + x,5 + y,c );
		gfx.PutPixel( 7 + x,5 + y,c );
		gfx.PutPixel( 1 + x,6 + y,c );
		gfx.PutPixel( 7 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 7 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 7 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 7 + x,9 + y,c );
		gfx.PutPixel( 1 + x,10 + y,c );
		gfx.PutPixel( 7 + x,10 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		gfx.PutPixel( 6 + x,11 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 101 )
	{
		gfx.PutPixel( 2 + x,4 + y,c );
		gfx.PutPixel( 3 + x,4 + y,c );
		gfx.PutPixel( 4 + x,4 + y,c );
		gfx.PutPixel( 5 + x,4 + y,c );
		gfx.PutPixel( 1 + x,5 + y,c );
		gfx.PutPixel( 6 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 7 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 1 + x,7 + y,c );
		gfx.PutPixel( 2 + x,7 + y,c );
		gfx.PutPixel( 3 + x,7 + y,c );
		gfx.PutPixel( 4 + x,7 + y,c );
		gfx.PutPixel( 5 + x,7 + y,c );
		gfx.PutPixel( 6 + x,7 + y,c );
		gfx.PutPixel( 7 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 1 + x,9 + y,c );
		gfx.PutPixel( 1 + x,10 + y,c );
		gfx.PutPixel( 7 + x,10 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		gfx.PutPixel( 6 + x,11 + y,c );
		return 7;

	}
	if( letter == 102 )
	{
		gfx.PutPixel( 5 + x,0 + y,c );
		gfx.PutPixel( 6 + x,0 + y,c );
		gfx.PutPixel( 7 + x,0 + y,c );
		gfx.PutPixel( 4 + x,1 + y,c );
		gfx.PutPixel( 3 + x,2 + y,c );
		gfx.PutPixel( 3 + x,3 + y,c );
		gfx.PutPixel( 3 + x,4 + y,c );
		gfx.PutPixel( 1 + x,5 + y,c );
		gfx.PutPixel( 2 + x,5 + y,c );
		gfx.PutPixel( 3 + x,5 + y,c );
		gfx.PutPixel( 4 + x,5 + y,c );
		gfx.PutPixel( 5 + x,5 + y,c );
		gfx.PutPixel( 6 + x,5 + y,c );
		gfx.PutPixel( 3 + x,6 + y,c );
		gfx.PutPixel( 3 + x,7 + y,c );
		gfx.PutPixel( 3 + x,8 + y,c );
		gfx.PutPixel( 3 + x,9 + y,c );
		gfx.PutPixel( 3 + x,10 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		return 7;

	}
	if( letter == 103 )
	{
		gfx.PutPixel( 1 + x,2 + y,c );
		gfx.PutPixel( 2 + x,2 + y,c );
		gfx.PutPixel( 3 + x,2 + y,c );
		gfx.PutPixel( 4 + x,2 + y,c );
		gfx.PutPixel( 5 + x,2 + y,c );
		gfx.PutPixel( 6 + x,2 + y,c );
		gfx.PutPixel( 7 + x,2 + y,c );
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 7 + x,3 + y,c );
		gfx.PutPixel( 0 + x,4 + y,c );
		gfx.PutPixel( 7 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 7 + x,5 + y,c );
		gfx.PutPixel( 1 + x,6 + y,c );
		gfx.PutPixel( 2 + x,6 + y,c );
		gfx.PutPixel( 3 + x,6 + y,c );
		gfx.PutPixel( 4 + x,6 + y,c );
		gfx.PutPixel( 5 + x,6 + y,c );
		gfx.PutPixel( 6 + x,6 + y,c );
		gfx.PutPixel( 7 + x,6 + y,c );
		gfx.PutPixel( 7 + x,7 + y,c );
		gfx.PutPixel( 7 + x,8 + y,c );
		gfx.PutPixel( 6 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 5 + x,10 + y,c );
		gfx.PutPixel( 1 + x,11 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		return 7;

	}
	if( letter == 104 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 0 + x,1 + y,c );
		gfx.PutPixel( 0 + x,2 + y,c );
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 0 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 1 + x,5 + y,c );
		gfx.PutPixel( 2 + x,5 + y,c );
		gfx.PutPixel( 3 + x,5 + y,c );
		gfx.PutPixel( 4 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 5 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 6 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 7 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 7 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 7 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 105 )
	{
		gfx.PutPixel( 4 + x,3 + y,c );
		gfx.PutPixel( 4 + x,6 + y,c );
		gfx.PutPixel( 4 + x,7 + y,c );
		gfx.PutPixel( 4 + x,8 + y,c );
		gfx.PutPixel( 4 + x,9 + y,c );
		gfx.PutPixel( 4 + x,10 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		return 4;

	}
	if( letter == 106 )
	{
		gfx.PutPixel( 6 + x,2 + y,c );
		gfx.PutPixel( 6 + x,5 + y,c );
		gfx.PutPixel( 6 + x,6 + y,c );
		gfx.PutPixel( 6 + x,7 + y,c );
		gfx.PutPixel( 6 + x,8 + y,c );
		gfx.PutPixel( 6 + x,9 + y,c );
		gfx.PutPixel( 1 + x,10 + y,c );
		gfx.PutPixel( 5 + x,10 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		return 6;

	}
	if( letter == 107 )
	{
		gfx.PutPixel( 0 + x,0 + y,c );
		gfx.PutPixel( 0 + x,1 + y,c );
		gfx.PutPixel( 0 + x,2 + y,c );
		gfx.PutPixel( 5 + x,2 + y,c );
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 4 + x,3 + y,c );
		gfx.PutPixel( 0 + x,4 + y,c );
		gfx.PutPixel( 3 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 1 + x,5 + y,c );
		gfx.PutPixel( 2 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 1 + x,6 + y,c );
		gfx.PutPixel( 2 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 3 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 4 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 5 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 6 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 108 )
	{
		gfx.PutPixel( 3 + x,0 + y,c );
		gfx.PutPixel( 3 + x,1 + y,c );
		gfx.PutPixel( 3 + x,2 + y,c );
		gfx.PutPixel( 3 + x,3 + y,c );
		gfx.PutPixel( 3 + x,4 + y,c );
		gfx.PutPixel( 3 + x,5 + y,c );
		gfx.PutPixel( 3 + x,6 + y,c );
		gfx.PutPixel( 3 + x,7 + y,c );
		gfx.PutPixel( 3 + x,8 + y,c );
		gfx.PutPixel( 3 + x,9 + y,c );
		gfx.PutPixel( 4 + x,10 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		gfx.PutPixel( 6 + x,11 + y,c );
		return 6;

	}
	if( letter == 109 )
	{
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 2 + x,6 + y,c );
		gfx.PutPixel( 3 + x,6 + y,c );
		gfx.PutPixel( 5 + x,6 + y,c );
		gfx.PutPixel( 6 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 1 + x,7 + y,c );
		gfx.PutPixel( 4 + x,7 + y,c );
		gfx.PutPixel( 7 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 4 + x,8 + y,c );
		gfx.PutPixel( 7 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 4 + x,9 + y,c );
		gfx.PutPixel( 7 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 4 + x,10 + y,c );
		gfx.PutPixel( 7 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 110 )
	{
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 2 + x,6 + y,c );
		gfx.PutPixel( 3 + x,6 + y,c );
		gfx.PutPixel( 4 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 1 + x,7 + y,c );
		gfx.PutPixel( 5 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 6 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 6 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 6 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 6 + x,11 + y,c );
		return 6;

	}
	if( letter == 111 )
	{
		gfx.PutPixel( 2 + x,4 + y,c );
		gfx.PutPixel( 3 + x,4 + y,c );
		gfx.PutPixel( 4 + x,4 + y,c );
		gfx.PutPixel( 5 + x,4 + y,c );
		gfx.PutPixel( 1 + x,5 + y,c );
		gfx.PutPixel( 6 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 7 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 7 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 7 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 7 + x,9 + y,c );
		gfx.PutPixel( 1 + x,10 + y,c );
		gfx.PutPixel( 6 + x,10 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		return 7;

	}
	if( letter == 112 )
	{
		gfx.PutPixel( 0 + x,3 + y,c );
		gfx.PutPixel( 1 + x,3 + y,c );
		gfx.PutPixel( 2 + x,3 + y,c );
		gfx.PutPixel( 3 + x,3 + y,c );
		gfx.PutPixel( 4 + x,3 + y,c );
		gfx.PutPixel( 5 + x,3 + y,c );
		gfx.PutPixel( 0 + x,4 + y,c );
		gfx.PutPixel( 6 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 7 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 7 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 6 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 1 + x,8 + y,c );
		gfx.PutPixel( 2 + x,8 + y,c );
		gfx.PutPixel( 3 + x,8 + y,c );
		gfx.PutPixel( 4 + x,8 + y,c );
		gfx.PutPixel( 5 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		return 7;

	}
	if( letter == 113 )
	{
		gfx.PutPixel( 2 + x,3 + y,c );
		gfx.PutPixel( 3 + x,3 + y,c );
		gfx.PutPixel( 4 + x,3 + y,c );
		gfx.PutPixel( 5 + x,3 + y,c );
		gfx.PutPixel( 6 + x,3 + y,c );
		gfx.PutPixel( 7 + x,3 + y,c );
		gfx.PutPixel( 1 + x,4 + y,c );
		gfx.PutPixel( 7 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 7 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 7 + x,6 + y,c );
		gfx.PutPixel( 1 + x,7 + y,c );
		gfx.PutPixel( 7 + x,7 + y,c );
		gfx.PutPixel( 2 + x,8 + y,c );
		gfx.PutPixel( 3 + x,8 + y,c );
		gfx.PutPixel( 4 + x,8 + y,c );
		gfx.PutPixel( 5 + x,8 + y,c );
		gfx.PutPixel( 6 + x,8 + y,c );
		gfx.PutPixel( 7 + x,8 + y,c );
		gfx.PutPixel( 7 + x,9 + y,c );
		gfx.PutPixel( 7 + x,10 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 114 )
	{
		gfx.PutPixel( 3 + x,4 + y,c );
		gfx.PutPixel( 4 + x,4 + y,c );
		gfx.PutPixel( 5 + x,4 + y,c );
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 2 + x,5 + y,c );
		gfx.PutPixel( 6 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 1 + x,6 + y,c );
		gfx.PutPixel( 7 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		return 7;

	}
	if( letter == 115 )
	{
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 1 + x,5 + y,c );
		gfx.PutPixel( 2 + x,5 + y,c );
		gfx.PutPixel( 3 + x,5 + y,c );
		gfx.PutPixel( 4 + x,5 + y,c );
		gfx.PutPixel( 5 + x,5 + y,c );
		gfx.PutPixel( 6 + x,5 + y,c );
		gfx.PutPixel( 7 + x,5 + y,c );
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 1 + x,8 + y,c );
		gfx.PutPixel( 2 + x,8 + y,c );
		gfx.PutPixel( 3 + x,8 + y,c );
		gfx.PutPixel( 4 + x,8 + y,c );
		gfx.PutPixel( 5 + x,8 + y,c );
		gfx.PutPixel( 6 + x,8 + y,c );
		gfx.PutPixel( 7 + x,8 + y,c );
		gfx.PutPixel( 7 + x,9 + y,c );
		gfx.PutPixel( 7 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 1 + x,11 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		gfx.PutPixel( 6 + x,11 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 116 )
	{
		gfx.PutPixel( 3 + x,0 + y,c );
		gfx.PutPixel( 3 + x,1 + y,c );
		gfx.PutPixel( 3 + x,2 + y,c );
		gfx.PutPixel( 3 + x,3 + y,c );
		gfx.PutPixel( 1 + x,4 + y,c );
		gfx.PutPixel( 2 + x,4 + y,c );
		gfx.PutPixel( 3 + x,4 + y,c );
		gfx.PutPixel( 4 + x,4 + y,c );
		gfx.PutPixel( 5 + x,4 + y,c );
		gfx.PutPixel( 3 + x,5 + y,c );
		gfx.PutPixel( 3 + x,6 + y,c );
		gfx.PutPixel( 3 + x,7 + y,c );
		gfx.PutPixel( 3 + x,8 + y,c );
		gfx.PutPixel( 3 + x,9 + y,c );
		gfx.PutPixel( 4 + x,10 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		gfx.PutPixel( 6 + x,11 + y,c );
		return 6;

	}
	if( letter == 117 )
	{
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 6 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 6 + x,7 + y,c );
		gfx.PutPixel( 0 + x,8 + y,c );
		gfx.PutPixel( 6 + x,8 + y,c );
		gfx.PutPixel( 0 + x,9 + y,c );
		gfx.PutPixel( 6 + x,9 + y,c );
		gfx.PutPixel( 0 + x,10 + y,c );
		gfx.PutPixel( 6 + x,10 + y,c );
		gfx.PutPixel( 1 + x,11 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
	if( letter == 118 )
	{
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 7 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 7 + x,7 + y,c );
		gfx.PutPixel( 1 + x,8 + y,c );
		gfx.PutPixel( 6 + x,8 + y,c );
		gfx.PutPixel( 1 + x,9 + y,c );
		gfx.PutPixel( 6 + x,9 + y,c );
		gfx.PutPixel( 2 + x,10 + y,c );
		gfx.PutPixel( 5 + x,10 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		return 7;

	}
	if( letter == 119 )
	{
		gfx.PutPixel( 0 + x,6 + y,c );
		gfx.PutPixel( 7 + x,6 + y,c );
		gfx.PutPixel( 0 + x,7 + y,c );
		gfx.PutPixel( 7 + x,7 + y,c );
		gfx.PutPixel( 1 + x,8 + y,c );
		gfx.PutPixel( 3 + x,8 + y,c );
		gfx.PutPixel( 4 + x,8 + y,c );
		gfx.PutPixel( 6 + x,8 + y,c );
		gfx.PutPixel( 1 + x,9 + y,c );
		gfx.PutPixel( 3 + x,9 + y,c );
		gfx.PutPixel( 4 + x,9 + y,c );
		gfx.PutPixel( 6 + x,9 + y,c );
		gfx.PutPixel( 2 + x,10 + y,c );
		gfx.PutPixel( 5 + x,10 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		return 7;

	}
	if( letter == 120 )
	{
		gfx.PutPixel( 1 + x,6 + y,c );
		gfx.PutPixel( 6 + x,6 + y,c );
		gfx.PutPixel( 2 + x,7 + y,c );
		gfx.PutPixel( 5 + x,7 + y,c );
		gfx.PutPixel( 3 + x,8 + y,c );
		gfx.PutPixel( 4 + x,8 + y,c );
		gfx.PutPixel( 3 + x,9 + y,c );
		gfx.PutPixel( 4 + x,9 + y,c );
		gfx.PutPixel( 2 + x,10 + y,c );
		gfx.PutPixel( 5 + x,10 + y,c );
		gfx.PutPixel( 1 + x,11 + y,c );
		gfx.PutPixel( 6 + x,11 + y,c );
		return 6;

	}
	if( letter == 121 )
	{
		gfx.PutPixel( 2 + x,5 + y,c );
		gfx.PutPixel( 7 + x,5 + y,c );
		gfx.PutPixel( 3 + x,6 + y,c );
		gfx.PutPixel( 6 + x,6 + y,c );
		gfx.PutPixel( 4 + x,7 + y,c );
		gfx.PutPixel( 5 + x,7 + y,c );
		gfx.PutPixel( 4 + x,8 + y,c );
		gfx.PutPixel( 3 + x,9 + y,c );
		gfx.PutPixel( 2 + x,10 + y,c );
		gfx.PutPixel( 1 + x,11 + y,c );
		return 7;

	}
	if( letter == 122 )
	{
		gfx.PutPixel( 0 + x,5 + y,c );
		gfx.PutPixel( 1 + x,5 + y,c );
		gfx.PutPixel( 2 + x,5 + y,c );
		gfx.PutPixel( 3 + x,5 + y,c );
		gfx.PutPixel( 4 + x,5 + y,c );
		gfx.PutPixel( 5 + x,5 + y,c );
		gfx.PutPixel( 6 + x,5 + y,c );
		gfx.PutPixel( 7 + x,5 + y,c );
		gfx.PutPixel( 6 + x,6 + y,c );
		gfx.PutPixel( 5 + x,7 + y,c );
		gfx.PutPixel( 3 + x,8 + y,c );
		gfx.PutPixel( 4 + x,8 + y,c );
		gfx.PutPixel( 2 + x,9 + y,c );
		gfx.PutPixel( 1 + x,10 + y,c );
		gfx.PutPixel( 0 + x,11 + y,c );
		gfx.PutPixel( 1 + x,11 + y,c );
		gfx.PutPixel( 2 + x,11 + y,c );
		gfx.PutPixel( 3 + x,11 + y,c );
		gfx.PutPixel( 4 + x,11 + y,c );
		gfx.PutPixel( 5 + x,11 + y,c );
		gfx.PutPixel( 6 + x,11 + y,c );
		gfx.PutPixel( 7 + x,11 + y,c );
		return 7;

	}
}