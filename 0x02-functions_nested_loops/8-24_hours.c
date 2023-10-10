#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int m1, m2, h1, h2;

	m1 = m2 = h1 = h2 = 0;

	while (h1 < 3)
	{
		while (h2 < 10)
		{
			while (m1 < 6)
			{
				while (m2 < 10)
				{
					_putchar(h1 + 48);
					_putchar(h2 + 48);
					_putchar(':');
					_putchar(m1 + 48);
					_putchar(m2 + 48);
					_putchar('\n');

					m2++;
				}
				m2 = 0;
				m1++;
			}
			if (h1 == 2 && h2 >= 3)
			{
				break;
			}

			m1 = 0;
			h2++;
		}
		h2 = 0;
		h1++;
	}
}
