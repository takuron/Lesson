package top.takuron.jcourses.e2;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	    int answer = (int) ((Math.random()*100)+0.5);
        System.out.println("=========================");
        System.out.println("=====欢迎进入猜数字游戏=====");
        System.out.println("=========================");

        while(true){
            System.out.print("请输入数字：");

            Scanner sc = new Scanner(System.in);
            int input = sc.nextInt();

            if(input==answer) break;
            else if(input>answer) System.out.println("抱歉，你猜的太大了");
            else if(input<answer) System.out.println("抱歉，你猜的太小了");
        }

        System.out.println("=========================");
        System.out.println("=====游戏结束，欢迎再来=====");
        System.out.println("=========================");
    }
}
