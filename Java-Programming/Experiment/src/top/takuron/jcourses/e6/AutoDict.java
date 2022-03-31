package top.takuron.jcourses.e6;

public class AutoDict implements IDict{
    private LocalDict mlDict;
    private BaiduDict mbDict;

    @Override
    public int init() {
        mlDict = new LocalDict();
        mbDict = new BaiduDict();
        return mlDict.init();
    }

    @Override
    public String translate(String word) {
        String answer = mlDict.translate(word);
        if(answer==null) answer = mbDict.translate(word);
        return answer;
    }
}
