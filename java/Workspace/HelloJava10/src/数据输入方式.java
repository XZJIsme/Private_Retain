﻿import java.io.*;
public class 数据输入方式
{
	public static void main(String[ ] args) throws IOException
	{
		BufferedReader buf
			=new BufferedReader(new InputStreamReader(System.in));
		String strtest=buf.readLine( );
		System.out.println(Double.parseDouble(strtest)*5);
	}
}