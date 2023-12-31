void	ft_putnbr_fd(int n, int fd)
{
	char	d;

	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n / 10 != 0)
		ft_putnbr_fd(n / 10, fd);
	d = n % 10 + 48;
	write(fd, &d, 1);
}
