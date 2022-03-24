package top.takuron.jcourses.e3;

import java.io.*;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Experiment3 {

    private static Map<String,String> wordsMap;

    public static void main(String[] args) {
        try {
            FileReader inFile = new FileReader("res/words.txt");
            BufferedReader bf = new BufferedReader(inFile);
            String lines = bf.readLine();
            wordsMap = new HashMap();

            while(lines!=null){
                String word = lines.split("\t")[0];
                wordsMap.put(word,lines);

                lines = bf.readLine();
            }
        } catch (IOException e) {
            e.printStackTrace();
        }

        System.out.println("=========================");
        System.out.println("========欢迎进入词典=======");
        System.out.println("=========================");

        while (true){
            System.out.print("请输入需要查询的单词(回车退出）：");
            Scanner sc = new Scanner(System.in);

            String word = sc.nextLine();
            String answer = wordsMap.get(word);
            if(word.equals("")) break;
            else if(answer==null){
                System.out.println("非常抱歉，没找到单词"+word);
            }
            else{
                System.out.println(answer);
            }

        }

    }
}
