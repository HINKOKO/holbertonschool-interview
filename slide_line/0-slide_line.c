#include "slide_line.h"

int slide_line(int *line, size_t size, int direction)
{
	int i = 0, j = 0;

	if (!line)
		return (0);
	if (direction != SLIDE_RIGHT && direction != SLIDE_LEFT)
		return (0);
	for (i = (direction == SLIDE_LEFT) ? size - 1 : 0;
		 (direction == SLIDE_LEFT) ? i >= 0 : (i < (int)size - 1); i += direction)
	{
		for (j = i - direction; (direction == SLIDE_LEFT) ? j >= 0 : (j < (int)size - 1); j += direction)
		{
			if (line[j] == line[i] && line[j] != 0)
			{
				line[j] <<= 1;
				line[i] = 0;
				break;
			}
			if (line[j] == line[i] && line[j] != 0)
			{
				line[j] = line[i];
				line[i] = 0;
				i += direction;
				break;
			}
			else if (line[i] != line[j] && line[j] == 0)
				break;
		}
	}
	return (1);
}
