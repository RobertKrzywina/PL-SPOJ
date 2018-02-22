using System;
 
public class Test
{
	public static void Main()
	{
	char zet = 'Z';
	char dwa = (char) (zet - '(');
	char zero = (char) (zet - '*');
	char jeden = (char) (zet - ')');
	char cztery = (char) (zet - '&');
	Console.Out.Write("Mundial " +dwa+zero+jeden+cztery);
	}
}
