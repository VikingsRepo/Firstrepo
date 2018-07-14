package com.company;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;

/*
Самые-самые
*/
public class Main 
{
    public static void main(String[] args) throws Exception 
    {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        ArrayList<String> list = new ArrayList<String>();

        int indexmin = 0, indexmax = 0;
        int i;

        for(int i = 0; i < 10; i++)
            list.add(reader.readLine());
        
        int t = list.get(0).length();
        
        // Находим наименьшее 
        for(i = 0; i < 10; i++)
        {   
            if(t > list.get(i).length())
            {
                indexmin = i;
                t = list.get(i).length();
            }
        }


        for(int i = 0; i < 10; i++)
        {
            if(t  <list.get(i).length())
            {
                indexmax = i;
                t = list.get(i).length();
            }
        }

        if(indexmin < indexmax)
            System.out.println(list.get(indexmin));
        else 
            System.out.println(list.get(indexmax));
    }
}
