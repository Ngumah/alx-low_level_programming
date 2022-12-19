/**
 * rev_string - reverse a given string
 * @s: string
 *
 */
void rev_string(char *s)
{
	int i = 0, j = 0, len, tmp;

	while (s[j])
		j++;
	len = j;
	j--;

	for (; i < len / 2; i++)
	{
		if (i != j)
		{
			tmp = s[i];
			s[i] = s[j];
			s[j] = tmp;
			j--;
		}
	}
}
