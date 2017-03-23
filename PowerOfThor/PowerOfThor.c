//
//  PowerOfThor.c
//  Codingame puzzle
//
//  Written by Thomas CARTON
//


static const char *kCompass[3][3] =
{
	{ "NW", "N", "NE" },
	{  "W",  0,  "E" },
	{ "SW", "S", "SE" }
};

int main(int argc, char *argv[])
{
	int lx, ly; // the position of the light of power
	int tx, ty; // Thor's starting position
	scanf("%d%d%d%d", &lx, &ly, &tx, &ty);

	int remainingTurns;
		
	do
	{
		scanf("%d", &remainingTurns);

		int cx = lx == tx ? 1 : lx - tx & 0x8000 ? 0 : 2;
		int cy = ly == ty ? 1 : ly - ty & 0x8000 ? 0 : 2;

		printf("%s\n", kCompass[cy][cx]);

		tx += cx - 1;
		ty += cy - 1;	
		
	} while (remainingTurns > 1);

	return 0;
}
