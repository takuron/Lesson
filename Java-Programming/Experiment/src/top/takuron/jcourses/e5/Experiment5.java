package top.takuron.jcourses.e5;

import com.alibaba.fastjson.JSONObject;
import com.baidu.translate.demo.TransApi;

import java.io.UnsupportedEncodingException;
import java.net.URLDecoder;
import java.util.Scanner;

public class Experiment5 {

    public static void main(String[] args) {
        System.out.println("=========================");
        System.out.println("========欢迎进入词典=======");
        System.out.println("=========================");

        while (true){
            System.out.print("请输入需要查询的单词(回车退出）：");
            Scanner sc = new Scanner(System.in);

            String word = sc.nextLine();
            if(word.equals("")) break;

            BaiduDict dict = new BaiduDict();
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
