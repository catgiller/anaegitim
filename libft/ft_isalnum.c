int	ft_isalnum(int c)
{
	if (c < 58 && c > 47)
		return (1);
	else if ((c < 91 && c > 64) || (c < 123 && c > 96))
		return (1);
	else
		return (0);
}
