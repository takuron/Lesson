package top.takuron.jcourses.e6;

import java.util.Scanner;

public class Experiment6 {

    public static void main(String[] args) {
        System.out.println("=========================");
        System.out.println("========欢迎进入词典=======");
        System.out.println("=========================");

        while (true){
            System.out.print("请输入需要查询的单词(回车退出）：");
            Scanner sc = new Scanner(System.in);

            String word = sc.nextLine();
            if(word.equals("")) break;

            IDict dict = new AutoDict();//这里可以是任意IDict子类，程序均可正常运行
            if(dict.init()!=0) System.out.println("初始化错误");


            String answer = dict.translate(word);
            if(answer==null){
                System.out.println("非常抱歉，没找到单词"+word);
            }
            else{
                System.out.println(answer);
            }

        }

    }
}
