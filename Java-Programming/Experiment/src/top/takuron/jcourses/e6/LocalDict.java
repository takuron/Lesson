package top.takuron.jcourses.e6;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.HashMap;
import java.util.Map;

public class LocalDict implements IDict {
    private Map<String, String> wordsMap;

    @Override
    public int init() {
        FileReader inFile = null;
        try {
            inFile = new FileReader("res/words.txt");

            BufferedReader bf = new BufferedReader(inFile);
            String lines = bf.readLine();
            wordsMap = new HashMap();

            while (lines != null) {
                String word = lines.split("\t")[0];
                wordsMap.put(word, lines);

                lines = bf.readLine();
            }

            return 0;

        } catch (IOException e) {
            e.printStackTrace();
            return 1;
        }
    }

    @Override
    public String translate(String word) {
        return wordsMap.get(word);
    }
}
