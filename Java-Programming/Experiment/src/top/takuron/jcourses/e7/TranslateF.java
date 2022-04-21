package top.takuron.jcourses.e7;

import top.takuron.jcourses.e6.BaiduDict;
import top.takuron.jcourses.e6.LocalDict;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class TranslateF {
    private JPanel panel1;
    private JTextField textField1;
    private JTextArea textArea1;
    private JButton 重置Button;
    private JButton 提交Button;
    private JTextArea textArea2;

    public TranslateF(){
        JFrame mFrame = new JFrame("翻译程序GUI版");
        mFrame.setContentPane(panel1);
        mFrame.setVisible(true);
        mFrame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        mFrame.setSize(450,600);


        提交Button.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String word = textField1.getText();
                System.out.println(word);

                LocalDict mlDict = new LocalDict();
                mlDict.init();
                String resultl = mlDict.translate(word);
                if(resultl!=null) textArea1.setText(resultl);
                else textArea1.setText("抱歉，本地未找到结果");


                BaiduDict mbDict = new BaiduDict();
                mlDict.init();
                textArea2.setText(mbDict.translate(word));
            }
        });
    }
}
