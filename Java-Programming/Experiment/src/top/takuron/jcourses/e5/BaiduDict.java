package top.takuron.jcourses.e5;

import com.alibaba.fastjson.JSONObject;
import com.baidu.translate.demo.TransApi;

import java.io.UnsupportedEncodingException;
import java.net.URLDecoder;

public class BaiduDict {
    private static final String APP_ID = "20220324001137405";
    private static final String SECURITY_KEY = "fWY_PHawbHcW7rJRGJ0Q";

    public String translate(String word){
        TransApi api = new TransApi(APP_ID, SECURITY_KEY);

        JSONObject result = JSONObject.parseObject(api.getTransResult(word, "auto", "zh"));
        String dst = JSONObject.parseObject(result.getJSONArray("trans_result").get(0).toString()).getString("dst");

        try {
            return URLDecoder.decode(dst,"utf-8");
        } catch (UnsupportedEncodingException e) {
            e.printStackTrace();
            return null;
        }
    }
}
